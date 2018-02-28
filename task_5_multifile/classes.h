class Figure {
public:
  std::string name;
};

class Polygon: public Figure {
private:
  int checkPoint(std::pair <int, int> center, std::pair <int, int> c, int r);
public:
  int pointAmount;
  std::vector<int> pointsStatus;
  Polygon();
  void setPointAmount();
  int status(std::pair <int, int> circleCenter, int rad);
};

class Circle: public Figure {
public:
  int rad;
  std::pair <int, int> center;
  Circle();
  void setR();
  void setCenter();
};
