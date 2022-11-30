#include <iostream>

using namespace std;

bool czyPalindrom(string s){
	int i=0, j=s.size()-1;
	
	while(i<j){
		if(s[i] != s[j])return false;
		++i;
		--j;
	}
	return true;
	
}
int main(){
	cout<<"Podaj wyraz: ";
	string s;
	cin>>s;

	if(czyPalindrom(s))
		cout<<"Wyraz "<<s<<" jest palindromem"<<endl;
	else
		cout<<"Wyraz "<<s<<" nie jest palindromem"<<endl;
	
	return 0;
}
