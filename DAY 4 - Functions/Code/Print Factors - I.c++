#include <iostream>
using namespace std;
 
int main()
{
    long long int N;
    cin >> N;
    
    for(long long int i = 1; i <= N; i++) {
        if(N % i == 0) {
            cout << i << " ";
        }
    }
}