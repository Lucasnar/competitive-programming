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
  double a, b;

  scanf(" %lf %lf", &a, &b);
  printf("%.3lf\n", a * b / 12);

  return 0;
}
