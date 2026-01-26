#include <iostream>

using namespace std;

void heapify(int a[], int n, int i){
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && a[left] > a[largest]){
        largest = left;
    }
    if (right < n && a[right] > a[largest]){
        largest = right;
    }
    if(largest != i){
        swap(a[largest], a[i]);
        heapify(a, n, largest);
    }
}

void heapsort(int a[], int n){
    //build a max heap
    int non_leaf = n / 2 - 1;
    for (int i = non_leaf; i >= 0; i--){
        heapify(a, n, i);
    } 
    //sort the array
    for (int i = n - 1; i >=0; i--){
        swap(a[i], a[0]);
        heapify(a, i, 0);
    }
}


int main(){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    heapsort(a, n);
    for (int x: a) cout << x << " ";
}