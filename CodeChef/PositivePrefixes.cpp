#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int T;
  cin >> T;
  while (T--)
    {
        int n, k, sum = 0;
        cin>>n>>k;
        int a[n];
        int p = n;
        if(k==n){
        for (int i = 1; i <= n; i++){
	        a[i-1]=i;
        }
      }
      else{
        for (int i = 1; i <= n; i++){
	        if (i % 2 != 0)
	            {
	            a[i - 1] = -i;
	            }
	        else
	            {
	            a[i - 1] = i;
	            }
	    }
    int ar = n / 2;
    if (ar < k){
	  int b = k - ar;
	  while (b > 0)
	    {
	      if(a[p-1]<0){
	      a[p-1]=a[p-1]*-1;
	      b--;
        }
        p--;
	    }
	}
    if (ar > k){
	  int b = ar - k;
	  while (b > 0)
	    {
	      if(a[p-1]>0){
	      a[p-1]=a[p-1]*-1;
	      
	      b--;
        }
        p--;
	    }
	}
     
    }
    for (int i = 0; i < n; i++)
	  cout << a[i] << " ";
cout << "\n";
    }
  return 0;
}
