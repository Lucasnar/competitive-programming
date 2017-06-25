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
const int maxn = 100100;
char line[1024];

typedef long long int huge;

struct uf_node {
  int parent;
  int rank;
};

uf_node vet[maxn];

void uf_init(int n) {
  for(int i=0; i<n; ++i) {
    vet[i].parent = i;
    vet[i].rank = 0;
  }
}
int uf_find(int i) {
  if (vet[i].parent == i)
    return i;
  else
    return vet[i].parent = uf_find(vet[i].parent);
}
void uf_union(int i, int j) {
  i = uf_find(i);
  j = uf_find(j);
  if(i == j) return;

  if (vet[i].rank > vet[j].rank) {
    vet[j].parent = i;
  }
  else if (vet[i].rank < vet[j].rank) {
    vet[i].parent = j;
  }
  else {
    vet[i].rank++;
    vet[j].parent = i;
  }
}

int main(){
  int t, n, s, us, a, b;

  scanf(" %d", &t);

  while(t--){
    scanf(" %d%*c", &n);
    uf_init(n+1);
    s = us = 0;

    while(gets(line)){
      switch(line[0]){
        case 'c':
          sscanf(line, "c %d %d", &a, &b);
          uf_union(a, b);
          break;
        case 'q':
          sscanf(line, "q %d %d", &a, &b);
          if(uf_find(a) == uf_find(b))
            ++s;
          else
            ++us;
          break;
        case '\0':
          goto bosta;
      }
    }

bosta:
    printf("%d,%d\n", s, us);
    if(t)
      printf("\n");
  }

  return 0;
}
