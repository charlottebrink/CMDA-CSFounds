int gcd(int a, int b)
{
	a<b?gcd(b,a):a==b?a:b==0?a:gcd(b,a%b);
}
int main()
{
printf("Enter the first number:");
scanf("%s", num1);
printf("Enter the second number:");
scanf("%s", num2);
printf("The gcd between the two numbers input is"+gcd(num1,num2));
	}