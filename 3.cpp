#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int leX, leY;
    cout << "X = ";
    cin >> leX;
    
    leY = pow(-1,leX);
    
    if (leY == 1)
    {
        cout << "Y = 1";
    }

    if (leY == -1)
    {
        cout << "Y = -1";
    }

    return 0;


}