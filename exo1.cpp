#include<iostream>
#include <string>
using namespace std;


void trouverMots(string phrase)
{
    string mot;
    string motCourt;
    string motLong;
    double compteurLettre = 0.0;
    double compteurmots = 0.0;
    int longueurPhrase = phrase.length();

    for (int i = 0; i < longueurPhrase; i++)
    {
     
        if (phrase[i] != ' ')
        {
            compteurLettre++;
            mot += phrase[i];

        }
        if (phrase[i] == ' ' || i+1 == longueurPhrase)
        {   
            compteurmots++;
            if (motCourt.length() == 0)
            {
                motCourt = mot;
            }
            if (mot.length() <= motCourt.length())
            {
                motCourt = mot;
               
            }

            if (mot.length() >= motLong.length())
            {
                motLong = mot;

            }

            mot = "";
        }

    }

    cout << "le mot le plus court est : "<<motCourt<<"\n";
    cout << "le mot le plus Long est : " << motLong << "\n";
    cout << "La longueur moyenne est : " << compteurLettre / compteurmots << " lettres\n";
    
}


int main()
{
    string phrase;
    cout << "Saisissez une phrase :\n";
    getline(cin, phrase);
    trouverMots(phrase);
 
}