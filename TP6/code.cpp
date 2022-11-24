#include <iostream>
#include <fstream>
#include <string>
void afficherTriangle(int uneTaille, int unDecalage, std::string unCaractere, std::string unRemplissage);
int main()
{
  afficherTriangle(6,2,"*","fill");
}
void afficherTriangle(int uneTaille, int unDecalage, std::string unCaractere, std::string unRemplissage)
{
    for (int leI = 0; leI < (uneTaille/2) + (uneTaille%2); leI++) // tinggi
    {
        for (int leDecalage = 0; leDecalage < unDecalage + leI; leDecalage++)
        {
            std::cout << " ";
        }
        for (int leJ = 0; leJ < (uneTaille - leI*2); leJ++)// alas
        {
            if (unRemplissage == "fill")
            {
                std::cout << unCaractere;
            }
            else 
            {
                if (leJ == 0 || leJ == (uneTaille - 1) - (leI*2) || leI == 0)
                {
                    std::cout << unCaractere;
                }
                else 
                {
                    std::cout << " ";
                }
            }
        }
    std::cout << std::endl;
    }
}