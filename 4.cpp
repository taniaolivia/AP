#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int leX, leY;
    cout << "X = ";
    cin >> leX;
    
    leY = pow(-1,leX);
   
    switch (leY)
    {
        case -1 : leY = -1;
                cout << "Y = -1";
                break;
        case 0 :
        case 1 : leY = 1;
                cout << "Y = 1";
                break;
        default : ;
    }
    return 0;
}