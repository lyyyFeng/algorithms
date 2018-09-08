#include <iostream>
using namespace std;

int a[] = {5, 6, 0, 1, 3, 2};

void insetSort(int *a, int n) {
    for(int j = 1; j != n; ++j) {
        int key = a[j];
        int i = j - 1;
        while(i >= 0 && a[i] > key) {
            a[i + 1] = a[i];
            i -= 1;
        }
        a[i + 1] = key;
    }
}

int main() {
    insetSort(a, 6);
    for(int i = 0; i < 6; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
	return 0;
}
