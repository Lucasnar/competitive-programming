#include<cstdio>

const int maxab = 1000100;
int array_a[maxab];

int main(){
    int n;

    scanf(" %d", &n);

    array_a[0] = 0;

    for (int i =0; i<n; ++i){
        int n_students, b, count=0;

        scanf(" %d", &n_students);

        for (int i = 1; i<=n_students; ++i)
            scanf(" %d", &array_a[i]);

        for (int i = 1; i<=n_students; ++i){
            scanf(" %d", &b);
            if (array_a[i] - array_a[i-1] >= b) count++;
        }

        printf("%d\n", count);
    }

    return 0;
}
