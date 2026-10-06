#include <iostream>

int* concatenateArrays(const int* arr1, int length1, const int* arr2, int length2);

int main() {
    int arrayA[] = {1, 2, 3};
    int arrayB[] = {4, 5, 6, 7};

    int* combinedArray = concatenateArrays(arrayA, 3, arrayB, 4);

    for(int i = 0; i < 7; i++){
        std::cout << i+1 << ". element of combined array: " << combinedArray[i] << '\n';
    }

    delete[] combinedArray;
    
    return 0;
}

int* concatenateArrays(const int* arr1, int length1, const int* arr2, int length2){
    int totalLength = length1 + length2;
    int* result = new int[totalLength];

    for(int i = 0; i < length1; i++){
        result[i] = arr1[i];
    }

    for(int j = 0; j < length2; j++){
        result[length1 + j] = arr2[j];  
    }

    return result;

}