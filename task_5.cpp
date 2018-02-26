#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Figure {
public:
  string name;
};

class Circle: public Figure {
public:
  int rad;
  pair <int, int> center;
  Circle(){
    name = "circle";
    setR();
    setCenter();
  }
  void setR(){
    cout << "Введите значение радиуса окружности" << '\n';
    cin >> rad;
  }
  void setCenter(){
    cout << "Введите координаты центра окружности" << '\n';
    cin >> center.first; cin >> center.second;
  }
};

class Rectangle: public Figure {
private:
  int checkPoint(pair <int, int> center, pair <int, int> c, int r){
    if (((c.first - center.first) * (c.first - center.first) + (c.second - center.second) * (c.second - center.second)) < r * r) {
          return 0;
      } else if (((c.first - center.first) * (c.first - center.first) + (c.second - center.second) * (c.second - center.second)) == r * r) {
          return 1;
        } else return 2;
  };
public:
  int pointAmount;
  vector<int> pointsStatus;
  Rectangle(){
    name = "rectangle";
    setPointAmount();
  }
  void setPointAmount(){
    cout << "Введите количество вершин многоугольника" << '\n';
    cin >> pointAmount;
  };

  int status(pair <int, int> circleCenter, int rad){
    for (int i = 0; i<pointAmount; i++){
      cout << "Введите вершину" << '\n';
      pair <int, int> rectangleCoordinate;
      cin >> rectangleCoordinate.first; cin >> rectangleCoordinate.second;
      pointsStatus.push_back(checkPoint(circleCenter, rectangleCoordinate, rad));
    }
    if (find(pointsStatus.begin(), pointsStatus.end(), 2) != pointsStatus.end()) return 2;
    if (find(pointsStatus.begin(), pointsStatus.end(), 0) != pointsStatus.end()) return 0;
    return 1;
  }
};

int main() {
  Circle circle;
  Rectangle rectangle;
  switch (rectangle.status(circle.center, circle.rad)) {
    case 0:{
      cout << "Многоугольник лежит внутри" << endl;
    }
    break;
    case 1:{
      cout << "Многоугольник лежит на окружности" << endl;
    }
    break;
    case 2:{
      cout << "Многоугольник лежит вне окружности" << endl;
    }
    break;
  }
  return 0;
}
