#include "pch.h"
#include <iostream>
#include <iomanip>
#include "Boat.h"
#define NN (sizeof(v)/sizeof(int))
#define MM 5
int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "rus");
    int V = 1500,
        v[] = {100, 125, 150, 200, 225, 250, 300, 325, 350, 400, 425, 450, 500, 525, 550, 600, 625, 650, 700, 725, 750, 800, 825, 850, 900 },
        c[NN] = { 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100, 105, 110, 120, 130, 140, 150 };
    short  r[MM];
    int cc = boat(
        V,   // [in]  максимальный вес груза
        MM,  // [in]  количество мест дл€ контейнеров     
        NN,  // [in]  всего контейнеров  
        v,   // [in]  вес каждого контейнера  
        c,   // [in]  доход от перевозки каждого контейнера     
        r    // [out] результат: индексы выбранных контейнеров  
    );
    std::cout << "«адача о размещении контейнеров на судне";
    std::cout << std::endl << "ќбщее количество контейнеров: " << NN;
    std::cout << std::endl << " оличество мест дл€ контейнеров: " << MM;
    std::cout << std::endl << "ќграничение по общему весу: " << V;
    std::cout << std::endl << "¬ес контейнеров: ";
    for (int i = 0; i < NN; i++) std::cout << std::setw(3) << v[i] << " ";
    std::cout << std::endl << "ƒоход от перевозки: ";
    for (int i = 0; i < NN; i++) std::cout << std::setw(3) << c[i] << " ";
    std::cout << std::endl << "¬ыбраны контейнеры (0,1,...,m-1): ";
    for (int i = 0; i < MM; i++) std::cout << r[i] << " ";
    std::cout << std::endl << "ƒоход от перевозки: " << cc;
    std::cout << std::endl << "ќбщий вес выбранных контейнеров: ";
    int s = 0; for (int i = 0; i < MM; i++) s += v[r[i]]; std::cout << s;
    std::cout << std::endl << std::endl;
    system("pause");
    return 0;
}

