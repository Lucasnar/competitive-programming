#include<cstdio>
#include<queue>
#include<algorithm>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 100100;
vector<int> mtx[maxn];
int dist[maxn];
int vis[maxn];
int on_queue[maxn];

int main(){
    int n, a, b, resp=inf, cid;
    queue<int> q;

    scanf(" %d", &n);

    for(int i = 0; i<=n-1; ++i){
        mtx[i].clear();
        dist[i] = 0;
        vis[i] = 0;
    }

    for(int i = 0; i<n-1; ++i){
        scanf(" %d %d", &a, &b);
        --a, --b;

        mtx[a].push_back(b);
        mtx[b].push_back(a);
    }

    for(int i = 0; i<=n-1; ++i){
        if (mtx[i].size() == 1){
            q.push(i);
            dist[i] = 0;
            on_queue[i] = 1;
            //printf("adding %d to queue\n", i);
        }
    }

    while(!q.empty()){ //BFS
        cid = q.front();
        vis[cid] = 1;
        for(int i = 0; i<mtx[cid].size(); ++i){

            if(!on_queue[mtx[cid][i]]){
                if(!vis[mtx[cid][i]]){
                    //printf("%d\n", mtx[cid][i]);
                    q.push(mtx[cid][i]);
                    on_queue[mtx[cid][i]] = 1;
                    dist[mtx[cid][i]] = 1 + dist[cid];
                }
            }

            else if (!vis[mtx[cid][i]])
                resp = min(resp, 1 + dist[cid] + dist[mtx[cid][i]]);
        }
        q.pop();
    }

    printf("%d\n", resp);

    return 0;
}
