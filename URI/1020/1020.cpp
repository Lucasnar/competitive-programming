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

  int blah;

  scanf("%d", &blah);

  int years = blah/365;
  int months = (blah - 365 * years) / 30;
  int days = blah - 365 * years - 30 * months;

  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);
  return 0;
}
