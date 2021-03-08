#include<bits/stdc++.h>
using namespace std;
#include <stdio.h>

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(8);
    cout<<"\n";
    cout<<s.top()<<"\n";
    s.pop();
    cout<<s.top();
    // for(int i=0;i<s.size();i++){
    //     cout<<s[i]<<" ";
    // }
    return 0;
}
