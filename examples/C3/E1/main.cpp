#include<iostream>
#include<vector>

using namespace std;

/*
 * Return position (0 based) of item in data vector.
 * -1 if not found.
 */
template <class T>
int lsearch(T item, vector<T> data){
  for(int i=0; i<data.size(); i++){
    if(item == data[i]){
      return i;
    }
  }

  return -1;
}

int main(){

  // array of integers
  cout << "On Integers: " << endl;
  vector<int> d1;
  d1.push_back(1);
  d1.push_back(2);
  d1.push_back(3);
  d1.push_back(4);
  d1.push_back(5);

  cout << "Vector is: " << endl;
  for(int i=0;i < d1.size();i++){
    cout << d1[i] << " ";
  }
  cout << endl;
  cout << "Position of 7 is " << lsearch<int>(7, d1) << endl;
  cout << endl;

  // array of floats
  cout << "On Floats: " << endl;
  vector<float> d2;
  d2.push_back(2.3);
  d2.push_back(4.7);
  d2.push_back(-1.6);
  d2.push_back(9.1);
  d2.push_back(7.5);

  cout << "Vector is: " << endl;
  for(int i=0;i < d2.size();i++){
    cout << d2[i] << " ";
  }
  cout << endl;
  cout << "Position of 4.7 is " << lsearch<float>(4.7, d2) << endl;
  cout << endl;

  return 0;
}
