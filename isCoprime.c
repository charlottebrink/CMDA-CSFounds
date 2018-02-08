#include <stdio.h>
int gcd(int a, int b){
	if(b==0){
	return a;}
	return gcd(b,a%b);
}
int main(){
int num1=malloc(sizeof(int));
int num2=malloc(sizeof(int));
printf("Enter the first number:");
scanf("%i", num1);
printf("Enter the second number:");
scanf("%i", num2);
int g=(num1*num2)/gcd(num1,num2)==num1*num2;
if(g==1){
printf("The two input numbers are coprime);}
else
{
printf("The two input numbers are not coprime);}
free(num1);
free(num2);
return g*1;
}