 #include <iostream>
using namespace std;

void sorting(int arr[], int n) {
    for(int i = n - 1; i >= 0; i--) {
        for(int j = 0; j < i; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }  
        }
    }
    cout << "The array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void searching(int arr[], int n) {
    int no;
    cout << "Enter the number you want to search: ";
    cin >> no;
    for(int i = 0; i < n; i++) {
        if(arr[i] == no) {
            cout << "Number found at index " << i << endl;
            return;
        }
    }
    cout << "Number not found" << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sorting(arr, n);
    searching(arr, n);
    return 0;
}
