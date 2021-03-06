#include <iostream>
#include <vector>
#include <algorithm>
#include "classes.h"

using namespace std;

int Polygon::checkPoint(pair <int, int> center, pair <int, int> c, int r){
    if (((c.first - center.first) * (c.first - center.first) + (c.second - center.second) * (c.second - center.second)) < r * r) {
          return 0;
      } else if (((c.first - center.first) * (c.first - center.first) + (c.second - center.second) * (c.second - center.second)) == r * r) {
          return 1;
        } else return 2;
  };

  Polygon::Polygon(){
    cout<<"Сработал конструктор класса Polygon \n";
    name = "Polygon";
    setPointAmount();
  }
  void Polygon::setPointAmount(){
    cout << "Введите количество вершин многоугольника" << '\n';
    cin >> pointAmount;
    for (int i = 0; i<pointAmount; i++){
      cout << "Введите вершину" << '\n';
      pair <int, int> polygonCoordinate;
      cin >> polygonCoordinate.first; cin >> polygonCoordinate.second;
      points.push_back(polygonCoordinate);
    }
  };

  int Polygon::status(pair <int, int> circleCenter, int rad){
    for (int i = 0; i<pointAmount; i++){
      pointsStatus.push_back(checkPoint(circleCenter, points[i], rad));
    }
    if (find(pointsStatus.begin(), pointsStatus.end(), 2) != pointsStatus.end()) return 2;
    if (find(pointsStatus.begin(), pointsStatus.end(), 0) != pointsStatus.end()) return 0;
    return 1;
  }

  Polygon::~Polygon(){
    cout<<"Сработал деструктор класса Polygon \n";
  }

