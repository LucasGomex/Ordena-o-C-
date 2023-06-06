#include <iostream>

void sort(int arraySort[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arraySort[i];
        int count = i - 1;

        while (count >= 0 && arraySort[count] > key) {
            arraySort[count + 1] = arraySort[count];
            count = count - 1;
        }
        
        arraySort[count + 1] = key;
    }
}

void MostraArray(int arraySort[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arraySort[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int v[8] = {49, 38, 58, 87, 34, 93, 26, 13};
    int n = sizeof(v) / sizeof(v[0]);

    std::cout << "Vetor original: ";
    MostraArray(v, n);

    sort(v, n);

    std::cout << "Vetor ordenado: ";
    MostraArray(v, n);

    return 0;
}
