/*
 Conversion en majuscule
 */
#include <iostream>

using namespace std;

void minusculesVersMajuscules(char chaine[]);

int main() {
   
   char chaine[255];
   
   cout << "Tapez une chaîne de caractères à transposer en majuscules : " << endl;
   cin >> chaine;
   
   cout << chaine;
   
   minusculesVersMajuscules(chaine);
   
   cout << "La même chaîne en majuscules est : " << chaine << endl;
   return EXIT_SUCCESS;
}


/**
 Converti une chaine en majuscules

 @param chaine la chaine à convertir
 */
void minusculesVersMajuscules(char chaine[]) 
{

    int v=0; 
        for (v=0; chaine[v] !=  '\0' ; v ++)
         {        
            if  (chaine[v] >= 'a'   &&  chaine[v] <= 'z')
            chaine[v] -= 'a' - 'A';
            
         }
  
}

