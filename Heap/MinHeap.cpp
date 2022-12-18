#include<iostream>
using namespace std;

void heapify(int a[], int n, int i){
    int smallest = i;
    int l = 2*i;
    int r = 2*i + 1;

    if(l < n && a[l] < a[smallest])
        smallest = l;

    if(r < n && a[r] < a[smallest])
        smallest = r;

    if(i != smallest){
        swap(a[smallest], a[i]);
        heapify(a, n, smallest);
    }
}

void buildHeap(int a[], int n){
    for(int i=n/2;i>0;i--)
        heapify(a, n, i);
}

int main(){
    int arr[] = {0, 20, 10, 40, 5, 50, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<"Before: ";
    for(int i=1;i<size;i++)
        cout<<arr[i]<<" ";
    buildHeap(arr, size);

    cout<<endl<<"After: ";
    for(int i=1;i<size;i++)
        cout<<arr[i]<<" ";
    return 0;
}
