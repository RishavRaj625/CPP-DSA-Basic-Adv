#include<iostream>
using namespace std;

int main(){

    int a = 2;
    int b = a+1;
    cout << " value of a "<< a << endl; 
    if((a=3)==b){
        cout<<"A : "<< a <<endl;
    }
    else{
        cout << a+1<<endl;
    }

    int x = 9;
    if(x==9){
        cout<<"NINEY"<<endl;
    }
    if(x>0){
        cout<<"Positive"<<endl;
    }
    else{
        cout<<"Negative"<<endl;
    }

    int r = 24;
    if(r > 20){
        cout<<"Love.."<<endl;
    }
    else if(r == 24){
        cout<<"Lovely";
    }
    else{
        cout<<"Babbar"<<endl;
    }

    
    return 0;
}