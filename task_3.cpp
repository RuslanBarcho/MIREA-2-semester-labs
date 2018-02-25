#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int checkPoint(pair <int, int> center, pair <int, int> c, int r){
  if (((c.first - center.first) * (c.first - center.first) + (c.second - center.second) * (c.second - center.second)) < r * r) {
        return 0;
    } else if (((c.first - center.first) * (c.first - center.first) + (c.second - center.second) * (c.second - center.second)) == r * r) {
        return 1;
      } else return 2;
}

int checkFigure(vector<int> v){
  if (find(v.begin(), v.end(), 2) != v.end()) return 2;
  if (find(v.begin(), v.end(), 0) != v.end()) return 0;
  return 1;
}

int main() {
  cout << "enter center and radius" << '\n' << "center (2 inputs)" << '\n';

  pair <int, int> center;
  cin >> center.first; cin >> center.second;
  cout << "radius (1 input)" << '\n';
  int radius; cin >> radius;
  vector<int> v;

  for (int i = 0; i<4; i++){
    cout << "enter point" << '\n';
    pair <int, int> coordinate;
    cin >> coordinate.first; cin >> coordinate.second;
    v.push_back(checkPoint(center, coordinate, radius));
  }
  switch (checkFigure(v)) {
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
