// Given an array of integers, find the length of the longest (strictly) increasing subsequence from the given array.

// Example 1:

// Input:
// N = 16
// A[]={0,8,4,12,2,10,6,14,1,9,5
//      13,3,11,7,15}
// Output: 6
// Explanation:Longest increasing subsequence
// 0 2 6 9 13 15, which has length 6


#include<bits/stdc++.h>
using namespace std;

int longestSubsequence(int, int[]);

int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];

        //calling method longestSubsequence()
        cout << longestSubsequence(n, a) << endl;
    }
}
// } Driver Code Ends


// return length of longest strictly increasing subsequence
int binaryearch(vector<int>& t,int l,int r,int k){
    while(r-l>1){
        int m = l +(r-l)/2;
        if(t[m]>=k){
            r=m;
        }else{
            l=m;
        }
    }
    return r;
}
int longestSubsequence(int n, int a[])
{
   // your code here
   if(n==0){
       return 0;
   }
   vector<int> t(n,0);
   t[0]=a[0];
   int l=1;
   for(int i=1;i<n;i++){
       if(a[i]<t[0]){
           t[0]=a[i];
       }
       else if(a[i]>t[l-1]){
           t[l++]=a[i];
       }else{
           t[binaryearch(t,-1,l-1,a[i])]=a[i];
       }
   }
   return l;
}
