#ifndef iworkoutlogprovider_h
#define iworkoutlogprovider_h

namespace ccw
{

class IWorkoutLogProvider
{
  /**
   * @brief will provide a WorkoutLog
   *
   * @param workoutLog of the user
   * @return true if workoutLog found, otherwise false
   */
  bool getWorkoutLog(WorkoutLog& workoutLog) = 0;
};

} // end namespace

#endif
