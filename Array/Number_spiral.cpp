#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int r,c,m,ans =0,mm=0;
        cin>>r>>c;
        if(r>c){
            m=r;
        }else{
            m=c;
            mm=1;
        }
        long long int sm = m*m;
        if(sm%2==0){
            if(mm==1){
                ans =sm-(abs(r-c)+m-1);
            }else{
                ans=sm-(c-1);
            }
        }else{
            if(mm==1){
                ans=sm-(r-1);
            }else{
                ans =sm-(abs(r-c)+m-1);
            }
            
        }
        cout<<ans<<"\n";
    }
    return 0;
}
