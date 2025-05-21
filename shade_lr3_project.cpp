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
   return k * 10 + d;
}

// Функция для добавления цифры d слева к числу k
long long addDigitLeft(long long k, int d) {
   string kstr = to_string(k);
   string dstr = to_string(d);
   string resstr = dstr + kstr;
   try {
       return stoll(resstr);
   } catch (const std::out_of_range& oor) {
       cout << "Ошибка: Результат слишком большой для long long. " << endl;
       return 0;
   }
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
            if (!kentered || !dentered) {
                   cout << "Сначала введите K и D. " << endl;
               } else {
                   long long result = addDigitRight(k, d);
                   cout << "Результат добавления цифры " << d << " справа к числу " << k << ": " << result << endl;
               }
               break;           }
           case 4: {
               if (!kentered || !dentered) {
                   cout << "Сначала введите K и D. " << endl;
               } else {
                   long long result = addDigitLeft(k, d);
                   cout << "Результат добавления цифры " << d << " слева к числу " << k << ": " << result << endl;
               }
               break;
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