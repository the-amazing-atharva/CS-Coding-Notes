/*
Use function to find nth term of AP: 3n+7
*/

#include<iostream>
using namespace std;

int AP(int n){
    int ap=3*n+7;
    return ap;
}

int main(){
    int n;
    cin>>n;

    int ans=AP(n);
    cout<<"ANS: "<<ans<<endl;

    return 0;
}