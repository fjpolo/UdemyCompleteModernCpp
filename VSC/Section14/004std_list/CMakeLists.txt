project(Section14_std_list VERSION 0.1)

set(TargetName ${PROJECT_NAME})

# target_include_directories(${TargetName} src)
# target_sources(${TargetName} PRIVATE src/main.cpp)
# target_link_libraries(${TargetName} )
set(mainAppSOURCES src/main.cpp) 
add_executable(${TargetName} ${mainAppSOURCES}) 