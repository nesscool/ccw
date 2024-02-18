set(TARGET workoutlogprovider)
add_library(${TARGET}
	)

target_link_libraries(${TARGET}
	common
	)

target_sources(${TARGET} PRIVATE
	iworkoutlogprovider.cpp
	)

target_include_directories(${TARGET} PUBLIC .)

