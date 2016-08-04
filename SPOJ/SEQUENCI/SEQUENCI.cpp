#include<cstdio>

int array[1010];

int main(){
    int n, n_atual, flag = 0;

    while (getchar != EOF()){
        scanf(" %d", &n);
        for(int i = 0; i<n; ++i){
           array[i] = 0;
           scanf(" %d", &n_atual);
           array[i] = n_atual;
        }
        if (!flag) printf("This is an A-sequence.\n");
        else printf("This is not an A-sequence.\n");


    return 0;
}
