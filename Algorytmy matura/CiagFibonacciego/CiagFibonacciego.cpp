#include <iostream>

using namespace std;

void Fib(int n){
	int a=0,b=1,tmp;
	cout<<a<<"\n"<<b<<endl;
	for(int i = 0; i<=n; i++){
		tmp = a+b;
		cout<<tmp<<endl;
		a = b;
		b = tmp;
		
	}
}



int main(){
	int n;
    
    cout<<"Podaj ile chcesz wypisac wyrazow ciagu fibonacciego: ";
    cin>>n;
    
    Fib(n);
    
    return 0;
	
}
