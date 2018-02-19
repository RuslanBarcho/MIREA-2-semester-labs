#include <iostream>
#include <vector>

using namespace std;
vector <int> arr;

void showArray(std::vector<int> array){
  for(int i = 0; i < array.size(); i++) cout << array[i] << ' ';
}
//cyclic shift
void move(int value, vector<int> toMove){
  rotate(toMove.rbegin() , toMove.rbegin() + value , toMove.rend()) ;
  showArray(toMove);
}

int main() {
  cout << "enter number of elements" << '\n';
  int q; cin>>q;
  srand(time(NULL));
  //auto-input
  for (int i=0; i<q; i++){
    int q; std::cin >> q;
    arr.push_back(q);
    //arr.push_back(10 + rand() % (50 - 10 + 1));
  }
  showArray(arr);
  cout << "enter value to move array" << '\n';
  int g; cin>>g;
  move(g, arr);
  return 0;
}