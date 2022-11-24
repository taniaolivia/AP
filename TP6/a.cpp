#include <iostream>
#include <string>
#include <fstream>


//fonction qui affiche un triangle selon 'unetaille' qui correspond à la taille de la base
// 'unsymbole' sera le caractere pour faire la lafigure
// 'undecalage' sera le décalage voulu par rapport a la marge de gauche
// 'unremplissage' qui nous servira a savoir si nous voulons que l'interieur de la figure soit remplit ou non
void affichertriangle (int unetaille, int undecalage, std::string unsymbole, std::string unremplissage)
{
    for (int leI = 0; leI < (unetaille / 2) + (unetaille % 2); leI++)//boucle de hauteur avec condition pour trouvée la hauteur max

  {

    for (int ledecalge=0; ledecalge<undecalage+leI; ledecalge++)//boucle for qui sert à faire le décalage souhaité
        {
            std::cout<<" ";
        }
    for (int leJ = 0; leJ < (unetaille - leI*2) ; leJ++)//boucle de ligne utilisation du leI pour avoir la pointe du triangle
    {
      if (unremplissage == "fill")//condition remplissage
      {
        std::cout << unsymbole;
      }
      else
      {
        if ((leJ == 0 ) || leJ == ((unetaille - 1) - (leI * 2)) || leI == 0 )//condition contour
        {
          std::cout << unsymbole;
        }
        else
        {
          std::cout << " ";
        }
      }
    }
    std::cout <<std::endl;//retour a la ligne
  }

}


//fonction qui affiche un triangle rectangle inversé selon 'unetaille' qui correspond à la taille de la base
// 'unsymbole' sera le caractere pour faire la lafigure
// 'undecalage' sera le décalage voulu par rapport a la marge de gauche
// 'unremplissage' qui nous servira a savoir si nous voulons que l'interieur de la figure soit remplit ou non
void affichertrianglerectangleinverse (int unetaille, int undecalage, std::string unsymbole, std::string unremplissage)
{
    for (int leI=unetaille; leI>0; leI--)
    {
        for (int ledecalge=0; ledecalge<undecalage; ledecalge++)//boucle for qui sert à faire le décalage souhaité
        {
            std::cout<<" ";
        }
        if (unremplissage=="fill")//condition si nous voulons un remplissage 'fill'
        {
            for (int leJ=0; leJ<leI; leJ++)//boucle for qui va remplir toute la figure même de l'intérieur
            {
                std::cout<<unsymbole;
            }
        }
        else//nous laissons un remplisagge 'fill'pour la premiere et derniere ligne pour faire le contour de la figure
        {
            if (leI==unetaille ||leI==1)
            {
                for (int leJ=0; leJ<leI; leJ++)
                {
                    std::cout<<unsymbole;
                }
            }
              else //sinon nous laissons l'interieur vide
                {
                    std::cout<<unsymbole;
                    for (int leJ=1; leJ<leI-1; leJ++)
                    {
                        std::cout<<" ";
                    }
                    std::cout<<unsymbole;
                }


        }
        std::cout<<std::endl; //nous faisons un espace pour passer a la ligne suivante
    }

}


//fonction qui affiche un triangle inversé selon 'unetaille' qui correspond à la taille de la base
// 'unsymbole' sera le caractere pour faire la lafigure
// 'undecalage' sera le décalage voulu par rapport a la marge de gauche
// 'unremplissage' qui nous servira a savoir si nous voulons que l'interieur de la figure soit remplit ou non
void affichertriangleinverse (int unetaille, int undecalage, std::string unsymbole, std::string unremplissage)
{
    for (int leI = (unetaille / 2) + (unetaille % 2); leI > -1; leI--)//
  {
    for (int ledecalge=0; ledecalge<undecalage+leI; ledecalge++)//boucle for qui sert à faire le décalage souhaité
        {
            std::cout<<" ";
        }
    for (int leJ = 0; leJ < (unetaille - leI*2) ; leJ++)
    {
      if (unremplissage == "fill")
      {
        std::cout << unsymbole;
      }
      else
      {
        if ((leJ == 0 ) || leJ == ((unetaille - 1) - (leI * 2)) || leI == 0 )

        {
          std::cout << unsymbole;
        }
        else
        {
          std::cout << " ";
        }
      }
    }
    std::cout <<std::endl;
  }

}


//fonction qui affiche un carre inversé selon 'unetaille' qui correspond à la taille des côtés
// 'unsymbole' sera le caractere pour faire la lafigure
// 'undecalage' sera le décalage voulu par rapport a la marge de gauche
// 'unremplissage' qui nous servira a savoir si nous voulons que l'interieur de la figure soit remplit ou non
void affichercarre (int unetaille, int undecalage, std::string unsymbole, std::string unremplissage)
{
    for (int leI=0; leI<unetaille; leI++)
    {
        for (int ledecalge=0; ledecalge<undecalage; ledecalge++)//boucle for qui sert à faire le décalage souhaité
        {
            std::cout<<" ";
        }
        if (unremplissage=="fill")//condition si nous voulons un remplissage 'fill'
        {
            for (int leJ=0; leJ<unetaille; leJ++)//boucle for qui va remplir toute la figure même de l'intérieur
            {
                std::cout<<unsymbole;
            }
        }
        else
        {
            if (leI==unetaille-1 ||leI==0)//nous laissons un remplisagge 'fill' pour la premiere et derniere ligne pour faire le contour de la figure
            {
                for (int leJ=0; leJ<unetaille; leJ++)
                {
                    std::cout<<unsymbole;
                }
            }
              else //sinon nous laissons l'interieur vide
                {
                    std::cout<<unsymbole;
                    for (int leJ=1; leJ<unetaille-1; leJ++)
                    {
                        std::cout<<" ";
                    }
                    std::cout<<unsymbole;
                }


        }
        std::cout<<std::endl;//nous faisons un espace pour passer a la ligne suivante
    }

}


//fonction qui affiche un triangle inversé selon 'unetaille' qui correspond à la taille de la base
// 'unsymbole' sera le caractere pour faire la lafigure
// 'undecalage' sera le décalage voulu par rapport a la marge de gauche
// 'unremplissage' qui nous servira a savoir si nous voulons que l'interieur de la figure soit remplit ou non
void affichertrianglerectangle (int unetaille, int undecalage, std::string unsymbole, std::string unremplissage)
{
    for (int leI=0; leI<unetaille; leI++)
    {
        for (int ledecalge=0; ledecalge<undecalage; ledecalge++)//boucle for qui sert à faire le décalage souhaité
        {
            std::cout<<" ";
        }
        if (unremplissage=="fill")//condition si nous voulons un remplissage 'fill'
        {
            for (int leJ=0; leJ<leI; leJ++)//boucle for qui va remplir toute la figure même de l'intérieur
            {
                std::cout<<unsymbole;
            }
        }
        else
        {
            if (leI==unetaille-1||leI==0)//nous laissons un remplisagge 'fill' pour la premiere et derniere ligne pour faire le contour de la figure
            {
                for (int leJ=0; leJ<leI; leJ++)
                {
                    std::cout<<unsymbole;
                }
                std::cout<<unsymbole;
            }
              else //sinon nous laissons l'interieur vide
                {
                    std::cout<<unsymbole;
                    for (int leJ=0; leJ<leI-1; leJ++)
                    {
                        std::cout<<" ";
                    }
                    std::cout<<unsymbole;
                }


        }
        std::cout<<std::endl;//nous faisons un espace pour passer a la ligne suivante
    }

}


//fonction qui affiche un losange inversé selon 'unetaille' qui correspond à la taille de la diagonale horizontale
// 'unsymbole' sera le caractere pour faire la lafigure
// 'undecalage' sera le décalage voulu par rapport a la marge de gauche
// 'unremplissage' qui nous servira a savoir si nous voulons que l'interieur de la figure soit remplit ou non
void afficherlosange (int unetaille, int undecalage, std::string unsymbole, std::string unremplissage)
{
   for (int leI = ((unetaille)/ 2) + (unetaille % 2); leI > 0; leI--)//
  {
    for (int ledecalge=0; ledecalge<undecalage+leI; ledecalge++)//boucle for qui sert à faire le décalage souhaité
        {
            std::cout<<" ";
        }
    for (int leJ = 0; leJ < (unetaille - leI*2) ; leJ++)
    {
      if (unremplissage == "fill")
      {
        std::cout << unsymbole;
      }
      else
      {
        if ((leJ == 0 ) || leJ == ((unetaille - 1) - (leI * 2)) || leI == 0 )

        {
          std::cout << unsymbole;
        }
        else
        {
          std::cout << " ";
        }
      }
    }
    std::cout << std::endl;
  }
  for (int leI = 0; leI < (unetaille / 2) + (unetaille % 2); leI++)//boucle de hauteur avec condition pour trouvée la hauteur max

  {

    for (int ledecalge=0; ledecalge<undecalage+leI; ledecalge++)//boucle for qui sert à faire le décalage souhaité
        {
            std::cout<<" ";
        }
    for (int leJ = 0; leJ < (unetaille - leI*2) ; leJ++)//boucle de ligne utilisation du leI pour avoir la pointe du triangle
    {
      if (unremplissage == "fill")
      {
        std::cout << unsymbole;
      }
      else
      {
        if ((leJ == 0 ) || leJ == ((unetaille - 1) - (leI * 2)))//condition contour
        {
          std::cout << unsymbole;
        }
        else
        {
          std::cout << " ";
        }
      }
    }
    std::cout <<std::endl;//retour a la ligne
  }
}


int main()
{
    //on déclare toutes les variables que l'on a besoin
    int lataille, undecalage;
    std::string unsymbole;
    std::string unremplissage;
    std::string lafigure;
    std::ifstream figure("figure.txt"); //on déclare ici le fichier que l'on va lire pour éxecuter le programme
    while (not figure.eof())//tant que nous ne sommes arrivé au bout du fichier
  {
    getline(figure,lafigure);              //la premiere ligne (chaine de caractere correspond ici a la figure souhaité)
    figure>>lataille;figure.ignore();      //la deuxieme correspond a la taille souhaitée
    figure>>undecalage;figure.ignore();    //la troisième correspond au décalage souhiaté
    getline(figure,unsymbole);             //la quatrième correspond au symbole voulu pour faire la figure
    getline(figure,unremplissage);         //la conquième pour savoir si l'on veut remplir ou non la figure ou la laisser vide de l'intérieur
    // ici nous allons associer chaque fonction crée a la figure voulu dans le fichier figure.txt
    if (lafigure=="carre")
    {
      affichercarre(lataille, undecalage, unsymbole, unremplissage);
    }
    else if (lafigure=="triangle rectangle")
    {
      affichertrianglerectangle(lataille, undecalage, unsymbole, unremplissage);
    }
    else if (lafigure=="triangle rectangle inverse")
    {
      affichertrianglerectangleinverse(lataille, undecalage, unsymbole, unremplissage);
    }
    else if (lafigure=="triangle")
    {
      affichertriangle(lataille, undecalage, unsymbole, unremplissage);
    }
    else if (lafigure=="triangle inverse")
    {
      affichertriangleinverse(lataille, undecalage, unsymbole, unremplissage);
    }
    else if (lafigure=="losange")
    {
      afficherlosange(lataille, undecalage, unsymbole, unremplissage);
    }
  }
   figure.close();
   return 0;
}
