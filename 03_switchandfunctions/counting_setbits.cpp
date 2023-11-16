/*
Given a positive integer N, print count of set bits in it. 

Example 1:

Input:
N = 6
Output:
2
Explanation:
Binary representation is '110' 
So the count of the set bit is 2.
*/

#include<iostream>
using namespace std;

int setBits(int num){
    int count=0;
    while(num!=0){
        if(num&1){
            count++;
        }
        num=num>>1;
    }
    return count;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int ans1=setBits(a);
    int ans2=setBits(b);

    cout<<"Set bits of A = "<<ans1<<endl;
    cout<<"Set bits of B = "<<ans2<<endl;
    int ans=ans1+ans2;

    cout<<"Total set bits of A and B are = "<<ans<<endl;

    
    return 0;
}