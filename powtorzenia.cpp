#include <iostream>
#include <fstream>

using namespace std;

int main ()

{
	int tab[1000];
	int i;
	int licznik=0;
	string linia;
    fstream plik;
 
    plik.open("aa.txt", ios::in);
    if(plik.good() == true)
    {
        while(!plik.eof())
        {
            getline(plik, linia);
            cout << linia << endl;
        }
        plik.close();
	}   
	for (int i=0; i<licznik; i++)
{
 if( tab[ i ] == tab[ i + 1 ] ) 
 licznik++;	
 else 
 {
 cout << tab[ i ] << " wystepuje " << licznik << " razy" << endl;
 licznik = 1;
 }
}
        ofstream plik2;              
    plik2.open("plikjson.txt",ios::out); 
	plik2<<"[  \n { \n \"Liczba 1\" : \" ";
	plik2<<"[  \n { \n \"Liczba 2\" : \" ";
	plik2<<"[  \n { \n \"Liczba 3\" : \" ";
	plik2<<"[  \n { \n \"Liczba 4\" : \" ";       
    plik2<<i;
	plik2<<endl;    
        
        cout<<plik2<< tab[ i ] << " wystepuje " << licznik << " razy" << endl;
        
        	return 0;
}
	


