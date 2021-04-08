#include<bits/stdc++.h>
#define ll long long 
using namespace std;


void merge_self(int a[],int l,int mid,int r ){

	int i=l,j=mid+1,k=0;
	int temp[r-l+1];

	while(i<=mid || j<=r){

		if(j>r ||  (i<=mid && a[i]<=a[j])){
			temp[k++]=a[i++];
		}else{
			temp[k++]=a[j++];
		}

	}

	for(int s=l;s<=r;s++){
		a[s]=temp[s-l];
	}

}

void merge_sort(int arr[],int l,int r){

	if(l<r){
		int mid=l+(r-l)/2;

		merge_sort(arr,l,mid);
		merge_sort(arr,mid+1,r);
		merge_self(arr,l,mid,r);
	}
}


int main(){

	int n;		//size of array
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++){		//array input
		cin>>arr[i];
	}

	merge_sort(arr,0,n-1);

	for(int i=0;i<n;i++){		//print sorted array 
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;
}

