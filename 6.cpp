#include <iostream>
using namespace std;

int main()
{
    int leX, leY;
    cout << "X = ";
    cin >> leX;

    switch (leX)
    {
        case -1 : if (leX < 0)
                leX++;
                if (leX < 0)     
                    {
                        cout << "Y = 1";
                    }
                if (leX >= 0)
                    {
                        cout << "Y = 4";
                    }
        case 0 :
        case 1 : if (leX >= 0)
                   leX++;
                    if (leX < 3)
                        {
                            leY = leX;
                            leY++;
                            cout << "Y = " << leY;
                        }
                    if (leX >= 3)
                        {
                            leY = 0;
                            leY++;
                            cout << "Y = " << leY;
                        }
        default : ;
    }
    
    return 0;

}