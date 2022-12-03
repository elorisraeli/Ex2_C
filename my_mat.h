#define N 10
#ifndef _My_Mat_H_
#define _My_Mat_H_
void getInput(int mat [N][N]);

void floyd_warshall_algorithm(int mat [N][N]);

int isExist(int i, int j, int mat [N][N]);

int short_path(int i, int j, int mat [N][N]);

#endif