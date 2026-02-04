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
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			sum=sum+a[i];
		}
	}
	cout<<sum;
}
