#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double A,B,C;
    
    cin >> A>>B>>C;
    if (A<B&&A<C)
    {
        cout<<"Out of Intervals"<<endl;
    }else if (A>=0 &&A<=25)
     {
        cout<<"Interval [0,25]"<<endl;
     }else if (A <=50)
     {
        cout<<"Interval (25,50]"<<endl;
     }else if (A<=75)
     {
        cout<<"Interval (50,75]"<<endl;
     }else if (A<=100)
     {
        cout<<"Interval (75,100]"<<endl;
     }else
     {
        cout<<"Out of Intervals"<<endl;
     }
     
     
     
     
     
     
     

    return 0;
}
