#include "array_operations.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

void inputArray(vector<int>& array) {
    int n;
    cout << "Введіть розмір масиву: ";
    cin >> n;
    array.resize(n);

    cout << "Виберіть спосіб заповнення масиву:\n";
    cout << "1. Ручний ввод\n";
    cout << "2. Генерація випадкових чисел\n";
    int choice;
    cin >> choice;

    if (choice == 1) {
        for (int i = 0; i < n; ++i) {
            cout << "Введіть елемент [" << i + 1 << "]: ";
            cin >> array[i];
        }
    }
    else if (choice == 2) {
        srand(time(0));
        for (int i = 0; i < n; ++i) {
            array[i] = rand() % 100;
        }
    }
}

void printArray(const vector<int>& array) {
    for (int num : array) {
        cout << num << " ";
    }
    cout << endl;
}

void sortArray(vector<int>& array) {
    cout << "Виберіть метод сортування:\n";
    cout << "1. За зростанням\n";
    cout << "2. За спаданням\n";
    int choice;
    cin >> choice;

    if (choice == 1) {
        sort(array.begin(), array.end());
    }
    else if (choice == 2) {
        sort(array.begin(), array.end(), greater<int>());
    }
}

void analyzeEvenOdd(const vector<int>& array) {
    int evenCount = 0, oddCount = 0;

    for (int num : array) {
        if (num % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    if (evenCount > oddCount) {
        cout << "Парних елементів більше: " << evenCount << endl;
    }
    else if (oddCount > evenCount) {
        cout << "Непарних елементів більше: " << oddCount << endl;
    }
    else {
        cout << "Кількість парних і непарних елементів однакова." << endl;
    }
}

int sumOfDigits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += abs(number % 10);
        number /= 10;
    }
    return sum;
}

int sumDigitsInArray(const vector<int>& array) {
    int totalSum = 0;
    for (int num : array) {
        totalSum += sumOfDigits(num);
    }
    return totalSum;
}

void reverseElements(vector<int>& array) {
    for (int& num : array) {
        int reversed = 0, temp = abs(num);
        while (temp != 0) {
            reversed = reversed * 10 + temp % 10;
            temp /= 10;
        }
        num = (num < 0) ? -reversed : reversed;
    }
}

void splitArray(const vector<int>& array, vector<int>& evens, vector<int>& odds) {
    for (int num : array) {
        if (num % 2 == 0)
            evens.push_back(num);
        else
            odds.push_back(num);
    }
}

void compressArray(vector<int>& array) {
    vector<int> compressed;
    for (size_t i = 0; i < array.size(); ++i) {
        if (i < array.size() - 1 && array[i] == array[i + 1]) {
            compressed.push_back(array[i] + array[i + 1]);
            i++;
        }
        else {
            compressed.push_back(array[i]);
        }
    }
    array = compressed;
}
