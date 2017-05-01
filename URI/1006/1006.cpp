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

  double a, b, c;

  scanf(" %lf %lf %lf", &a, &b, &c);
  printf("MEDIA = %.1lf\n", (a*2 + b*3 + c*5) / 10 );

  return 0;
}
