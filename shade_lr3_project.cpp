#include <iostream>
#include <string>
using namespace std;

// Функция для ввода натурального числа k
long long inputK() {
   long long k;
   cout << "Введите натуральное число K: ";
   cin >> k;
   if (k <= 0) {
       cout << "Ошибка: число должно быть натуральным. " << endl;
       return 0; // Возвращаем 0 в случае ошибки
   }
   return k;
}

// Функция для ввода цифры d (в диапазоне 1-9)
int inputD() {
   int d;
   cout << "Введите цифру D (в диапазоне 1-9): ";
   cin >> d;
   if (d < 1 || d > 9) {
       cout << "Ошибка: число должно быть в диапазоне от 1 до 9. " << endl;
       return 0; 
   }
   return d;
}

// Функция для добавления цифры d справа к числу k
long long addDigitRight(long long k, int d) {
// in development
}

// Функция для добавления цифры d слева к числу k
long long addDigitLeft(long long k, int d) {
// in development
}

int main() {
   long long k = 0;
   int d = 0;
   bool kentered = false;
   bool dentered = false;
   int choice;
   do {
       cout << "\nМеню. " << endl;
       cout << "1. Введите натуральное число K. " << endl;
       cout << "2. Введите цифру D (в диапазоне 1-9). " << endl;
       cout << "3. Добавить цифру D справа к числу. " << endl;
       cout << "4. Добавить цифру D слева к числу. " << endl;
       cout << "Выберите цифру: ";
       cin >> choice;
       switch(choice) {
           case 1: {
               k = inputK();
               if (k != 0) {
                   kentered = true;
               } else {
                   kentered = false;
               }
               break;
           }
           case 2: {
               d = inputD();
               if (d != 0) {
                   dentered = true;
               } else {
                   dentered = false;
               }
               break;
           }
           case 3: {
            //in development
           }
           case 4: {
            //in development
           }
            case 0: {
               cout << "Выход из программы. " << endl;
               break;
           }
           default: {
               cout << "Ошибка: неверный выбор цифры, выберите цифры 1-4. " << endl;
           }
       }
   }  while (choice != 0);
   return 0;
}