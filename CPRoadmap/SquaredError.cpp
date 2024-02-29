#include<bits/stdc++.h>
using namespace std;

int main() {
    long long N,sum=0;
    cin >> N;

    vector<long long> A(N);
    for (long long i = 0; i < N; ++i) {
        cin >> A[i];
        sum+=A[i];
    }

    long long sum1=0;
    for (long long i = 0; i < N; i++)
    {
        sum1+=A[i]*A[i];
    }
    long long result=N*sum1-sum*sum;
        cout<<result<<endl;

    return 0;
}
