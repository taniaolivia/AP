#include <iostream>
using namespace std;

int main()
{
    int leA, leB;
    cout << "A = ";
    cin >> leA;
    cout << "B = ";
    cin >> leB;
    char lOperation;
    cout << "Quelle l'opération? Add (+), Sous (-), Multi (*), div (/), modulo (%)" << '\n';
    cin >> lOperation;

    switch (lOperation)
    {
        case '+' : 
                cout << leA + leB;
                break;
        case '-' : 
                cout << leA - leB;
                break;
        case '*' : 
                cout << leA * leB;
                break;
        case '/' : 
                cout << leA / leB;
                break;
        case '%' : 
                cout << leA % leB;
                break;
    }
    return 0;

}