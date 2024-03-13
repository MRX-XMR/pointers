#include <iostream>

void multiplyByTwo(int* array, int size) {
    if (array == nullptr || size <= 0) {
        std::cout << "Ошибка: недопустимый указатель или размер массива" << std::endl;
        return; 
    }

    for (int i = 0; i < size; i++) {
        array[i] *= 2; 
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    multiplyByTwo(arr, size);

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
