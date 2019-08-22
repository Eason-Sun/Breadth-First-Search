## ECE650 Specific configuration start here
## Project specific configurations go here

# enable c++11 support
set (CMAKE_CXX_FLAGS "-std=c++11 -Wall ${CMAKE_CXX_FLAGS}")

# create the main executable
## add additional .cpp files if needed
add_executable(main main.cpp Vertex.cpp Graph.cpp)

# create the executable for tests
add_executable(test gtest_example.cpp Vertex.cpp Graph.cpp)
