
#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
using namespace std;
int
main ()
{
  int T;
  long long int n,x,flg,r,z;
  long long int a[10000000];
  cin >> T;
  while (T--){
      scanf("%lld",&n);
      scanf("%lld",&x);
      for(long long int i=0;i<n;i++){
          scanf("%lld",&a[i]);
      }
      int ii=0;
      for(long long int k=x;k>0 && ii<n-1;k--){
          flg = 0;
          long long int p = log(a[ii])/log(2);
          r = pow(2,p);
          a[ii] =a[ii]^r;
          for(long long int j=ii+1;j<n;j++){
              if((a[j]^r) < a[j]){
                  a[j]=a[j]^r;
                  flg = 1;
                  break;
              }
          }
        if(flg==0){
            a[n-1]=a[n-1]^r;
        }
        while(a[ii]<=0){
                ii++;
        }
        z = k+1;
      }
        if(z>0){
            if(n<3 && z%2>0){
                a[n-1] = a[n-1]^1;
                a[n-2]=a[n-2]^1;
            }
        }
      
      for(long long int i=0;i<n;i++){
          printf("%lld ",a[i]);
      }
    printf("\n");
  }
  return 0;
}
