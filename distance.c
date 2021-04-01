#include<stdio.h>
#include<math.h>
float input()
{
    float a; 
    printf("Enter a number:\n");
    scanf("%f", &a);
    return a;
}

float find_distance(float x1, float y1, float x2, float y2)
{
    float d;
    d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return d;
}

void output(float a)
{
    printf("The result is %f", a);
}

int main()
{
    float x1, y1, x2, y2;
    x1 = input();
    y1 = input();
    x2 = input();
    y2 = input();
    float z = find_distance(x1, y1, x2, y2);
    output(z);
    return 0;
}
