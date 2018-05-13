#include <iostream>
#include <vector>
#include <algorithm>
#include "graph.h"
#include "str_switch.h"

using namespace std;

int main() {
  Graph graph;
  cout << "use command form" << endl;
  cout << "'add_obj' (edge - edg, verticle - ver) for adding object to graph" << endl;
  cout <<"'output' for print graph" << endl;
  cout << "'del_obj' for delete object and 'end' for exit" << endl;
  string userCommand;
  while (userCommand != "end"){
    cin >> userCommand;
    SWITCH(userCommand){
      CASE ("add_edg"):
          graph.addEdge();
        break;
      CASE ("add_ver"):
          graph.addVerticle();
        break;
      CASE ("output"):
          cout << graph;
        break;
      DEFAULT:
          cout << "unknown command" << endl;
        break;
    }
  }
  return 0;
}
