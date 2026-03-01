// Binary Search

#include <iostream>
using namespace std;
 
int main() {
    
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i <= n - 1; i++) {
        cin >> arr[i];
    }
    
    int X;
    cin >> X;
    
    int l = 0;
    int r = n - 1;
    
    bool flag = false;
    while(l <= r) {
        int mid = (r + l)/ 2;
        if(arr[mid] == X) {
            flag = true;
            break;
        } else if(arr[mid] > X) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    
    if(flag) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
  
}