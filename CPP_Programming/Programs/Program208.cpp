// Check how many times digit occures/frequency

// Input : 7985674

// Output: 4 occures 1 times
//         5 occures 1 times
//         6 occures 1 times
//         7 occures 2 times
//         8 occures 1 times
//         9 occures 1 times


#include<iostream>
using namespace std;

class DigitX
{
    public:
        int iNo;

        DigitX()
        {
            iNo = 0;
        }
        DigitX(int i)
        {
            iNo = i;
        }

        void DisplayFrequency()
        {
            int iTemp = iNo;
            int iDigit = 0;
            int Frequency[10] = {0};

            while (iTemp != 0)
            {
                iDigit = iTemp % 10;
                Frequency[iDigit]++;
                iTemp = iTemp / 10;
            }

            for(int iCnt = 0; iCnt < 10; iCnt++)
            {
                if(Frequency[iCnt]>0)
                {
                    cout<<iCnt<<" occurs at "<<Frequency[iCnt]<<" times "<<"\n";
                }
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Please enter number : "<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    obj.DisplayFrequency();


    return 0;
}
