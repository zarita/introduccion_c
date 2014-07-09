#include <stdio.h>
int fibonacci(int a)
{
if(a==0)
{
	return 0;
}
else if(a==1)
{
	return 1;
}
else
{
	return fibonacci(a-1)+fibonacci(a-2);
}
}

int main()
{
int a;
printf("Dame el valor de n ");
scanf("%d",&a);
printf("El fibonacci es %d\n",fibonacci(a));
return 0;
}

