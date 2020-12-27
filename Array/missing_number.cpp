#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n],sum=0,nsum=0;
    for(long long int i=0;i<n-1;i++){
        cin>>a[i];
    }
    sum=n*(n+1)/2;
    for(long long int i=0;i<n-1;i++){
        nsum+=a[i];
    }
    cout<<sum-nsum;
    
    return 0;
}
