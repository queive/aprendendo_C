//posto 50 miles
//25 miles per gallon
//2 galon left
#include <stdbool.h>

bool zero_fuel(double distance_to_pump, double mpg, double fuel_left)
{
if (distance_to_pump > (mpg * fuel_left))
{
   //tem que dar false
}
// if (distance_to_pump < (mpg * fuel_left)) tem que dar true
    return false;
}