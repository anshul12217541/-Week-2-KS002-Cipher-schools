// Lecture 13 - Scale Factor

#include <iostream>
using namespace std;

int main(){
    int a=5;
    int *x;
    x = &a;

    cout << "The address of a, which is stored in the pointer x is : "<< x << endl ;
    cout << "The value of x+1 : " << x+1 << endl;
    cout  << "The value of x+2 : " << x+2 << endl; 
    
    cout << endl;

    int c[5];
    int *d;

    d = &c[0];
    for(int i=0; i<6 ; i++){
        cout << &c[i] << endl;
    }
      
    return 0;
}