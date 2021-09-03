#include <string>
#include <iomanip>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) {
    int HH, MM, SS;
    std::ostringstream stream;
    SS = seconds % 3600 % 60; 
    MM = (seconds % 3600) / 60;
    HH = seconds / 3600;
    stream << std::setw(2) << std::setfill('0') << HH << ":"
    << std::setw(2) << std::setfill('0') << MM << ":"
    << std::setw(2) << std::setfill('0') << SS;
    return stream.str();
}