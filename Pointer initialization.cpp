#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a=1000;
    int *pointer = &a;
    cout<<&a<<endl;
    cout<<pointer<<endl;
    cout<<"VALUE: "<<*pointer;

    return 0;
}

//0x7ffca665ef64
//0x7ffca665ef64
//VALUE: 1000
