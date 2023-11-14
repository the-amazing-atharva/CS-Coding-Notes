/*
      *
    * *
  * * *
* * * *

HINT: notice the number of spaces and its relation with row number i
LOGIC: For row i, we are first printing n-i spaces and then i stars
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int space=1;
        while(space<=n-i){
            cout<<" ";
            space++;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }
}