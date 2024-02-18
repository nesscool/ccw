#ifndef CCW_WORKOUTTYPE_H
#define CCW_WORKOUTTYPE_H

#include <string>
#include <vector>

namespace ccw
{

class WorkoutSubtype {};

class WorkoutType
{
  std::string workoutClass;
  std::vector <WorkoutSubtype> subtypes;
};

} // end namespace

#endif

