#include<cstdio>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<iostream>
#include<map>
#include<queue>
#include<cstdlib>
#include<cstring>
#include<string>
#include<set>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 100;

int graph[maxn][maxn];
bool visited[maxn];
int resp[maxn];

int c, e, l, p, x, y;

struct node {
    int n;
    int level;
};

node nodes[maxn];

typedef long long int huge;

void bfs(node v){
    queue<node> q;
    visited[v.n] = true;
    q.push(v);

    while(!q.empty()){
            v = q.front(); 
            q.pop();

            for(int i = 0; i<c; ++i){
                if(graph[v.n][i] && !visited[i]){
                    visited[i] = true;
                    nodes[i].level = v.level + 1;
                    q.push(nodes[i]);
                }
            }
    }
}

int main(){

    int count = 0;

    while(true){

        scanf(" %d %d %d %d\n", &c, &e, &l, &p);

        if(!c) break;

        printf("Teste %d\n", ++count);

        for(int i = 0; i<c; ++i){
            for(int j = 0; j<c; ++j)
                graph[i][j] = graph[j][i] = 0;
            nodes[i].n = i;
            nodes[i].level = 0;
            visited[i] = false;
        }

        for(int i =0; i<e; ++i){
            scanf(" %d %d", &x, &y);
            graph[--x][--y] = graph[y][x] = 1;
        }

        //for(int i = 0; i<c; ++i){
            //for(int j = 0; j<c; ++j)
                //printf("%d ", graph[i][j]);
            //printf("\n");
        //}

        --l;
        nodes[l].level = 0;
        bfs(nodes[l]);

        //printf("visited:\n");
        //for(int i = 0; i<c; ++i)
            //printf("%d ", visited[i]);
        //printf("\n");


        //visited[l] = false;

        //visited_count = 0;
        //for(int i = 0; i<c; ++i)
            //if(visited[i]) ++visited_count;

        //printf("nodes.level\n");
        //for(int i = 0; i<c; ++i)
            //printf("%d ", nodes[i].level);
        //printf("\n");

        int j = 0;
        for(int i = 0; i<c; ++i){
            if(nodes[i].level && nodes[i].level <= p){
                resp[j++] = i+1;
            }
        }

        if(j){
            sort(resp, resp+j-1);

            for(int i = 0; i<j; ++i){
                if(i == j-1)
                    printf("%d", resp[i]);
                else
                    printf("%d ", resp[i]);
            }
        }
        printf("\n\n");
    }

    return 0;
}
