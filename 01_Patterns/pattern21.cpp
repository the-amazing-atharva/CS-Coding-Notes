/*
1 1 1 1
  2 2 2 
    3 3
      4

HINT: notice the number of spaces and its relation with row number i
LOGIC: printing i-1 spaces and then n-i+1 stars
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int space=1;
        while(space<i){
            cout<<" ";
            space++;
        }
        int j=1;
        while(j<=n-i+1){
            cout<<i;
            j++;
        }
        i++;
        cout<<endl;
    }
}