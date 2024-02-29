#include<bits/stdc++.h>
using namespace std;

int main() {
    string t;
    cin >> t;
    string o="AEIOUYaeiouy";
    string y="";
    
    for (int i = 0; i < t.size(); i++)
    {
        string x;
        if (o.find(t[i])== string::npos)
        { 
          x=tolower(t[i]);
          y+="."+x;
        }  
    }
    cout<<y<<endl;
    return 0;
           
    }
