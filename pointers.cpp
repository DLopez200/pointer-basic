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
    
    return 0;
}