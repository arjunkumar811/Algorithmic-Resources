 // Max and Min of 2 Numbers,

 #include <iostream>
using namespace std;
 
int main()
{
    int A, B;
    
    cin >> A;
    cin >> B;
    
    if (A > B) {
         cout << "Min = " << B << endl;
        cout << "Max = " << A << endl;
    } else if (B > A) {
        cout << "Min = " << A << endl;
        cout << "Max = " << B << endl;
    } else {
        cout << "Both are equal" << endl;
    }
 
    return 0;
}