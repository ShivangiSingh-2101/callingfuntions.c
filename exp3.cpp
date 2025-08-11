//Shivangi Singh
//24070123148
//B3
#include <iostream>
using namespace std;


void swap(int& x, int& y) {
    int temp = x;  
    x = y;         
    y = temp;      
}

int main() {
    int a = 5, b = 2;
    cout << "Before swap: a = " << a << ", b = " << b << endl;

    swap(a, b); 

    cout << "After swap: a = " << a << ", b = " << b << endl;
    return 0;
}
/*Output
Before swap: a = 5, b = 2
After swap: a = 2, b = 5
*/
