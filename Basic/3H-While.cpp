#include<iostream>
using namespace std;

int main(){
    int n,sum = 0;
    cout << "Enter the value : " ;
    cin >> n;
    int i = 1;
    while(i <= n){
        if(i%2 == 0){
            sum = sum + i;
        }
        i++;
    }
    cout << "\nSum of even natural number : "<< sum << endl;
    return 0;
}