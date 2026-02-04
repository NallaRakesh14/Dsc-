#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
void ssort(int a[],int n){
	for(int i=0;i<n-1;i++){
		int minindex=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[minindex]){
				minindex=j;
			}
		}
		swap(a[i],a[minindex]);
	}
	}

void printarray(int a[],int n){
		for(int i=0;i<n;i++){
			cout<<a[i];
		}}
int main() 
    {
    	int a[10],n;
    	cout<<"Enter number of elements";
	    cin>>n;
	    cout<<"Enter elements";
	    for(int i=0;i<n;i++){
		    cin>>a[i];
	}
	ssort(a,n);
	printarray(a,n);
}
