#include <stdio.h>
float input()
{
    float a; 
    printf("Enter a number:\n");
    scanf("%f", &a);
    return a;
}

float find_volume(float a, float b, float c)
{
    float volume;
    volume = ((a*b*c)+(b/c))*1/3;
    return volume;
}

void output(float a)
{
    printf("The result is %f",a);
}

int main()
{
    float x, y, z, volume;
    x = input();
    y = input();
    z = input();
    volume = find_volume(x, y, z);
    output(volume);
    return 0;
}
