#include<bits/stdc++.h>
using namespace std;
#include <stdio.h>

int main()
{
    multiset<int> s;
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(4);
    cout<<"\n";
    cout<<s.count(3)<<"\n";
    s.erase(3);
    cout<<s.count(3)<<"\n";
    s.erase(s.find(4));
    cout<<s.count(4);
    return 0;
}
