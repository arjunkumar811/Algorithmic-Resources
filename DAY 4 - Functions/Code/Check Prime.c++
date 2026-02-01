// Check Prime

#include <iostream>
using namespace std;

void Hello_Function(long long int N) {

    if (N <= 1) {
        cout << "NOT PRIME";
        return;
    }

    for (long long int i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            cout << "NOT PRIME";
            return;
        }
    }

    cout << "PRIME";
}

int main() {
    long long int N;
    cin >> N;

    Hello_Function(N);

    return 0;
}
