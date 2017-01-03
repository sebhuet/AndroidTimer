//
// Created by sebastien on 10/12/16.
//

#ifndef IRCODE01_TIMER_HPP
#define IRCODE01_TIMER_HPP


#include <iostream>
#include <chrono>

class Timer {

public:
    Timer();
    Timer(double from);
    void reset();
    double elapsed() const;

private:
    typedef std::chrono::high_resolution_clock HRC_T;
    std::chrono::time_point<HRC_T> m_begin;
    double m_from;
};


#endif //IRCODE01_TIMER_HPP
