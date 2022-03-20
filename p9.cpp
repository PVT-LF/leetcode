#include <stdlib.h>
#include <iostream>
#include <list>

class Solution {
public:
    bool isPalindrome(int x) { //ACCEPTED
        if (x >= 0) {
            std::list <int> digits;
            int i = 1;
            int digit;
            while (true) {
                digit = x % 10;
                digits.push_back(digit);
                x = (x - digit) / 10;
                if (x == 0){
                    break;
                }
                i++;
            }
            if (digits.size() == 1) return true;
            while (digits.size() > 1){
                if (digits.front() != digits.back()){
                    return false;
                }
                digits.pop_front();
                digits.pop_back();
            }
            return true;
        }
        else return false;
    };
};
int main(){


    return 0;
}