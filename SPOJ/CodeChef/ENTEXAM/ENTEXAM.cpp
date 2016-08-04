#include<cstdio>
#include<stdlib.h>

const int maxn = 10100;
const int maxe = 5;
long final_scores[maxn];

int cmp(const void *a, const void *b){
    return *(int *)b - *(int *)a;
}

int main(){
    int t;
    int n, n1, k, e, e1;
    int exams;
    int sergey_final_score;
    long m;

    scanf( " %d", &t);
    for(;t--;){
        scanf(" %d %d %d %ld", &n, &k, &e, &m);

        n1 = n-1;
        e1 = e-1;
        sergey_final_score = 0;

        for (int i = 0; i<n1; ++i){
            final_scores[i] = 0;
            for (int j = 0; j<e; ++j){
                scanf(" %d", &exams);
                final_scores[i] += exams;
            }
        }
        
        for (int i = 0; i<e1; ++i){
            scanf(" %d", &exams);
            sergey_final_score += exams;
        }

        qsort(final_scores, n, sizeof(long), cmp);

        long answer = (final_scores[k-1] - sergey_final_score)+1;

        //printf("final_scores:");
        //for (int i =0; i<n1; ++i)
            //printf(" %d", final_scores[i]);
        //printf("\n");
        //printf("answer: %d \n", answer);

        answer <= m ? answer < 0 ? printf("0") : printf("%ld", answer) : printf("impossible");
        printf("\n");
    }

    return 0;
}
