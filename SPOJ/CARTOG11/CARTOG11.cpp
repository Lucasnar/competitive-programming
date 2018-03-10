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

const int maxn = 1024 * 1024;

vector<int> tree[maxn];
int height[maxn];
int best_dist[maxn];

void find_the_greatest_distance(int a, int p){
  //DFS
  height[a] = 0;
  best_dist[a] = 0;
  // Recursion
  for(int i = 0, s = tree[a].size(); i<s; ++i){
    if(tree[a][i] != p)
      find_the_greatest_distance(tree[a][i], a);
  }

  // Find current node height
  for(int i = 0, s = tree[a].size(); i<s; ++i)
    height[a] = max(height[a], height[tree[a][i]]);
  ++height[a];

  int highest_child = 0, second_to_highest_child = 0;
  for(int i = 0, s = tree[a].size(); i<s; ++i){
    if(best_dist[tree[a][i]] > highest_child){
      second_to_highest_child = highest_child;
      highest_child = height[tree[a][i]];
    }
    else if(best_dist[tree[a][i]] > second_to_highest_child){
      second_to_highest_child = height[tree[a][i]];
    }
  }

  int best_child_distance = 0;
  for(int i = 0, s = tree[a].size(); i<s; ++i)
    best_child_distance = max(best_child_distance, best_dist[tree[a][i]]);

  best_dist[a] = max(best_child_distance, highest_child + second_to_highest_child + 1);
}

int main(){
  int n, a, b;

  scanf(" %d", &n);

  for(int i = 0; i<n; ++i)
    height[i] = best_dist[i] = 0;
  for(int i = 0; i<n-1; ++i){
    scanf(" %d %d", &a, &b);
    --a, --b;
    tree[a].push_back(b);
    tree[b].push_back(a);
  }

//  for(int i = 0; i<n; ++i){
//    printf("%d -> ( ", i);
//    for(int j = 0; j<tree[i].size(); ++j)
//      printf("%d ", tree[i][j]);
//    printf(")\n");
//  }

  find_the_greatest_distance(0, 0);
  printf("%d\n", best_dist[0]-1);

  return 0;
}
