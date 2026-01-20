// You are given two integers N and M . Your task is to find the sum of the last digits of N and M.

#include <iostream>
using namespace std;
 
int main() 
{
    int N, M;
    cin >> N;
    cin >> M;
    
    int lastA = N%10;
    int lastB = M%10;
    
    cout << lastA + lastB << endl; 
}