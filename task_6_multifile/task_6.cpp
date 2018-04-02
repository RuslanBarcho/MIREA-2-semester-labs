#include <iostream>
#include <vector>
#include <algorithm>
#include "classes.h"

using namespace std;

int main() {
  Circle circle;
  Polygon polygon;
  switch (polygon.status(circle.center, circle.rad)) {
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
