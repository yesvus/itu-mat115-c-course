/**
 * @file week10_lab2.c
 * @author Yusuf Emir Samsa
 * @brief W10 2
 * @date 2026-02-22
 * 
 * @details
 * MAT115E C Class Exercises
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int funcMaze(int **maze, int m, int n){
	int i,k;
		
	if(maze[0][0] == 0)
		return 0;
		
	while (i < m - 1 || k < n - 1) {  
        // Check if we can move down (i + 1)
    	if (i + 1 < m && maze[i + 1][k] == 1)
            i++;  
        // Check if we can move right (k + 1)
        else if (k + 1 < n && maze[i][k + 1] == 1) 
            k++;  

		else 
			return 0;  		
    }
	return 1;
	
}
	

int main(){
	int m,n,i,k  ;
	
	printf("Please enter size of the matrix in the form M x N: ");
	scanf("%d x %d", &m, &n);
	
	 
    int **maze = (int **)malloc(m * sizeof(int *));
    if (maze == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }
    for (i = 0; i < m; i++) {
        maze[i] = (int *)malloc(n * sizeof(int)); 
        if (maze[i] == NULL) {
            printf("Memory allocation failed for row %d\n", i);
            return 1; 
        }
    }
	
/*
	//test data 1
	int **maze_1 = (int **)malloc(m * sizeof(int *));
    if (maze_1 == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }
    for (i = 0; i < m; i++) {
        maze_1[i] = (int *)malloc(n * sizeof(int)); 
        if (maze_1[i] == NULL) {
            printf("Memory allocation failed for row %d\n", i);
            return 1; 
        }
    }
	maze_1[5][4] = {1,1,0,0, 0,1,1,1, 0,0,0,1, 0,0,0,1, 0,0,0,1,};
	
	//test data 2
	int **maze_0 = (int **)malloc(m * sizeof(int *));
    if (maze_0 == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }
    for (i = 0; i < m; i++) {
        maze_0[i] = (int *)malloc(n * sizeof(int)); 
        if (maze_0[i] == NULL) {
            printf("Memory allocation failed for row %d\n", i);
            return 1; 
        }
    }
	maze_0[5][4] = {1,1,0,0, 0,1,0,1, 0,1,1,1, 0,0,0,0, 0,0,0,1,};
*/
	
	//random matrix
	srand( time(NULL));
	
	for(i=0;i<m;i++){
		for(k=0;k<n;k++){
			maze[i][k] = rand() % 2;	
		}
	}
	
	printf("The random maze is: \n");
	for(i=0;i<m;i++){
		for(k=0;k<n;k++){
			printf("%2d ", maze[i][k]);	
		}
		printf("\n");
	}
	
	 printf("And the robot ");
    if (funcMaze(maze, m, n)) {
        printf("can");
    } else {
        printf("cannot");
    }
    printf(" go to the bottom-right exit.\n");
	
	
	return 0;
}
