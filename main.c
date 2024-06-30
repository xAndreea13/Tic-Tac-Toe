#include <stdio.h>

int main()
{
    char matrix[3][3];
    char init_val = '/';

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
        {
            matrix[i][j] = init_val;
        }
    
    //player1 is X
    //player2 is 0

    int empty_space = 9;  //the matrix is completly empty
    int winner = 0;       //there's no winner

    while(1)
    {
        if(empty_space == 0 && winner == 0)
        {
            printf("GAME OVER - No winner!");
            break;
        }

        //TO DO
    }


    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }
}

int check_board(char matrix[3][3], int line, int column)
{
    switch(line)
    {
        case 0:
            switch(column)
            {
                case 0:
                    if(matrix[0][0] == matrix[0][1] && matrix[0][1] == matrix[0][2])
                        return 1;
                    if(matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2])
                        return 1;
                    if(matrix[0][0] == matrix[1][0] && matrix[1][0] == matrix[2][0])
                        return 1;
                    break;
                case 1:
                    if(matrix[0][1] == matrix[0][0] && matrix[0][1] == matrix[0][2])
                        return 1;
                    if(matrix[0][1] == matrix[1][1] && matrix[1][1] == matrix[2][1])
                        return 1;
                    break;
                case 2:
                    if(matrix[0][2] == matrix[0][1] && matrix[0][1] == matrix[0][0])
                        return 1;
                    if(matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0])
                        return 1;
                    if(matrix[0][2] == matrix[1][2] && matrix[1][2] == matrix[2][2])
                        return 1;
                    break;
            }
            break;
        case 1:
            switch(column)
            {
                case 0:
                    if(matrix[1][0] == matrix[0][0] && matrix[1][0] == matrix[2][0])
                        return 1;
                    if(matrix[1][0] == matrix[1][1] && matrix[1][1] == matrix[1][2])
                        return 1;
                    break;
                case 1:
                    if(matrix[1][1] == matrix[0][0] && matrix[1][1] == matrix[2][2])
                        return 1;
                    if(matrix[1][1] == matrix[2][0] && matrix[1][1] == matrix[0][2])
                        return 1;
                    if(matrix[1][1] == matrix[1][0] && matrix[1][1] == matrix[1][2])
                        return 1;
                    if(matrix[1][1] == matrix[0][1] && matrix[1][1] == matrix[2][1])
                        return 1;  
                    break;
                case 2:
                    if(matrix[1][2] == matrix[1][1] && matrix[1][1] == matrix[1][0])
                        return 1;
                    if(matrix[1][2] == matrix[0][2] && matrix[1][2] == matrix[2][2])
                        return 1;
                    break;
            }
            break;
        case 2:
            switch(column)
            {
                case 0:
                    if(matrix[2][0] == matrix[1][0] && matrix[1][0] == matrix[0][0])
                        return 1;
                    if(matrix[2][0] == matrix[1][1] && matrix[1][1] == matrix[0][2])
                        return 1;
                    if(matrix[2][0] == matrix[2][1] && matrix[2][1] == matrix[2][2])
                        return 1;
                    break;
                case 1:
                    if(matrix[2][1] == matrix[2][0] && matrix[2][1] == matrix[2][2])
                        return 1;
                    if(matrix[2][1] == matrix[1][1] && matrix[1][1] == matrix[0][1])
                        return 1;
                    break;
                case 2:
                    if(matrix[2][2] == matrix[1][2] && matrix[1][2] == matrix[0][2])
                        return 1;
                    if(matrix[2][2] == matrix[1][1] && matrix[1][1] == matrix[0][0])
                        return 1;
                    if(matrix[2][2] == matrix[2][1] && matrix[2][1] == matrix[2][0])
                        return 1;
                    break;
            }
            break;
    }

    return 0;
}