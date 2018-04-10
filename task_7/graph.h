#include <iostream>
#include <vector>
#include <algorithm>
#include "verticle.h"
#pragma once

using namespace std;
class Graph {
public:
	Graph();
	~Graph();
	vector <Edge> edges;
	vector <Verticle> verticles;
	void addEdge();
};