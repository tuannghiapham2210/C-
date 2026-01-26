#include <iostream>

using namespace std;

//1 2 3 4 5 6 
const int MAX = 1000001;
int arr[MAX];

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        bool swapped = false;
        for(int j = 1; j <= n - 1 - i; j++){
            if(arr[j] < arr[j - 1]){
                swap(arr[j - 1], arr[j]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}


int main(){
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    bubbleSort(arr, n);
    for (int i = 0 ; i < n; i++) cout << arr[i] << " ";
    return 0;
}