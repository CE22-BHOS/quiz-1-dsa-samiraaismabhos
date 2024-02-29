#include <iostream>
#include <vector>
using namespace std;

int sum_recursive(int arr[], int size, int index = 0) {
    if (index == size) {
        
        return 0;
    } else {
        return arr[index] + sum_recursive(arr, size, index + 1);
    }
}

int main() {
    int number;
    cin >> number;

    vector<int> num(number);
    for(int i = 0; i < number; i++) {
        cin >> num[i];
    }

    int c = sum_recursive(&num[0], number);
    cout << c << endl;

    return 0;
}