#include <stdio.h>
int main() {
	int a
	
	


	int a[3][3], transpose[3][3]
	int rows, cols, i, j;
	
	printf("Enter number of rows: ");
	scanf("%d", &rows);
	
	printf("Enter number of coloumns: ");
	scanf("%d", &cols);
// Input matrix elementprintf("Enter elements of the matrix:\n");
	for (i = 0; i < rows; i++) {
	    for (j = 0; j < cols; j++) {
	    	scanf("%d", &a[i][j]);
		}
}
	//Find transpose 
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			transpose[i][j] = a[i][j];
}
	
}
	
	//print transpose 
	printf("Transpose of the matrix:\n");
	for (i = 0; i < cols; i++) {
		for (j = 0; j < rows; j++) {
			printf("%d ", transpose[i][j]);
		}
		printf("\n");
}

		return 0;
	}
	
	
	//Find transpose
	for (i = 0; i < rows; i++) {
	}
