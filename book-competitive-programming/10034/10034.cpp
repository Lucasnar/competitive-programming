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
#include<math.h>

using namespace std;

const int inf = 0x3f3f3f3f;
const int maxn = 128;

struct point{
  double x;
  double y;
};

point points[maxn];
double graph[maxn][maxn];
double distances[maxn];
int visited[maxn];
int n;

inline double power(double k){
  return k * k;
}

double dist(point a, point b){
  return sqrt(power(a.x - b.x) + power(a.y - b.y));
}

void build_graph(){
  for(int i = 0; i<n; ++i)
    for(int j = i + 1; j<n; ++j)
      graph[i][j] = graph[j][i] = dist(points[i], points[j]);
}

double prim(){
  double cost = 0.0;
  distances[0] = 0.0;

  for(int i = 0; i<n; ++i){
    int best_index = -1;
    double best_dist = inf;

    for(int j = 0; j<n; ++j)
      if(!visited[j] && distances[j] < best_dist)
        best_index = j, best_dist = distances[j];

    visited[best_index] = 1;
    cost += best_dist;

    for(int j = 0; j<n; ++j)
      if(!visited[j] && distances[j] > graph[best_index][j])
        distances[j] = graph[best_index][j];
  }

  return cost;
}

int main(){
  int t, first=1;

  scanf(" %d", &t);

  while(t--){
    scanf(" %d", &n);

    for(int i = 0; i<n; ++i){
      for(int j = 0; j<n; ++j)
        graph[i][j] = inf;

      distances[i] = inf;
      visited[i] = 0;
    }

    for(int i = 0; i<n; ++i){
      scanf(" %lf %lf", &points[i].x, &points[i].y);
    }

    build_graph();
    //for(int i = 0; i<n; ++i){
    //  for(int j = 0; j<n; ++j)
    //    printf("%.2lf ", graph[i][j] == inf ? 0 : graph[i][j]);
    //  printf("\n");
    //}
    if(!first)
      printf("\n");
    first=0;

    printf("%.2lf\n", prim());
  }

  return 0;
}
