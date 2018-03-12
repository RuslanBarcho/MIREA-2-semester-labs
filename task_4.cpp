#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T, class S>
T max(vector<T> array, S start, T(*function)(T, S)){
  S n = start;
  for (int i=0; i<array.size(); i++){
    n=function(array[i], n);
  }
  return n;
};

void showArray(vector<int> array){
  for(int i = 0; i < array.size(); i++) cout << array[i] << ' ';
  cout<<"\n";
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

  int (*f)(int, int) = [] (int op1,int  op2)
  {
    if (op1>op2){
      return op1;
    } else {
      return op2;
    }
  };

  cout << max(arr, 0, f) << '\n';
  return 0;
}
