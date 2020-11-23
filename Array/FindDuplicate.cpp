#include <bits/stdc++.h>
#include <iostream> 
using namespace std;
void findDuplicate(int arr[],int n){
    for(int i=0;i<n;i++){
        int index = arr[i]%n;
        arr[index]+=n;
     }   
     for(int i=0;i<n;i++){
        if((arr[i]/n)>=2){
            cout <<i<<" ";
        }
     } 
    
}

int main(){
    int n;
    int arr[n];
    cin >>n;
    for (int i=0;i<n;i++){
        cin >>arr[i];
    }
    findDuplicate(arr,n);
    // for (int i=0;i<n;i++){
    //     cout <<arr[i]<<" ";
    // }
    return 0;
 }