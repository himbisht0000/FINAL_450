//User function Template for C++

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        int XOR = 0;
        int one = 1;
        int count = 0;
        XOR = a^b;
        
        while(XOR)
        {
            if(XOR & one)
            {
                count++;
            }
            XOR >>= 1;
        }
        
        
        return count;
        
    }
};
