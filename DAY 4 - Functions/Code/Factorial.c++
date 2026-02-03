// Factorial

#include <iostream>
using namespace std;
 
 
void Factorial(long long N) {
    long long fact = 1;
    for(long long int i = 1; i <= N; i++) {
        fact = fact * i;
    }
    cout << fact;
}
 
 
 
int main()
{
    long long N;
    cin >> N;
    Factorial(N);
    
    
    
}