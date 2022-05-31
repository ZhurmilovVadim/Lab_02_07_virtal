
#ifndef LAB2_07_VIRTUAL_TASK2_HPP
#define LAB2_07_VIRTUAL_TASK2_HPP

#include "iostream"

class Abstr {
    double num;
public:
    explicit Abstr(double x = 0) : num(x){}
    virtual void print() = 0;
    virtual ~Abstr() {
        std::cout << std::endl << "Object of class \"Abstr\" was deleted" << std::endl;
    }
};

class Deriv1 : public Abstr{
    double num;
public:
    explicit Deriv1(double x = 0) : num(x){}
    void print() override{
        std::cout << "Deriv1 = [" << num << ']';
    }
    virtual ~Deriv1() {
        std::cout << std::endl << "Object of class \"Deriv1\" was deleted" << std::endl;
    }
};

class Deriv2 : public Deriv1{
    double num;
public:
    explicit Deriv2(double x = 0) : num(x){}
    void print() override {
        std::cout << "Deriv2 = [" << num << ']';
    }
    virtual ~Deriv2() {
        std::cout << std::endl << "Object of class \"Deriv2\" was deleted" << std::endl;
    }
};

class Deriv3 : public Deriv1{
    double num;
public:
    explicit Deriv3(double x = 0) : num(x){}
    void print() override {
        std::cout << "Deriv3 = [" << num << ']';
    }
    virtual ~Deriv3() {
        std::cout << std::endl << "Object of class \"Deriv3\" was deleted" << std::endl;
    }
};


class Abstr_vir1 {

public:
    double num;
    explicit Abstr_vir1(double x = 0) : num(x){
        std::cout << "abstr_vir constructor" << std::endl;
    }
    virtual void print() = 0;
    virtual ~Abstr_vir1() {
        std::cout << std::endl << "Object of class \"Abstr\" was deleted" << std::endl;
    }
};

class Deriv1_vir1 : public Abstr_vir1{

public:
    double num;
    explicit Deriv1_vir1(double x = 0) : num(x){
        std::cout << "deriv1_vir constructor" << std::endl;
    }
    void print() override{
        std::cout << "Deriv1 = [" << num << ']';
    }
    virtual ~Deriv1_vir1() {
        std::cout << std::endl << "Object of class \"Deriv1\" was deleted" << std::endl;
    }
};

class Deriv2_vir1 : public Abstr_vir1{

public:
    double num;
    explicit Deriv2_vir1(double x = 0) : num(x){
        std::cout << "deriv2_vir constructor" << std::endl;
    }
    void print() override {
        std::cout << "Deriv2 = [" << num << ']';
    }
    virtual ~Deriv2_vir1() {
        std::cout << std::endl << "Object of class \"Deriv2\" was deleted" << std::endl;
    }
};

class Deriv3_vir1 : public Deriv1_vir1, public Deriv2_vir1{

public:
    double num;
    explicit Deriv3_vir1(double x = 0) : num(x){
        std::cout << "deriv3_vir constructor" << std::endl;
    }
    void print() override {
        std::cout << "Deriv3 = [" << num << ']';
    }
    virtual ~Deriv3_vir1() {
        std::cout << std::endl << "Object of class \"Deriv3\" was deleted" << std::endl;
    }
};

#endif //LAB2_07_VIRTUAL_TASK2_HPP
