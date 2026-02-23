// Lowercase, Uppercase, Digit or Special

#include <iostream>
using namespace std;
 
int main() {
    
    char ch;
    cin >> ch;
 
    
        if (ch >= 97 && ch <= 122){
            cout << "Lowercase";
        }  else if (ch >= 65 && ch <= 90) {
            cout << "Uppercase";
        } else if (ch >= 48 && ch <= 57) {
            cout << "Digit";
        } else {
            cout << "Special";
        }
        
    
    
        
    
    
   
}