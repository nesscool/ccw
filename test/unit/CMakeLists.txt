SET(TARGET testCcwProject)

add_executable(${TARGET})

target_sources(${TARGET} PRIVATE
	testworkoutmanager.cpp)

target_link_libraries(${TARGET}
  workoutmanager
  gtest
  gtest_main
  pthread)

add_test(NAME TEST_CCW COMMAND ${TARGET})
