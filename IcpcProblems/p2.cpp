class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       int m= arr[0];
       int l=arr.size();
        int j;
       for(int i=1;i<arr.size();i++){
           if(m<=arr[i]){
               m=arr[i];
               j=i;
           }
       } 
       
    return j;
    }
};