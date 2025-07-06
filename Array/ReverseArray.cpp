#include<iostream>
using namespace std;

void reversearray(int arr[], int sz){
    int start =0, end =sz-1;
    while (start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}

int main(){
    int sz = 6;

    int arr[sz]={4,2,5,6,3,7};

    reversearray(arr, sz);

    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    /*int size=6;
    int arr[size] ={4,6,7,1,9,5};
    int ar[size];
    int start=0;
    int end=size-1;
    int mid = size/2;

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<mid; i++){

        swap(arr[start],arr[end]);

        // swap(arr[start],ar[end]);
        // swap(arr[end],ar[start]);
        start++;
        end--;
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;*/
    return 0;
}
