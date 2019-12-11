//********************************************************************
//*Initition au fonctions
//********************************************************************

#include <iostream>

using namespace std; 

//******Déclaration ***Fonction**perimetre*************************
        double perimetre(double rayon);
//*****Déclaration***Fonction**surface****************************
        double surface(double rayon);
//*****Déclaration***Fonction**PI********************************
        double pi(void);
//**********Début*du*programme*principal       
int main ()
{
        double r;
        
        cout << "Introduire le rayon du cercle (en cm)";
        
        cin >> r;
        
        cout << "La surface du disque est de :" << surface(r) << "cm" << endl;
        
        return 0;
}
//*************Définition*De*la*fonction*surface*****************
        double surface (double rayon)
        
{

        return   pi()*rayon*rayon;
 
}     
 //****************Définition*de*la*fonction*perimetre************
        double perimetre (double rayon)
 
{

    return  2*pi()*rayon;
    
}    
  
//*********Définition*De*la*fonction*PI*************************
        double pi(void)
        
{
        return  3.14159265;
}      

