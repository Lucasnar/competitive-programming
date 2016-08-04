#include<cstdio>

int main(){
    int e, t, p;

    scanf(" %d", &e);

    for (int i =0 ; i<e; ++i){
        int flag=0;
        int p_total=0;
        scanf(" %d", &t);
        for (int j = 0; j<t; ++j){
            scanf(" %d", &p);
            p_total += p;
            if(p_total > t && !flag) flag=1,printf("precisa\n");
        }
        if (!flag) printf("nao precisa\n");
    }


    return 0;
}
