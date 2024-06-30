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

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }
}