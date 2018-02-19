#include <iostream>
#include <vector>
#include "functions.h"

using namespace std;
void showArray(vector<int> array){
  for(int i = 0; i < array.size(); i++) cout << array[i] << ' ';
}
//check is vector is rising
bool ifRising(vector<int> v){
  for (int i=0; i<v.size()-1; i++){
    if (v[i]>=v[i+1]) {
      return false;
      break;
    }
  }
  return true;
}
