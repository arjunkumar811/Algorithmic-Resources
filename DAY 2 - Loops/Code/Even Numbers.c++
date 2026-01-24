// Print All Even Numbers from 1 to N

#include <iostream>
using namespace std;

int main() {

int n;
cin >> n;

int i = 1;
while(i <= n) {
    if(i%2 == 0){
     cout << i << " ";

    }
    i++; 
}

}