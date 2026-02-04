#include<iostream>
using namespace std;
int main(){
	int n,i=0,a[10],sum=0;
	cout<<"Enter number of elements";
	cin>>n;
	cout<<"Enter elements";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	i=0;
	while(i<n){
		sum=sum+a[i];
		i=i+2;
	}
	cout<<sum;
}
