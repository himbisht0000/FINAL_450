/* ------------- Recursive ------------------*/

class Solution {
public:
    int minimum(int a, int b, int c)
    {
        int x;
        x = min(a,b);
        x = min(x,c);
        return x;
    }
    int solve(string A, string B, int i, int j)
    {
        int x,y,z;
        x = y = z = 0;
        
        if(i == A.length() && j == B.length())
        {
            return 0;
        }
        
        if(i == A.size())
        {
            return B.size() - j;
        }
        
        if(j == B.size())
        {
            return A.size() - i;
        }
        
        
        if(A[i] == B[j])
        {
            return solve(A,B,i+1,j+1);
        }
        else
        {
            x = solve(A,B,i+1,j+1);
            y = solve(A,B,i,j+1);
            z = solve(A,B,i+1,j);
        }
        
        return 1 + minimum(x,y,z);
        
    }
    int minDistance(string word1, string word2) {
        int output = 0;
        output = solve(word1,word2,0,0);
        return output;
    }
};
