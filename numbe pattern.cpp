#include <iostream>
using namespace std;

int main(){
	int n,i,j,k=1;
	cout<<"Enter the number of rows: "; 
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cout<<k;
		}
		k++;
		cout<<endl;
	}
}
