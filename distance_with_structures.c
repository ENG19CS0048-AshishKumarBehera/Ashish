#include <stdio.h>
#include<math.h>

struct point
{
    float x,y;
};

typedef struct point Point1;

Point1 input()
{
    Point1 p;
    printf("Enter abscissa : ");
    scanf("%f",&p.x);
    printf("Enter ordinate : ");
    scanf("%f",&p.y);
    return p;
}

float distance(Point1 p1,Point1 p2)
{
    float dist;
    dist = sqrt(pow(((p2.x)-(p1.x)),2)+pow(((p2.y)-(p1.y)),2));
    return dist;
}

void output(Point1 p1,Point1 p2,float distance)
{
    printf("The distance between (%.3f,%.3f) and (%.3f,%.3f) is %.3f .\n",(p1.x),(p1.y),(p2.x),(p2.y),distance);
       
}

int main()
{
    Point1 p1,p2;
    float d;
    p1=input();
    p2=input();
    d=distance(p1,p2);
    output(p1,p2,d);

    return 0;
}
