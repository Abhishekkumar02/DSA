#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,i,m=1,d;
    cin>>n;
    for(i=1;i<=10;i++)
    {
        if(n%i==0)
        {
            d=i;
        }
        m=max(m,d);
    }
    cout<<m;
    return 0 ;
}
