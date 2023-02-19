/* Merge Sorted Array
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.Merge nums1 and nums2 into a single array sorted in non-decreasing order.
Input: nums1 = [1,2,3], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
*/
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> merge_sorted_arrays(std::vector<int>& vec1, int m, std::vector<int>& vec2, int n) {
  std::vector<int> vec(m + n);
  for(int i = 0; i < vec1.size(); i++) {
    vec[i] = vec1[i];
  }
  for(int i = 0; i < vec2.size(); i++) {
    vec[i + vec1.size()] = vec2[i];
  }
  
  for(int i = 0; i < vec.size() - 1; ++i) {
   for(int j = i + 1; j >= 1 ;--j) {
    if(vec[j] < vec[j - 1]) {
      std::swap(vec[j], vec[j - 1]);
    }
    else {
      break;
    }
   }
  }
  return vec;
}


int main() {
  std::vector<int> vec1 = {1, 2, 3};
  std::vector<int> vec2 = {2, 5, 6};
  int m = vec1.size();
  int n = vec2.size();
  std::vector<int> vec = merge_sorted_arrays(vec1, m, vec2, n);
  for(int i = 0; i < m + n; i++) {
    std::cout << vec[i] << " ";
  }
}
