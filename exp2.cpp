//Shivangi Singh
//24070123148
//B3
#include <iostream>
using namespace std;

void increment(int &S)
{
    S=S+5000;
    cout<<"Salary incremented";
}

int main() {
    int sal=27000;
    increment(sal);
    cout << "Value of a is: " << sal << endl;
    return 0;
}
/*Output

Salary incrementedValue of a is: 32000


*/
