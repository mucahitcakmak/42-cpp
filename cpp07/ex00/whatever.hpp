#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void swap(T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T min(T a, T b) {
    if (a > b)
        return (b);
    else if (b > a)
        return (a);
    else
        return (b);
}

template<typename T>
T max(T a, T b) {
    if (a > b)
        return (a);
    else if (b > a)
        return (b);
    else
        return (b);
}

#endif

/* Template
davranışı aynı fakat veri tipi farklı olan fonksiyonlar.
tekrarlı yazımlardan kurtulmak içinde kullanılır.

-> şablonlar bir fonksiyon değildirler, fonksiyon üretme planlarıdır.

template<typename T>
T topla(T a, T b) {
    return (a + b);
}

topla(2, 3);
topla(2.5f, 3.2f);
*/