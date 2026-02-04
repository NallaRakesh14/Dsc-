#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
void ssort(int a[],int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		if(i!=min){	
		swap(a[i],a[min]);
		}
	}
}
void printarray(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}
int main(){
	int a[100],n;
	cout<<"Enter array size:";
	cin>>n;
	cout<<"Enter elements";
	for(int i=0;i<n;i++){
		cin>>a[i];}
	ssort(a,n);
	printarray(a,n);
}
