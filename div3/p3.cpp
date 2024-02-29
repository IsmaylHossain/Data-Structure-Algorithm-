#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v1(n);
        for (int i = 0; i < n; ++i) {
            cin >> v1[i];
        }

        string s;
    vector<int> v2(26, 0);  

    for (int i = 0; i < n; ++i) {
        int cnt = 0;
        char c = 'a';  
         while (v2[cnt] != v1[i]) {
            ++cnt;
            c = char('a' + cnt); 
        }

         s.push_back(c);

         ++v2[cnt];
    }
         cout << s << endl;
    }

    return 0;
}