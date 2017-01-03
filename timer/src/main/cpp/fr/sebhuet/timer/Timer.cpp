//
// Created by sebastien on 10/12/16.
//

#include "Timer.hpp"

Timer::Timer()
        : m_begin(HRC_T::now()), m_from(0) {}

Timer::Timer(double from)
        :m_begin(HRC_T::now()), m_from(from) {}

void Timer::reset() {
    m_begin = HRC_T::now();
}

double Timer::elapsed() const {
    return m_from + std::chrono::duration_cast<std::chrono::milliseconds>
            (HRC_T::now() - m_begin).count();
}
