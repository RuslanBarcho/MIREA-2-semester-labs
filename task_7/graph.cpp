#include "graph.h"

Graph::Graph(){
	cout<< "Empty graph created" << endl;
}

void Graph::addEdge(){
	cout << "Enter unique edge name" << endl;
	Edge edge;
	cin >> edge.name;
	edges.push_back(edge);
}

void Graph::addVerticle(){
	cout << "Enter two edges names" << endl;
	std::string first;
	std::string second;
	cin >> first;
	cin >> second;
	if ((searchInGraph(first) == true) & (searchInGraph(second) == true)){
		Verticle verticle;
		Edge edgeFirst;
		edgeFirst.name = first;
		Edge edgeSecond;
		edgeSecond.name = second;
		verticle.edges.first = edgeFirst;
		verticle.edges.second = edgeSecond;
		cout << "choose direction: 1 for *first -> second* 2 for *first <-> second*" << endl;
		cin >> verticle.direction;
		this->verticles.push_back(verticle);
	} else {
		cout << "one or both edges does not exist" << endl;
	}
}

void Graph::deleteEdge(string toDelete){
	if (this->searchInGraph(toDelete) == true){
		int index;
		for (int i = 0; i < this->edges.size(); i++){
			if (this->edges[i].name == toDelete){
			index = i;
			}
		}
		this->edges.erase(this->edges.begin() + index);
		vector<int> toDel;
		for (int i = 0; i < this->verticles.size(); i++){
			if (this->verticles[i].edges.first.name == toDelete | this->verticles[i].edges.second.name == toDelete){
			toDel.push_back(i);
			}
		}
		for (int j = toDel.size() - 1; j >=0 ; j--){
			this->verticles.erase(this->verticles.begin() + toDel[j]);
			cout << toDel[j];
		}
	} else {
		cout << "this edge does not exist" << endl;
	}
}

ostream& operator<<(ostream& os, const Graph& graph)  
{  
	os << "  ";
	for (int i = 0; i < graph.edges.size(); i++){
		os << graph.edges[i].name << " ";
	}
	os << endl;
	for (int i = 0; i< graph.edges.size(); i++){
		string localname = graph.edges[i].name;
		os << localname << " ";
		for (int j = 0; j < graph.edges.size(); j++){
			bool ifChecked = false;
			//search in verticles
			for (int k = 0; k< graph.verticles.size(); k++){
				if (graph.verticles[k].edges.first.name == graph.edges[i].name & graph.verticles[k].edges.second.name == graph.edges[j].name & (graph.verticles[k].direction == 1 | graph.verticles[k].direction == 2)){
					os << "1 ";
					ifChecked = true;
				} else if (graph.verticles[k].edges.second.name == graph.edges[i].name & graph.verticles[k].edges.first.name == graph.edges[j].name & graph.verticles[k].direction == 2){
					os << "1 ";
					ifChecked = true;
				} 
			}
			if (!ifChecked){
				os << "0 ";
			}
		}
		os << endl;
	}
	os << endl;
    return os;  
} 

bool Graph::searchInGraph(std::string toSearch){
	for (int i = 0; i < edges.size(); i++){
		if (edges[i].name == toSearch){
			return true;
			break;
		}
	}
	return false;
}

Graph::~Graph(){
}