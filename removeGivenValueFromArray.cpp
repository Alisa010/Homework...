/* Remove Element
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The relative order of the elements may be changed.
Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5, nums = [0,1,4,0,3,_,_,_]
*/
#include <iostream>
#include <vector>

int remove_given_value(std::vector<int>& vec, int val) {
  int count = 0;
  for (int i = 0; i < vec.size(); ++i) {
    if (vec[i] != val) {
        vec[count] = vec[i];
        count++;     
    }
  }
  return count;
}

int main() {
  std::vector<int> vec = {0,1,2,2,3,0,4,2};
  int value = 2;
  int count = remove_given_value(vec, value);
  for(int i = 0; i < count; ++i) {
    std::cout << vec[i] << " ";
  }
}