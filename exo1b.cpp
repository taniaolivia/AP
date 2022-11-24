#include <iostream>

int main()
{
    int leA, leB;
    std::cout <<" A = ";
    std::cin >> leA;
    std::cout <<" B = ";
    std::cin >> leB;
    char lOperation;
    std::cout << "Quelle opération? add(+), sous(-), mult(*), div(/), reste(%)";
    std::cin >> lOperation;
    switch (lOperation)
    {
        case '+' :
            std::cout << leA + leB;
            break;
        case '-' :
            std::cout << leA - leB;
            break;
        case '*' :
            std::cout << leA * leB;
            break;
        case '/' :
            std::cout << leA / leB;
            break;
        case '%' :
            std::cout << leA % leB;
            break;
    }
    return 0;
    
}