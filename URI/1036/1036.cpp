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

const int inf = 0x3f3f3f3f;
const int maxn = 100100;

typedef long long int huge;

int main(){
  double a, b, c;

  scanf(" %lf %lf %lf", &a, &b, &c);

  double delta = (b * b) - (4 * a * c);
  if(!a || delta < 0)
    printf("Impossivel calcular\n");
  else
    printf("R1 = %.5lf\nR2 = %.5lf\n",
        ((b * -1) + sqrt(delta))/(2 * a), ((b * -1) - sqrt(delta))/(2 * a));

  return 0;
}
