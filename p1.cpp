#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>

class Solution{
    public:
        Solution(){};
        ~Solution(){};
        std::vector<int> twoSum(std::vector<int>nums, int target){ //ACCEPTED
            std::vector<int> answer = {0,0};
            int temp;
            int index;
            bool found = false;
            while (found == false){
                temp = target - nums[index]; //temp is the other number to be paired to the current number
                for (int i = index+1; i < nums.size(); i++){
                    if (temp == nums[i]){
                        answer[0] = i;
                        answer[1] = index;
                        found = true;
                        break;
                    }
                }
                if (index == nums.size()) break; //when all nums are evaluated
                index++;
            }
            if (found) return answer;
            else return {}; //no solution found
        };
};

int main(){
    std::cout << "starting...\n";
    std::vector<int> testcase1 = {0,1,2,3,4,5};
    int target1 = 1;
    std::vector<int> testcase2 = {1,2};
    int target2 = 3;
    std::vector<int> testcase3 = {1,15,18,12,2};
    int target3 = 20;
    Solution test = Solution();
    test.twoSum(testcase1, target1);
    return 0;
}