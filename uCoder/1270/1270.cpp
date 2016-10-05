// NOT FINISHIED


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
const int maxn = 100010; // 10 ^ 5

typedef long long int huge;

int main(){
    char name_1[256];
    char name_2[256];
    char name_3[256];

    char time_1[8];
    char time_2[8];
    char time_3[8];

    char ans_1[8];
    char ans_2[8];
    char ans_3[8];

    int times[4];
    int times_temp[4];

    // NAME 1

    gets(name_1);

    scanf("%s%*c%s%*c%s%*c", time_1, time_2, time_3);

    times[0] = (time_1[0] - 48) * 10;
    times[0] += time_1[1] - 48;
    times[0] *= 100;
    times[0] += ((time_1[3] - 48) * 10) + time_1[4] - 48;

    times[1] = (time_2[0] - 48) * 10;
    times[1] += time_2[1] - 48;
    times[1] *= 100;
    times[1] += ((time_2[3] - 48) * 10) + time_2[4] - 48;

    times[2] = (time_3[0] - 48) * 10;
    times[2] += time_3[1] - 48;
    times[2] *= 100;
    times[2] += ((time_3[3] - 48) * 10) + time_3[4] - 48;


    for(int i = 0; i<3; ++i)
        times_temp[i] = times[i];

    sort(times, times+3);
    int best_i_1, best_time_1;
    for(int i = 0; i<3; ++i)
        if(times_temp[i] == times[2]){
            best_i_1 = i;
            best_time_1 = times_temp[i];
        }


    if(best_i_1 == 0)
        for(int i = 0; i<6; ++i)
            ans_1[i] = time_1[i];
    else if(best_i_1 == 1)
        for(int i = 0; i<6; ++i)
            ans_1[i] = time_2[i];
    else
        for(int i = 0; i<6; ++i)
            ans_1[i] = time_3[i];

    // NAME 2

    gets(name_2);

    scanf("%s%*c%s%*c%s%*c", time_1, time_2, time_3);

    times[0] = (time_1[0] - 48) * 10;
    times[0] += time_1[1] - 48;
    times[0] *= 100;
    times[0] += ((time_1[3] - 48) * 10) + time_1[4] - 48;

    times[1] = (time_2[0] - 48) * 10;
    times[1] += time_2[1] - 48;
    times[1] *= 100;
    times[1] += ((time_2[3] - 48) * 10) + time_2[4] - 48;

    times[2] = (time_3[0] - 48) * 10;
    times[2] += time_3[1] - 48;
    times[2] *= 100;
    times[2] += ((time_3[3] - 48) * 10) + time_3[4] - 48;


    for(int i = 0; i<3; ++i)
        times_temp[i] = times[i];

    sort(times, times+3);
    int best_i_2, best_time_2;
    for(int i = 0; i<3; ++i)
        if(times_temp[i] == times[2]){
            best_i_2 = i;
            best_time_2 = times_temp[i];
        }


    if(best_i_2 == 0)
        for(int i = 0; i<6; ++i)
            ans_2[i] = time_1[i];
    else if(best_i_2 == 1)
        for(int i = 0; i<6; ++i)
            ans_2[i] = time_2[i];
    else
        for(int i = 0; i<6; ++i)
            ans_2[i] = time_3[i];

    // NAME 3

    gets(name_3);

    scanf("%s%*c%s%*c%s%*c", time_1, time_2, time_3);

    times[0] = (time_1[0] - 48) * 10;
    times[0] += time_1[1] - 48;
    times[0] *= 100;
    times[0] += ((time_1[3] - 48) * 10) + time_1[4] - 48;

    times[1] = (time_2[0] - 48) * 10;
    times[1] += time_2[1] - 48;
    times[1] *= 100;
    times[1] += ((time_2[3] - 48) * 10) + time_2[4] - 48;

    times[2] = (time_3[0] - 48) * 10;
    times[2] += time_3[1] - 48;
    times[2] *= 100;
    times[2] += ((time_3[3] - 48) * 10) + time_3[4] - 48;


    for(int i = 0; i<3; ++i)
        times_temp[i] = times[i];

    sort(times, times+3);
    int best_i_3, best_time_3;
    for(int i = 0; i<3; ++i)
        if(times_temp[i] == times[2]){
            best_i_3 = i;
            best_time_3 = times_temp[i];
        }


    if(best_i_3 == 0)
        for(int i = 0; i<6; ++i)
            ans_3[i] = time_1[i];
    else if(best_i_3 == 1)
        for(int i = 0; i<6; ++i)
            ans_3[i] = time_2[i];
    else
        for(int i = 0; i<6; ++i)
            ans_3[i] = time_3[i];

    if(ans_1 > ans_

    printf("%s %s\n", name_1, ans_1);
    printf("%s %s\n", name_2, ans_2);
    printf("%s %s\n", name_3, ans_3);

    return 0;
}
