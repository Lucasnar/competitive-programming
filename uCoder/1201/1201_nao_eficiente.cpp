#include<bits/stdc++.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn= 10010;

struct edge { int to, length; };

int dijkstra(const vector< vector<edge> > &graph, int source, int target) {
    vector<int> min_distance( graph.size(), maxn);
    min_distance[ source ] = 0;
    set< pair<int,int> > active_vertices;
    edge e;
    e.to = source;
    e.length = 0;
    active_vertices.insert({e.length, e.to});

    while (!active_vertices.empty()) {
        int where = active_vertices.begin()->second;
        if (where == target) return min_distance[where];
        active_vertices.erase( active_vertices.begin() );
        for (auto edge ed : graph[where]) 
            if (min_distance[ed.to] > min_distance[where] + ed.length) {
                active_vertices.erase( { min_distance[ed.to], ed.to } );
                min_distance[ed.to] = min_distance[where] + ed.length;
                active_vertices.insert( { min_distance[ed.to], ed.to } );
            }
    }
    return inf;
}

int main(){
    int n, m, x, y, z;
    edge e;

    scanf(" %d %d", &n, &m);

    vector < vector <edge> > graph (n);

    for(int i =1; i<=m; ++i){
        scanf(" %d %d %d", &x, &y, &z);
        e.to= y;
        e.length= x;
        graph[x].push_back(e);
    }

    int resp = dijkstra(graph, 1, n) ;
    resp == inf ? printf("-1\n") : printf("%d\n", resp);

    return 0;
}
