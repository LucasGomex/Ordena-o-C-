#include <iostream>

void trocar(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int base, int maximo) {
    int pivot = arr[maximo];
    int i = (base - 1);

    for (int j = base; j <= maximo - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            trocar(arr[i], arr[j]);
        }
    }

    trocar(arr[i + 1], arr[maximo]);
    return (i + 1);
}

void quickSort(int arr[], int base, int maximo) {
    if (base < maximo) {
        int pi = partition(arr, base, maximo);
        quickSort(arr, base, pi - 1);
        quickSort(arr, pi + 1, maximo);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int v[8] = {49, 38, 58, 87, 34, 93, 26, 13};
    int n = sizeof(v) / sizeof(v[0]);

    std::cout << "Vetor original: ";
    printArray(v, n);

    quickSort(v, 0, n - 1);

    std::cout << "Vetor ordenado: ";
    printArray(v, n);

    return 0;
}
