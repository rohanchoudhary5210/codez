#include <iostream>
using namespace std;

int main(){
	int n,i,j;
	cout<<"Enter the number of rows: ";
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=2*i-1;j=j+2){
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}   
