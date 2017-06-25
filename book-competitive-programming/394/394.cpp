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

struct array{
  int base_addr;
  int elem_size;
  int d;
  pair<int, int> bounds[maxn];
};

map<string, array> arrays_map[maxn];
array arrays[maxn];
int dim[16];

const int inf = 0x3f3f3f3f;
const int maxn = 10010;

typedef long long int huge;

int main(){

  int n, r;
  string name;

  scanf(" %d %d", &n, &r);

  for(int i = 0; i<n; ++i){

    cin >> name;

    scanf(" %d %d %d", &arrays[i].base_addr,
                          &arrays[i].elem_size, &arrays[i].d);

    for(int j = 0; j<arrays[i].d; ++j)
      scanf(" %d %d", &arrays[i].bounds.first, &arrays[i].bounds.second);

    arrays_map.insert(name, arrays[i]);
  }

  for(int i = 0; i<r; ++i){
    cin >> name;

    for(int j = 0; j<arrays_map[name].d; ++j)
      scanf(" %d", d[i]);

  }

  return 0;
}
