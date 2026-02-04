#include<iostream>
using namespace std;
int main(){
	int a[10],n,i,sum=0;
	cout<<"Enter number of elements:";
	cin>>n;
	cout<<"Enter elements:";
	for(int i=0;i<n;i++){
	cin>>a[i];
    }
    for(int i=0;i<n;i++){
    	sum=sum+a[i];
	}
	cout<<sum;
    
	}
