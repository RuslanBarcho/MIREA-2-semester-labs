#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
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
	void addVerticle();
	void addVerticle(string f, string b, int c);
	bool searchInGraph(std::string toSearch);
	void deleteEdge(string toDelete);
	void fileInput();
	friend ostream& operator<<(ostream& os, const Graph& graph);  
	friend istream& operator>>(istream& is, Graph& graph);
};