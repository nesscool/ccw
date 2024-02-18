set(TARGET common)
add_library(${TARGET}
	)

target_link_libraries(${TARGET}
	)

target_sources(${TARGET} PRIVATE
	common.cpp
	)

target_include_directories(${TARGET} PUBLIC .)

