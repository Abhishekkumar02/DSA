
#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long long int n,x,flag=0;
    cin>>n>>x;
    long long int ar[n];
    for(long long int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(long long int i=0;i<n;i++){
        for(long long int j=i+1;j<n;j++){ 
        if((ar[i]+ar[j])==x){
            cout<<((i)+1)<<" "<<j+1;
            flag = 1;
        }
    }
    }
    if(flag==0){
        cout<<"IMPOSSIBLE";
    }

    return 0;
}
