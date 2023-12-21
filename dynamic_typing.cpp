#include <iostream>
// #include <any> // C++17
using namespace std;
int main(){
    // using void* pointer
    int i = 1;
    float f = 3.14f;
    string s = "string";
    void* voidptr;
    voidptr = &i;
    cout << "int val: " <<  *(static_cast<int*>(voidptr)) << endl;
    voidptr = &f;
    cout << "float val: " <<  *(static_cast<float*>(voidptr)) << endl;
    voidptr = &s;
    cout << "string val: " <<  *(static_cast<string*>(voidptr)) << endl;

    // using any C++17
    /*
        any anyval;
        anyval = 42;
        cout << "int value: " << any_cast<int>(anyval) << endl;
        anyval = 3.14;
        cout << "float value: " << any_cast<float>(anyval) << endl;
        anyval = "string";
        cout << "string value: " << any_cast<string>(anyval) << endl;
    */
    

    return 0;
}