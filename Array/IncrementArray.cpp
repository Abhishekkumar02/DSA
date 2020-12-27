
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    long long int n,ans=0;
    cin>>n;
    int a[n];
    for(long long int i=0;i<n;i++){
        cin>>a[i];
    }
    for(long long int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            ans+=(a[i-1]-a[i]);
            a[i]=(a[i-1]);
        }
        
    }
    cout<<ans;
    return 0;
}
