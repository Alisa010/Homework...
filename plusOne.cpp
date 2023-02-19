/* Plus One
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.Increment the large integer by one and return the resulting array of digits.
Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Input: digits = [9]
Output: [1,0]
*/
#include <iostream>
#include <vector>

void plus_one(std::vector<int>& vec) {
  for(int i = vec.size() - 1; i >= 0; --i) {
        if(vec[i] != 9) {
          vec[i] += 1;
          break;
        }
        else {
          vec[i] = 0; 
        }
  }
  if(vec[0] == 0){
    vec[0] = 1;
    for(int i = 1; i < vec.size() ; ++i) {
      vec[i] = 0;
    }
    vec.push_back(0);
  }
}


int main() {
  std::vector<int> vec = {4, 3, 9, 8};
  plus_one(vec);
  for(int i = 0; i < vec.size(); ++i) {
    std::cout << vec[i] << " ";
  }
}