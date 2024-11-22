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

