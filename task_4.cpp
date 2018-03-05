#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void showArray(vector<int> array){
  for(int i = 0; i < array.size(); i++) cout << array[i] << ' ';
  cout<<"\n";
}

int max(vector<int> array, int start, int(*func)(int, int)){
  int n = start;
  for (int i=0; i<array.size(); i++){
    n=func(array[i], n);
  }
  return n;
};

int maxPair(int op1, int op2){
  if (op1>op2){
    return op1;
  } else {
    return op2;
  }
};

int main() {
  vector <int> arr;
  cout << "enter number of elements" << '\n';
  int q; cin>>q;
  srand(time(NULL));
  //auto-input
  for (int i=0; i<q; i++){
    arr.push_back(10 + rand() % (50 - 10 + 1));
  }
  showArray(arr);
  cout << max(arr, 0, maxPair) << '\n';
  return 0;
}
