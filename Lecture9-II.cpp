// Lecture 9 II - Fucntions Pt 4

#include <iostream>
using namespace std;

int sum(int, int);

int main(){
    int a, b;
    cout << "Enter any two number : ";
    cin >> a >> b;
    cout << a << " " << b << endl;
    cout << "Sum of the " << a << " and " << b << " is " << sum(a, b) << endl; 

    cout << a << " " << b;
    return 0;
}

int sum(int a, int b){
    // a=4, b=9;
    return a+b;
}