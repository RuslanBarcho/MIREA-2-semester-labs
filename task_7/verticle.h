#include <iostream>
#include <vector>
#include <algorithm>
#include "edge.h"

using namespace std;
class Verticle {
public:
	Verticle();
	pair <Edge, Edge> edges;
	//0 for 1 to 2; 1 for 2 to 1; 2 to both 
	int direction;
};