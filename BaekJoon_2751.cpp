#include <iostream>

using namespace std;

void Quicksort(int *data, int start, int end) {
    if(start >= end) return;
    
    int key = start;
    int i = start + 1;
    int j = end;
    
    while(i<=j) {
        while(i <= end && data[key] >= data[i]) i++;
        while(j > start && data[key] <= data[j]) j--;
        
        if(i>j) swap(data[j], data[key]);
        else swap(data[i], data[j]);
    }
    Quicksort(data, start, j-1);
    Quicksort(data, j+1, end);
}

int main()
{
    int num;
    cin >> num;

    int *arr = new int[num];
    
    for(int i=0;i<num;i++) cin >> arr[i];
    Quicksort(arr, 0, num-1);
    for(int i=0;i<num;i++) cout << arr[i] << endl;
    
    delete[] arr;
}
