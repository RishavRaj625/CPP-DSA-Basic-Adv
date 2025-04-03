#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the value of a : ";
    cin >>a;

    if(a > 0 || a == 0){
        cout << a << " value is Positive.."<<endl;
    }
    else{
        cout << a << " value is negative.."<<endl;
    }

    char ch;
    cout << "Enter the String : ";
    cin >>ch;
    
    if(ch>=97 && ch <= 126){
        cout << "Lowercase.."<<endl;
    }
    else if(ch >= 65 && ch <= 92){
        cout << "Uppercase..."<<endl;
    }

    return 0;
}