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

int check(int a, int b){
  if ((a > 99999 || b > 99999) || (a<1000))
    return 0;

  char aa[6];
  char bb[6];
  int checker[64];
  for(int i = 0; i<64; ++i)
    checker[i] = 0;

  sprintf(aa, "%05d", a);
  sprintf(bb, "%05d", b);
  aa[6] = '\0';
  bb[6] = '\0';

  //printf("%s\n%s", aa, bb);

  for(int i = 0; i<5; ++i){
    checker[(int) aa[i]]++;
    //printf(" %d\n", (int) aa[i]);
  }

  for(int i = 0; i<5; ++i)
    checker[(int) bb[i]]++;

  for(int i = 0; i<64; ++i)
    if(checker[i] > 1)
      return 0;
  return 1;
}

int main(){
  int n, a, has_sol;
  int flag = 0;
  while(1){
    scanf(" %d", &n);
    if (!n) break;
    if(flag)
      printf("\n");
    flag = 1;

    has_sol = 0;

    for(int i = 1234; i<98765; ++i){
      a = i * n;
      if (check(a, i)){
          printf("%05d / %05d = %d\n", a, i, n);
          has_sol = 1;
      }
    }

    if (!has_sol)
      printf("There are no solutions for %d.\n", n);
  }

  return 0;
}
