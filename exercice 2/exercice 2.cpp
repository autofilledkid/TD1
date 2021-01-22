// reading a text file
#include <iostream>
#include <fstream>
#include <string>
#include<cmath>
#include <iomanip> 

using namespace std;



double calcule(double precision)
{
	double premierTerme = 1;
	double prochainTerme ;
	double reponse = premierTerme;
	prochainTerme = sqrt(2 + premierTerme);
	
	
	while (prochainTerme - reponse > precision)
	{
		prochainTerme = sqrt(2 + premierTerme);
		reponse = premierTerme;
		premierTerme = prochainTerme;
	}
	
	return reponse;
}

int main() 
{  
	int nombreApresVirgule = 3;
	double precision = pow(10, -nombreApresVirgule);
	
	double reponse = calcule(precision);

	cout << "la limite de cette suite recurrente avec une precision de " << nombreApresVirgule << 
		" chiffres apres la virgule est " <<fixed <<reponse;

}