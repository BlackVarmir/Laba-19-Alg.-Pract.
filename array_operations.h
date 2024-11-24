#pragma once
#ifndef ARRAY_OPERATIONS_H
#define ARRAY_OPERATIONS_H

#include <vector>

using namespace std;

void inputArray(vector<int>& array);
void printArray(const vector<int>& array);
void sortArray(vector<int>& array);
void analyzeEvenOdd(const vector<int>& array);
int sumOfDigits(int number);
int sumDigitsInArray(const vector<int>& array);
void reverseElements(vector<int>& array);
void splitArray(const vector<int>& array, vector<int>& evens, vector<int>& odds);
void compressArray(vector<int>& array);

#endif // ARRAY_OPERATIONS_H
