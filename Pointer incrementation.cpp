#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a=10;
    int *pointer = &a;
    //int *pointernew = 
    cout<<"ORIGINAL POINTER:"<<pointer<<endl;pointer++;
    cout<<"NEW POINTER: "<<pointer<<endl;
    cout<<"NUMBER: "<<a;
    
    

    return 0;
}

//ORIGINAL POINTER:0x7ffc6f39ddd4
//NEW POINTER: 0x7ffc6f39ddd8
//NUMBER10