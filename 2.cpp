#include <iostream>
#include <cstdlib> // Для функции rand()
#include <ctime>
#include <string>
//
// 1 и 2 программа
// 
//void swapValues(char* ptr1, char* ptr2) {
//    char temp = *ptr1;
//    *ptr1 = *ptr2;
//    *ptr2 = temp;
//}
//
//int main() {
//    char variable1 = 'A';
//    char variable2 = 'B';
//
//    char* pointer1 = &variable1;
//    char* pointer2 = &variable2;
//
//    std::cout << "Pered obmenom:" << std::endl;
//    std::cout << "Adres ukazatelya 1: " << static_cast<void*>(pointer1) << std::endl;
//    std::cout << "Adres ukazatelya 2: " << static_cast<void*>(pointer2) << std::endl;
//    std::cout << "Znach peremennoy 1: " << *pointer1 << std::endl;
//    std::cout << "Znach peremennoy 2: " << *pointer2 << std::endl;
//
//    swapValues(pointer1, pointer2);
//
//    std::cout << "\nPosle obmena:" << std::endl;
//    std::cout << "Adres ukazatelya 1: " << static_cast<void*>(pointer1) << std::endl;
//    std::cout << "Adres ukazatelya 2: " << static_cast<void*>(pointer2) << std::endl;
//    std::cout << "Znach peremennoy 1: " << *pointer1 << std::endl;
//    std::cout << "Znach peremennoy 2: " << *pointer2 << std::endl;
//
//    return 0;
//}


//3 программа
// 
// 
//int main() {
//    // Инициализация генератора случайных чисел
//    std::srand(static_cast<unsigned int>(std::time(nullptr)));
//
//    // Запрос размера массива у пользователя
//    int size;
//    std::cout << "Vvedite razmer massiva: ";
//    std::cin >> size;
//
//    // Выделение памяти для динамического массива
//    int* array = new int[size];
//
//    // Заполнение массива случайными числами и вывод адресов и значений элементов
//    for (int i = 0; i < size; ++i) {
//        array[i] = std::rand();
//        std::cout << "Adres elementa " << i << ": " << &(array[i]) << ", znach: " << array[i] << std::endl;
//    }
//
//    // Освобождение памяти, выделенной для массива
//    delete[] array;
//
//    return 0;
//}
// 
// 
//4 программа

struct Fruit {
    std::string name;
    std::string color;
    int weight;
};

void modifyFruit(Fruit* fruit, const std::string& newName, const std::string& newColor, int newWeight) {
    fruit->name = newName;
    fruit->color = newColor;
    fruit->weight = newWeight;
}

int main() {
    int numFruits;
    std::cout << "vvedite kolichestvo fruktov: ";
    std::cin >> numFruits;

    Fruit* fruits = new Fruit[numFruits];

    for (int i = 0; i < numFruits; ++i) {
        std::cout << "fruit " << i + 1 << ":" << std::endl;
        std::cout << "vvedite name: ";
        std::cin >> fruits[i].name;
        std::cout << "vvedite color: ";
        std::cin >> fruits[i].color;
        std::cout << "vvedite weight: ";
        std::cin >> fruits[i].weight;
    }

    std::cout << "\nizmenenie znacheniya fruit 1:" << std::endl;
    modifyFruit(&fruits[0], "apple", "red", 150);

    std::cout << "\nizmenennoe znachenie fruit 1:" << std::endl;
    std::cout << "name: " << fruits[0].name << std::endl;
    std::cout << "color: " << fruits[0].color << std::endl;
    std::cout << "weight: " << fruits[0].weight << std::endl;

    delete[] fruits;

    return 0;
}
