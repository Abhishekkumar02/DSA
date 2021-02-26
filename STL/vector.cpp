#include<bits/stdc++.h>
using namespace std;
#include <stdio.h>

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    for(auto t: v){
        cout<<t<<" ";
    }
    cout<<"\n"<<v[1]<<" ";
    cout<<"\n"<<v.back()<<" ";
    v.pop_back();
    cout<<"\n"<<v.back()<<"\n";
    v.push_back(3);
    v.push_back(5);
    v.push_back(4);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    sort(v.begin(),v.end());
    cout<<"\n";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    reverse(v.begin(),v.end());
    cout<<"\n";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    random_shuffle(v.begin(),v.end());
    cout<<"\n";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    auto a = lower_bound(v.begin(),v.end(),5);
    auto b = upper_bound(v.begin(),v.end(),2);
    cout<<"\n"<<*a<<" "<<*b<<" ";
    return 0;
}
