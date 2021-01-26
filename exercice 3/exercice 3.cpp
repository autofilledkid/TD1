#include <iostream>
#include <string>
#include <algorithm>
using namespace std;



void TrierTableau(int nombre)
{
    int tableau[] = { 1, 3, 4, 7, 9 };
    const int taille = sizeof(tableau) / sizeof(tableau[0]); //https://stackoverflow.com/questions/4839626/element-count-of-an-array-in-c
    const int tailleNouveauTableauTrier = taille + 1;
    int nouveauTableau[tailleNouveauTableauTrier];

    for (int i = 0; i < taille; i++)
    {
        nouveauTableau[i] = tableau[i];
    }
   
    nouveauTableau[taille] = nombre;

    sort(nouveauTableau,nouveauTableau+tailleNouveauTableauTrier);
    for (int n : nouveauTableau) 
    {
        cout << n << endl;
    }

}

int demanderEntier() // le code de cette fonction vient partiellement de cette video youtube https://www.youtube.com/watch?v=YIX7UhIKEIk&ab_channel=profgustin
{
    int nombre;
    cout << "Entrez un nombre entier: ";

    while (!(cin >> nombre))
    {
        cout << "L'entrée est invalide, veuillez reessayer.";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //https://stackoverflow.com/questions/10349857/how-to-handle-wrong-data-type-input
    }
    
    return nombre;
}


int main()
{
    int nombre = demanderEntier();
    TrierTableau(nombre);
}	



