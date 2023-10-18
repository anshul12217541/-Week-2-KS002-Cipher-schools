#include <iostream>
using namespace std;

void printhi(){ //no parameter are required
    cout << "HI" << endl;
    return;
}

int sum(int a, int b){
    int d;
    d = a+b;
    int c =500;
    cout << "The value of c inside the function is " << c << endl;
    return c;
}

int main(){
    printhi();

    int a, b;
    a=4;
    b=6;
    
    cout << "The sum of " << a << " and " << b << " is " << sum(a, b) << endl;
    
    int c = 75;
    cout << "The value of c out of the sum function is "<< c << endl;

    return 0;
}