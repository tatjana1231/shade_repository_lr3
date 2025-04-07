#include <iostream>
#include <string>

using namespace std;

long long addDigitRight(long long k, int d) {
    return k * 10 + d;
}

long long addDigitLeft(long long k, int d){
    string kstr = to_string(k);
    string dstr = to_string(d);
    string resstr = dstr + kstr;
}

int main() {
    long long k = 0;

    int d = 0;
    bool kentered = false;
    bool dentered = false;

    int choice;
    do {
        cout << "\nМеню. " << endl; 
        cout << "1. Ввести натуральное число K. " << endl; 
        cout << "2. Ввести цифру D (в диапазоне 1-9). " << endl; 
        cout << "3. Добавить к числу К справа цифру D. " << endl; 
        cout << "4. Добавить к числу К слева цифру D. " << endl; 

        cout << "Выберите цифру: ";
        cin >> choice;
        switch(choice){
            case 1: {
                cout << "Введите натуральное число K: ";
                cin >> k;
                if (k <= 0){
                    cout << "Ошибка: число должно быть натуральным. " << endl;
                    k = 0;
                    kentered = false; 
                    
                } else {
                    kentered = true;
                } break;
            }
            case 2: {
                cout << "Введите натуральное число D (в диапазоне 1-9): " << endl; 
                cin >> d;
                
                if (d < 1 || d > 9) {
                    cout << "Ошибка: число должно быть в диапазоне от 1 до 9. " << endl;
                    d = 0;
                    dentered = false;
                } else {
                    dentered = true; 
                } break; 

            }
            case 3: {
                if (!kentered || !dentered){
                    cout << "Сначала введите K и D. " << endl; 
                } else {
                    long long result = addDigitRight(k, d);
                    cout << "Результат добавления цифры " << d << " справа к числу " << k << ": " << result << endl;
                } break;
            }
            case 4: {
                if (!kentered || !dentered){
                    cout << "Сначала введите K и D. " << endl; 
                } else {
                    long long result = addDigitLeft(k, d);
                    cout << "Результат добавления цифры" << d << " слева к числу " << k << ": " << result << endl;
                } break;
            }
            case 0: {
                cout << "Выход... " << endl; 
                break;
            }
            default:{
                cout << "Ошибка: неверный выбор цифры, выберите цифры (1-4)" << endl;
            }
        } 
    } while (choice != 0);
    return 0;
}