// Sort 01

#include <iostream>
using namespace std;
 
int main() {
    
    int t;
    cin >> t;   
    
    while(t--) {
        
        int n;
        cin >> n;
        
        int arr[n];
        
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int zero = 0, ones = 0;
        
        for(int i = 0; i < n; i++) {
            if(arr[i] == 0)
                zero++;
            else
                ones++;
        }
        
        
        for(int i = 0; i < zero; i++) {
            cout << "0 ";
        }
        
        for(int i = 0; i < ones; i++) {
            cout << "1 ";
        }
        
        cout << endl;  
    }
    
    return 0;
}