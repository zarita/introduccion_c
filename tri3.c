#include <stdio.h>
int main (){
int n=5,i,j;
 for (i=5;i>0;i--){
	for(j=(n-i);j>0;j--){
		printf(" ");
	}
	for(j=0;j<i;j++){
		printf("*");
	}
printf("\n");
}
}
