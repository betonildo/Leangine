#include <Matrix4.h>

void matrix4SSEMultiplication() {

    Matrix4 m1, m2;

    m1.clear();
    m2.clear();

    /*
    1 1 1 1     1 1 1 1     2 2 2      
    2 2 2 2     2 2 2 2    2 2 2 2      
    3 3 3 3     3 3 3 3    2 2 2 2      
    4 4 4 4     4 4 4 4    2 2 2 2      
    */
    m1(0, 0) = 1;
    m1(0, 1) = 1;
    m1(0, 2) = 1;
    m1(0, 3) = 1;

    m1(1, 0) = 2;
    m1(1, 1) = 2;
    m1(1, 2) = 2;
    m1(1, 3) = 2;

    m1(2, 0) = 3;
    m1(2, 1) = 3;
    m1(2, 2) = 3;
    m1(2, 3) = 3;

    m1(3, 0) = 4;
    m1(3, 1) = 4;
    m1(3, 2) = 4;
    m1(3, 3) = 4;


    m2(0, 0) = 1;
    m2(1, 0) = 1;
    m2(2, 0) = 1;
    m2(3, 0) = 1;

    m2(0, 1) = 2;
    m2(1, 1) = 2;
    m2(2, 1) = 2;
    m2(3, 1) = 2;

    m2(0, 2) = 3;
    m2(1, 2) = 3;
    m2(2, 2) = 3;
    m2(3, 2) = 3;

    m2(0, 3) = 4;
    m2(1, 3) = 4;
    m2(2, 3) = 4;
    m2(3, 3) = 4;

    std::cout << "\n";
    std::cout << m1 << "\n";
    std::cout << "\n";
    std::cout << m2 << "\n";
    std::cout << "\n";
    std::cout <<  m2 * m1<< "\n";
    std::cout << "\n";
    std::cout <<  m1 * m2<< "\n";
}