#include <iostream>
using namespace std;

int main(){
	int n,i,j;
	char ch='A';
	cout<<"Enter the number of rows: ";
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cout<<ch;
			ch++;
		}
		cout<<endl;
	}
	return 0;
}


OUTPUT
ABC
DEF
GHI
