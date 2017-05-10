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
const int maxn = 100100; // 10 ^ 5

typedef long long int huge;

int main(){
  int n;

  scanf(" %d", &n);

  int h = n / 3600;
  int m = (n - 3600 * h)/60;
  int s = n - 3600 * h - 60 * m;
  printf("%d:%d:%d\n", h, m, s);

  return 0;
}
