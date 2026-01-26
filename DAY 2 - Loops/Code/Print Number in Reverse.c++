// Print Number in Reverse

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

    while (N > 0) {
        cout << (N % 10);
        N /= 10;
    }

    return 0;
}
