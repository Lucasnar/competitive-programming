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

typedef long long int huge;

int main(){

  char s;
  int f=0;

  while(scanf("%c", &s) == 1){
    if(s == 34 && !f){
      f = 1;
      printf("%c%c", 96, 96);
    }
    else if(s == 34){
      f = 0;
      printf("%c%c", 39, 39);
    }
    else
      printf("%c", s);
  }

  return 0;
}
