#include <iostream>
using namespace std;

int main(){
    int myInt = -123;
    uint myUInt = 123;
    float myFloat = 1.23;
    double myDouble = 1.23456;
    char myChar = 'C';
    bool myBool = false;
    int* myIntPTR = &myInt;
    int myArr[] = {1,2,3,4,5};
    cout << "myInt = " << myInt << endl;
    cout << "myUInt = " << myUInt << endl;
    cout << "myFloat = " << myFloat << endl;
    cout << "myDouble = " << myDouble << endl;
    cout << "myChar = " << myChar << endl;
    cout << "myBool = " << myBool << endl;
    cout << "&myIntPTR = " << myIntPTR << endl;
    cout << "*myIntPTR = " << *myIntPTR << endl;
    cout << "myArr[0] = " << myArr[0] << endl;
    return 0;
}