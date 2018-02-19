#include <iostream>
#include <vector>

using namespace std;
vector <int> arr;

void showArray(std::vector<int> array){
  for(int i = 0; i < array.size(); i++) cout << array[i] << ' ';
}
//check is vector is rising
bool ifRising(std::vector<int> v){
  for (int i=0; i<v.size()-1; i++){
    if (v[i]>=v[i+1]) {
      return false;
      break;
    }
  }
  return true;
}

int main() {
  //input
  cout << "/* enter number of elements */" << '\n';
  int q; cin>>q;
  for (int i=0; i<q; i++){
    int q; std::cin >> q;
    arr.push_back(q);
  }
  showArray(arr);
  cout << '\n';
  //output result
  if (ifRising(arr)){
    std::cout << "/* Rising */" << '\n';
  } else {
    std::cout << "/* Not Rising */" << '\n';
  }
  return 0;
}
