int solve(vector<int>array , int pos, int sum)
{
        int a , b;
        a = b  = 0;
        
        if(sum == 0)
        {
            return 1;
        }
        if(pos == array.size())
        {
            return 0;
        }
        
        if(array[pos] <= sum)
        {
            a = solve(array, pos, sum - array[pos]);
        }
        
        b = solve(array , pos + 1, sum);
        
        
        return a+b;
        
}
int count(vector<int>& coins, int sum) 
{
        int output = 0;
        output = solve(coins,0,sum);
        return output;
}

----------------------------------------DP--BASED--------------------------------------
 int count(vector<int>& coins, int sum) {
        int N = coins.size();
        int M[N+1][sum+1];
        memset(M , 0, sizeof(M));
        //M[i][j] represents the number of ways to get sum j when coins are conisder from index i
        for(int i = 0 ; i<=sum ; i++)
        {
            M[N][i] = 0;
        }
        
        for(int i = 0 ; i<=N ; i++)
        {
            M[i][0] = 1;
        }
        
        for(int i = N-1 ; i>=0; i--)
        {
            for(int j = 1; j<=sum ; j++)
            {
                if(j-coins[i] >= 0)
                {
                    M[i][j] = M[i][j-coins[i]];
                }
                
                M[i][j]+=M[i+1][j];
            }
        }
        
        return M[0][sum];
        
    }

