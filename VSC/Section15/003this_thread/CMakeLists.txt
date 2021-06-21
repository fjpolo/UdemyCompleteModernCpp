project(Section15_003this_thread VERSION 0.1)

set(TargetName ${PROJECT_NAME})

ADD_DEFINITIONS (-Wall -std=c++11 -pthread -g -D_WIN32_WINNT=0x0501)
# target_compile_features(${TargetName} -Wall -std=gnu++11 -pthread -g)


# target_include_directories(${TargetName} src)
# target_sources(${TargetName} PRIVATE src/main.cpp)
# target_link_libraries(${TargetName} )
set(mainAppSOURCES src/main.cpp) 
add_executable(${TargetName} ${mainAppSOURCES}) 
