#include<iostream>
#include <string>
#include<vector>
using namespace std;




int main()
{
    string phrase;

    vector<char> mot;

    cout << "Saisissez une phrase :\n";
    getline(cin, phrase);

    int i = 0;
    int compteurLettre = 0;
    int longueurPhrase = phrase.length();

    / for (int i = 0; i < longueurPhrase; i++)
    {
        if (phrase[i] != ' ')
        {
            compteurLettre++;
            mot[i] += phrase[i];
            cout << phrase[i];


        }
        if (phrase[i] == ' ')
        {
            break;
        }

        cout << mot[0];
        cout << mot[1];


    } /
}
