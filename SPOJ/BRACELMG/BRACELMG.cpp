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

const int maxn = 1024*16;

char a[maxn], inva[maxn], b[maxn];
int an, bn;

typedef long long int huge;

int main(){

  int t;
  scanf(" %d", &t);

  while(t--){
    scanf("%s%n%*c%s%n%*c", a, &an, b, &bn);
    for(int i = an-2; i; --i){
      printf("%d %c", i, a[i]);
    }
    printf("\n");
    //printf("%s %s\n", a, b);
  }

  return 0;
}
