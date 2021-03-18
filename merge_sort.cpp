#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l, int m, int r){

	int i=l;
	int j=m+1;
	int k=l;

	int temp[r-l+1];

	while(i<=m && j<=r){
		if(arr[i]<=arr[j])
			temp[k++]=arr[i++];
			
		else{
			temp[k++]=arr[j++];
		}
	}

	while(i<=m){
		temp[k++]=arr[i++];
	}
	while(j<=r){
		temp[k++]=arr[j++];
	}

	for(int s=l;s<=r;s++)
		arr[s]=temp[s];

}

void mergesort(int arr[],int l,int r){

	if(l<r){
		int m = l + (r-l)/2;


		mergesort(arr,l,m);
		mergesort(arr,m+1,r);

		merge(arr,l,m,r);
	}
}

int main(){

int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}


cout<<"After merge sort"<<endl;
mergesort(arr,0,n-1);

for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}


return 0;
}
