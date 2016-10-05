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

vector<int> players;

int main(){


    int p, r, cur_p, aux, cmd, t=0, times_erased;

    while(1){

        scanf(" %d %d", &p, &r);
        if(!p) break;

        printf("Teste %d\n", ++t);

        for(int i = 0; i<p; ++i){
            scanf(" %d", &aux);
            players.push_back(aux);
        }

        for(int j = 0; j<r; ++j){
            scanf(" %d %d", &cur_p, &cmd);
            times_erased = 0;
            for(int i = 0; i<cur_p; ++i){
                scanf(" %d", &aux);
                if(aux != cmd){
                    players.erase(players.begin()+(i-times_erased));
                    ++times_erased;
                }
            }
        }

        //for(int i = 0, s=players.size(); i<s; ++i)
            //printf("%d ", players[i]);
        //printf("\n");

        printf("%d\n", players[0]);
        players.clear();
    }

    return 0;
}
