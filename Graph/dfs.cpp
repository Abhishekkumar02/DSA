using namespace std;
#include<bits/stdc++.h>
#include <stdio.h>

class Graph{
    public:
    int v;
    list<int> *adj;
    Graph(int n){
        this->v = n;
        this->adj = new list<int>[this->v];
    }
    void add_adge(int u,int v, bool bidir = true){
        adj[u].push_back(v);
        if(bidir){
            adj[v].push_back(u);
        }
    }
    void dfshelper(int src, unordered_map<int,bool> &visited){
        visited[src] = true;
        // cout<<src<<" ";
        for(auto neighbour: this->adj[src]){
            if(not visited[neighbour]){
                dfshelper(neighbour,visited);
            }
        }
    }
    void dfs(int src){
        unordered_map<int,bool> visited;
        dfshelper(src,visited);
    }
    int connectedComp(){
        unordered_map<int,bool> visited;
        int result = 0;
        for(int i=0;i<v;i++){
            if(not visited[i]){
            dfshelper(i,visited);
            result++;
        }
    }
    return result;
}
    // void print(){
    //     for(auto row: this->adj){
    //         cout<<row.first<<"-->";
    //         for(T ele :row.second){
    //             cout<<ele<<" ";
    //         }
    //         cout<<"\n";
    //     }
    // }
};
int main()

{
    // Graph<int> g1;
    // Graph<string> g2;
    Graph g1(6);
    g1.add_adge(0,1);
    g1.add_adge(2,1);
    g1.add_adge(3,2);
    g1.add_adge(4,5);
    cout<<g1.connectedComp();
    // g1.add_adge(1,3);
    // g1.print();
    // g2.add_adge("dl","tn");
    // g2.add_adge("dl","blr");
    // g2.add_adge("dl","mb");
    // g2.add_adge("mb","blr");
    // g2.add_adge("kol","dl");
    // g2.add_adge("guj","kol");
    // g2.print();
    return 0;
}
