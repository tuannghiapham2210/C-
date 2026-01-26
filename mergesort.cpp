#include <iostream>
#include <vector>

using namespace std;

void merge(int a[], int l, int m, int r){
    vector<int> x(a + l, a + m + 1);
    vector<int> y(a + m + 1, a + r + 1);
    //2 con tro cua x va y
    int i = 0; int j = 0; int k = l;
    while (i < x.size() && j < y.size()){
        //cai nao nho hon thi lay vao truoc
        if(x[i] > y[j]){
            a[k] = y[j];
            j++; k++;
        }
        else{
            a[k] = x[i];
            i++; k++;
        }
    }
    while (i< x.size()){
        a[k] = x[i];
        k++; i++;
    }
    while (j < y.size()){
        a[k] = y[j];
        k++; j++;
    }
}

void mergesort(int a[], int l, int r){
    if (l >= r) return;
    int m = l + (r - l) / 2;
    //goi de quy ben trai
    mergesort(a, l, m);
    //goi de quy ben phai
    mergesort(a, m + 1, r);
    //sau khi day da duoc sap xep, tron 2 day
    merge(a, l, m, r);
}

int main(){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    mergesort(a, 0, n - 1);
    for (int x : a) cout << x << " "; 
    return 0;
}
