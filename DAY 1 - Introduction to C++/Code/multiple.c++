// You are given two integers N and M. Your task is to check whether M is a multiple of N.A number M is said to be a multiple of N if M is divisible by N.

#include <iostream>
using namespace std;
 
int main() 
{
    int N, M;
    cin >> N;
    cin >> M;
    
    if(M % N == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    
}