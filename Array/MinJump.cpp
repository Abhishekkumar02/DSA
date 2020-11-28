#include <bits/stdc++.h>
using namespace std;
int minjump(int a[],int n){
    if(n<=1){
        return 0;
    }
    if(a[0]==0){
        return -1;
    }
    int maxReach = a[0],step = a[0],jump =1;
    for(int i=1;i<n;i++){
        if(i==n-1){
            return jump;
        }
        maxReach = max(maxReach,i + a[i]);
    
    step--;
    if(step==0){
        jump++;
        if(i>=maxReach){
            return -1;
        }
        step = maxReach -i;
    }
    }
    return -1;
    }

int main(){
    int n,k,arr[n];
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout << "Min jump"<<minjump(arr,n);
    return 0;
}