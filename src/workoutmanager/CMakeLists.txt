set(TARGET workoutmanager)
add_library(${TARGET})

target_link_libraries(${TARGET})

target_sources(${TARGET} PRIVATE
	workoutmanager.cpp)

target_include_directories(${TARGET} PUBLIC .)

