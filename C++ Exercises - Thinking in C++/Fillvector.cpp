    //: C02:Fillvector.cpp
    // Copy an entire file into a vector of string
    #include <string>
    #include <iostream>
    #include <fstream>
    #include <vector>
    using namespace std;

  int main() {
  vector<int> v;
  for(int i = 0; i < 10; i++)
    v.push_back(i);
  for(int i = 0; i < v.size(); i++)
    cout << v[i] << ", ";
  cout << endl;
  for(int i = 0; i < v.size(); i++)
    v[i] = v[i] * 10; // Assignment  
  for(int i = 0; i < v.size(); i++)
    cout << v[i] << ", ";
  cout << endl;
} ///:~