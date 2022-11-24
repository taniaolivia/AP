#include <iostream>
#include <fstream>
#include <string>

//uneTaille = la taille de la figure
//unDecalage = le décalage ou la margine de la ligne souhaitée
//unCaractere = le caractère souhaité
//unRemplissage = le remplissage de la figure (fill ou none)

void afficherCarre(int uneTaille, int unDecalage, std::string unCaractere, std::string unRemplissage)
{
    for (int leI = 0; leI < uneTaille; leI++) // le boucle for pour le nombre du ligne souhaité
    {
        for (int leDecalage = 0; leDecalage < unDecalage; leDecalage++) // le boucle for pour faire le décalage souhaité
        {
            std::cout << " ";
        }
        if (unRemplissage == "fill") // la condition si le remplissage est "fill"
        {
            for (int leJ = 0; leJ < uneTaille; leJ++) // le boucle qui va remplir toutes même pour l'intérieur de la figure
            {
                std::cout << unCaractere;
            }
        }
        else
        {
            if (leI == 0 || leI == uneTaille - 1) // la condition du remplissage "fill" pour la prémière ligne et la dérnière ligne pour faire le contour de la figure
            {
                for (int leJ = 0; leJ < uneTaille; leJ++) // le boucle va remplir seulement la prémière ligne et la dérnière ligne
                {
                    std::cout << unCaractere;
                }
            }
            
            else // la condition pour laisse l'intérieur vide
            {
                std::cout << unCaractere;
                for (int leJ = 1; leJ < uneTaille - 1; leJ++) // le boucle va remplir l'intérieur vide sauf la prémière ligne et la dérnière ligne
                {
                    std::cout << " ";
                }  
                std::cout << unCaractere;
            }
 
        }
        std::cout << std::endl; // pour retour à la ligne
    }
}


void afficherTriangleRectangle(int uneTaille, int unDecalage, std::string unCaractere, std::string unRemplissage)
{
    for (int leI = 0; leI < uneTaille; leI++) // le boucle for pour le nombre du ligne souhaité
    {
        for (int leDecalage = 0; leDecalage < unDecalage; leDecalage++) // le boucle for pour faire le décalage souhaité
        {
            std::cout << " ";
        }
        if (unRemplissage == "fill") // la condition si le remplissage est "fill"
        {
            for (int leJ = 0; leJ < leI; leJ++) // le boucle qui va remplir toutes même pour l'intérieur de la figure
            {
                std::cout << unCaractere;
            }
        }
        else
        {
            if (leI == 0 || leI == uneTaille - 1) // la condition du remplissage "fill" pour la prémière ligne et la dérnière ligne pour faire le contour de la figure
            {
                for (int leJ = 0; leJ < leI; leJ++) // le boucle va remplir seulement la prémière ligne et la dérnière ligne
                {
                    std::cout << unCaractere;
                }
                std::cout << unCaractere;
            }

            else // la condition pour laisse l'intérieur vide
            {
                std::cout << unCaractere;
                for (int leJ = 0; leJ < leI - 1; leJ++) // le boucle va remplir l'intérieur vide sauf la prémière ligne et la dérnière ligne
                {
                    std::cout << " ";
                }  
                std::cout << unCaractere;
            }
 
        }
        std::cout << std::endl; // pour retour à la ligne
    }
}

void afficherTriangleRectangleInverse(int uneTaille, int unDecalage, std::string unCaractere, std::string unRemplissage)
{
        for (int leI = uneTaille; leI > 0; leI--) // le boucle for pour le nombre du ligne souhaité
    {
        for (int leDecalage = 0; leDecalage < unDecalage; leDecalage++) // le boucle for pour faire le décalage souhaité
        {
            std::cout << " ";
        }
        if (unRemplissage == "fill") // la condition si le remplissage est "fill"
        {
            for (int leJ = 0; leJ < leI; leJ++) // le boucle qui va remplir toutes même pour l'intérieur de la figure
            {
                std::cout << unCaractere;
            }
        }
        else
        {
            if (leI == 1 || leI == uneTaille) // la condition du remplissage "fill" pour la prémière ligne et la dérnière ligne pour faire le contour de la figure
            {
                for (int leJ = 0; leJ < leI; leJ++) // le boucle va remplir seulement la prémière ligne et la dérnière ligne
                {
                    std::cout << unCaractere;
                }
            }

            else // la condition pour laisse l'intérieur vide
            {
                std::cout << unCaractere;
                for (int leJ = 1; leJ < leI - 1; leJ++) // le boucle va remplir l'intérieur vide sauf la prémière ligne et la dérnière ligne
                {
                    std::cout << " ";
                }  
                std::cout << unCaractere;
            }
 
        }
        std::cout << std::endl; // pour retour à la ligne
    }
}

void afficherTriangle(int uneTaille, int unDecalage, std::string unCaractere, std::string unRemplissage)
{
    for (int leI = 0; leI < (uneTaille/2) + (uneTaille%2); leI++) // le boucle de hauteur avec une condition pour trouver la hauteur max
    {
        for (int leDecalage = 0; leDecalage < unDecalage + leI; leDecalage++) // le boucle for pour faire le décalage souhaité
        {
            std::cout << " ";
        }
        for (int leJ = 0; leJ < (uneTaille - leI*2); leJ++) // le boucle de ligne qui utilise leI pour avoir la pointe du triangle
        {
            if (unRemplissage == "fill") // la condition si le remplissage est "fill"
            {
                std::cout << unCaractere;
            }
            else 
            {
                if (leJ == 0 || leJ == (uneTaille - 1) - (leI*2) || leI == 0) // la condition du contour de la figure
                {
                    std::cout << unCaractere;
                }
                else // la condition pour laisse l'intérieur vide
                {
                    std::cout << " ";
                }
            }
        }
    std::cout << std::endl; // pour retour à la ligne
    }
}

void afficherTriangleInverse(int uneTaille, int unDecalage, std::string unCaractere, std::string unRemplissage)
{
    for (int leI = (uneTaille/2) + (uneTaille%2); leI > -1; leI--) // le boucle de hauteur avec une condition pour trouver la hauteur max
    {
        for (int leDecalage = 0; leDecalage < unDecalage + leI; leDecalage++) // le boucle for pour faire le décalage souhaité
        {
            std::cout << " ";
        }
        for (int leJ = 0; leJ < (uneTaille - leI*2); leJ++) // le boucle de ligne qui utilise leI pour avoir la pointe du triangle
        {
            if (unRemplissage == "fill") // la condition si le remplissage est "fill"
            {
                std::cout << unCaractere;
            }
            else 
            {
                if (leJ == 0 || leJ == ((uneTaille - 1) - (leI*2)) || leI == 0) // la condition du contour de la figure
                {
                    std::cout << unCaractere;
                }
                else // la condition pour laisse l'intérieur vide
                {
                    std::cout << " ";
                }
            }
        }
    std::cout << std::endl; // pour retour à la ligne
    }
}

void afficherLosange(int uneTaille, int unDecalage, std::string unCaractere, std::string unRemplissage)
{
    for (int leI = (uneTaille/2) + (uneTaille%2); leI > -1; leI--) // le boucle de hauteur avec une condition pour trouver la hauteur max
    {
        for (int leDecalage = 0; leDecalage < unDecalage + leI; leDecalage++) // le boucle for pour faire le décalage souhaité
        {
            std::cout << " ";
        }
        for (int leJ = 0; leJ < (uneTaille - leI*2); leJ++) // le boucle de ligne qui utilise leI pour avoir la pointe du triangle
        {
            if (unRemplissage == "fill") // la condition si le remplissage est "fill"
            {
                std::cout << unCaractere;
            }
            else 
            {
                if ((leJ == 0) || leJ == ((uneTaille - 1) - (leI*2))) // la condition du contour de la figure
                {
                    std::cout << unCaractere;
                }
                else // la condition pour laisse l'intérieur vide
                {
                    std::cout << " ";
                }
            }
        }
        std::cout << std::endl; // pour retour à la ligne
    }

    for (int leI = 0; leI < (uneTaille/2) + (uneTaille%2); leI++) // le boucle de hauteur avec une condition pour trouver la hauteur max
    {
        for (int leDecalage = 0; leDecalage < unDecalage + leI; leDecalage++) // le boucle for pour faire le décalage souhaité
        {
            std::cout << " ";
        }
        for (int leJ = 0; leJ < (uneTaille - leI*2); leJ++) // le boucle de ligne qui utilise leI pour avoir la pointe du triangle
        {
            if (unRemplissage == "fill") // la condition si le remplissage est "fill"
            {
                std::cout << unCaractere;
            }
            else 
            {
                if ((leJ == 0) || leJ == ((uneTaille - 1) - (leI*2))) // la condition du contour de la figure
                {
                    std::cout << unCaractere;
                }
                else // la condition pour laisse l'intérieur vide
                {
                    std::cout << " ";
                }
            }
        }
    std::cout << std::endl; // pour retour à la ligne
    }
}

int main ()
{
    int laTaille, leDecalage;
    std::string laForme, leCaractere, leRemplissage;
    std::ifstream leFichier("figure.txt"); // le fichier qui va être lu
    while (! leFichier.eof())
    {
        getline(leFichier, laForme); // la ligne qui désigne la forme
        leFichier >> laTaille; leFichier.ignore(); // la ligne qui donne la taille de la forme
        leFichier >> leDecalage; leFichier.ignore(); // la ligne qui donne le décalage par rapport au bord
        getline(leFichier, leCaractere); // la ligne qui donne le caractère à afficher
        getline(leFichier, leRemplissage); // la ligne qui donne le remplissage de la figure (fill ou none)

        if (laForme == "carre") // la condition si la forme est "carré"
        {
            afficherCarre(laTaille, leDecalage, leCaractere, leRemplissage); // le fonction pour afficher un carré
        }
        else if (laForme == "triangle rectangle") // la condition si la forme est "triangle rectangle"
        {
            afficherTriangleRectangle(laTaille, leDecalage, leCaractere, leRemplissage); // le fonction pour afficher un triangle rectangle
        }
        else if (laForme == "triangle rectangle inverse") // la condition si la forme est "triangle rectangle inverse"
        {
            afficherTriangleRectangleInverse(laTaille, leDecalage, leCaractere, leRemplissage); // le fonction pour afficher un triangle rectangle inverse
        }
        else if (laForme == "triangle") // la condition si la forme est "triangle"
        {
            afficherTriangle(laTaille, leDecalage, leCaractere, leRemplissage); // le fonction pour afficher un triangle
        }
        else if (laForme == "triangle inverse") // la condition si la forme est "triangle inverse"
        {
            afficherTriangleInverse(laTaille, leDecalage, leCaractere, leRemplissage); // le fonction pour afficher un triangle inverse
        }
        else if (laForme == "losange") // la condition si la forme est "losange"
        {
            afficherLosange(laTaille, leDecalage, leCaractere, leRemplissage); // le fonction pour afficher un losange
        }
    }
    leFichier.close();
    return 0;
}