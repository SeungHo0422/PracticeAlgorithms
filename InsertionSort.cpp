#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {4, 6, 2, 5, 9, 1, 3, 10, 55, 0};
    int i, j, min, index;
    
    index = 0;
    
    for(i=0;i<10;i++) {
        min = 999;
        for(j=i ; j < 10 ; j++) {
            if(min > arr[j]) {
                min = arr[j];
                index = j;
            }
        }
        
        swap(arr[i], arr[index]);
    }
    
    for ( int n:arr) {
        cout << n << " ";
    }
    cout << endl;
    
}
