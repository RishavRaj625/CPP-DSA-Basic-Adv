#include<iostream>
using namespace std;

int main(){
    cout << "Hello Duniya..." << endl;
    int a,b;
    cout << "\nEnter the Value of a & b: ";
    cin >> a >> b;
    cout<< "Summation of A + B is " << a + b << endl;

    int size = sizeof(a);
    cout << "Size of a is " << size << endl;

    int d = 'a';
    cout<< "Typecasting : " << d <<endl;

    char ch = 98;
    cout << "Typecasting : " <<ch;

    return 0;
}