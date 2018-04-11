#include "graph.h"

Graph::Graph(){
	cout<< "Empty graph created" << endl;
}
void Graph::addEdge(){
	Edge edge;
	cout << "Enter unique edge name" << endl;
	cin >> edge.name;
	edges.push_back(edge);
}
Graph::~Graph(){
}