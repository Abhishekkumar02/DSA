#include<bits/stdc++.h>
using namespace std;
#include <stdio.h>

int main()
{
    priority_queue<int> q;
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(2);
    cout<<"\n";
    cout<<q.top()<<"\n";
    q.pop();
    cout<<q.top()<<"\n";
    return 0;
}
