/*
 chaine de caractères
 essai sur la longueur d'une chaîne
 */

#include <iostream>
#include <cstring>


using namespace std;

int main() {
   
   char mot[8];
   
   cout << "donnez un mot" << endl;
   cin.getline(mot,8); 
   cout << mot << endl;
      
   return 0;
}


