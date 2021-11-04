#include <iostream>
#include "structure.h"
#include "mainfunc.h"

int main() {

    const char* msgs[] = { "0. End",
                           "1. Edit vector",
                           "2. Put vector",
                           "3. Return including or of 2 vectors",
                           "4. Return and of 2 vectors",
                           "5. Return exclusive or of 2 vectors",
                           "6. Return vector complement",
                           "7. Return ogr"
    };

    const int Msgs = sizeof(msgs) / sizeof(msgs[0]);
    int choice;

    Vector V(2);

    do {
        choice = dialog(msgs, Msgs);

        switch (choice) {
            case 1:
                V.enter();
                break;
            case 2:
                V.out();
                break;
            case 3:
                retincor(V);
                break;
            case 4:
                retand(V);
                break;
            case 5:
                retiskili(V);
                break;
            case 6:
                dop(V);
                break;
            case 7:
                ogr(V);
                break;
            case 0:
                return 0;
            default:
                break;
        }

    } while (choice >= 0 && choice <= 7);
    return 0;
}
//операторы потока(ввод вывод) один бинарный оператор(+ или -) один унарный оператор(-а) модифицирующее присваивание(+=) индексация([]) икремент(--)