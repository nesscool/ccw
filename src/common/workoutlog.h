#ifndef CCW_WORKOUTLOG_H
#define CCW_WORKOUTLOG_H

#include "workout.h"

#include <vector>

namespace ccw
{

/**
 * @brief key entity for retaining a workout
 *
 * This type knows how to serialize/deserialize itself
 */
class WorkoutLog
{
public:
  WorkoutLog() {}
  ~WorkoutLog();

  int numWorkouts() const;

private:
  std::vector<Workout> workouts;
};

} // end namespace

#endif

