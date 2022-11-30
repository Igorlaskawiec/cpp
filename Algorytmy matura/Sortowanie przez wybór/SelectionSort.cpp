#include <iostream>

using namespace std;

//wybieramy min z tablicy i zamnieniamy na pierwsze miejsce, w kolejnejnych iteracjach pomijamy pierwszy element
void selectionSort(int tab[], int n){

	for(int i=0; i<n-1;i++){
		int minIndex = i;
		for(int j = i+1;j<n;j++){
			if(tab[j]<tab[minIndex]) minIndex =j;
		}
		swap(tab[i],tab[minIndex]);
	}
		
}


int main(){
	int n;
	
	cout<<"Ile liczb chcesz posortowac? ";
	cin>>n;
	
	int tab[n];
	cout<<"Podaj liczby w tablicy: "<<endl;
	for(int i=0;i<n;i++)
		cin>>tab[i]; //wczytanie liczb do posortowania
	
	selectionSort(tab,n); 
	
	for(int i=0;i<n;i++)
		cout<<tab[i]<<" "; //wypisanie posortowanych elementów
		

	return 0;
}

