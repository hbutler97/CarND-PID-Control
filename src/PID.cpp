#include "PID.h"
#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID
(
    double Kp,
    double Ki,
    double Kd
 ):p_error(0),
   i_error(0),
   d_error(0),
   prev_error(0.0),
   speed_factor(1)
{
  p.push_back(Kp);
  p.push_back(Ki);
  p.push_back(Kd);
}

PID::~PID() {}

double PID::UpdateError(double cte, double speed) {
  speed_factor = speed;
  p_error = cte;               //Proportional error
  i_error += cte;              //Integral error
  d_error = cte - prev_error;  //Diff Error
  prev_error = cte;
  return Correction();
}

