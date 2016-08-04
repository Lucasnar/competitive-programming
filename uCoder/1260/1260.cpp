#include<cstdio>
#include<string.h>
#include<string>
#include<set>

using namespace std;

int main(){
    while(true){
        char chico[32];
        char dengue[32];
        char zica[32];
        int s;
        set<string> strings;

        if (scanf(" %s %s %s %d", chico, dengue, zica, &s) != 4)
            break;
        //printf("%s\n%s\n%s\n%d\n", chico, dengue, zica, s);
    
        char sub_atual[32];
        for (int i = 0, l = strlen(chico) - s + 1; i<l; ++i){
            for (int j = i, k=0; k<s; ++j, ++k)
                sub_atual[j] = chico[j];
            sub_atual[s+i] = '\0';
            //printf("sub_atual: %s\n", sub_atual+i);
            //printf("strstr: %d\n", strstr(sub_atual+i, dengue));
        
            if (strstr(dengue, sub_atual+i) && strstr(zica, sub_atual+i)){
                string str(sub_atual+i);
                strings.insert(str);
            }

        }

        printf("%d\n", (int) strings.size());


    }

    return 0;
}
