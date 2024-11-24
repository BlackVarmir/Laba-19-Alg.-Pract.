#include "array_operations.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> array;
	int choice;

    do {
        cout << "\nМеню:\n";
        cout << "1. Ввести масив\n";
        cout << "2. Вивести масив\n";
        cout << "3. Сортувати масив\n";
        cout << "4. Визначити, яких елементів більше (парних/непарних)\n";
        cout << "5. Знайти суму цифр елементів масиву\n";
        cout << "6. Перезаписати елементи масиву у зворотному порядку\n";
        cout << "7. Розділити масив на парні та непарні елементи\n";
        cout << "8. Стиснути масив\n";
        cout << "0. Вихід\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice) {
        case 1:
            inputArray(array);
            break;
        case 2:
            printArray(array);
            break;
        case 3:
            sortArray(array);
            break;
        case 4:
            analyzeEvenOdd(array);
            break;
        case 5:
            cout << "Сума цифр усіх елементів: " << sumDigitsInArray(array) << endl;
            break;
        case 6:
            reverseElements(array);
            break;
        case 7: {
            vector<int> evens, odds;
            splitArray(array, evens, odds);
            cout << "Парні елементи: ";
            printArray(evens);
            cout << "Непарні елементи: ";
            printArray(odds);
            break;
        }
        case 8:
            compressArray(array);
            break;
        case 0:
            cout << "Вихід з програми." << endl;
            break;
        default:
            cout << "Невірний вибір. Спробуйте ще раз." << endl;
        }
    } while (choice != 0);
    return 0;
}

