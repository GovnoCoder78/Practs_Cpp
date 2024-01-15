#include <iostream>
using namespace std;
void dash(){
    for(int length = 0; length < 45; length++) cout << "-";
    cout << endl;
}
int main() {
int  numbers[5] = {1, 2,3,4,5};

    for(int i = 0; i < 5; i++) {
            cout << "| Таблица: " << i << endl;
            dash();
            cout << "| Число |" << "\t\tПример\t\t" << "|\tРезультат\t|" << endl;
            dash();
            cout << "|\t " << numbers[i] << "\t|\t\t" << numbers[i] << "+" << numbers[i] << "\t\t\t|\t\t" << numbers[i] + numbers[i] <<"\t\t|" << endl;
            dash();
            cout << "|\t " << numbers[i] << "\t|\t\t" << numbers[i] << "-" << numbers[i] << "\t\t\t|\t\t" << numbers[i] - numbers[i] <<"\t\t|" << endl;
            dash();
            cout << "|\t " << numbers[i] << "\t|\t\t" << numbers[i] << "*" << numbers[i] << "\t\t\t|\t\t" << numbers[i] * numbers[i] <<"\t\t|" << endl;
            dash();
            cout << "|\t " << numbers[i] << "\t|\t\t" << numbers[i] << "/" << numbers[i] << "\t\t\t|\t\t" << numbers[i] / numbers[i] <<"\t\t|" << endl;
            cout << endl;
    }
    return 0;
}