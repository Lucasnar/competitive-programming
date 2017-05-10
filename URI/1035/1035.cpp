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
  int a, b, c, d;

  scanf(" %d %d %d %d", &a, &b, &c, &d);
  //printf(" %d %d %d %d", a, b, c, d);

  printf("%s\n", b > c && d > a && c + d > a + b && c > 0 && d > 0 && !(a&1) ? "Valores aceitos" : "Valores nao aceitos");

  return 0;
}
