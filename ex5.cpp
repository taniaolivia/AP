#include <iostream>

int main()
{
    double lepoids, lataille, limc ;
    std::cout <<"Quel est votre poids? ";
    std::cin >> lepoids;
    std::cout <<"Quel est votre taille? ";
    std::cin >> lataille;
    
    limc = ((lepoids)/((lataille*lataille)/10000));
    
    std::cout << "Votre IMC = " << limc <<'\t';
   
    if (limc < 16.5)
    {
        std::cout <<"Dénutrition"<< std::endl;
    }
    else if (limc >= 16.5 && limc < 18.5)
    {
        std::cout <<"Maigreur"<< std::endl;
    }
    else if (limc >= 18.5 && limc < 25)
    {
        std::cout <<"Corpulence normale"<< std::endl;
    }
    else if (limc >= 25 && limc < 30)
    {
        std::cout <<"Surpoids"<< std::endl;
    }
    else if (limc >= 30 && limc < 35)
    {
        std::cout <<"Obésité modérée"<< std::endl;
    }
    else if (limc >= 35 && limc <= 40)
    {
        std::cout <<"Obésité sévère"<< std::endl;
    }
    else if (limc > 40)
    {
        std::cout <<"Obésité morbide ou massive"<< std::endl;
    }
    
    return 0;
    
}