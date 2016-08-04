#include<cstdio>

char grades[109];

int main(){
    int c=0, n=0;
    //char grade;

    gets(grades);
    
    for(int i = 0; grades[i]; ++i){
        if (grades[i] == 49 && grades[i+1] == 48)
            c+=10, ++i;
        else
            c += grades[i] - 48;
        ++n;
    }

    //printf("%d %d\n", c, n);
    
    printf("%.2lf\n", (double) c/n);


    return 0;
}
