
#include<bits/stdc++.h>
using namespace std;
int binary_Search(int arr[],int lo,int hi,int key){
    int res=-1;
    int mid;
    if (lo<=hi)
    {
        mid=(lo+hi)/2;
        if(arr[mid]==key)
        res=mid;
        if(arr[mid]>key)
            res=binary_Search(arr,lo,mid-1,key);
        else
        res=binary_Search(arr,mid+1,hi,key);
    }
    return res;
}
int main(){
    int n;
    cout<<"enter the no. of elements:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the aarray elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key you want to search:"<<endl;
    cin>>key;
    int res=binary_Search(arr,0,n-1,key);
    if(res==-1)
    cout<<"the element is not present:"<<endl;
    else
    cout<<"the element is present at index :"<<res<<endl;
}

