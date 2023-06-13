#include <iostream>
using namespace std;

int main(){
	int n,m,i,j,k;
	char ch='#',ch1=' ';
	cout<<"Enter the number of rows: ";
	cin>>n;
	for(i=1;i<=n;i++){
		for(k=1;k<=n-i;k++){
			printf("%c",ch1);
		}
		for(j=1;j<=i;j++){
			printf("%c",ch);
		}
		cout<<endl;
	}
	return 0;
}
