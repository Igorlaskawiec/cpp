#include <iostream>
using namespace std;

int szukaj(string wzorzec, string text)
{
	for(int i=0;i <= text.size() - wzorzec.size();i++) //po tekœcie
	{
		int c = 0;
		for(int j=0;j<wzorzec.size();j++)
		{
			if(wzorzec[j] != text[i + c])
				break;
			if(j == wzorzec.size() - 1)
				return i+1;
			++c;
		}
	}
	return -1;
}

int main(){
	string text = "lokomotywa";
	string wzorzec;
	cout<<"Podaj wzorzec do znalezienia: ";
	cin>> wzorzec;
	cout<<"\n";
	
	int wynik = szukaj(text, wzorzec);
	
	if(wynik== -1){
		cout<<"Nie zaleziono wzorca";
		
	}else{
		cout<<"Znaleziono wzorzec";
		return 0;
	}
	

}
