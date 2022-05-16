#ifndef LAB2_07_VIRTUAL_TASK1_HPP
#define LAB2_07_VIRTUAL_TASK1_HPP

class Bas{
public:
    int a;
    int ClassType;
    Bas(int num = 0) : a(num), ClassType(0){}
};

class Type1 : public Bas {
public:
    int Coord;
    Type1(int x=0) : Coord(x) { ClassType = 1; }
    void Move(int Delta) { Coord += Delta; }
};

class Type2 : public Bas {
public:
    int Coord;
    Type2(int x = 0) : Coord(x) { ClassType = 2; }
    void Move(int Delta) { Coord -= Delta; }
};

#endif //LAB2_07_VIRTUAL_TASK1_HPP
