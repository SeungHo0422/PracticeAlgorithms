#include <iostream>

using namespace std;

void Quicksort(int *data, int start, int end) {
    if(start >= end) {
        return;
    }
    
    int key = start;
    int i = start + 1;
    int j = end;
    
    while(i <= j) {
        while(i <= end && data[key]>=data[i]) {
            i++;
        }
        while(j > start && data[key]<=data[j]) {
            j--;
        }
        if( i > j) swap(data[j], data[key]); //엇갈렸을 땐, swap으로 인해 j번째 data가 Pivot값이 된다!
        else swap(data[i], data[j]);
    }
    
    Quicksort(data, start, j-1); //j가 피벗값이므로
    Quicksort(data, j+1, end);
}

int main()
{
    int arr[10] = {5, 2, 1, 7, 10, 3, 4, 9, 8, 6};
    
    Quicksort(arr, 0, 9);
    
    for(int i=0;i<10;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
   
    return 0;
}
