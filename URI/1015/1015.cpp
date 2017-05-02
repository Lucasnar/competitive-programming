#include<cstdio>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<iostream>
#include<math.h>
#include<queue>
#include<cstdlib>
#include<cstring>
#include<string>
#include<set>

using namespace std;

typedef long long int huge;

int main(){
  double x1, y1, x2, y2;

  scanf(" %lf %lf %lf %lf", &x1, &y1, &x2, &y2);

  printf("%.4lf\n", sqrt(((x2 - x1) * (x2 - x1)) + (y2 - y1) * (y2 - y1)));
  return 0;
}
