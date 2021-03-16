#include <iostream>
#include <future>
#include <chrono>
#include <vector>
#include "MeyersSingleton/MeyersSingleton.h"
constexpr auto _10Mill= 10000000;

std::chrono::duration<double> getTime(){
    auto begin= std::chrono::system_clock::now();
    for ( size_t i= 0; i <= _10Mill; ++i){
        MeyersSingleton::getInstance();
    }
    return std::chrono::system_clock::now() - begin;
};

int main() {
    std::vector<std::future<std::chrono::duration<double>>> vec;
    long long int number_of_execution = 100000;

    for( long long int i = 0; i < number_of_execution; i++ ){
        vec.push_back(std::async(std::launch::async,getTime));
    }

    std::chrono::duration<double> sum;
    for(  long long int n = 0; n < number_of_execution; n++){
        sum += vec[n].get();
    }

    std::cout << sum.count() << std::endl;
    return 0;
}
