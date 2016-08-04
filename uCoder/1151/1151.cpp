#include<cstdio>

int main(){
    int t, c;
    char senha[20];

    scanf(" %d%*c", &t);
    
    while(t--){
        gets(senha);
        c=1;
        for(int i =0; senha[i]; ++i)
            if (senha[i] == 'A' || senha[i] == 'E' || senha[i] == 'I' ||
                senha[i] == 'O' || senha[i] == 'S' ||
                senha[i] == 'a' || senha[i] == 'e' || senha[i] == 'i' ||
                senha[i] == 'o' || senha[i] == 's')
                c *= 3;
            else
                c *= 2;
 
        printf("%d\n", c);
    }

    return 0;
}
