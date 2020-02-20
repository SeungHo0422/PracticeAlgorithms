#include <iostream>

using namespace std;

int main()
{
    int arr[10] = { 6, 3, 5, 1, 9, 10, 2, 7, 4, 8};
    
    int i, j;
    
    for(i=0;i<10;i++) {
        for(j=0;j<9-i;j++) {
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }
    
    for(int n: arr) {
        cout << n << " ";
    }
    cout << endl;
}
