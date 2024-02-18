#ifndef CCW_WORKOUT_H
#define CCW_WORKOUT_H

#include "WorkoutTypes.h"

#include <vector>

namespace ccw
{

class Workout
{
public:
  Workout() {}
  ~Workout();

private:
  WorkoutType workoutType;

  vector<int> reps;
  // add a date object
  // add a start time
  // add a stop time
};

}

#endif

