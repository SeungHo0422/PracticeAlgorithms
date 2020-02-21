#include <iostream>

using namespace std;

int main()
{
    int n, k;
    int i, j;
    cout << "Enter size of array: ";
    cin >> n;
    
    int *arr = new int[n];
    
    for(i=0;i<n;i++) {
        cin >> *(arr+i);
    }
    
    for(i=0;i<n;i++) {
        j=i;
        
        while(j>0 && arr[j-1]>arr[j]) {
            swap(arr[j-1], arr[j]);
            j--;
        }
        
        for(k=0;k<=i;k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}
