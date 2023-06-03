// Write a program which accept radius of circle from user and calculate its area.
// Consider value of PI as 3.14 (Area = PI * Radius * Radius)

// Input : 5.3
// Output : 88.2026

// Input : 10.4
// Output :  339.6224



#include<stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    printf("Radius is %f\n",fRadius);

    dArea = (float)(3.14 * fRadius * fRadius);

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter number\n");
    scanf("%f",&fValue);

    printf("Radius is %f\n",fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %lf\n",dRet);

    return 0;
}