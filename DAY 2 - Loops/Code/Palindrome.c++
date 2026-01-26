// Palindrome

#include <iostream>
using namespace std;
 
int main() {
    long long N;
    cin >> N;
 
    long long rev = 0;
    long long original = N;
    while (N > 0) {
        rev = (rev * 10) + (N % 10);
        N /= 10;
    }
    
    if (rev == original) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
 
 
    return 0;
}