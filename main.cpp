#include <iostream>
#include "structure.h"
#include "menu.h"

int main() {

    const char* msgs[] = { "0. End",
                           "1. Return y coordinate from x",
                           "2. Return points of inflection",
                           "3. Return the area of the strip between the versier and its asymptote",
                           "4. Return the volume of the body obtained by rotating the strip from point 3 around the asymptote.",
                           "5. Set a",
                           "6. Get a"
    };

    const int Msgs = sizeof(msgs) / sizeof(msgs[0]);
    int choice;
    Verzera V(1);

    do {
        std::cout<<"Your Verzera:\n";
        char *s = V.frm();
        std::cout<<s<<std::endl;
        delete [] s;
        choice = dialog(msgs, Msgs);

        switch (choice) {
            case 1:
                return_y(&V);
                break;
            case 2:
                return_coords(&V);
                break;
            case 3:
                return_s(&V);
                break;
            case 4:
                return_v(&V);
                break;
            case 5:
                set_a(&V);
                break;
            case 6:
                get_a(&V);
                break;
            case 0:
                return 0;
            default:
                break;
        }

    } while (choice >= 0 && choice <= 6);
    return 0;
}
