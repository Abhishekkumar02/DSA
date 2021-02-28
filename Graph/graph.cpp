using namespace std;
#include<bits/stdc++.h>
#include <stdio.h>
template<typename T>
class Graph{
    public:
    unordered_map<T, list<T> > adj;
    Graph(){
    }
    void add_adge(T n1,T n2, bool bidir = true){
        adj[n1].push_back(n2);
        if(bidir){
            adj[n2].push_back(n1);
        }
    }
    void print(){
        for(auto row: this->adj){
            cout<<row.first<<"-->";
            for(T ele :row.second){
                cout<<ele<<" ";
            }
            cout<<"\n";
        }
    }
};
int main()

{
    Graph<int> g1;
    Graph<string> g2;
    g1.add_adge(1,2);
    g1.add_adge(3,2);
    g1.add_adge(4,2);
    g1.add_adge(1,4);
    g1.add_adge(1,3);
    g1.print();
    g2.add_adge("dl","tn");
    g2.add_adge("dl","blr");
    g2.add_adge("dl","mb");
    g2.add_adge("mb","blr");
    g2.add_adge("kol","dl");
    g2.add_adge("guj","kol");
    g2.print();
    return 0;
}
