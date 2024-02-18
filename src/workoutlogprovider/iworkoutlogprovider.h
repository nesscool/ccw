#ifndef iworkoutlogprovider_h
#define iworkoutlogprovider_h

#include "workoutlog.h"

namespace ccw
{

class IWorkoutLogProvider
{
	virtual ~IWorkoutLogProvider() {}

  /**
   * @brief will provide a WorkoutLog
   *
   * @param workoutLog of the user
   * @return true if workoutLog found, otherwise false
   */
  virtual bool getWorkoutLog(WorkoutLog& workoutLog) = 0;
};

} // end namespace

#endif
