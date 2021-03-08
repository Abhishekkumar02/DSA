#include <stdio.h>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include <algorithm>
int main()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int N,M,Nsum=0,Msum=0;
        cin>>N>>M;
        long long int a[N],aa[M];
        for(long long int i=0;i<N;i++){
            cin>>a[i];
            Nsum+=a[i];
        }
        for(long long int i=0;i<M;i++){
            cin>>aa[i];
            Msum+=aa[i];
        }
        long long int count=0,f=0;
        while(Nsum<=Msum){
        	sort(a, a + N);
        	sort(aa, aa + M);
        	if(a[0]<aa[-1]){
        		long long int temp = a[0];
        		a[0]=aa[-1];
        		aa[-1]= temp;
        		 Nsum = (Nsum-a[0])+aa[-1];
        		Msum = (Msum-aa[-1])+a[0];
        		count+=1;
        		
        	}else{
        		f=1;
        		cout<<"-1"<<""\n";
        		break;
        	}
        	
        }
        if(f==0){
        	cout<<count<<"\n";
        }
        
}
return 0;
}
