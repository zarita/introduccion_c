#include <stdio.h>
int factorial(int a)
{
if(a==0)
{
return 1;
}
else
{
return a*factorial(a-1);
}
}

int main()
{
int a=5;
printf("El factorial es %d\n",factorial(a));
}

