#include <iostream>

using namespace std;
//Liczba doskona³a (definicja) to taka liczba naturalna, której suma jej dzielników w³aœciwych (bez niej samej) jest jej równa. 

bool czyDoskonala(int n){
	int suma = 0;
	for (int i=1; i<n; i++){
		if(n%i==0) suma += i;
	}
	
	if(suma == n) return true;
	return false;
}
int main(){
	int n;
	cout<<"Podaj liczbe: ";
	
	cin>>n;
	
	if(czyDoskonala(n))
		cout<<"Liczba "<<n<<" jest doskonala";
	else
		cout<<"Liczba "<<n<<" nie jest doskonala";
	
	return 0;
	
}
