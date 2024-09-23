#include <iostream>

typedef int* VEC;           // VEC is a pointer to an int
typedef VEC* MATRIX;       // MATRIX is a pointer to a VEC

int main() {

    int a = 5;
    VEC v = &a;             // v points to a
    MATRIX m = &v;         // m points to v

    // Display the value of a using v
    std::cout << "Value of v: " << *v << std::endl;

    // Display the value of a using m
    std::cout << "Value of m: " << **m << std::endl;

    return 0;

}