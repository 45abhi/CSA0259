#include <stdio.h>
int main() {
  int rows, cols, i, j, sum = 0;
  
  printf("Enter the number of rows in the matrix: ");
  scanf("%d", &rows);
  
  printf("Enter the number of columns in the matrix: ");
  scanf("%d", &cols);
  
  int matrix[rows][cols];
  
  printf("Enter the elements of the matrix:\n");
  
  for (i = 0; i < rows; i++) {
    for (j = 0; j < cols; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }
  
  printf("Diagonal elements of the matrix are: ");
  
  for (i = 0; i < rows; i++) {
    for (j = 0; j < cols; j++) {
      if (i == j) {
        printf("%d ", matrix[i][j]);
        sum += matrix[i][j];
      }
    }
  }
  
  printf("\nSum of diagonal elements is: %d", sum);
  
  return 0;
