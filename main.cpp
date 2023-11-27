#include <iostream>
using namespace std;
    int sort(int array[],int ent){
        for (int j = 0; j < 7; j++) {
            for (int i = 0; i < 6; i++) {
                if(ent == 1) if (array[i] > array[i + 1]) swap(array[i], array[i + 1]);
                if(ent == 2) if (array[i] < array[i + 1]) swap(array[i], array[i + 1]);
        }
    }
        cout << "Отсортированный массив: ";
        for (int t = 0; t < 7; t++) cout << array[t] << '\t';
}

    int main() {
        int numbers[7], enter, result, divider;
        for (int m = 0; m < 7; m++) {
            cout << "Инициализация | ячейка " << m << ":";
            cin >> numbers[m];
        }
        cout << "1. Сортировка по возрастанию" << endl
             << "2. Сортировка по убыванию" << endl
             << "3. Переменожить массив" << endl
             << "4. Сложить массив" << endl
             << "5. Разделить массив" << endl
             << "6. Обнулить массив" << endl
             << "7. Задать новые значения массиву" << endl
             << "Ввод: ";
        cin >> enter;
        switch (enter) {
            case 1:
                sort(numbers, enter);
                break;
            case 2:
                sort(numbers, enter);
                break;
            case 3:
                for (int i = 0; i < 7; i++) result *= numbers[i];
                cout << result;
                break;
            case 4:
                for (int i = 0; i < 7; i++) result += numbers[i];
                cout << result;
                break;
            case 5:
                cout << "Введите делитель: ";
                cin >> divider;
                cout << "Разделенный массив:" << endl;
                for (int i = 0; i < 7; i++) {
                    numbers[i] = numbers[i] / divider;
                    cout << numbers[i] << endl;
                }
                break;
            case 6:
                for (int i = 0; i < 7; i++) numbers[i] = 0;
                cout << "Массив стёрт!";
                break;
            case 7:
                main();
                break;
            default:
                cout << "Некорректный выбор";
                return 0;
        }
    }