class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int maxi=INT_MIN;
        int maxi2=-1;
        int size=arr.size();
        
        for(int i=0; i<size; i++)
            maxi=max(maxi,arr[i]);
    
        for(int i=0; i<size; i++){
            if(arr[i]!=maxi)
            maxi2=max(maxi2,arr[i]);
        }
        
        return maxi2;
    }
};
