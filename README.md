# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

## Reflection

After implementing the base PID algorithm, tuning was done by using each parameter indiviually and observing the effect on the car.
### Proportional
Kd was used in isolation and the car would attempt to center itself on the track, but would oscillate.  The oscillations were bad and was hard to get a good run to tune other parameters.  At slow speeds, the car tended to say closer to the center line so a speed factor was added.  
### Differential
Kd was added to so smooth out the oscillations.
### Integral
Ki is used to manage in perfections of the car. It was increased that that also improved things a bit build of of CTE over time

Here is the video: [PID Video](https://youtu.be/R6WDS9xfwjQ)