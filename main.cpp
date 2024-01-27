#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

string message(int choice)
{
    vector<string> messages {"+", "-", "*", "/", "%","Квадрат числа равен: ", "Куб числа равен: ", "Корень числа равен: ", "Синус числа равен: ", "Косинус числа равен: "};
    return messages[choice - 1];
}
int mathMethods(int choice, int number1)
{
    int answer;
    switch (choice) {
        case 6:
            answer = pow(number1,2);
            break;
        case 7:
            answer = pow(number1, 3);
            break;
        case 8:
            answer = sqrt(number1);
            break;
        case 9:
            answer = sin(number1);
            break;
        case 10:
            answer = cos(number1);
            break;
    }
    return answer;
}
int calculator(int choice, int number1, int number2)
{
    int answer;
    switch (choice) {
        case 1:
            answer = number1 + number2;
            break;
        case 2:
            answer = number1 - number2;
            break;
        case 3:
            answer = number1 * number2;
            break;
        case 4:
            answer = number1 / number2;
            break;
        case 5:
            answer = number1 % number2;
            break;
    }
    return answer;
}

int main() {
    while (!false) {
        int choice, number1, number2;
        cout << "1. Складывать\t\t\t|\t+\n"
                "2. Вычитать\t\t\t\t|\t-\n"
                "3. Умножать\t\t\t\t|\t*\n"
                "4. Делить\t\t\t\t|\t/\n"
                "5. Деление с отстатком\t|\t*\n"
                "6. степень\n"
                "7. куб\n"
                "8. корень\n"
                "9. синус\n"
                "10. косинус\n"
                "11. Выйти\n"
                "Выберите операцию: ";
        cin >> choice;
        if(choice == 11) break;
        if (choice > 11 || choice < 0) {
            cout << "Некорректный выбор!";
        }
        if (choice < 6) {
            cout << "Введите первое число: ";
            cin >> number1;
            cout << "Введите второе число: ";
            cin >> number2;
            cout << number1 << " " << message(choice) << " " << number2 << " = "
                 << calculator(choice, number1, number2);
        }
        else if(choice > 5 && choice < 11) {
            cout << "Введите число: ";
            cin >> number1;
            cout << message(choice) << " = " << mathMethods(choice, number1);

        }
    }
    return 0;
}
