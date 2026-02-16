// Minimum Element and Its Position

#include <iostream>
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
 
    int arr[n];
 
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    int minVal = arr[0];
    int location = 1;   // ✅ Start from 1
 
    for(int i = 1; i < n; i++) {
        if(arr[i] < minVal) {
            minVal = arr[i];
            location = i + 1;
        }
    }
 
    cout << minVal << " " << location;
 
    return 0;
}