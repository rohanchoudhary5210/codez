#include <iostream>
using namespace std;

int main(){
	int n,i,j,a=1;
	cout<<"Enter the number of rows: ";
	cin>>n;
	for(i=1;i<=n;i++){
		if(i%2==0)
				a=0;
				else 
				a=1;
		for(j=1;j<=i;j++){
				
				cout<<a;
				if(a==1)
				a=0;
				else a=1;
		}
		cout<<endl;
	}
	return 0;
}
