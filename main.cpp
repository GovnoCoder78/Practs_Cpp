#include <iostream>
using namespace std;
int main() {
    int arrInt[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    short arrShort[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1,};
    long arrLong[10] = {11, 12, 13, 14,15, 16, 17, 18, 19, 20};
    float arrFloat[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9,10.10 };
    double arrDouble[10] = {23984242.31412424, 8.1, 42424.42, 42595425.1412, 4224295.24, 0.1, 0.0001, 9.005, 8.1, 10.0 };
    char arrChar[10] = {'q', 'f', '1', '9', '^', '&', '*', '!', '{', '}' };
    bool arrBool[10] = {true, false, true, false, true, false, true, false, true, false,};
    string arrString[10] = {"que pro", "uvwuwurfvuwuriwuuaosas", "meow", "wefjqrioje", "skibidi", "tualet", "chipi", "chipi", "chapa", "chapa" };
                cout << "Маccив INT:" << endl;
                for(int i = 0; i < 10; ++i) {
                    cout << "arrInt [" << i << "]| значение: " << arrInt[i] << endl;
                }
                cout << "Маccив SHORT:" << endl;
                for(int i = 0; i < 10; ++i) {
                    cout << "arrShort [" << i << "]| значение: " << arrShort[i] << endl;
                }
                cout << "Маccив LONG:" << endl;
                for(int i = 0; i < 10; ++i) {
                    cout << "arrLong [" << i << "]| значение: " << arrLong[i] << endl;
                }
                cout << "Маccив FLOAT:" << endl;
                for(int i = 0; i < 10; ++i) {
                    cout << "arrFloat [" << i << "]| значение: " << arrFloat[i] << endl;
                }
                cout << "Маccив DOUBLE:" << endl;
                for(int i = 0; i < 10; ++i) {
                    cout << "arrDouble [" << i << "]| значение: " << arrDouble[i] << endl;
                }
                cout << "Маccив CHAR:" << endl;
                for(int i = 0; i < 10; ++i) {
                    cout << "arrChar [" << i << "]| значение: " << arrChar[i] << endl;
                }
                cout << "Маccив BOOL:" << endl;
                for(int i = 0; i < 10; ++i) {
                    cout << "arrBool [" << i << "]| значение: " << arrBool[i] << endl;
                }
                cout << "Маccив STRING:" << endl;
                for(int i = 0; i < 10; ++i) {
                    cout << "arrString [" << i << "]| значение: " << arrString[i] << endl;
                }
    return 0;
}
