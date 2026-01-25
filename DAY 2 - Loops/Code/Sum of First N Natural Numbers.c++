// Sum of First N Natural Numbers

#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long sum = 0;
    for (long long i = 1; i <= N; i++) {
        sum += i;
    }

    cout << sum << endl;
    return 0;
}
