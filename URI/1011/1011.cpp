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

  double v;
  scanf("%lf", &v);
  printf("VOLUME = %.3lf\n", (4 * 3.14159 * v * v * v)/3);
  return 0;
}
