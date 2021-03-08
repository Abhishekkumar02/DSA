#include<iostream>
using namespace std;
int main()
{
    int n,a[1000],s,flag=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the number to search";
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            cout<<"Number Found at"<<i+1<<endl;
            flag = 1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Number Not Found";
    }
    return 0;
}