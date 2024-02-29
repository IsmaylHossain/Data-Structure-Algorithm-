#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
    cin>>n;
    while (n--)
    {
        long long y;
        cin>>y;

        long long l = 0;
    long long r = INT_MAX;
     
    long long sum=0;
    int result=0;

    while (l < r) {
        long long mid = l + (r - l) / 2;
         sum= mid*(mid+1)/2;
         
         if (sum == y) {
            result = mid;
            r = mid - 1; 
        } else if (sum < y) {
            l = mid + 1;
        } else {
            r = mid;
        }
    }
    
     if ( result * (result + 1) / 2 == y) {
            cout << result << endl;
        } else {
            cout << "NAI" << endl;
        }
    }
       
     
     
}