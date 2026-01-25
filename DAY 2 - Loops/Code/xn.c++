 // $x^n$

 #include <iostream>
using namespace std;
 
int main() {
   long long int x, n;
    cin >> x >> n;
 
   
   
  long long int result = 1;
    for (long long int i = 1; i <= n; i++) {
       result *= x; 
    }
 
    cout << result << endl;
    
}