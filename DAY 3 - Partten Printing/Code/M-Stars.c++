// M-Stars

#include <iostream>
using namespace std;
 
int main()
{
   long long int n;
   long long int m;
    
    cin >> n;
    cin >> m;
    
    for(long long int i=1; i<=n; i++) {
        for(long long int j=1; j<=m; j++) {
            cout << "*";
        }
        cout << endl;
    }
}