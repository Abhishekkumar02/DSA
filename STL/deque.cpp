#include<bits/stdc++.h>
using namespace std;
#include <stdio.h>

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_front(8);
    cout<<"\n";
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    d.pop_back();
    cout<<"\n";
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    d.pop_front();
    cout<<"\n";
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    // auto a = lower_bound(v.begin(),v.end(),5);
    // auto b = upper_bound(v.begin(),v.end(),2);
    // cout<<"\n"<<*a<<" "<<*b<<" ";
    return 0;
}
