#include <iostream>

int main()
{
    int leNb50,leNb20, leNb10, leSomme;
    std::cout <<"La Somme ?" <<'\t';
    std::cin >> leSomme;
    leNb50 = leSomme/50; 
    leSomme = leSomme%50;
    leNb20 = leSomme/20; 
    leSomme = leSomme%20;
    leNb10 = leSomme/10;
    leSomme = leSomme%10;
    std::cout <<"50 =" << leNb50 <<'\n'
              <<"20 =" << leNb20 <<'\n'
              <<"10 =" << leNb10 << std::endl;

    return 0;









}