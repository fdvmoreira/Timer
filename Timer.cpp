//
// Created by Flavio Moreira on 03/10/2020.
//

#include "Timer.h"

Timer::Timer(): start(std::chrono::high_resolution_clock::now()) {}

Timer::~Timer() {

    //get the current time
    end = {std::chrono::high_resolution_clock::now()};

    //computer the difference between start and end, and thus the tick count
    std::chrono::duration<double> duration(end-start);

    //print the duration in milliseconds
    std::cout << "Time taken: " << duration.count()*1000.0 <<" ms."<<std::endl;
}