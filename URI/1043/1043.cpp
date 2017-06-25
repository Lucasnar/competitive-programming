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
const int maxn = 100100;

typedef long long int huge;

int main(){
  double a, b, c;

  scanf(" %lf %lf %lf", &a, &b, &c);

  if(a + b > c && a + c > b && b + c > a)
    printf("Perimetro = %.1lf\n", a + b + c);
  else
    printf("Area = %.1lf\n", ((a + b)*c)/2);

  return 0;
}
