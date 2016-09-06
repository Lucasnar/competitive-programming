#include<cstdio>

int conf[128];
char s[1024];
int answer_c;

void resolve(){

    for(int i = 0; i < 128; ++i)
        if(conf[i])
            ++answer_c;

}

void analyze(){

    for(int i = 0; s[i]; ++i)
        if (s[i] != ' ' && s[i] != ','){
            ++conf[s[i]];
        }

}

int main(){

    int n;

    scanf(" %d%*c", &n);

    while(n--){

        gets(s);

        for(int i = 0; i<128; ++i)
            conf[i] = 0;
        answer_c = 0;

        analyze();

        resolve();

        //printf("answer_c %d\n", answer_c);
        printf(answer_c < 16 ? "frase mal elaborada" : answer_c < 26 ? "frase quase completa" : "frase completa");
        printf("\n");


    }

    return 0;
}
