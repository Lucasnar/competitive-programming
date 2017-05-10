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

double retrieve(int n){
  switch(n){
    case 1:
      return 4.00;
    case 2:
      return 4.50;
    case 3:
      return 5.00;
    case 4:
      return 2.00;
    case 5:
      return 1.50;
  }
}

int main(){

  int n, q;

  scanf(" %d %d", &n, &q);

  printf("Total: R$ %.2lf\n", retrieve(n) * q);

  return 0;
}
