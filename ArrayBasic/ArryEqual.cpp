#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[] = { 3, 5, 2, 5, 2 };
    int arr2[] = { 2, 3, 5, 5, 2 };
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2 =sizeof(arr2)/sizeof(arr2[0]);
    if(n1!=n2){
        cout<<"not eqal";
        return 0;
    }
    sort(arr1,arr1+n1);
    sort(arr2,arr2+n2);
    for (int i = 0; i < n1; i++)
    {
       if (arr1[i]!=arr2[i])
       {
        cout<< "not eqal";
        return 0;
       }
       
    }
    cout<< "equal";

    
}