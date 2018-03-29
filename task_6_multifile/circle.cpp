#include <iostream>
#include <vector>
#include <algorithm>
#include "classes.h"

using namespace std;

  Circle::Circle(){
    cout<<"Сработал конструктор класса Circle \n";
    name = "circle";
    setR();
    setCenter();
  }
  void Circle::setR(){
    cout << "Введите значение радиуса окружности" << '\n';
    cin >> rad;
  }
  void Circle::setCenter(){
    cout << "Введите координаты центра окружности" << '\n';
    cin >> center.first; cin >> center.second;
  }
  Circle::~Circle(){
    cout<<"Сработал деструктор класса Circle \n";
  }
