// Count Zeors

#include <iostream>
using namespace std;
 
int Zero(long long N) {
long long count = 0;
 
 if (N == 0) {
        return 1;
    }
 
while (N > 0) {
    long long last = N % 10;
    if(last == 0) {
        count++;
    }
        N /= 10;
}
return count;
 
}
 
int main() {
    long long N;
    cin >> N;
 
    cout << Zero(N);
    
    return 0;
}