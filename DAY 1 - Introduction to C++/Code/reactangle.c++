// You are given the length and breadth of a rectangle. Your task is to calculate its area and perimeter.

// The formulas are:

// Area =
//  length ×
//  breadth
// Perimeter =
//  2×(length+breadth)

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
 int length, breadth;
 
 cin >> length;
 cin >> breadth;
 
 float Area = length * breadth;
float Perimeter = 2*(length+breadth);
 
cout << "Area = " << Area << endl;
cout << "Perimeter = " << Perimeter << endl;
 
}