#include <iostream>
using namespace std;

int main()
{
    int leA, leB, leC, leMin;
    cout << "A = " ;
    cin >> leA;
    cout << "B = " ;
    cin >> leB;
    cout << "C = " ;
    cin >> leC;

    if (leA < leB)
    {
        leMin = leA;
    }
    else 
    {
        leMin = leB;
    }
    if (leC < leMin)
    {
        leMin = leC;
    }
    cout << "La plus petite valuer de trois variables saisies = " << leMin << endl;

    return 0;






}