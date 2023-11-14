/*
* * * *
* * *
* *
*

HINT: notice the number of spaces and its relation with row number i
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<"* ";
            j++;
        }
        i++;
        cout<<endl;
    }
}