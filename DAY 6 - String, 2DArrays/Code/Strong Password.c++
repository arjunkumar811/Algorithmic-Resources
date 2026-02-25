 // Strong Password

 #include <iostream>
using namespace std;
 
int main() {
 
    string s;
    cin >> s;
 
    int n = s.size();
 
    bool hasLower = false;
    bool hasUpper = false;
    bool hasDigit = false;
    bool hasSpecial = false;
 
    for(int i = 0; i < n; i++) {
 
        if(s[i] >= 'a' && s[i] <= 'z')
            hasLower = true;
 
        else if(s[i] >= 'A' && s[i] <= 'Z')
            hasUpper = true;
 
        else if(s[i] >= '0' && s[i] <= '9')
            hasDigit = true;
 
        else
            hasSpecial = true;
    }
 
    if(n == 10 && hasLower && hasUpper && hasDigit && hasSpecial)
        cout << "Strong";
    else
        cout << "Weak";
 
    return 0;
}