// Hollow Square

#include <iostream>
using namespace std;
 
int main()
{
   long long int n;
   
    
    cin >> n;
    
    
    for(long long int i=1; i<=n; i++) {
        for(long long int j=1; j<=n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "*";
            } else {
                cout << " ";
            }
 
        }
        cout << endl;
    }
}