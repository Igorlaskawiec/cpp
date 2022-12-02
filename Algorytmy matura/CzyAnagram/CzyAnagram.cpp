#include <iostream>


using namespace std;

void sortuj(string s){
	for(int i=0; i<s.size();i++){
		for(int j =0;j<s.size()-1;j++){
			if(s[j+1]<s[j]) swap(s[j+1],s[j]);
		}
	}
//	cout<<s<<endl;
}

bool czyAnagram(string base, string changed){
	int baseLength = base.size(), changedLength = changed.size();
//	cout<<baseLength<<" "<<changedLength<<endl;
	if(baseLength != changedLength) return false;
	string a = base;
	string b = changed;
	sortuj(a);
	sortuj(b);
	
	if(a == b){
		cout<<"rowne ";
		return true;
	}else{
		cout<<"nierowne ";
		return false;
	}

}

int main(){
		cout<<"Podaj wyrazy: ";
	string s,j;
	cin>>s>>j;
	cout<<endl;

	if(czyAnagram(s,j))
		cout<<"Wyraz "<<j<<" jest anagramem"<<endl;
	else
		cout<<"Wyraz "<<j<<" nie jest anagramem"<<endl;
	
	return 0;
}
