add_subdirectory(editor)
add_subdirectory(framework)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_LIST_DIR})
target_sources(${PROJECT_NAME} PRIVATE main.cpp)