project(Section16_007constexprLambda VERSION 0.1)

set(TargetName ${PROJECT_NAME})

ADD_DEFINITIONS (-Wall -std=c++11 -pthread -g -D_WIN32_WINNT=0x0501)
# target_compile_features(${TargetName} -Wall -std=gnu++11 -pthread -g)

# set_property(TARGET TargetName PROPERTY CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD 17)
# target_include_directories(${TargetName} src)
# target_sources(${TargetName} PRIVATE src/main.cpp)
# target_link_libraries(${TargetName} )
set(mainAppSOURCES src/main.cpp) 
# set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
add_executable(${TargetName} ${mainAppSOURCES}) 
