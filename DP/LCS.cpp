#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

int lcs(int, int, string, string);

int main()
{
    int t,n,k,x,y;
    
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        
        cout << lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
// } Driver Code Ends


// function to find longest common subsequence

int max(int x,int y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}
int lcs(int x, int y, string s1, string s2){
    int L[x+1][y+1];
    for(int i=0;i<=x;i++){
        for(int j=0;j<=y;j++){
            if(i==0 || j==0){
                L[i][j]=0;
            }
            else if(s1[i-1]==s2[j-1]){
                L[i][j] = L[i-1][j-1]+1;
            }else{
                L[i][j] = max(L[i-1][j],L[i][j-1]);
            }
        }
    }
    return L[x][y];
    
}
