// Linear Search

#include <iostream>
using namespace std;
 
int main() {
    
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int X;
    cin >> X;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == X){
            cout << "YES";
            return 0;
        }
    }
    
    cout << "NO";
    
    return 0;
}