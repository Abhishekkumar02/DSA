// Given an array of N integers. find the contiguas sub array with max sum
#include <bits/stdc++.h>
#include <iostream> 
using namespace std;
void maxsubarraysum(int arr[],int n){
    int max_so_far = INT_MIN, max_ending = 0;
    for(int i=0;i<n;i++){
        max_ending +=arr[i];
        if(max_so_far < max_ending){
            max_so_far = max_ending;
        }
        if(max_ending<0){
            max_ending = 0;
        }
        
     }   
     cout <<max_so_far; 
    
}

int main(){
    int n;
    int arr[n];
    cin >>n;
    for (int i=0;i<n;i++){
        cin >>arr[i];
    }
    maxsubarraysum(arr,n);
    // for (int i=0;i<n;i++){
    //     cout <<arr[i]<<" ";
    // }
    return 0;
 }