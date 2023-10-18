// Lecture 8 II - Functions Pt 2

#include <iostream>
using namespace std;

void printstuff(){
    cout << "Writing my first function" << endl;
}

int sum(int a, int b){
    int c;
    c = a+b;
    return c;
}

int main(){
    printstuff();

    int a, b, add_sum;
    a=3;
    b=5;
    add_sum = sum(a, b);
    cout << add_sum;
    return 0;
}