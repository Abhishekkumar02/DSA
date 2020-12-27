#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    string txt;
    cin>>txt;
    int ans=0,count=1;
    if(txt.length()==1){
        ans = 1;
    }else{
    // cout << "The length of the txt string is: " << txt.length();
    for(int i=1;i<txt.length();i++){
        // cout<<txt[i]<<"iii"<<"\n";
        if(txt[i]==txt[i-1]){
            count+=1;
            
        }else{
            count =1;
        }
        // cout<<count<<"count"<<endl;
        ans = max(ans,count);
       
    }
    }
    cout<<ans;
    return 0;
}