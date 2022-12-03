#include <stdio.h>
#include "my_mat.h"
#define N 10
#define TRUE 1
#define FALSE 0

void getInput(int mat [N][N]){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d",&mat[i][j]);
        }
        
    }
    
}

void floyd_warshall_algorithm(int mat [N][N])
{
    
    for (int k = 0; k < N; k++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if(mat[i][j]>mat[i][k]+mat[k][j])
                {
                    mat[i][j]=mat[i][k]+mat[k][j];
                }
                
            }
            
        }
        
    }
    

}


int isExist(int i, int j, int mat [N][N])
{
    if(mat[i][j]>0)
    {
        return TRUE;
    }
    return FALSE;

}

int short_path(int i, int j, int mat [N][N])
{
    if(mat[i][j]>0)
    {
        return mat[i][j];
    }
    return -1;

}
