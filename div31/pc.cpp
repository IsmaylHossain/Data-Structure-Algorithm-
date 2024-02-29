#include <bits/stdc++.h>
 using namespace std;

int main() {
    int N ,  Q;
    string S;
    cin >> Q;

    while (Q--) {
         
        cin >> S;
        int cnt=0,cnt1=0;

        for (int i = 0; i < 5; i++)
        {
            if (S[i]=='A')
            {
                cnt++;
            
            }else if (S[i]=='B' )
            {
                cnt1++;
            
            } 
            
            
        }
        if (cnt>cnt1)
        {
            cout<<"A"<<endl;
        }else
        {
           cout<<"B"<<endl;
        }
    
        
    }

    return 0;
}
