#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <complex>
using namespace std;

// https://www.urionlinejudge.com.br/judge/en/problems/view/2106

typedef long long int huge;
const int inf = 0x3f3f3f3f;
const int maxn = 18;

int jogadores[maxn][maxn];
int best[1<<maxn], n;

void calcula(int mask) {
  best[mask] = inf;
  int i = 0;

  while(!(mask & (1<<i)))
     ++i;

  for (int j = i; j < n; ++j) {
    if(mask & (1 << j)){
      best[mask] = min(best[mask], jogadores[j][n - __builtin_popcount(mask)] + best[mask^(1<<j)]);
    }
  }
}

int main() {
	int x;

  while(1){
    scanf("%d", &n);
    if(!n) break;

    for(int i = 0; i < n; ++i){
      for(int j = 0 ; j < n; ++j){
        scanf(" %d", &jogadores[i][j]);
      }
    }

    best[0] = 0;
    for(int i=1; i < (1<<n); ++i)
      	calcula(i);
    printf("%d\n", best[(1<<n)-1]);
  }

  return 0;
}
