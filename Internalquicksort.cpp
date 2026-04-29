#include <iostream>
using namespace std;

void quick(int a[], int low, int high) {
    int i = low, j = high;
    int pivot = a[(low + high) / 2];

    while (i <= j) {
        while (a[i] < pivot) i++;
        while (a[j] > pivot) j--;

        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }

    if (low < j) quick(a, low, j);
    if (i < high) quick(a, i, high);
}

int main() {
    int a[5] = {5, 3, 1, 4, 2};

    quick(a, 0, 4);

    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";

    return 0;
}
