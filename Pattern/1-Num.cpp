#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int i=1;

    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            j++;
        }
        cout<<""<<endl;
        i++;
    }
    cout<<"\n-: Reverse the num :- "<<endl;
    int k=1;
    while(k<=n){
        int l=1;
        while(l<=n){
            cout<<n-l+1;
            l++;
        }
        cout<<""<<endl;
        k++;
    }
    return 0;
}