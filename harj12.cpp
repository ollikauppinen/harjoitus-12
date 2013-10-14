/**********************************************************
*Tehtävä: Harjoitus12
*Tekijä: Olli Kauppinen
*PVM: 08.10.2013
*Kuvaus:
*Tee ohjelma, joka kysyy käyttäjältä kokonaisluvun väliltä 1-9 ja
*tulostaa vastauksen perusteella seuraavan kuvion (jos vastaus on 6):
*
*1
*22
*333
*4444
*55555
*666666
*
*Jokainen numero tulee tulostaa toistorakenten avulla erikseen lauseella:
*cout << rivinro;
*
* Versio 1.0 H4718 08.10.2013
***********************************************************/

#include<iostream>
using namespace std;

int main()
{	
	int luku = 0;

	cout << "Anna kokonaisluku 1-9\n";
	cin >> luku;
	cout << endl;

	for (int count=1; count<=luku; count++)
	{
		for (int row=1; row<=count; row++)
		{
		cout << count;
		}
	cout << endl;
	}

}