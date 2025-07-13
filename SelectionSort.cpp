#include<iostream>
using namespace std;

void inputArray(int arr[], int size) {
    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void Original(int arr[], int size) {
    cout << "Original array is: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void SelectionSort(int arr[], int size) {
    for(int i=0;i<size-2;i++){
        int mini=i;
        for(int j=i;j<size;j++){
            if(arr[j]<arr[mini])mini=j;
            swap(arr[i],arr[mini]);
        }
    }
    cout<<"Array after sorting :";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}

int main() {
    int arr[10];
    inputArray(arr, 10);
    Original(arr, 10);
    SelectionSort(arr, 10);
    return 0;

}
