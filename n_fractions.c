#include <stdio.h>

struct fraction
{
 int num;
 int den;
};

typedef struct fraction Frac;

Frac input();
Frac sum(Frac F1, Frac F2);
int gcd(int x, int y);
Frac compute();
int output(Frac sum);

int gcd(int x, int y)
{
 int i, flag;
 for(i = 1; i <= x && i <= y; i++)
   {
       if(x % i == 0 && y % i == 0)
           flag = i;
   }
   return flag;
}
 
Frac sum(Frac F1, Frac F2)
{
 Frac F3;
 int c;
 F3.num = ((F1.num*F2.den) + (F2.num*F1.den));
 F3.den = F1.den*F2.den;
 c = gcd(F3.num,F3.den);
 F3.num = F3.num/c;
 F3.den = F3.den/c;
 return F3;
}
 
Frac compute()
{
 int terms, i;
 Frac flag, z;
 printf("Enter the no. of terms: \n");
 scanf("%d", &terms);
 Frac f[terms];
 for(i = 0; i < terms; i++)
{
   printf("Enter the fraction %d\n",i+1);
   f[i] = input();
 }
 if(terms==1)
{
   z = f[0];
 }
 else{
   flag = f[0];
   for(i = 0; i < terms-1; i++)
{
     z = sum(flag, f[i+1]);
     flag = z;
   }
 }
 return z;
}
 
int output(Frac sum)
{
 printf("The sum of the given fractions : %d/ %d\n",sum.num,sum.den);
 return 0;
}

int main()
{
 Frac flag;
 flag = compute();
 output(flag);
 return 0;
}
 
Frac input()
{
 Frac f;
 printf("Enter the numerator :\n ");
 scanf("%d", &f.num);
 printf("Enter the denominator :\n ");
 scanf("%d", &f.den);
 return f;
}
