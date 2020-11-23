// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;   
        
    }
    return 0;
}

void sort012(int a[], int n)
{
    int z =0, o=0,t=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            z++;
        }
        else if(a[i]==1){
            o++;
        }
        else if(a[i]==2){
            t++;
            
        }
    }
    int j=0;
    while(z>0){
        a[j++]=0;
        z--;
    }
    while(o>0){
        a[j++]=1;
        o--;
    }
    while(t>0){
        a[j++]=2;
        t--;
    }
}