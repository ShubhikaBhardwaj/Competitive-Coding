class Solution {
public:
    void sortColors(vector<int>& arr) {
        
        int start=0;
        int end=arr.size()-1;
        int i;
        
        while(start<arr.size()&&arr[start]==0)
            start++;
        
        while(end>=0&&arr[end]==2)
            end--;
        
        
        for(int i=0;i<arr.size();i++)
        {
           if(arr[i]==0)
           {
               swap(arr[i],arr[start]);
               start++;
           }
            
            else if(arr[i]==2)
            {
                swap(arr[i],arr[end]);
                end--;
            }
            
        }
        
        
    }
};