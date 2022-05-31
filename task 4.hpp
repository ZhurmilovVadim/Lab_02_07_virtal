//
// Created by vadim on 24.05.22.
//

#ifndef LAB2_07_VIRTUAL_TASK_4_HPP
#define LAB2_07_VIRTUAL_TASK_4_HPP

#include "iostream"

class Abstr_vir {
public:
    explicit Abstr_vir(double x = 0) : num(x){
        std::cout << "abstr_vir constructor" << std::endl;
    }
    virtual void print() = 0;
    virtual ~Abstr_vir() {
        std::cout << std::endl << "Object of class \"Abstr\" was deleted" << std::endl;
    }

    double num;
};

class Deriv1_vir : virtual public Abstr_vir{
public:
    explicit Deriv1_vir(double x = 0) : num(x){
        std::cout << "deriv1_vir constructor" << std::endl;
    }
    void print() override{
        std::cout << "Deriv1 = [" << num << ']';
    }
    virtual ~Deriv1_vir() {
        std::cout << std::endl << "Object of class \"Deriv1\" was deleted" << std::endl;
    }

    double num;
};

class Deriv2_vir : virtual public Abstr_vir{
public:
    explicit Deriv2_vir(double x = 0) : num(x){
        std::cout << "deriv2_vir constructor" << std::endl;
    }
    void print() override {
        std::cout << "Deriv2 = [" << num << ']';
    }
    virtual ~Deriv2_vir() {
        std::cout << std::endl << "Object of class \"Deriv2\" was deleted" << std::endl;
    }

    double num;
};

class Deriv3_vir : public Deriv1_vir, public Deriv2_vir{
public:
    explicit Deriv3_vir(double x = 0) : num(x){
        std::cout << "deriv3_vir constructor" << std::endl;
    }
    void print() override {
        std::cout << "Deriv3 = [" << num << ']';
    }
    virtual ~Deriv3_vir() {
        std::cout << std::endl << "Object of class \"Deriv3\" was deleted" << std::endl;
    }

    double num;
};

#endif //LAB2_07_VIRTUAL_TASK_4_HPP
