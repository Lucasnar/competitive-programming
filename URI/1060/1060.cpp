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
  double n;
  int c=0;
  for(int i = 0; i<6; ++i)
    scanf(" %lf", &n) && n > 0 && c++;
  printf("%d valores positivos\n", c);

  return 0;
}
