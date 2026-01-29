#include <iostream>
using namespace std;

int main() {
    int n, target;

    cout << "How many numbers? ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " numbers in ascending order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter number to search: ";
    cin >> target;

    int low = 0, high = n - 1;
    int mid, found = -1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == target) {
            found = mid;
            break;
        } 
        else if (arr[mid] < target) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }

    if (found != -1)
        cout << "Element found at index " << found;
    else
        cout << "Element not found";

    return 0;
}
