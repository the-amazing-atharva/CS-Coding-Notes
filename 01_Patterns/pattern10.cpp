/*
A A A
B B B
C C C 
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    char ch='A';
    while(i<=n){
        int j=1;
        while (j<=n)
        {
            cout<<(char)('A'+i-1)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}