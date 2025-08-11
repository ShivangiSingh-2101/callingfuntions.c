//Shivangi Singh
//24070123148
//B3
#include <iostream>
using namespace std;

void increment(int &S)
{
    S=S+5000;
    cout<<"Salary incremented: "<<S<<endl;
}

int main() {
    int sal=27000;
  
    cout << "Value of salary is: " << sal << endl;
      increment(sal);
    return 0;
}
/*Output
Value of salary is: 27000
Salary incremented: 32000

*/
