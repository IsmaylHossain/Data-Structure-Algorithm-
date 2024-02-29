#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

     int min_number;
    if (A <= B && A <= C) {
        min_number = A;
    } else if (B <= A && B <= C) {
        min_number = B;
    } else {
        min_number = C;
    }

     int max_number;
    if (A >= B && A >= C) {
        max_number = A;
    } else if (B >= A && B >= C) {
        max_number = B;
    } else {
        max_number = C;
    }

      int middle_number;
    if (A != min_number && A != max_number) {
        middle_number = A;
    } else if (B != min_number && B != max_number) {
        middle_number = B;
    } else {
        middle_number = C;
    }
    if (A==B&&A>C)
    {
        min_number = C;
        middle_number=A;
        max_number=A;
    }else if (C==B&&A<C)
    {    
        min_number = A;
        middle_number=C;
        max_number=C;
    } else if (A==C&&A>B)
    {      
        min_number = B;
        middle_number=A;
        max_number=A;
    }
    if (A==B&&A<C)
    {
        min_number = A;
        middle_number=A;
        max_number=C;
    }else if (C==B&&A>C)
    {    
        min_number = C;
        middle_number=C;
        max_number=A;
    } else if (A==C&&A<B)
    {      
        min_number = A;
        middle_number=A;
        max_number=B;
    }
    
    
     cout << min_number << endl;
    cout << middle_number << endl;
    cout << max_number << endl;

     cout << endl;

     cout << A << endl;
    cout << B << endl;
    cout << C << endl;

    return 0;
}
