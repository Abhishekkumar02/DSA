#include<bits/stdc++.h>
using namespace std;
#include <stdio.h>

int main()
{
    unordered_map<string, int> m;
    m["a"]=1;
    m["b"]=2;
    m["c"]=3;
    m["d"]=4;
    m["e"]=5;
    cout<<"\n";
    cout<<m["e"]<<"\n";
    cout<<m.count("a")<<"\n";
    for(auto x : m){
        cout<<x.first << " "<< x.second<<"\n";
    }
    
    return 0;
}
