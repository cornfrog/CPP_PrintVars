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
    cout << "&myIntPTR [reference to myInt] = " << myIntPTR << endl;
    cout << "*myIntPTR [value of myInt] = " << *myIntPTR << endl;
    cout << "&myArr = " << myArr << endl;

    /*
      Printing myArr with myArr[i]  (INDEXING)
    */
    cout << "Printing myArr index wise myArr[i]:" << endl;
    cout << "myArr = {";
    for(int i = 0; i < 4; i++){
        cout << " " << myArr[i] << " ";
    }
    cout << "}" << endl;

    /*
        Printing myArr with *myArr+i (POINTERS)
    */
    cout << "Printing myArr with pointer arithmetic *myArr+i:" << endl;
    cout << "myArr = {";
    for(int i = 0; i < 4; i++){
        cout << " " << *myArr+i << " ";
    }
    cout << "}" << endl;

    return 0;
}