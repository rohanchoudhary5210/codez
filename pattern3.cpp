#include <iostream>
using namespace std;

int main(){
	int n,m,i,j;
	cout<<"Enter the number of rows: ";
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<'*';
		}
		cout<<endl;
	}
	return 0;
}
