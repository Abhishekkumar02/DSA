#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h> 
#include <cmath>
#include <string>
using namespace std;
int main()
{
    int  T;
    cin >>T;
    while(T--){
        int n,d;
        cin>>n>>d;
        int a[n],b[n],ab[n],ans=0;
        int c=0,k=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>=80 || a[i]<=9){
                b[c]=a[i];
                c++;
            }else{
                ab[k] = a[i];
                k++;
            }
        }
        if(d==1){
            ans = n;
            
        }else{
            if(k%d==0){
                ans += k/d;
            }else{
                ans += (floor(k/d) +1);
            }
            if(c%d == 0){
                ans += c/d;
            }else{
                ans += (floor(c/d) +1);
            }
            
        }
        
    cout << ans <<"\n";
}
    return 0;
}