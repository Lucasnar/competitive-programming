#include<cstdio>
#include<stdio.h>

int main(){
    int n;
    scanf(" %d", &n);
    char k[1];
    gets(k);

    for (int i = 0; i<n; ++i){
        char novo_ra[14];
        char ra_antigo[9];

        novo_ra[0] = '0';
        novo_ra[1] = '0';
        novo_ra[2] = '3';

        //for (int j =0; j<9; ++j) scanf(" %c", ra_antigo[j]);
        //printf("%s", fgets(ra_antigo, 9, stdin));
        //printf("%s\n", gets(ra_antigo));
        gets(ra_antigo);

        //for (int j =0; j<8; ++j) printf("%c", ra_antigo[j]);

        //printf("ra_antigo[0] = %c\n", ra_antigo[0]);

        if (ra_antigo[0] == 'A'){
            novo_ra[3] = '0';
            novo_ra[4] = '4';
            novo_ra[5] = '8';
            if (ra_antigo[1] == 'D') novo_ra[9] = '1';
            else novo_ra[9] = '3';
        }

        else if (ra_antigo[0] == 'S'){
            novo_ra[3] = '0';
            novo_ra[4] = '6';
            novo_ra[5] = '1';
            novo_ra[9] = '1';
        }
        else if (ra_antigo[0] == 'L'){
            novo_ra[3] = '0';
            novo_ra[4] = '7';
            novo_ra[5] = '4';
            novo_ra[9] = '2';
        }
        else if (ra_antigo[0] == 'P'){
            if (ra_antigo[1] == 'L'){
                novo_ra[3] = '0';
                novo_ra[4] = '8';
                novo_ra[5] = '0';
                novo_ra[9] = '2';
            }
            else{
                novo_ra[3] = '0';
                novo_ra[4] = '9';
                novo_ra[5] = '9';
                if(ra_antigo[1] == 'D') novo_ra[9] = '1';
                else novo_ra[9] = '3';
            }
        }
        else if (ra_antigo[0] == 'O'){
            novo_ra[3] = '1';
            novo_ra[4] = '0';
            novo_ra[5] = '0';
            if (ra_antigo[1] == 'D') novo_ra[9] = '1';
            else novo_ra[9] = '3';
        }

        novo_ra[6] = ra_antigo[2];
        novo_ra[7] = ra_antigo[3];
        novo_ra[8] = ra_antigo[4];
        novo_ra[10] = ra_antigo[5];
        novo_ra[11] = ra_antigo[6];
        novo_ra[12] = ra_antigo[7];

        for (int j =0; j<13; ++j) printf("%c", novo_ra[j]);
        printf("\n");
    }    

    return 0;
}
