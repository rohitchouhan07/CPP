/*In C++ programming, two functions may have same name if number or type of arguments passed are different.

These functions having different number or type (or both) of parameters are known as overloaded functions.

EXAMPLE*/

#include <iostream>
using namespace std;

void display(int);
void display(float);
void display(int, float);

int main() {

    int a = 5;
    float b = 5.5;

    display(a);
    display(b);
    display(a, b);

    return 0;
}

void display(int var) {
    cout << "Integer number: " << var << endl;
}

void display(float var) {
    cout << "Float number: " << var << endl;
}

void display(int var1, float var2) {
    cout << "Integer number: " << var1;
    cout << " and float number:" << var2;
}
Output

Integer number: 5
Float number: 5.5
Integer number: 5 and float number: 5.5


/* I am not able to find any merits or demertits of this*/

	

