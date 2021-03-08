/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(auto x:arr){
        pq.push(x);
        
    }
    int ans=0;
    while(pq.size()>1){
        int top1 = pq.top();
        cout<<top1<<"top1"<<"\n";
        pq.pop();
        int top2 = pq.top();
        pq.pop();
        ans+=(top1+top2);
        pq.push(top1+top2);
    }
    cout<<ans<<" ";
    return 0;
}
