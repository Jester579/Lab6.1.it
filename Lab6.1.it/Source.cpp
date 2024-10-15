#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

void COUT(int mas[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << mas[i] << " ";
    }
    cout << endl;
}

int PlusEl(int mas[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (mas[i] > 0 && mas[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}


int SUM(int mas[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (mas[i] > 0 && mas[i] % 2 == 0) {
            sum += mas[i];
        }
    }
    return sum;
}


void Nulls(int mas[], int size) {
    for (int i = 0; i < size; i++) {
        if (mas[i] > 0 && mas[i] % 2 == 0) {
            mas[i] = 0;
        }
    }
}

int main() {
    const int SIZE = 25;

    srand((unsigned)time(0));
    setlocale(LC_CTYPE, "ukr");

    int a[SIZE];

   
    for (int i = 0; i < SIZE; i++) {
        a[i] = rand() % 51 - 20;
    }

    
    cout << "Початковий масив: " << endl;
    COUT(a, SIZE);

    
    int count = PlusEl(a, SIZE);
    int sum = SUM(a, SIZE);

    cout << "Кiлькiсть додатних парних елементiв: " << count << endl;
    cout << "Сума додатних парних елементiв: " << sum << endl;


    Nulls(a, SIZE);

    
    cout << "Модифiкований масив: " << endl;
    COUT(a, SIZE);

    return 0;
}
