#include<iostream>
using namespace std;
void heapify(int a[], int n, int i){
    int larg = i;
    int l = (2 * i) + 1; // left child index
    int r = (2 * i) + 2; // right child index
    if( l < n && a[l] > a[larg]){
        larg = l;
    }
    if( r < n && a[r] > a[larg]){
        larg = r;
    }
    
    if(larg != i){
        swap(a[i] , a[larg]);
        heapify(a,n,larg);
    }
}

void heapSort(int a[], int n){
    for(int i = (n/2) - 1 ; i>=0 ; i--){
        heapify(a,n,i);
    }
    
    for(int i = n-1 ; i >= 0; i--){
        swap(a[0], a[i]);
        heapify(a , i , 0);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    heapSort(a,n);
    for(int i = 0; i<n; i++){
        cout << a[i] << " ";
    }
}















