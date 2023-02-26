/* Merge Sorted Array
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.Merge nums1 and nums2 into a single array sorted in non-decreasing order.
Input: nums1 = [1,2,3], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
*/
#include <iostream>
#include <vector>

std::vector<int> merge_sorted_arrays(std::vector<int>& vec1, int m, std::vector<int>& vec2, int n) {
 int left_index = 0;
 int right_index = 0;
 std::vector<int> result;
 while(left_index < m && right_index < n) {
     if(vec1[left_index] < vec2[right_index]) {
        result.push_back(vec1[left_index]);
        ++left_index;   
     }
     else {
        result.push_back(vec2[right_index]);
        ++right_index;    
     }
 }
 while(left_index < m) {
  result.push_back(vec1[left_index]);  
  ++left_index; 
 }
 while(right_index < n) {
  result.push_back(vec2[right_index]);  
  ++right_index; 
 }
  return result;
}

int main() {
  std::vector<int> vec1 = {1, 2, 10};
  std::vector<int> vec2 = {2, 5, 6};
  int m = vec1.size();
  int n = vec2.size();
  std::vector<int> vec = merge_sorted_arrays(vec1, m, vec2, n);
  for(int i = 0; i < m + n; i++) {
    std::cout << vec[i] << " ";
  }
}