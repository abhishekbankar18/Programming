// Write a program which accept temperature in Fahrenhit and convert it into celsius.
// (1 celsius = (Fahrenhit - 32) * (5/9))

// Input : 10
// Output : -12.2222  (10 - 32) * (5/9)


// Input : 34
// Output : 1.1111  (34 - 32) * (5/9)

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;
    
    printf(" Temperature in Fh is %f\n",fTemp);

    dCelsius = ((fTemp - 32)*5)/9;

    return dCelsius;

}


int main()
{
    float fValue = 0.0; 
    double dRet = 0.0;

    printf("Enter temperature in Fahrenhit\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Conversion of %f Faherehit to Celsius is : %lf\n",fValue,dRet);

    return 0;
}