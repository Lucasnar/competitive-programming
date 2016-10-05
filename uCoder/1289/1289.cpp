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
const int maxn = 10010;
int counter;

typedef long long int huge;

struct left_tree_node{
    int left_child;
    int center_child;
};

struct right_tree_node{
    int center_child;
    int right_child;
};

left_tree_node left_tree[maxn];
right_tree_node right_tree[maxn];
int visited[maxn];

int dfs(int v, char tree){ // Not really a DFS tbh.
    int curr_node = v;
    visited[v] = 1;

    switch (tree){
        case 'l':
            while(left_tree[curr_node].center_child){
                ++counter;
                curr_node = left_tree[curr_node].center_child;
            }
            break;
        case 'r':
            while(right_tree[curr_node].center_child){
                ++counter;
                curr_node = right_tree[curr_node].center_child;
            }
            break;
    }

    return counter;
}

int main(){
    int n, m, x, y, z;
    int curr_node, curr_value;
    int longest_sequence_left;
    int longest_sequence_right;
    int root_sequence_left;
    int root_sequence_right;

    scanf(" %d", &n);

    for(int i = 1; i<=n; ++i){
        scanf(" %d %d %d", &x, &y, &z);
        left_tree[x].left_child = y;
        left_tree[x].center_child = z;
        visited[i] = 0;
    }
   
    longest_sequence_left = 1;
    for(int i  = 1; i<=n; ++i){
        if(!visited[i]){
            counter = 1;
            curr_value = dfs(i, 'l');
            if(curr_value > longest_sequence_left)
                longest_sequence_left = curr_value;
        }
    }

    curr_node = root_sequence_left = 1;
    while(left_tree[curr_node].center_child){
        ++root_sequence_left;
        curr_node = left_tree[curr_node].center_child;
    }

    scanf(" %d", &m);

    for(int i = 1; i<=m; ++i){
        scanf(" %d %d %d", &x, &y, &z);
        right_tree[x].center_child = y;
        right_tree[x].right_child = z;
        visited[i] = 0;
    }

    longest_sequence_right = 1;
    for(int i  = 1; i<=n; ++i){
        if(!visited[i]){
            counter  = 1;
            curr_value = dfs(i, 'r');
            if(curr_value > longest_sequence_right)
                longest_sequence_right = curr_value;
        }
    }

    curr_node = root_sequence_right = 1;
    while(right_tree[curr_node].center_child){
        ++root_sequence_right;
        curr_node = right_tree[curr_node].center_child;
    }

    //printf("lgst_l %d lgst_r %d root_l %d root_r %d\n", longest_sequence_left, longest_sequence_right,
      //      root_sequence_left, root_sequence_right );

    int p_ans_1 = n + m - min(longest_sequence_right, root_sequence_left) ;
    int p_ans_2 = n + m - min(longest_sequence_left, root_sequence_right) ;

    printf("%d\n", min(p_ans_1, p_ans_2));

    return 0;
}
