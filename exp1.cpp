//Shivangi Singh
//2407012318
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
    swap(a, b);
    cout << "Value of a is: " << a << endl;
    cout << "Value of b is: " << b << endl;
    return 0;
}
/*Output
Value of a is: 2
Value of b is: 5
*/
