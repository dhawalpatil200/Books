#include<bits/stdc++.h>
using namespace std;



void mergesort(int arr[],int l,int r){

	if(l<r){
		int m = l + (r-l)/2;


		mergesort(arr,l,m);
		mergesort(arr,m+1,r);

		merge(arr,l,m,r);
	}
}

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
