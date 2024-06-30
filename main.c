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
    int line = -1;
    int column = -1;

    while(1)
    {
        if(empty_space == 0 && winner == 0)
        {
            printf("GAME OVER - No winner!");
            break;
        }
        
        //player 1
        do{
            printf("Player 1 : ");
            scanf("%d %d", &line, &column);

            if( (line < 0 || line > 2 ) || (column < 0 || column > 2))
            {
                printf("Error - incorrect position of element! Try again!\n");
            }
            else
            {   
                matrix[line][column] = 'X';
                break;
            }

        }while(1);
        
        //print the board on the board

        if(check_board(matrix, line, column))
        {
            printf("\nGAME OVER!    -    The winner is: Player 1");
            break;
        }

        //player 2
        do{
            printf("Player 2 : ");
            scanf("%d %d", &line, &column);

            if( (line < 0 || line > 2 ) || (column < 0 || column > 2))
            {
                printf("Error - incorrect position of element! Try again!\n");
            }
            else
            {   
                matrix[line][column] = '0';
                break;
            }

        }while(1);
        
        //print the board on the board

        if(check_board(matrix, line, column))
        {
            printf("\nGAME OVER!    -    The winner is: Player 2");
            break;
        }
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