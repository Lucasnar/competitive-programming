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
const int maxn = 1024; // 10 ^ 5
int mtx[maxn];
char line[100*maxn];

int main(){
  int t, n, best, bosta;

  scanf(" %d", &t);

  while(t--){
    best = inf;
    bosta = 0;

    scanf(" %d%*c", &n);
    for(int i = 0; i<n; ++i)
      mtx[i] = 0;

    for(int i = 0; i<n; ++i){
      gets(line);
      for(int j = 0; line[j]; ++j)
        if(line[j] == ' ')
          ++mtx[i];

      if(mtx[i] < best)
        best = mtx[i];
    }

    //print_mtx(n);
    for(int i = 0; i<n; ++i){
      if(mtx[i] == best)
        if(!bosta){
          bosta=1;
          printf("%d", i+1);
        }
        else
          printf(" %d", i+1);
    }

    printf("\n");
  }

  return 0;
}
