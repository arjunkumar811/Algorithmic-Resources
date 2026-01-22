 // Student Performance Evaluation.

 #include <iostream>
using namespace std;
 
int main()
{
    int N;
    
    cin >> N;
    
    if (N > 90) {
        cout << "Excellent" << endl;
    } else if (N >= 80 && N <= 90) {
        cout << "Good" << endl;
    } else if(N >= 70 && N <= 80) {
        cout << "Fair" << endl;
    } else if(N >= 60 && N <= 70) {
        cout << "Meets Expectations" << endl;
    } else {
          cout << "Below Par" << endl;
    }
 
}