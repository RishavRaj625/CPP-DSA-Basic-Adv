#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int row = 1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<row<<" ";
            col++;

        }
        cout<<""<<endl;
        row++;
    }

    int count = 1;
    int row1 = 1;
    cout<<"\n-: Increasing Num :- "<<endl;
    while(row1 <= n){
        int col1=1;
        while(col1<=row1){
            cout<<count<<" ";
            count++;
            col1++;
        }
        cout<<""<<endl;
        row1++;
    }
    return 0;
}