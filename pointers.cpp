#include <iostream>
using namespace std;

int main(){
    int x = 9;
    cout << &x << endl; //& - address of operator 

    int* ptr = &x; // * denotes a pointer
    
    cout << *ptr << endl; //* - denoter 

    //* can be used in multiplicastion, pointer, and denotions//

    x += 6;
    cout << *ptr << endl;

    *ptr = 213;

    cout << x << endl;

    ptr +=1;
    cout << ptr <<endl;
    cout << *ptr <<endl; // The pointer had gone up 4 bytes due to the change in memory
    

    char c = 'c';
    char* cptr  = &c;
    cout << cptr <<endl;
    cout << cptr + 1 << endl; //char goes up 1 byte due to onlt taking up 1 byte

    return 0;
}