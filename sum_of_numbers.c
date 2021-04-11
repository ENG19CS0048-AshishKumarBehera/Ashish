#include<stdio.h>

float input(float *arr,int *n)
{
    printf("Enter the total number of elements : \n");
    scanf("%d",n);

    for(int i=0;i<*n;i++)
    {   
        printf("Enter number %d : ",(i+1));
        scanf("%f",&arr[i]);
    }
    
}

float sum(float *arr,int *n)
{
	float sum;
	for(int i=0;i<*n;i++)
	{
		sum+=*(arr + i);
	}
	return sum;
}
		

void output(float total)
{
    printf("The sum of numbers entered is %.3f",total);
}

int main()
{
    int *n;
    float arr[100];
    float total;
    input(arr,n);
    total=sum(arr,n);
    output(total);
    return 0;
}
