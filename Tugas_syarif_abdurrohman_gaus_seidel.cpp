#include <iostream>

using namespace std;


int main()
{
	
   cout<<"_____________________________________\n";
   cout<<"| File     : Tugas Metode Numerik   |\n";
   cout<<"| Metode   : Gauss Seidel           |\n";
   cout<<"| Nama     : Syarif Abdurrohman     |\n";
   cout<<"| Kelas    : TI-3F                  |\n";
   cout<<"|___________________________________|\n\n";
	
	float a,b,c;
	cout<< "masukan nilai Intensinya" << endl;
	cout<< "masukan nilai a=" ; cin >>a;
	cout<< "masukan nilai b=" ; cin >>b;
	cout<< "masukan nilai c=" ; cin >>c;
	cout<< "Inputan  |" <<a<< " "<<b<< " "<<c<<" "<<endl;
	
	for (float u=1; u<=20; u++)
	{
		a=(10-c-b)/2;
		b=(18-c-a)/4;
		c=(37-2*b-a)/6;
		
		cout<<"no." ; 
		cout<<u<<" ";
		cout<<a;cout<<" "<<b;cout<<" " <<c<<" "<<endl;
	}

}
