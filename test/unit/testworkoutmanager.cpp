
#include "workoutmanager.h" // module under test

#include <gtest/gtest.h>

using namespace testing;

namespace ccw
{

class WorkoutManagerFixture : public Test
{
  ;
};

TEST_F(WorkoutManagerFixture, TEST_NEXT_WORKOUT_TRUE)
{
  WorkoutManager wm;

  Workout workout;
  EXPECT_TRUE(wm.getNextWorkout(workout));
}

} // end namespace ccw
