#include <iostream>
#include "task1.hpp"
#include "task2.hpp"
#include "list"
#include "task 4.hpp"

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
    for(size_t i = 0; i < 2; ++i){
        arr.push_back(new Deriv1(73* (i +1)));
        arr.push_back(new Deriv2(66 * (i +1)));
        arr.push_back(new Deriv3(92* (i +1)));

    }
    while(!arr.empty()) {
        arr.front()->print();
        std::cout << std::endl;
        arr.pop_front();
    }
    std::cout << "//// TASK4.1 ////" << std::endl;
    Deriv3_vir1 v(11);

    v.Deriv1_vir1::num = 22;
    v.Deriv2_vir1::num = 33;
    std::cout << v.num << " | " << v.Deriv1_vir1::num << " | " << v.Deriv2_vir1::num << std::endl;

    std::cout << "//// TASK4 ////" << std::endl;
    Deriv3_vir d3_v(55);
    d3_v.Abstr_vir::num = 66;
    std::cout << d3_v.num << " | " << d3_v.Abstr_vir::num << " | " << std::endl;

//    Abstr_vir *pAbs_v = &d1_v;
//    pAbs_v->print();
//    std::cout << std::endl;
//    d1_v.print();
//    std::cout << std::endl;
//
//    pAbs_v = &d2_v;
//    std::cout << std::endl;
//    pAbs_v->print();
//    std::cout << std::endl;
//    d2_v.print();
//    std::cout << std::endl;
//
//    pAbs_v = &d3_v;
//    std::cout << std::endl;
//    pAbs_v->print();
//    std::cout << std::endl;
//    d3_v.print();
//    std::cout << std::endl;

    return 0;
}
