#include <iostream>

using namespace std;

void BubbleSort(int arr[], int n){
	for(int i = 0; i<n; i++){
		for(int j =1; j<n;j++){
			if(arr[j-1]>arr[j]){
			
			swap(arr[j-1],arr[j]); 
			/*
			int tmp = arr[j-1];
			arr[j-1] = arr[j];
			arr[j] = tmp;
			*/
			//Without swap function
			
		}
		}
	}
	
}

int main(){
	
	int a;
	cout<<"Array length: "<<endl;
	cin>>a;
	
	int arr[a];
	
	for (int i=0; i<=a-1; i++) {
		cout<< "Give number "<<i<<" of "<<a<<": "; cin>>arr[i];
	}	
	BubbleSort(arr,a);
	
		for(int i=0;i<a;i++)
          cout<<arr[i]<<" ";
}
