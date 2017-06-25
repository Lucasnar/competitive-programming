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

typedef long long int huge;

int main(){

  int n, n2, ans;

  while(scanf(" %d", &n) == 1){
    n2 = ((n << 8) & 0xFF00FF00) | ((n >> 8) & 0xFF00FF );
    ans = (n2 << 16) | ((n2 >> 16) & 0xFFFF);
    printf("%d converts to %d\n", n, ans);
  }

  return 0;
}
