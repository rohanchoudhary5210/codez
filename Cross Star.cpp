#include <iostream>
using namespace std;

int main(){
	int n,i,j,k,l;
	char ch=' ',ch1='*';
	cout<<"Enter the number of rows: ";
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==j || j==n-i+1){
				cout<<ch1;
			}
			else
			cout<<ch;
		}
		cout<<endl;
	}
	return 0;
}
