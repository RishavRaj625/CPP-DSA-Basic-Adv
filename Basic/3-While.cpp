#include<iostream>
using namespace std;

int main(){
    int n,i=1,sum=0;
    cout << "Enter the number : ";
    cin >> n;
    while(i <= n){
        cout << " "<< i;
        i++;
    }
    int j = 1;
    while(j <= n){
        sum = sum + j;
        j++;
    }
    cout << "\nvalue of sum of natural no. "<< sum <<endl; 
    return 0;
}