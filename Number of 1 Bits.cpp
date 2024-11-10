class Solution {
  public:
    int setBits(int n) {
        int output = 0;
        
        while(n)
        {
            if( n & 1 )
            {
                output++;
            }
            n = n>> 1;
        }
        
        return output;
    }
};
