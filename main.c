#include <stdio.h>
#include "my_mat.h"
#define N 10
#define TRUE 1
#define FALSE 0

int main()
{
    int mat [N][N];
    char input;
    int i , j,answer;
    scanf("%c", &input);
    while (input != 'D')
    {
        if (input == 'A')
        {
            getInput(mat);
            floyd_warshall_algorithm(mat);

        }
        if (input == 'B')
        {
            scanf("%d %d" ,&i, &j);
            answer= isExist(i,j,mat);
            if(answer==TRUE)
            {
                printf("True");
            }
            else{
                printf("False");
            }


        }
        if (input == 'C')
        {
            scanf("%d %d" ,&i, &j);
            answer= short_path(i,j,mat);
            printf("%d" ,answer);


        }
    }
    return 0;
}