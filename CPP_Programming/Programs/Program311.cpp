#include<iostream>
using namespace std;

template <class T>
void Display(T Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    
    cout<<"\n\n";
}

int main()
{
    int Data[] = {10, 20, 30, 40};
    Display(Data,4);

    double DataD[] = {10.9, 20.1, 30.4, 40.5};
    Display(DataD,4);

    char DataC[] = {'a','b','e','f','g'};
    Display(DataC,5);

    return 0;
}