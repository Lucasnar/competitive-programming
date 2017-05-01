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

  int e, h;
  double p;

  scanf(" %d %d %lf", &e, &h, &p);
  printf("NUMBER = %d\nSALARY = U$ %.2lf\n", e, h * p);

  return 0;
}
