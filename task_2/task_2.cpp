#include <iostream>
#include <vector>
#include "functions.h"

using namespace std;

int main() {
  vector <int> arr;
  //input
  cout << "/* enter number of elements */" << '\n';
  int q; cin>>q;
  for (int i=0; i<q; i++){
    int q; cin >> q;
    arr.push_back(q);
  }
  showArray(arr);
  cout << '\n';
  //output result
  if (ifRising(arr)){
    cout << "/* Rising */" << '\n';
  } else {
    cout << "/* Not Rising */" << '\n';
  }
  return 0;
}
