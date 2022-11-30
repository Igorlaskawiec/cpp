#include <iostream>

using namespace std;

// rozk³ad liczby to przedstawienie jej w postaci iloczynu licz pierwszych
int main(){
	 int n;
        
        cout<<"Podaj liczbe: ";
        cin>>n;
        
        cout<<"Czynniki pierwsze liczby"<<n<<": \n";
        
        int k = 2;
        
        while(n>1){
        	while(n%k==0){
        		cout <<k<<endl;
        		n/=k;
        		
			}
			++k;
		}
}
