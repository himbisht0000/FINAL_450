    int solve(string s1, string s2,int i, int j)
    {
      if(i == s1.size() || j ==s2.size())
      {
          return 0;
      }
      
      if(s1[i] == s2[j])
      {
          return 1 + solve(s1,s2,i+1,j+1);
      }
      
      return max(solve(s1,s2,i+1,j) , solve(s1,s2,i,j+1));
      
    }


---------------DP----------------
  int getLCSLength(string& s1, string& s2) {
        
        int M = s1.size();
        int N = s2.size();
        int data[s1.size()+1][s2.size()+1];
        memset( data , 0 , sizeof(data));
        
        for(int i = M-1 ; i>=0;i--)
        {
            for(int j = N-1; j >= 0 ; j--)
            {
                if(s1[i] == s2[j])
                {
                    data[i][j] = 1 + data[i+1][j+1];
                }
                else
                {
                    data[i][j] = max(data[i+1][j],data[i][j+1]);
                }
            }
        }
        
        return data[0][0];
    }
