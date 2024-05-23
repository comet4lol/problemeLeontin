/*De la tastatura se citeste un numar cu maxim 9 cifre. Sa se afiseze cel mai mic numar care se poate forma avand exact aceleasi cifre ca si numarul citit*/

#include <iostream>

using namespace std;

int main() {
    char num[10];
    cout << "Introduceti un numar cu maxim 9 cifre: ";
    cin >> num;

    for (int i = 0; num[i] != '\0'; i++) {
        for (int j = i + 1; num[j] != '\0'; j++) {
            if (num[i] > num[j]) {
                char temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    cout << "Cel mai mic numar care se poate forma este: ";
    for (int i = 0; num[i] != '\0'; i++) {
        std::cout << num[i];
    }
    cout << endl;

    return 0;
}