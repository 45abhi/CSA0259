#include<stdio.h>
int main()
{ 
int arr[100] , min, max,i,j,m; 
printf("Enter no. of elements:: "); 
scanf("%d", &m); 
printf("Enter the elements::\n"); 
for (j = 0; j < m; j++) 
{ 	
scanf("%d", &arr[j]);	
} 
min = max = arr[0]; 
for(i = 0; i < m; i++) 
{ 
if(arr[i] < min) 
{ 
min = arr[i]; 
printf("%d\n",min); 
} 
if(arr[i] > max) 
{ 
max = arr[i]; 
printf("%d\n",max); 
} 
} 
printf("Min = %d\n", min); 
printf("Max = %d", max); 
}
