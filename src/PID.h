#ifndef PID_H
#define PID_H

#include <vector>
class PID {
public:
  double p_error;
  double i_error;
  double d_error;
  double prev_error;
  double speed_factor;
  std::vector<double> p;
  PID(double Kp, double Ki, double Kd);
  virtual ~PID();
  double UpdateError(double cte, double speed);
  double Correction(){return (-p[0] *p_error*speed_factor) +
         (-p[1] * i_error * (1 - speed_factor)) +
        (-p[2] * d_error);}
};

#endif /* PID_H */
