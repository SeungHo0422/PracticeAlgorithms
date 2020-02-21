#include <iostream>

using namespace std;


int main()
{
    int *arr = new int[3];
    int min;
    int index=0;
    int i, j, n;
    for(n=0;n<3;n++) {
        cin >> arr[n];
    }
    /*
     3 1 2
     1 3 2
     1 2 3
     */
    for(i=0;i<3;i++) {
        min = 1000001;
        for(j=i;j<3;j++) {
            if(min > arr[j]) {
                min = arr[j];
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
    
    for(n=0;n<3;n++) {
        cout << arr[n] << " ";
    }
    
    delete[] arr;
   
}
