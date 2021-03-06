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

typedef long long int huge;

const int maxn = 1 << 17; // potencia de 2

#define pai(x) (((x)>>1)|maxn)
int min_tree[2*maxn];

int query(int start, int end) { // inclusive
  int result = inf;
  while (start <= end) {
    result = min(result, min_tree[start]);
    result = min(result, min_tree[end]);
    start = pai(start+1);
    end = pai(end-1);
  }
  return result;
}
void setup() {
  for(int i=0; i<(2*maxn-1); i+=2)
    min_tree[pai(i)] = min(min_tree[i], min_tree[i+1]);
}
void update(int p, int v) {
  while(p<(2*maxn-1)) {
    min_tree[p] = v;
    v = min(min_tree[p], min_tree[p^1]);
    p = pai(p);
  }
}

int main(){
  int n, m;

  while(scanf(" %d %d", &n, &m)){
    if (!n) break;

    for(int i = 0; i<n; ++i)
      scanf(" %d", &min_tree[i]);
    setup();

    for(int i = 0; i<n-m+1; ++i){
      if(i == n-m)
        printf("%d", query(i, (i+m)-1));
      else
        printf("%d ", query(i, (i+m)-1));
    }
    printf("\n");
  }

  return 0;
}
