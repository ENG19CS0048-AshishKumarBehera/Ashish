#include<stdio.h>
#include<math.h>

struct fractions
{
    int n,d;
};
 
typedef struct fractions fract;

fract input()
{
    fract f;
    printf("Enter the numerator : \n");
    scanf("%d",&f.n);
    printf("Enter the denominator : \n");
    scanf("%d",&f.d);
    return f;
     
}

int gcd(int a,int b)
{
    	while(a!=b)
    	{
        	if(a>b)
            {
            	a-=b;
        	}
       	 	else
        	{
            	b-=a;
        	}
        }
        return a;
}

fract calc(fract f1,fract f2)
{
	fract sum;
	sum.n =(f1.n*f2.d)+(f2.n*f1.d);
	sum.d = f1.d*f2.d;
	int g=gcd(sum.n,sum.d);
	sum.n = sum.n/g;
	sum.d = sum.d/g;
	return sum;
	
}

void output(fract f1,fract f2,fract sum)
{	
	printf("The sum of both the fractions %d/%d and %d/%d is %d/%d .\n",f1.n,f1.d,f2.n,f2.d,sum.n,sum.d);
}

int main()
{   
	fract f1,f2,s;
	int g;
	f1=input();
	f2=input();
	s=calc(f1,f2);
            output(f1,f2,s);
	return 0;
}
