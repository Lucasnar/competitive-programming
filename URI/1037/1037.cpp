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

  scanf(" %lf", &n);

  if(n < 0 || n > 100)
    printf("Fora de intervalo\n");
  else{
    printf("Intervalo ");
    if(n > 75)
      printf("(75,100]\n");
    else if(n > 50)
      printf("(50,75]\n");
    else if(n > 25)
      printf("(25,50]\n");
    else
      printf("[0,25]\n");
  }

  return 0;
}
