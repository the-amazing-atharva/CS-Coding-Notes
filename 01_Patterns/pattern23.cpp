/*
    1
  2 3
4 5 6   

HINT: notice the number of spaces and its relation with row number i
LOGIC: printing i-1 spaces and then n-i+1 stars
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1, num=1;
    while(i<=n){
        int space=1;
        while(space<=n-i){
            cout<<" ";
            space++;
        }
        int j=1;
        while(j<=i){
            cout<<num<< " ";
            num++;
            j++;
        }
        i++;
        cout<<endl;
    }
}