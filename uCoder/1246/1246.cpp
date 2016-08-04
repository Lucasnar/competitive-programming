#include<cstdio>

int square[4][4];

int find_sum(){
    for(int i = 0; i<3; ++i)
            if (square[i][0] && square[i][1] && square[i][2])
                return square[i][0] + square[i][1] + square[i][2];

    for(int i = 0; i<3; ++i)
            if (square[0][i] && square[1][i] && square[2][i])
                return square[0][i] + square[1][i] + square[2][i];

    if (square[0][0] && square[1][1] && square[2][2])
        return square[0][0] + square[1][1] + square[2][2];
    if (square[2][0] && square[1][1] && square[0][2])
        return square[2][0] + square[1][1] + square[0][2];

    return 0;
}

void fix_position(int i, int j, int fix){
    if (i == 0 && j == 0)
        if (square[0][1] && square[0][2]){
            square[i][j] = fix - square[0][1] - square[0][2];
            return;
        }
        else if (square[1][1] && square[2][2]){
            square[i][j] = fix - square[1][1] - square[2][2];
            return;
        }
        else if (square[1][0] && square[1][2]){
            square[i][j] = fix - square[1][0] - square[1][2];
            return;
        }
    if (i == 0 && j == 1)
        if (square[0][0] && square[0][2]){
            square[i][j] = fix - square[0][0] - square[0][2];
            return;
        }
        else if (square[1][1] && square[2][1]){
            square[i][j] = fix - square[1][1] - square[2][1];
            return;
        }
    if (i == 0 && j == 2)
        if (square[0][0] && square[0][1]){
            square[i][j] = fix - square[0][0] - square[0][1];
            return;
        }
        else if (square[1][1] && square[2][0]){
            square[i][j] = fix - square[1][1] - square[2][0];
            return;
        }
        else if (square[1][2] && square[2][2]){
            square[i][j] = fix - square[1][2] - square[2][2];
            return;
        }

    if (i == 1 && j == 0)
        if (square[0][0] && square[2][0]){
            square[i][j] = fix - square[0][0] - square[2][0];
            return;
        }
        else if (square[1][1] && square[2][1]){
            square[i][j] = fix - square[1][1] - square[2][1];
            return;
        }
    if (i == 1 && j == 1)
        if (square[0][0] && square[2][2]){
            square[i][j] = fix - square[0][0] - square[2][2];
            return;
        }
        else if (square[0][1] && square[2][1]){
            square[i][j] = fix - square[0][1] - square[2][1];
            return;
        }
        else if (square[0][2] && square[2][0]){
            square[i][j] = fix - square[0][2] - square[2][0];
            return;
        }
        else if (square[1][0] && square[1][2]){
            square[i][j] = fix - square[1][0] - square[1][2];
            return;
        }
    if (i == 1 && j == 2)
        if (square[0][2] && square[2][2]){
            square[i][j] = fix - square[0][2] - square[2][2];
            return;
        }
        else if (square[1][0] && square[1][1]){
            square[i][j] = fix - square[1][0] - square[1][1];
            return;
        }

    if (i == 2 && j == 0)
        if (square[0][0] && square[1][0]){
            square[i][j] = fix - square[0][0] - square[1][0];
            return;
        }
        else if (square[2][1] && square[2][2]){
            square[i][j] = fix - square[2][1] - square[2][2];
            return;
        }
        else if (square[1][1] && square[0][2]){
            square[i][j] = fix - square[1][1] - square[0][2];
            return;
        }
    if (i == 2 && j == 1)
        if (square[0][1] && square[1][1]){
            square[i][j] = fix - square[0][1] - square[1][1];
            return;
        }
        else if (square[2][0] && square[2][2]){
            square[i][j] = fix - square[2][0] - square[2][2];
            return;
        }
    if (i == 2 && j == 2)
        if (square[0][2] && square[1][2]){
            square[i][j] = fix - square[0][2] - square[1][2];
            return;
        }
        else if (square[2][0] && square[2][1]){
            square[i][j] = fix - square[2][0] - square[2][1];
            return;
        }
        else if (square[0][0] && square[1][1]){
            square[i][j] = fix - square[0][0] - square[1][1];
            return;
        }

}

void fix_square(int fix){
    for (int i = 0; i<3;++i )
        for (int j = 0; j<3;++j )
            if (!square[i][j])
                fix_position(i,j, fix);
}

int main(){
    for(int i =0; i<3;++i)
        for(int j =0; j<3;++j)
            scanf(" %d", &square[i][j]);

    int sum = find_sum();

    if (!sum){
        for(int i = 0; i < 3; ++i )
            for(int j= 0; j < 3; ++j )
                sum += square[i][j];
        sum >>= 1 ;
    }

    fix_square(sum);

    //printf("sum: %d\n", sum);
    for(int i =0; i<3;++i){
        for(int j =0; j<3;++j)
            j == 2 ? printf("%d", square[i][j]) : printf("%d ", square[i][j]);
        printf("\n");
    }

    return 0;
}
