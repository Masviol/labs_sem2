//swap_uk 

#include <iostream>

void swap_uk(int a, int b) {

    int *temp = new int();
    *temp = a;

    int *numb = &b;

    a = *numb;
    b = *temp;

    delete temp;

    std::cout << a << " " << b << std::endl;

}


//swap_s

#include <iostream>

void swap_s(int &a, int &b){

    int tmp;
    tmp = a;

    a = b;
    b = tmp;

    std::cout << a << " " << b << std::endl;
}

//num_int_s

#include <iostream>

void num_int_s(float &a, float &b) {

    std::cout.precision(0);
    std::cout << a << " " << b << std::endl;

}


//num_int_uk

#include <iostream>

void num_int_uk(float a, float b) {

    float *num_a = &a;
    float *num_b = &b;

    std::cout.precision(0);
    std::cout << *num_a << " " << *num_b << std::endl;

}

//cmplex

#include <complex>
#include <iostream>

void cmplex(int &z1, int &z2, int &num){

    std::complex<int> z(z1, z2);

    std::cout << z * num << std::endl;

}

//cmplex_uk

#include <iostream>
#include <complex>

void cmplex_uk(int z1, int z2, int num) {

    int *ptrz1, *ptrz2, *ptrnum;

    ptrz1 = &z1;
    ptrz2 = &z2;
    ptrnum = &num;

    std::complex<int> z(*ptrz1, *ptrz2);

    std::cout << z * *ptrnum << std::endl;

}

//mcircle_s

#include <iostream>

void mcircle_s(int &rx, int &ry, int &prx, int &pry){

    rx = rx + prx;
    ry = ry + pry;

    std::cout << rx << " " << ry << " ";

}

//mycircle_uk

#include <iostream>

void mcircle_uk(int *rx, int *ry, int  *prx, int *pry){

    *rx = *rx + *prx;
    *ry = *ry + *pry;

    std::cout << *rx << " " << *ry << " ";

}

