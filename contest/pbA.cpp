#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,q;
    cin>>n>>q;
     vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    while (q--)
    {
        long long qn;
        cin>>qn;

        int l = 0;
    int r = arr.size() - 1;
    int result = -1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == qn) {
            result = mid;
            r = mid - 1; 
        } else if (arr[mid] < qn) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
     cout << (result != -1 ? result : -1) << endl;
    }
       
     
     
}