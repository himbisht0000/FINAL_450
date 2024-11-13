// User function Template for C++
class Solution{
    public:
    int generate_mask(int l , int r)
    {
        int value = 0;
        int one = 1;
        
        for(int i = l ; i <= r ; i++)
        {
            value = value | (one << (i-1));
        }
        
        return value;
    }
    int setSetBit(int x, int y, int l, int r){
        // code here
        int mask = 0;
        int output = 0;
        mask = generate_mask(l , r);
        output = y & mask;
        output = x | output;
        
        return output;
    }
};
