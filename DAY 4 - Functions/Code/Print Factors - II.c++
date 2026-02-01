// Print Factors - II

#include <iostream>
using namespace std;
 
 

 
void Hello_Function(long long int N) {
    for(long long int i = N; i >= 1; i--) {
        if(N % i == 0){
        cout << i << " ";
        }
    }
}
 
int main() {
     long long int N;
     cin >> N;
     Hello_Function(N);
    
 
    return 0;
}