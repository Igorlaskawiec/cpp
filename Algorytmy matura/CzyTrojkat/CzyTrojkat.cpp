#include <iostream>

using namespace std;

bool czyTrojkat(float a, float b, float c){
	if(a<0 || b<0 || c<0) return false;
	if(a + b> c && a + c > b && b+c>a) return true;
	
	return false;
}

int main(){
	
	float a,b,c;
	cout<<"Podaj dlugosci bokow trojkata: "<<endl;
	cin>>a>>b>>c;
	
	if(czyTrojkat(a,b,c))
		cout<<"Da sie zbudowac trojkat"<<endl;
	else
		cout<<"Nie da sie zbudowac"<<endl;
	
	return 0;
		

}
