// Sum Of Digits

#include <iostream>
using namespace std;
 
int main() {
    long long N;
    cin >> N;
 
    // Special case
    if (N == 0) {
        cout << 0;
        return 0;
    }
   long long sum = 0;
    while (N > 0) {
        sum += (N % 10);
        N /= 10;
    }
    cout << sum << endl;
 
    return 0;
}