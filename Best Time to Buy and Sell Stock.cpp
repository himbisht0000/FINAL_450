class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_peak_arr[prices.size()];
        int max_height = -1;
        int output = 0;
        // Traverse prices array from right to left
        // So that we will know what is the max price we can get for stock
        // based on current stock price.
        for(int i = prices.size()-1; i >= 0; i-- )
        {
            max_height = max(max_height, prices[i] );
            max_peak_arr[i] = max_height;
        }
        // Find the maximum price difference
        for(int i = 0 ; i < prices.size(); i++)
        {
            output = max( max_peak_arr[i] - prices[i] , output);
        }

        return output;
    }
};
