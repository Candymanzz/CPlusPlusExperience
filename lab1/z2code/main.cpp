#include <iostream>
#include <vector>

using namespace std;

// Функция для поиска первого равного K
int* findFirstEqual(int K, int* start, int* end) {
    for (int* ptr = start; ptr < end; ++ptr) {
        if (*ptr == K) {
            return ptr;  // Возвращаем указатель на первый найденный элемент
        }
    }
    return nullptr;  // Если не найдено, возвращаем nullptr
}

// Функция для замены элементов, не равных K, на нули
void replaceNonEqualWithZero(int K, int* start, int* end) {
    for (int* ptr = start; ptr < end; ++ptr) {
        if (*ptr != K) {
            *ptr = 0;  // Замена на ноль
        }
    }
}

// Функция для замены знака всех элементов массива
void negateElements(int* start, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        start[i] = -start[i];  // Изменяем знак элемента
    }
}

// Функция для произведения матриц A и B
vector<vector<int> > multiplyMatrices(const vector<vector<int> > &A, const vector<vector<int> > &B) {
    int n = A.size();
    vector<vector<int> > result(n, vector<int>(n, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                result[i][j] += A[i][k] * B[k][j];  // Стандартное умножение матриц
            }
        }
    }
    return result;
}

int main() {
    // Пример использования функций
    int array[] = {1, 2, 3, 4, 5, 2, 6};
    int* start = array;
    int* end = array + 7;

    // 1. Найти первый элемент равный 2
    int* firstEqual = findFirstEqual(2, start, end);
    if (firstEqual) {
        cout << "Элементы после первого 2: ";
        for (int* ptr = firstEqual + 1; ptr < end; ++ptr) {
            cout << *ptr << " ";
        }
        cout << endl;
    }

    // 2. Заменить элементы, не равные 2, на нули
    replaceNonEqualWithZero(2, start, end);
    cout << "Массив после замены: ";
    for (int i = 0; i < 7; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    // 3. Изменить знак всех элементов
    negateElements(start, 7);
    cout << "Массив после смены знака: ";
    for (int i = 0; i < 7; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    // 4. Умножение матриц
    vector<vector<int> > A(2, vector<int>(2));
    vector<vector<int> > B(2, vector<int>(2));
    A[0][0] = 1; A[0][1] = 2; 
    A[1][0] = 3; A[1][1] = 4; 
    B[0][0] = 5; B[0][1] = 6; 
    B[1][0] = 7; B[1][1] = 8;

    vector<vector<int> > C = multiplyMatrices(A, B);
    
    cout << "Произведение матриц A и B: " << endl;
    for (int i = 0; i < C.size(); ++i) {
        for (int j = 0; j < C[i].size(); ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}