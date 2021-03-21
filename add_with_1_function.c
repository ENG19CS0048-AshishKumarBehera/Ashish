//Write a program to add two user input numbers using one function.
#include <stdio.h>
int main()
{
    int a, b, sum; 
    printf("Enter a and b\n");
    scanf("%d %d",&a, &b);
    sum = a+b;
    printf("Sum of %d and %d is %d", a, b, sum);
    return 0;
}
