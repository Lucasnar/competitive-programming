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
const int maxn = 1024;

struct player{
    char name[32];
    int score;
};

player players[maxn];

bool operator<(const player a, const player b) { // sorts by structs' int score. If there is a tie, sorts alphabetically.
    if(a.score != b.score)
        return a.score > b.score;
    else
        return strcmp(a.name, b.name) < 0;
}

int main(){

    int n, t=0, min_s, max_s, cur_s;

    while(true){

        scanf(" %d%*c", &n);
        //printf("n %d\n", n);
        if(!n) break;

        printf("Teste %d\n", ++t);

        for(int i = 0; i<n; ++i){

            gets(players[i].name);
            //printf("%s\n", players[i].name);

            players[i].score = 0;
            min_s = inf;
            max_s = -1;
            for(int j = 0; j<12; ++j){
                scanf(" %d ", &cur_s);
                //printf("%d ", cur_s);
                if(cur_s > max_s)
                    max_s = cur_s;
                if(cur_s < min_s)
                    min_s = cur_s;
                players[i].score += cur_s;
            }

            players[i].score -= (max_s + min_s);
            //printf("\n");
            //printf("player %s score: %d\n", players[i].name, players[i].score);

        }

        sort(players, players+n);

        for(int i = 0, p=inf, j=0; i<n; ++i){
            if(players[i].score == p){
                printf("%d %d %s\n", j+1, players[i].score, players[i].name);
            }
            else{
                printf("%d %d %s\n", i+1, players[i].score, players[i].name);
                j = i;
            }
            p = players[i].score;
        }

        printf("\n");

    }

    return 0;
}
