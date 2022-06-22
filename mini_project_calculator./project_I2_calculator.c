#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define KEY "Enter the calculator Operation you want to do:"
void addition();
void subtraction();
void multiplication();
void division();
void power();
void modulus();
void calculator_operations();
int factorial();
int main()
{
    int X=1;
    char Calc_oprn;
    calculator_operations();
    while(X)
    {
        printf("\n");
        printf("%s : ", KEY);
        scanf("%s",&Calc_oprn);
        switch(Calc_oprn)
        {
            case '+': addition();
                      break;
            case '-': subtraction();
                      break;
            case '*': multiplication();
                      break;
            case '/': division();
                      break;
            case '?': modulus();
                      break;
            case '^': power();
                      break;
            case '!': factorial();
                      break;
            case 'H':
            case 'h': calculator_operations();
                      break;
            case 'Q':
            case 'q': exit(0);
                      break;
            case 'c':
            case 'C': system("cls");
                      calculator_operations();
                      break;
            default : system("cls");
    printf("\n**********You have entered unavailable option");
    printf("***********\n");
    printf("\n*****Please Enter any one of below available ");
    printf("options****\n");
                      calculator_operations();
        }
    }
}
void calculator_operations()
{
    printf("\nWelcome to C calculator\n\n");
    printf("press 'Q' and 'q' to quit the program\n\n");
    printf("Press 'H' or 'h'for options\n\n");
    printf("Press 'C' or 'c' to clearing the screen & displying options\n\n");
    printf("press + for Addition \n");
    printf("press - for Subtraction \n");
    printf("Press * for Multiplication \n");
    printf("press / for Division \n");
    printf("press ? for Modulus\n");
    printf("Press ^ for Power \n");
    printf("press ! for Factorial \n\n");
}
void addition()
{
    int n, total=0, k=0, number;
    printf("\nHow many numbers do you want to add:");
    scanf("%d",&n);
    printf("enter %d the numbers one by one: \n",n);
    while(k<n)
    { 
        scanf("%d",&number);
        total=total+number;
        k=k+1;
    }
    printf("Sum of the numbers = %d \n",total);
}
void subtraction()
{ 
    int a, b, c = 0; 
    printf("\nPlease the first number  : "); 
    scanf("%d", &a); 
    printf("enter the second number : "); 
    scanf("%d", &b); 
    c = a - b; 
    printf("the subtraction of the numbers = %d\n", a, b, c); 
}
void multiplication()
{
    int a, b, mul=0; 
    printf("\nenter the first number   : "); 
    scanf("%d", &a); 
    printf("enter the second number: "); 
    scanf("%d", &b);
    mul=a*b;
    printf("\nMultiplication of the numbers = %d\n",mul);
}
void division()
{
    int a, b, d=0; 
    printf("\nenter the first number  : "); 
    scanf("%d", &a); 
    printf("enter the second number : "); 
    scanf("%d", &b);
    d=a/b;
    printf("\nDivision of the numbers=%d\n",d);
}
void modulus()
{
    int a, b, d=0; 
    printf("\nenter the first number   : "); 
    scanf("%d", &a); 
    printf("enter the second number  : "); 
    scanf("%d", &b);
    d=a%b;
    printf("\nModulus of the numbers = %d\n",d);
}
void power()
{
    double a,num, p;
    printf("\nEnter the number and power \n");
    printf("number: ");
    scanf("%lf",&a);
    printf("power : ");
    scanf("%lf",&num);
    p=pow(a,num);
    printf("\n%lf to the power %lf = %lf \n",a,num,p);
}
int factorial()
{
    int i,fact=1,num;
    printf("\nEnter a number to find it's factorial : ");
    scanf("%d",&num);
    if (num<0)
    {
        printf("\nInvalid number for this ");
        return 1;
    }               
    for(i=1;i<=num;i++)
    fact=fact*i;
    printf("\n");
    printf("Factorial of entered number %d is:%d\n",num,fact);
    return 0;
}
