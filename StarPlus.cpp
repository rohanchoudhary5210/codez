#include <iostream>
using namespace std;

int main(){
	int n,i,j,k,l;
	cout<<"Enter the number of rows: ";
	cin>>n;
	k=(n/2)+1;
	for(i=1;i<=n;i++){
		for(l=1;l<=k;l++){
			if(i!=k && l!=k)
			cout<<' ';
		}
		for(j=1;j<=n;j++){
			if(i==k || j==k)
			cout<<'*';
		}
		cout<<endl;
	}
	return 0;
}
