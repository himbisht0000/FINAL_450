class Solution {
  public:
  
    int Merge(vector<int> &arr, int low, int mid , int high)
    {
        int i , j;
        int inversion_count = 0;
        vector<int> temp_arr;
        i = low;
        j = mid + 1;
        
        while(i <= mid && j <= high)
        {
            //left element is smaller so no inversion detected
            if(arr[i] <= arr[j])
            {
                temp_arr.push_back(arr[i]);
                i++;
            }
            // Right element is smaller so this is a inversion
            else
            {
                inversion_count += mid - i + 1; // This is the line responsible for counting inversion
                temp_arr.push_back(arr[j]);
                j++;
            }
            
        }
        
        while( i <= mid )
        {
            temp_arr.push_back(arr[i]);
            i++;
        }
        
        while( j <= high)
        {
            temp_arr.push_back(arr[j]);
            j++;
        }
        
        j = low;
        
        for(int i = 0 ; i < temp_arr.size() ; i++, j++)
        {
            arr[j] = temp_arr[i];
        }
        
        return inversion_count;
    }
    
    int MergeSort(vector<int>&arr, int low, int high)
    {
        if(low >= high)
        return 0;
        int mid = 0;
        int count = 0 ;
        mid = (low + high) / 2;
        
        //Remeber Count will be added for all three functions
        count += MergeSort(arr,low,mid);
        count += MergeSort(arr,mid+1,high);
        count += Merge(arr,low,mid,high);
        
        return count;
    }
    
    // Function to count inversions in the array.
    int inversionCount(vector<int> &arr) {
        
        int output = 0;
        
        output = MergeSort(arr,0,arr.size()-1);
        
        return output;
    }
};
