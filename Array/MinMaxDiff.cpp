#include <bits/stdc++.h>
using namespace std;
int getminDiff(int a[],int n,int k){
    if(n == 1) {return 0;
        }
    sort(a, a + n);
    vector<int> mxs(n), mns(n);
    for(int i=0; i<n; ++i) mxs[i] = a[i] + k, mns[i] = a[i] - k;
    int idx = 0, ans = a[n-1] - a[0];
    while(idx < n && mns[idx] < 0){
        idx++;
    }

    if(idx == n)  return ans;

    if(idx == 0) idx++;

    for(int i=idx; i<n; ++i) {
        ans = min(ans, max(mns[n-1], mxs[i-1]) - min(mns[i], mxs[0]));
    }
    return ans;
    // int small = arr[0]+k;
    // int big = arr[n-1]-k;
    // int ans = arr[n-1]-arr[0];
    // if(small>big)
    // swap(small,big);
    // for(int i=0;i<n-1;i++){
    //     int sub = arr[i]-k;
    //     int add = arr[i]+k;
    //     if(small<=sub || big>=add)
    //     continue;
    //     if(big-sub<=add-small)
    //     small = sub;
    //     else
    //     {
    //         big = add;
    //     }
    //     return min(add,big-small);
        
    }

int main(){
    int n,k,arr[n];
    cin>>n;
    cin >>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout << "MinDiff"<<getminDiff(arr,n,k);
    return 0;
}