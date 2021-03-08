#include<iostream>
using namespace std;
int main()
{
    int n,a[1000],s,re;
    int Bs(int[],int,int);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the number to search";
    cin>>s;
    re = Bs(a,n,s);
    if(re!=-1)
    {
        cout<<"Number Found at"<<re+1<<endl;
    }
    else
    {
        cout<<"number Not found";
    }
    return 0;
}
int Bs(int a[],int n,int s)
{
    int f=0,mid,l=n-1;
    while(f<=l)
    {
        mid=(f+l)/2;
        if(a[mid]==s)
        {
            return mid;
        }
        else if(s>a[mid])
        {
            f=mid+1;
        }
        else
        {
            l=mid-1;
        }
    }
    return -1;
}