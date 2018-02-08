#include <stdio.h>

int main(){
int num1=malloc(sizeof(int));
int num2=0;
printf("Enter the number:");
scanf("%i", num1);
for(int i=2; i<num1;i++)
{
	num2+=(num1%i==0)*1;
}
if(num2==1){
printf("The input number is prime);}
else
{
printf("The input number is not prime);}
free(num1);
free(num2);
}