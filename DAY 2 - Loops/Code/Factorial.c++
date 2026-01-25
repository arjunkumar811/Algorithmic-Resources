// Factorial

#include <iostream>
using namespace std;

int main() {
   long long int N;
    cin >> N;

   
   
  long long int fac = 1;
    for (long long int i = 1; i <= N; i++) {
       fac *= i; 
    }

    cout << fac << endl;
    
}
