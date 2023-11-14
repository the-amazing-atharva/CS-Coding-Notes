/*
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1  

LOGIC: 
1. Use 2 While loops
2. One for printing (n-i) double spaces
3. one for printing from 1 to i
4. Other for printing from (i-1) to 1
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
            cout<<"  ";
            space++;
        }
        int j=1;
        while(j<=i){
            cout<<j<<" ";
            j++;
        }
        j=i-1;
        while(j>=1){
            cout<<j<<" ";
            j=j-1;
        }
        i++;
        cout<<endl;
    }
    return 0;
}