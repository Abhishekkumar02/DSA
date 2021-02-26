#include<bits/stdc++.h>
using namespace std;
#include <stdio.h>

int main()
{
    unordered_set<int> s;
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(4);
    cout<<"\n";
    cout<<s.count(3)<<"\n";
    cout<<s.count(5)<<"\n";
    cout<<s.count(4)<<"\n";
    s.erase(3);
    s.insert(6);
    cout<<s.count(3)<<"\n";
    cout<<s.count(6)<<"\n";
     s.insert(5);
      s.insert(3);
       s.insert(1);
    for(auto x :s){
        cout<<x<<" ";
    }
    // for(int i=0;i<s.size();i++){
    //     cout<<s[i]<<" ";
    // }
    if(s.find(8)==s.end()){
        cout<<"NOT FOUND";
    }
    return 0;
}
