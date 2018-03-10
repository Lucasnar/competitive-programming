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

set<pair<int, int> > coords_principal;

inline int within_borders(int x, int y, int n){
  return x < n && y < n && x >= 0 && y >= 0;
}

void process(int x, int y, int z, int n){
  set<pair<int, int> > coords;
  // quadrante 1
  for(int i = 0; i <= z; ++i){
    if (within_borders(x-z+i, y+i, n)) {
      coords.insert(make_pair(x-z+i,y+i));
    }
  }
  // quadrante 2
  for(int i = 0; i <= z; ++i){
    if (within_borders(x-z+i, y-i, n)) {
      coords.insert(make_pair(x-z+i,y-i));
    }
  }
  // quadrante 3
  for(int i = 0; i <= z; ++i){
    if (within_borders(x+z-i, y+i, n)) {
      coords.insert(make_pair(x+z-i,y+i));
    }
  }
  // quadrante 4
  for(int i = 0; i <= z; ++i){
    if (within_borders(x+z-i, y-i, n)) {
      coords.insert(make_pair(x+z-i,y-i));
    }
  }
  // fez todos os quadrantes
  for(auto it = coords_principal.begin(); it != coords_principal.end();){
    if(coords.find(*it) == coords.end()) {
      coords_principal.erase(it++);
    }
    else it++;
  }
}

int main(){
  int n, k, x, y, z, xx, yy;

  scanf(" %d %d", &n, &k);

  for(int i = 0; i<n; ++i)
    for(int j = 0; j<n; ++j)
      coords_principal.insert(pair<int, int> (i, j));

  for(int i=0; i<k; ++i) {
    scanf(" %d %d %d", &x, &y, &z);
    xx = abs(y - n) - 1;
    yy = x;
    process(xx, yy, z, n);
  }

  if (coords_principal.size()==1) {
    xx = coords_principal.begin()->first;
    yy = coords_principal.begin()->second;
    x = yy;
    y = abs(xx - n) - 1;
    printf("%d %d\n", x, y);
  }
  else {
    printf("-1 -1\n");
  }
  return 0;
}
