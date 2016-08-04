#include<cstdio>

int main(){
    int t;

    scanf(" %d", &t);

    while(t--){
        int a, b, c, d;

        scanf(" %d %d %d %d", &a, &b, &c, &d);

        if ( (a % 2) && !(c % 2)){ // A always odd
            if ((b % 2) && (d % 2)) // B alternating
                printf("0");
            else if (!(b % 2) && (d % 2)) // B alternating
                printf("0");
            else if (!(b % 2) && !(d % 2)) // B always even
                printf("1");
            else if ( (b % 2) && !(d % 2)) // B always odd
                printf("0");
        }
        else if ( (b % 2) && !(d % 2)){ // B always odd
            if ((a % 2) && (c % 2)) // A alternating
                printf("0");
            else if (!(a % 2) && (c % 2)) // A alternating
                printf("0");
            else if (!(a % 2) && !(c % 2)) // A always even
                printf("1");
        }
        else if (((a % 2) && (c % 2)) || !(a % 2) && (c % 2)){ // A alternating
            if (!(b % 2) && !(d % 2)) // B always even
                printf("2");
            else if (((b % 2) && (d % 2)) || !(b % 2) && (d % 2)) // B alternating
                printf("0");
        }
        else if (((b % 2) && (d % 2)) || !(b % 2) && (d % 2)){ // B alternating
            if (!(a % 2) && !(c % 2)) // A always even
                printf("2");
        }
        else if ((!(a % 2) && !(c % 2)) && (!(b % 2) && !(d % 2)))
                printf("0");
        printf("\n");
    }

    return 0;
}
