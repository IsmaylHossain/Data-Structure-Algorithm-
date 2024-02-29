#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x1,x2,x3,x4,y1,y2,y3,y4,a,c,b;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;
        cin >> x4 >> y4;

         a=max(abs(x2-x1),abs(y2-y1));
         b=max(abs(x4-x3),abs(y4-y3));
         c=max(a,b);
         long long d=a*a;
          if (d>0)
          {
            cout<<d<<endl;
          }  
    }
    return 0;
}
