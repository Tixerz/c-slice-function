#include <iostream>
#include <vector>
template <typename T>
std::vector<T> slice(std::vector<T> vector_list , int start_point , int end_point){
    std::vector<T> output;
    for(int i = start_point ; i <= end_point ; i++){
        output.push_back(vector_list[i]);
    }
    return output;
}