#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int n){
    int count =0;

    for (int i = 1; i <= n; i++)
    {
        if (arr[i-1]>arr[i])
        {
            count++;
        }
     }
     cout<<count;
     if (count==1){
        return arr[0]>arr[n-1];
     } 
     return false;  
}
int main(){
    int arr[]={23, 34, 45, 12, 17, 19};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool result=isSorted(arr,n);
    cout<<(result?"sorted":"not sorted");

}