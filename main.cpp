#include <iostream>
#include <algorithm>
#include <random>
#include <stdlib.h>
using namespace std;

int game(string name, string color,string white,  int quantity){
unsigned int healthpooints = 3, score = 0, number = 1;
char unswer;
unsigned int questions [] = {1,2,3,4,5,6,7,8,9,10,11,12};
string green = "\x1b[92m", red = "\x1b[91m";
cout << "Игрок: " << name << "| жизни: " << healthpooints << "| Очки: " << score << endl;
switch(quantity){
    case 1:
        quantity = 8;
    break;
    case 2:
        quantity = 10;
    break;
    case 3:
        quantity = 12;
    break;
}
    srand(time(0));
    shuffle(begin(questions), end(questions), mt19937(rand()) );

    for (int i = 0; i < 13; i++){
        //system("cls");
        if(healthpooints == 0){
            cout << red << "Игра окончена, вы проиграли!" << endl;
            return 0;
        }
        if (i >= 12 && healthpooints != 0){
            cout << green << "Игра окончена, вы выиграли!";
            return 0;
        }
        number = questions[i];
        switch (number) {
            case 1:
        cout << color << "Системный язык программирования?" << endl;
        cout  << "A. Python" << "   "<< "B. C#" << endl;
        cout << "C. Ruby" << "   "<< "D. C++" << endl << white <<"Выбрать ответ: ";
        cin >> unswer;
        if(unswer == 'D' || unswer == 'd' ){
            cout << green << "Правильный ответ!";
            score ++;
            continue;
        }
        else{
            healthpooints--;
            cout << red <<"Ответ неверный!";
            continue;
        }

            case 2:
                cout << color << "Какая из ос проприетарна?" << endl;
                cout << "A. Mac os" << "   "<< "B. Linux mint" << endl;
                cout << "C. linux debian" << "   "<< "D. Cent os" << endl << white  <<"Выбрать ответ: ";
                cin >> unswer;
                if(unswer == 'A' || unswer == 'a' ){
                    cout<< green << "Правильный ответ!";
                    score ++;
                    continue;
                }
                else{
                    healthpooints--;
                    cout << red <<"Ответ неверный!";
                    continue;
                }

            case 3:
                cout << color << "Какой язык по ошибке ассоциируют со змеей?" << endl;
                cout  << "A. С++" << "   "<< "B. C#" << endl;
                cout << "C. Python" << "   "<< "D. Ada" << endl<< white <<"Выбрать ответ: ";
                cin >> unswer;
                if(unswer == 'C' || unswer == 'c' ){
                    cout << green << "Правильный ответ!";
                    score ++;
                    continue;
                }
                else{
                    healthpooints--;
                    cout<< red  <<"Ответ неверный!";
                    continue;
                }

            case 4:
                cout << color << "Какого цикла не существует в С++?" << endl;
                cout  <<  "A. for" << "   "<< "B. for while" << endl;
                cout << "C. do while" << "   "<< "D. while" << endl << white <<"Выбрать ответ: ";
                cin >> unswer;
                if(unswer == 'B' || unswer == 'b' ){
                    cout<< green << "Правильный ответ!";
                    score ++;
                    continue;
                }
                else{
                    healthpooints--;
                    cout<< red  <<"Ответ неверный!";
                    continue;
                }

            case 5:
                cout << color << "На чем функционировали самые первые компьютеры?" << endl;
                cout  <<  "A. Лапмы" << "   "<< "B. Транзисторы" << endl;
                cout << "C. Электроны" << "   "<< "D. Фиксики" << endl << white <<"Выбрать ответ: ";
                cin >> unswer;
                if(unswer == 'A' || unswer == 'a' ){
                    cout<< green << "Правильный ответ!";
                    score ++;
                    continue;
                }
                else{
                    healthpooints--;
                    cout<< red <<"Ответ неверный!";
                    continue;
                }

            case 6:
                cout << color << "Какой язык не строгой типизации?" << endl;
                cout  <<  "A. Python" << "   "<< "B. C#" << endl;
                cout << "C. Ruby" << "   "<< "D. C++" << endl << white <<"Выбрать ответ: ";
                cin >> unswer;
                if(unswer == 'A' || unswer == 'a' ){
                    cout<< green << "Правильный ответ!";
                    score ++;
                    continue;
                }
                else{
                    healthpooints--;
                    cout << red <<"Ответ неверный!";
                    continue;
                }

            case 7:
                cout << color << "Какой язык программирования является встроенным?" << endl;
                cout  <<  "A. Python" << "   "<< "B. 1C" << endl;
                cout << "C. Ruby" << "   "<< "D. C++" << endl<< white <<"Выбрать ответ: ";
                cin >> unswer;
                if(unswer == 'B' || unswer == 'b' ){
                    cout<< green << "Правильный ответ!";
                    score ++;
                    continue;
                }
                else{
                    healthpooints--;
                    cout<< red  <<"Ответ неверный!";
                    continue;
                }

            case 8:
                cout << color << "В какой по счету день года отмечается день программиста?" << endl;
                cout  << "A. 0 день" << "   "<< "B. 8 день" << endl;
                cout << "C. 128 день" << "   "<< "D. 256 день" << endl << white  <<"Выбрать ответ: ";
                cin >> unswer;
                if(unswer == 'D' || unswer == 'd' ){
                    cout << green << "Правильный ответ!";
                    score ++;
                    continue;
                }
                else{
                    healthpooints--;
                    cout<< red  <<"Ответ неверный!";
                    continue;
                }

            case 9:
                cout << color << "Какое устройство называют винчестером?" << endl;
                cout <<  "A. HDD" << "   "<< "B. RAM" << endl;
                cout << "C. SSD" << "   "<< "D. HQD" << endl<< white <<"Выбрать ответ: ";
                cin >> unswer;
                if(unswer == 'A' || unswer == 'a' ){
                    cout << green << "Правильный ответ!";
                    score ++;
                    continue;
                }
                else{
                    healthpooints--;
                    cout<< red  <<"Ответ неверный!";
                    continue;
                }

            case 10:
                cout << color << "Как назывался первый процессор Intel?" << endl;
                cout  <<  "A. Intel 404" << "   "<< "B. Intel core i1" << endl;
                cout << "C. Intel 4004" << "   "<< "D. M1" << endl<< white <<"Выбрать ответ: ";
                cin >> unswer;
                if(unswer == 'C' || unswer == 'c' ){
                    cout<< green  << "Правильный ответ!";
                    score ++;
                    continue;
                }
                else{
                    healthpooints--;
                    cout << red <<"Ответ неверный!";
                    continue;
                }

            case 11:
                cout << color << "Какого вида мониторов не существует?" << endl;
                cout  << "A. Жидкокристаллический" << "   "<< "B. Лучевые" << endl;
                cout << "C. OLED" << "   "<< "D. Матричный" << endl<< white <<"Выбрать ответ: ";
                cin >> unswer;
                if(unswer == 'D' || unswer == 'd' ){
                    cout<< green  << "Правильный ответ!";
                    score ++;
                    continue;
                }
                else{
                    healthpooints--;
                    cout<< red  <<"Ответ неверный!";
                    continue;
                }

            case 12:
                cout << color  << "Сколько бит в байте?" << endl;
                cout << "A. 8" << "   "<< "B. 2" << endl;
                cout << "C. 4" << "   "<< "D. 16" << endl << white <<"Выбрать ответ: ";
                cin >> unswer;
                if(unswer == 'A' || unswer == 'a' ){
                    cout<< green  << "Правильный ответ!";
                    score ++;
                    continue;
                }
                else{
                    healthpooints--;
                    cout<< red <<"Ответ неверный!";
                    continue;
                }

        }
    }

}

int main() {
    //переменные
    int choice = 1, option, hit,  quantity = 12;
    string name;
    string color = "\x1b[0m", white = "\x1b[0m";

    //функции
    cout << "Введите имя: ";
    cin >> name;
    system("clear");
    cout << "Добро пожаловать в игру Викторина: " << name << endl;
    while (choice) {
        choice = 5;
        cout << color << "1. Начать игру" << endl << "2. Настройки" << endl << "3. Правила" << endl << "4. Выйти" << endl;
        while (choice > 4) {
            cin >> choice;
            switch (choice) {
        case 1: //игра
                    system("clear");
        game(name,color, white,  quantity);
        choice = 0;
        break;
        case 2: //настройки
                    system("clear");
                    cout << "1. Редактировать имя игрока" << endl << "2. Изменить количество вопросов" << endl
                         << "3. Изменить цвет интерфейса" << endl;
                    cout << "Выбрать опцию: ";
                    cin >> option;
                    switch (option) {
                        case 1:
                            cout << "Введите новое имя: ";
                            cin >> name;
                            system("clear");
                            cout << "Ваше новое имя: " << name << endl;
                            cout << "Нажмите 1 для выхода в меню";
                            cin >> option;
                            if (option == 1) {
                                continue;
                            }
                            break;
                        case 2:
                            cout << "Выберите количество вопросов" << endl << "1. 8 вопросов" << endl;
                            cout << "2. 10 вопросов" << endl << "3. 12 вопросов" << endl;
                            cout << "Ваш выбор: ";
                            cin >> quantity;
                            continue;
                            break;
                        case 3:
                        cout << "Выбрать цвет интерфейса" << endl;
                        cout << "1. Фиолетовый" << "\n" << "2. Желтый" << "\n" << "3. Белый" << "\n" << "4. Бирюзовый" << endl;
                        cin >> choice;
                        switch(choice){
                            case 1:
                            color = "\x1b[95m";
                            break;
                            case 2:
                            color = "\x1b[93m";
                            break;
                            case 3:
                            color = "\x1b[0m";
                            break;
                            case 4:
                            color = "\x1b[96m";
                            default:
                            cout << "Введено некорректное число";
                        }
                            break;
                    }
            case 3: //Правила
                            //system("cls");
                    cout << "- Игрок получат очки за правильные ответы на вопросы" << endl;
                    cout << "- Игрок проходит дальше за правильный ответ" << endl;
                    cout << "- Игрок теряет жизнь при неправильном ответе" << endl;
                    cout << "Нажмите 1 для возврата в главное меню" << endl;
                    cin >> hit;
                    if(hit == 1){
                        continue;
                    }
                    break;
            case 4://выход
                            //system("cls");
                return 0;
            default:
                    cout << "Такого выбора не существует. Введите корректное значение: ";
                    continue;
                }
            }
        }
    }
