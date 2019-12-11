#include <iostream>
#include <math.h>

using namespace std ;

//Programme-------Rentrer successivement-les-valeurs-de-chaque-bit------------------------------------ 
int main()

{
        int VBinaire[8];
              
            for (int i=0;i<8;i++)
            
        {   
    
            cout <<"Bit :" << "=";
            cin >> VBinaire[i];
            
            if (VBinaire[i] != 1 and VBinaire[i] != 0)
            {
                cout << "Entrer 0 ou 1" << endl;
                i--;
            }
            
        }  
        
                cout << "Voici toutes les valeurs Rentrée" << endl; 
               


        for(int  i=0;i<8;i++)
        {
    
                cout << "="<< VBinaire[i] << endl;
                

        }
        //Programme-----------puissance------------------------------------------------
        int resultat = 0;
        int Power= 7;
        for(int i=0;i<8;i++)
        {
           
            resultat = resultat + VBinaire[i] * pow( 2 , Power); 
            Power --;
        }
        
        cout << "Resultat : " << resultat << endl;
        return 0;
    
}

