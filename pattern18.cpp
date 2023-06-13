#include <iostream>
using namespace std;

int main(){
	int n,i,j,a=1;
	cout<<"Enter the number of rows: ";
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if((i+j)%2==0) a=1;
			else a=0;
			cout<<a;
		}
		cout<<endl;
	}
	return 0;
}
