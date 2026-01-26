#include <iostream>

using namespace std;

const int MAX = 1000001;

int arr[MAX];

//1 2 3 4 5 (n = 5)
int partition (int arr[], int l, int r){
    int pivot = arr[r];
    int i = l - 1;
    for (int j = l; j < r; j++){
        if (arr[j] <= pivot){
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[i + 1], arr[r]);
    return i + 1;
}

void quickSort(int arr[], int l, int r){
    if (l < r){
        int q = partition(arr, l, r);
        quickSort(arr, l, q - 1);
        quickSort(arr, q + 1, r);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
} 