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

int main(){
  double x, y;
  scanf(" %lf %lf", &x, &y);


  if(!x && !y)
    printf("Origem\n");
  else if(!x)
    printf("Eixo Y\n");
  else if(!y)
    printf("Eixo X\n");
  else if(x > 0 && y > 0)
    printf("Q1\n");
  else if(x < 0 && y > 0)
    printf("Q2\n");
  else if(x < 0 && y < 0)
    printf("Q3\n");
  else if(x > 0 && y < 0)
    printf("Q4\n");
    /*
    printf("Q%c\n",
        (x > 0 && y > 0) ? '1' :
        (x > 0) ? '4' :
        (y > 0) ? '2' :
        '3');
        */

  return 0;
}
