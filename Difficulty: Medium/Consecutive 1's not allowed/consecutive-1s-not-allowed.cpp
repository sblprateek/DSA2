// User function template for C++
class Solution {
  public:
    // #define ll long long
    int countStrings(int n) {
        // code here
        int zeroend=1;
        int oneend=1;
        int sum=zeroend+oneend;
        
        
        if(n>1){
            for(int i=0; i<n-1; i++){
                oneend=zeroend;
                zeroend=sum;
                sum=zeroend+oneend;
                
            }
        }
        
        return sum;
    }
};