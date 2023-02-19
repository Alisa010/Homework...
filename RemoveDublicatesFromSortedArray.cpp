// Remove Duplicates from Sorted Array
#include <iostream>
#include <vector>

int remove_dublicates(std::vector<int>& vec) {
  int count = 0;
  for (int i = 0; i < vec.size(); ++i) {
    if (vec[i] != vec[i + 1]) {
        vec[count] = vec[i];
        count++;     
    }
  }
  return count;
}

int main() {
  std::vector<int> vec = {1, 2, 2, 3, 3, 3, 3 ,3, 4, 5, 6, 6, 7};
  int count = remove_dublicates(vec);
  for(int i = 0; i < count; ++i) {
    std::cout << vec[i] << " ";
  }
}