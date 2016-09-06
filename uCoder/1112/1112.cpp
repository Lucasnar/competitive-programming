#include<cstdio>

int main(){
    int n1, n2;

    scanf(" %d %d%*c", &n1, &n2);

    int n;
    n1 > n2 ? n = n1 : n = n2; 

    char s1[n+4];
    char s2[n+4];
    char res[n+4];

    res[0] = s1[0] = s2[0] = '0';
    res[n+1] = s1[n+1] = s2[n+1] = '\0';

    char ch;
    for(int i = 1; i<=n1; ++i){
        scanf(" %c%*c", &ch);
        s1[i] = ch;
    }

    for(int i = 1; i<=n2; ++i){
        scanf(" %c%*c", &ch);
        s2[i] = ch;
    }

    int flag = n1 > n2;
    for(int i = n; i>0; --i){
        if(!flag)
            if(s1[i] == '1')
                break;
            else
                s1[i] = '0';
        else
            if(s2[i] == '1')
                break;
            else
                s2[i] = '0';
    }

    //printf("s1 %s\ns2 %s\n", s1, s2);

    flag = 0;
    for (int i = n; i>0; --i){
        if (!flag){
            //printf("!flag && s1[%d] == %c && s2[%d] == %c\n", i, s1[i], i, s2[i]);
            if (s1[i] == '1' && s2[i] == '1'){
                res[i] = '0';
                flag = 1;
            }
            else if(s1[i] != s2[i])
                res[i] = '1';
            else if(s1[i] == '0' && s2[i] == '0')
                res[i] = '0';
        }
        else{
            //printf("flag && s1[%d] == %c && s2[%d] == %c\n", i, s1[i], i, s2[i]);
            if (s1[i] == '1' && s2[i] == '1')
                res[i] = '1';
            else if(s1[i] != s2[i]){
                res[i] = '0';
            }
            else if(s1[i] == '0' && s2[i] == '0'){
                res[i] = '1';
                flag = 0;
            }
        }
    }

    int b;

    for(int i = n; i>=0; --i)
        if(res[i] == '1')
            break;
        else
            b = i;

    if(flag){
        res[0] = 49;
        for(int i = 0; i<=n; ++i)
            if (b == i)
                break;
            else if (i != n && i+1 != b)
                printf("%c ", res[i]);
            else
                printf("%c", res[i]);
    }
    else
        for(int i = 1; i<=n; ++i)
            if (b == i)
                break;
            else if (i != n && i+1 != b)
                printf("%c ", res[i]);
            else
                printf("%c", res[i]);
    printf("\n");

    return 0;
}
