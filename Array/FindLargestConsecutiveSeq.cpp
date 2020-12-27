#include <bits/stdc++.h>
using namespace std;
int FindLargestConsecutiveSeq(int a[],int n){
    int ans = 0,count=0;
    sort(a,a+n);
    vector<int> v;
    v.push_back(a[0]);
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            v.push_back(a[i]);
        }
    }
    for(int i=0;i<v.size();i++){
        if(i>0 && v[i] == v[i-1]+1)
        count++;
        else
        {
            count=1;
        }
        ans = max(ans,count);}
        return ans;
    

int main(){
    int n,k,arr[n];
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout <<FindLargestConsecutiveSeq(arr,n);
    return 0;
}