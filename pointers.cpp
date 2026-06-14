#include <iostream>
using namespace std;

void increment(int& x){
    (&x)++;
}

int main(){
/* pointer are good for:
1. changing variables from different location - reference 
2.navigate array : iteration
3.Dynamic memory managements : smart array
Best to know how to use them to know how to avoid them */

    int y =10;

    increment(&y);
    cout << y << endl;


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