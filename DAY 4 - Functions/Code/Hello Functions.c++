#include <iostream>
using namespace std;
 
 
 
 
void Hello_Function(long long int N) {
    for(int i = 1; i <=N; i++) {
    cout << "I am learning functions" << endl;
    }
}
 
int main() {
     long long int N;
     cin >> N;
     Hello_Function(N);
    
 
    return 0;
}