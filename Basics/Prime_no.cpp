#include<iostream>
#include<math.h>
using namespace std ;

int main ()
{
    int n,i;
    bool flag=0;
    cout<<"enter the no ";
    cin>>n;
    for (i = 2; i < sqrt(n); i++)
    {
        if (n%i==0)
        {
            cout<<"NO is nonPrime";
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        cout<<n<<"is Prime";
    }
    
    
    return 0 ;
}