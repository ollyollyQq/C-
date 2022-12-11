#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
  vector<int> vec {5, 3, 2, 6, 1, 4};

  // ±Æ§Ç vector
  sort(vec.begin(), vec.end());

  for (int i = 0; i < 6; i++) {
    cout << vec[i] << " ";
  }
  cout << endl;
  return 0;
}
