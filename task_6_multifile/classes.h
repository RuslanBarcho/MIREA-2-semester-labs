class Figure {
public:
  std::string name;
};

class Polygon: public Figure {
private:
  int checkPoint(std::pair <int, int> center, std::pair <int, int> c, int r);
public:
  int pointAmount;
  std::vector<std::pair<int,int> > points;
  std::vector<int> pointsStatus;
  Polygon();
  void setPointAmount();
  int status(std::pair <int, int> circleCenter, int rad);
  ~Polygon();
};

class Circle: public Figure {
public:
  int rad;
  std::pair <int, int> center;
  Circle();
  void setR();
  void setCenter();
  ~Circle();
};
