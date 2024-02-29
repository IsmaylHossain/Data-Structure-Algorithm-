#include <bits/stdc++.h>
 using namespace std;

int main() {
    int N, Q;
    string S;
    cin >> Q;

    while (Q--) {
         
        cin >> N >> S;
        int cnt=0;

        for (int i = 0; i < N; i++)
        {
            if (S[i]=='@')
            {
                cnt++;
            
            }else if (S[i]=='*'&&S[i+1]=='*')
            {
                break;
            
            } 
            
            
        }
        cout<<cnt<<endl;
        
    }

    return 0;
}
