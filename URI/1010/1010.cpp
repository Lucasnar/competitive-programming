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

  int q1, q2;
  double v1, v2;

  scanf("%*d %d %lf", &q1, &v1);
  scanf("%*d %d %lf", &q2, &v2);

  printf("VALOR A PAGAR: R$ %.2lf\n", (q1 * v1) + (q2 * v2));

  return 0;
}
