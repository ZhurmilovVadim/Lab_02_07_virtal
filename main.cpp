#include <iostream>
#include "task1.hpp"
#include "task2.hpp"
#include "list"

int main() {
    std::cout << "//// TASK1 ////" << std::endl;
    Bas *a = new Type1;
    ((Type1 *) a)->Move(3);
    std::cout << ((Type1 *) a)->Coord << std::endl;

    Bas *pObj;
    Type1 T1(10);
    Type2 T2(20);
    pObj = &T1;
    std::cout << "T1 = " << T1.Coord << " T2 = " << T2.Coord << std::endl;

    switch (pObj->ClassType) {
        case 1:
            ((Type1 *) pObj)->Move(5);
            break;
        case 2:
            ((Type2 *) pObj)->Move(5);
            break;
    }
    std::cout << "T1 = " << T1.Coord << " T2 = " << T2.Coord << std::endl;
    pObj = &T2;
    switch (pObj->ClassType) {
        case 1:
            ((Type1 *) pObj)->Move(5);
            break;
        case 2:
            ((Type2 *) pObj)->Move(5);
            break;
    }
    std::cout << "T1 = " << T1.Coord << " T2 = " << T2.Coord << std::endl;

    std::cout << "//// TASK2 ////" << std::endl;
    Deriv1 d1(33);
    Deriv2 d2(44);
    Deriv3 d3(55);

    Abstr *pAbs = &d1;
    pAbs->print();
    std::cout << std::endl;
    d1.print();
    std::cout << std::endl;

    pAbs = &d2;
    std::cout << std::endl;
    pAbs->print();
    std::cout << std::endl;
    d2.print();
    std::cout << std::endl;

    pAbs = &d3;
    std::cout << std::endl;
    pAbs->print();
    std::cout << std::endl;
    d3.print();
    std::cout << std::endl;

    std::cout << "//// TASK3 ////" << std::endl;
    std::list<Abstr*> arr {&d1, &d2, &d3};
    while(!arr.empty()) {
        arr.front()->print();
        std::cout << std::endl;
        arr.pop_front();
    }
    return 0;
}
