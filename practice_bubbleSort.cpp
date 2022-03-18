#include <stdlib.h>
#include <iostream>
#include <vector>

std::vector<int> mergeSort(std::vector<int> inputVector){ //inputVector gets modified, int in increasing order
    int temp = 0; //storage for swapping
    while (true){
        int mergeSortCounter = 0; //to check when sorting is done
        for (int i = 0; i < inputVector.size() - 1; i++){
            if (inputVector[i] > inputVector[i+1]){
                temp = inputVector[i];
                inputVector[i] = inputVector[i+1];
                inputVector[i+1] = temp;
                mergeSortCounter++;
            }
        }
        if (mergeSortCounter == 0) break;
    }
    return inputVector;
}

int main(){
    std::vector<int> out = mergeSort({5, 4, 3, 2, 1, 0, -1, -2, -3});
    for (int i = 0; i < out.size(); i++){
        std::cout << out[i] << std::endl;
    }
    return 0;
}