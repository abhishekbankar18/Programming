#include<iostream>
using namespace std;

int Addition(double i, double j)
{
    double Ans = 0.0;
    Ans = i + j;

    return Ans;
}

int main()
{
    double a = 11.9, b = 10.1, ret = 0.0;

    ret = Addition(a,b);

    cout<<"Addition is : "<<ret<<"\n";

    return 0;
}