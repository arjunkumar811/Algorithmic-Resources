// Pyramid

#include <iostream>
using namespace std;
 
int main()
{
   long long int N;
    cin >> N;
    
    for(long long int i=1; i<=N; i++){
        for(long long int j=1; j<=i; j++){
            cout << "*";
    }
    cout << endl;
    
    }
    
}