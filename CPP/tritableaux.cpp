
//  TP-Tableaux
//
//  Created by sylvain guilbert on 01/12/2019.
//  Copyright © 2019 PPR. All rights reserved.
//

#include <iostream>
#include <time.h>

using namespace std; 
// Déclaration des fonctions

void tri_bulle(int tableau[],int taille);

void tri_bulle_optimise(int tableau[],int taille);

void afficheTableau(int tableau[], int taille);

void tri_par_selection(int tableau[],int taille);

//A vous de jouer ajoutez les déclarations manquantes

int main() 
{
   
   
   /************
    question 1
    *************/
    //cout << "Tri à bulle..." << endl;
    //int tab[8] = {12,1,4,5,168,58,70,2};
    //afficheTableau(tab, 8);
    //tri_bulle(tab,8);
    //afficheTableau(tab, 8);
   
   
    cout << "Tri par sélection" << endl;
    int tab[8] = {12,1,4,5,168,58,70,2};
    afficheTableau(tab, 8);
    tri_bulle(tab,8);
    afficheTableau(tab, 8);
   
   /************
    question 2
    *************/
    //cout << std::endl << "Tri à bulle optimisé..." << endl;
    //int tab2[] = {12,1,4,5,168,58,70,2};
    //afficheTableau(tab2, 8);
    //tri_bulle_optimise(tab2,8);
    //afficheTableau(tab2, 8);
   
   /************
    question 3
    *************/
    //cout << std::endl << "Tri par insertion..." << std::endl;
    //int tab3[] = {12,1,4,5,168,58,70,2};
    //afficheTableau(tab3, 8);
    //tri_insertion(tab3,8);
    //afficheTableau(tab3, 8);
   
   /************
    question 4
    *************/
//   srand(time(NULL)); //initialisation de la seed
//   int tableau[100], tableau2[100], tableau3[100], tableau4[100];

//   for(int i=0;i<100;i++) // remplissage avec des valeur au hazard
//   {
//      tableau [i]=rand();
//
//   }
//   //Duplication des tableau
//   memcpy( tableau, tableau2, sizeof(tableau) );
//   memcpy( tableau, tableau3, sizeof(tableau) );
//   float temps;
//   clock_t t1, t2;
//   // mesure du temps écoulé pour tri_bulle();
//   t1 = clock();
//   tri_bulle(tableau2,100);
//   t2 = clock();
//   temps = (float)(t2-t1)/ ( CLOCKS_PER_SEC / 1000 );
//   std::cout << "temps tri à bulle opti = " << temps << " ms" << std::endl;

   // A vous de jouer pour les autres tri (utilisez tableauX)
   
   
   
   
   return 0;
}

// implémentation des fonctions
/********
 Fonction de tri à bulle simple
 *********/
void tri_bulle(int tableau[],int taille)
{
   int i;int compt=0;int stock=0;
   
   do
   
    {

       for (i=0;i<taille;i++)

        {
        if (tableau[i]  >   tableau[i+1])
               {
            
                compt=0;stock=tableau[i];
                tableau[i]=tableau[i+1];
                tableau[i+1]= stock;
                compt+1;
               }   
        }
     
    }while(compt --);
} 
 
 
//Fonction  tri par sélection****************
//**********\

void tri_par_selection(int tableau[],int taille)
{
    int stock=0,indice;int i;
    
    for(int i = 0;i<taille +1 ;i++)
 {  
        indice =1;
        
        for(int j=i+1;i<=taille;i++)
       {
             if (tableau[j]<tableau[indice])
                    {
                        indice=j;
                    }
        }
    if (indice!=i)
    {
            stock=tableau[indice];
            tableau[indice]=tableau[i];
            tableau[i]=stock;
    }

 }

}
 
void tri_bulle_optimise(int tableau[],int taille)
{
   //A vous de jouer
}

/********
 Fonction de tri par insertion
 *********/
//A vous de jouer

/**************
 Affiche un tableau sur une ligne séparé par des |
 ***************/
void afficheTableau(int tableau[], int taille)
{
    for (int i=0;i<taille;i++)
    {
        cout << tableau[i]<< "|";

     }
             cout << endl;
}
