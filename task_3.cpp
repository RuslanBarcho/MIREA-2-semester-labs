#include <iostream>

using namespace std;

bool ifTouch = true;
bool ifOutside = false;

void checkPoint(int xc, int yc, int x, int y, int r){
  if (((x - xc) * (x - xc) + (y - yc) * (y - yc)) < r * r) {
        ifTouch = false;
    } else if (((x - xc) * (x - xc) + (y - yc) * (y - yc)) != r * r) {
        ifOutside = true;
      }
}

int main() {
  cout << "enter center and radius" << '\n';
  cout << "center (2 inputs)" << '\n';
  int xc; cin >> xc;
  int yc; cin >> yc;
  cout << "radius (1 input)" << '\n';
  int radius; cin >> radius;
  int type;

  for (int i = 0; i<4; i++){
    cout << "enter point" << '\n';
    int x; cin >> x;
    int y; cin >> y;
    checkPoint(xc, yc, x, y, radius);
  }

  if (ifTouch) type = 1;
  if (ifOutside) type = 2;
  switch (type) {
    case 0:{
      cout << "INSIDE" << endl;
    }
    break;
    case 1:{
      cout << "TOUCH" << endl;
    }
    break;
    case 2:{
      cout << "OUTSIDE" << endl;
    }
    break;
  }
  return 0;
}
