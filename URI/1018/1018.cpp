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
  int no, n, ce, ci, vi, de, cin, doi, um;
  scanf(" %d", &no);
  n = no;
  ce = ci = vi = de = cin = doi = um = 0;
  while(n>0){
    if(n>=100)
      n-=100, ++ce;
    else if(n>=50)
      n-=50, ++ci;
    else if(n>=20)
      n-=20, ++vi;
    else if(n>=10)
      n-=10, ++de;
    else if(n>=5)
      n-=5, ++cin;
    else if(n>=2)
      n-=2, ++doi;
    else
      n-=1, ++um;
  }

  printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", no, ce, ci, vi, de, cin, doi, um);

  return 0;
}
