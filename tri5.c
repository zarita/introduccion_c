#include <stdio.h>
int main (){
int n,i,j,k=1,e;
printf("Dame el valor de n");
scanf("%d",&n);
e=n-1;
 for (i=0;i<n;i++){
	for(j=0;j<e;j++){
		printf(" ");
	}
	e--;
	for(j=0;j<k;j++){
		printf("*");
	}
k=k+2;
printf("\n");
}

}
 
