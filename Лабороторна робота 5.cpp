#include <iostream>
#include "windows.h"

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char ch;
    cout << "Введіть дужку: ";
    cin >> ch;

    // Duck add // 
    switch (ch) {
    case '(':
        cout << "Відкрита кругла дужка" << endl;
        break;
    case ')':
        cout << "Закрита кругла дужка" << endl;
        break;
    case '[':
        cout << "Відкрита квадратна дужка" << endl;
        break;
    case ']':
        cout << "Закрита квадратна дужка" << endl;
        break;
    case '{':
        cout << "Відкрита фігурна дужка" << endl;
        break;
    case '}':
        cout << "Закрита фігурна дужка" << endl;
        break;
    default:
        cout << "Це не дужка" << endl;
    }

    return 0;
}
