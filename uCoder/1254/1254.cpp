#include<cstdio>

const int maxn = 10000;
int arr[maxn];

int main(){
    int n, c=0;

    scanf(" %d", &n);

    for(int i = 0; i<n; ++i)
        scanf(" %d", &arr[i]);

    for(int i = 0; i<n-2; ++i)
        if (arr[i])
            if (!arr[i+1] && !arr[i+2])
                c++, i+=2;

    printf("%d\n", c);


    return 0;
}
