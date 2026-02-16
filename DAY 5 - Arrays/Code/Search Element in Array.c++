// Search Element in Array

#include <iostream>
using namespace std;
 
int main() {
    
    int n;
    cin >> n;
    int target;
    
    cin >> target;
    
 
    int arr[n];
 
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
 
    bool found = false;
    
    for(int i = 0; i < n; i++) {
        if(target == arr[i]) {
         found = true;
          break;
        }
    }
    
    if(found) {
        cout << "YES";
    } else {
        cout << "NO";
    }
 
    return 0;
}