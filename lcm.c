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
int g=(num1*num2)/gcd(num1,num2);
printf("The lcm between the two numbers input is %i",g);
free(num1);
free(num2);
return g;
}