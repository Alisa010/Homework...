/* Single Number
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.
Input: nums = [2,2,1]
Output: 1
Input: nums = [4,1,2,1,2]
Output: 4
*/
#include <iostream>
#include <vector> 

 int singleNumber(std::vector<int>& vec) {
    std::vector<int> count = {0};
    int single_num = 0;
    for(int i = 0; i < vec.size(); ++i) {
        count[vec[i]]++;
    }
    for(int i = 0; i < vec.size(); ++i) {
        if(count[vec[i]] == 1) {
            single_num = vec[i];
        }
    }
   return single_num;
 }


int main() {
    std::vector<int> vec = {4,1,2,1,2};
    std::cout << singleNumber(vec);
    return 0;
}