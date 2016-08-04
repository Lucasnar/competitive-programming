#include<cstdio>

int main(){
    char input[32];
    int d, m;

    scanf(" %s ", &input);
    scanf(" %s ", &input);

    d = input[1] - 48;
    if (input[0] - 48 > 0)
        d += (input[0] - 48) * 10;

    m = input[4] - 48;
    if (input[3] - 48 > 0)
        m += (input[3] - 48) * 10;

    --d;
    if (d > 0){}
    else{
        if (m == 1 || m == 3 || m ==5 || m == 7 || m == 8 || m == 10 || m == 12)
            if (m == 3)
                d = 28;
            else if (m == 8)
                d = 31;
            else
                d = 30;
        else
            d = 31;
        --m;
    }

    //printf("%s\n", input);
    //printf("%c\n", input[1]);

    if (d<10)
        printf("0");
    printf("%d/", d);
    if (m<10)
        printf("0");
    printf("%d/2015\n", m);

    return 0;
}
