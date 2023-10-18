// Lecture 12 II - introduction to Pointer Pt 2

#include <iostream>
using namespace std;

int main(){
    int a;
    int *p;
    a = 2;
    p = &a;
    *p = 3; // the value of the variable a is changed by using the pointer 

    cout << "The value of a  is (from the actual variable type) : "<< a << endl;
    cout << "The value of a from the pointer using *(astreix/ indirection operator) : " << *p << endl;
    
    cout <<  endl;
    
    int d, e, f;
    int *s, *t;
    d = 2;
    e = 5;

    s = &d;
    t = &e;

    f = *s+*t;

    cout << "The value of f is : " << f << endl; 
    cout << "The address of the d is : " << &a << endl << "The value of the pointer is : " << s << endl;
    return 0;
}