#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h> 
#include <cmath>
using namespace std;
int main()
{
    int  T;
    cin >>T;
    while(T--){
        long long int a,b,ans=0,a_odd=0,a_even = 0,b_odd=0,b_even = 0;
        cin >>a>>b;
        
        if(a%2==0){
            a_even = a/2;
            a_odd = a/2;
        }else{
            a_even = a/2;
            a_odd = a/2+1;
        }
        if(b%2==0){
            b_even = b/2;
            b_odd = b/2;
        }else{
            b_even = b/2;
            b_odd = b/2+1;
        }
        ans = a_even*b_even + a_odd*b_odd;
        
    cout << ans <<"\n";
}
    return 0;
}