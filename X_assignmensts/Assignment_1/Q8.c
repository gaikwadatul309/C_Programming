
// C Program to to draw left half Pyramid.
#include<stdio.h>
int main(){
	int num;
	printf("Enter any number :");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){

		for(int j=1;j<=i;j++){
			printf("%d",i);
			}
		printf("\n");
	}
	 
}