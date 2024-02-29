#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
            a[i] =pow(2,a[i]);
        }
         sort(a.begin(), a.end());
        long long count = 0;

     for (long long i = 0; i < n - 2; i++) {
         for (long long j = i + 1; j < n - 1; j++) {
             for (long long k = j+1; k < n; k++)
             {
                if(a[k]<(a[i]+a[j]))
                count++;
                else break;

             }
             
        }
    }
        cout << count << endl;
    }

    return 0;
}
