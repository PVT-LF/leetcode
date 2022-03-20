#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    Solution();
    ~Solution();
    int minDominoRotations(std::vector<int>& tops, std::vector<int>& bottoms) {
        int rotations = 0; //minimum rotations
        int target1 = tops[0];
        int target2 = bottoms[0];
        for (int i = 1; i < tops.size(); i++){
            if ((target1 == 0) && (target2 == 0)) break;
            if (target1 != 0){
                if ((target1 != tops[i]) && (target2 != bottoms[i])) target1 = 0;
            }
            if (target2!= 0){
                if ((target2 != tops[i]) && (target2 != bottoms[i])) target2 = 0;
            }
        }
        if ((target1 != 0) || (target2 != 0)){
            return target1+target2;
        }
        else return -1;
    }
};

int main(){
    std::vector<int> top1 = {1, 3, 5};
    std::vector<int> bot1 = {3, 1, 3};
    std::vector<int> top2;
    std::vector<int> bot2;
    std::vector<int> top3;
    std::vector<int> bot3;
    Solution test = Solution();
    std::cout << test.minDominoRotations(top1, bot1) << std::endl;
    return 0;
}