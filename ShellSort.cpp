#include <iostream>
/* *
* Lucas Gomes dos Santos
*/
void shellSort(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

void mostraArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int v[8] = {49, 38, 58, 87, 34, 93, 26, 13};
    int n = sizeof(v) / sizeof(v[0]);

    std::cout << "Vetor original: ";
    mostraArray(v, n);

    shellSort(v, n);

    std::cout << "Vetor ordenado: ";
    mostraArray(v, n);

    return 0;
}
