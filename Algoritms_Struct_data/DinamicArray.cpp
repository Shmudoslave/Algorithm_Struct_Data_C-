////Реализация методов динамического массива как структуры.
//#include "DynamicArray.h"
//
//DynamicArray::DynamicArray(): data(nullptr), size(0), capacity(0)
//{}
//
//DynamicArray::~DynamicArray() 
//{
//    delete[] data;
//}
//
//void DynamicArray::push_back(int value) {
//    if (size >= capacity) {
//        size_t new_capacity = (capacity == 0) ? 1 : capacity * 2;
//
//        int* newData = new int[new_capacity];
//
//        for (size_t i = 0; i < size; ++i) {
//            newData[i] = data[i];
//        }
//
//        delete[] data;
//
//        data = newData;
//        capacity = new_capacity;
//    }
//    data[size] = value;
//    ++size;
//}
//
//int& DynamicArray::operator[](size_t idx) {
//    return data[idx];
//}
//
//void DynamicArray::print(size_t size) 
//{
//    std::cout << "Values of array: " << std::endl;
//    for (int i = 0; i < size; i++) 
//    {
//        std::cout << data[i] << std::endl;
//    }
//}