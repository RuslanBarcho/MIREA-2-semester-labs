#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//c++ uytput
void showArray(vector<int> array){
  for(int i = 0; i < array.size(); i++) cout << array[i] << ' ';
}
//c output
void showArrayCType(vector<int> array){
  for(int i = 0; i < array.size(); i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}
//cyclic shift with rotate
void move(int value, vector<int> toMove){
  rotate(toMove.rbegin() , toMove.rbegin() + value , toMove.rend()) ;
  showArray(toMove);
}
//cycling shift, manual method
void moveManual(int value, vector<int> toMove){
  for (int i = 0; i<value; i++){
  for (int j = toMove.size() - 1; j>0; j--){
    int temp = toMove[j - 1];
    toMove[j-1] = toMove[j];
    toMove[j] = temp;
  }
}
showArray(toMove);
}

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
  cout << '\n' << "enter value to move array" << '\n';
  int g; cin>>g;
  moveManual(g, arr);
  return 0;
}
