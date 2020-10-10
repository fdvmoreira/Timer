//
// Created by Flavio Moreira on 03/10/2020.
//

#ifndef TIMER_TIMER_H
#define TIMER_TIMER_H

#include <iostream>
#include <chrono>

class Timer {
private:
    decltype(std::chrono::high_resolution_clock::now()) start,end ;
public:
    /**
     * Constructor
     */
    Timer();

    /**
     * Destructor
     */
    ~Timer();
};


#endif //TIMER_TIMER_H
