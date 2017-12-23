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
#include<math.h>

using namespace std;

typedef long long int huge;

int main(){
  int n, m, r;

  while(1){
    scanf(" %d %d", &n, &m);
    if(n == 0 && m == 0) break;
    r = (n + m - 1) / m;
    //printf("%d\n", r);

    if(r <= 6)
      printf("Poodle\n");
    else if(r >= 20)
      printf("Poooooooooooooooodle\n");
    else {
      printf("P");
      for(int i = 0; i<r-4; ++i)
        printf("o");
      printf("dle\n");
    }
  }

    return 0;
}
