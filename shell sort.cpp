#include<iostream>
#include<algorithm>
using namespace std;

void shell_sort(int arr[],int n){
    for(int gap=n/2;gap>0;gap/=2){
        for(int i=gap;i<n;i++){
            int temp=arr[i];
            int j;
            for(j=i;j>=gap && arr[j-gap]>temp;j-=gap){
                arr[j]=arr[j-gap];
            }
            arr[j]=temp;
        }
    }
}

int main(){
    int n;
    cout<<"entr size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter arary element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before sort \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    shell_sort(arr,n);
    cout<<"After sort \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    
}
