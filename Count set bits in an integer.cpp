class Solution {
  public:
    vector<int> singleNumber(vector<int>& arr) {
        
        int XOR = 0 ;
        vector<int> output;
        
        for(int i = 0; i < arr.size(); i++)
        {
            XOR ^= arr[i];
        }
        
        int counter = 1;
        int A = 0, B = 0;
        while(! (counter & XOR) )
        {
            counter = counter << 1;
        }
        
        counter <<= 1;
        while(! (counter & XOR) )
        {
            counter = counter << 1;
        }
        
        
        for(int i = 0; i < arr.size(); i++)
        {
            if(counter & arr[i])
            {
                A ^=arr[i];
            }
            else
            {
                B ^=arr[i];
            }
        }
        
        output.push_back(A);
        output.push_back(B);
        sort(output.begin(),output.end());
        
        return output;
    }
};
