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

  double s, c;


  scanf("%*s%*c");
  scanf(" %lf %lf", &s, &c);

  printf("TOTAL = R$ %.2lf\n", s + (c*0.15));

  return 0;
}
