cmake_minimum_required(VERSION 3.6)
project(PhoenixEngine)

find_package(SFML 2.5 COMPONENTS system window graphics REQUIRED)
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
add_executable(PhoenixEngine src/main.cpp)

target_compile_features(PhoenixEngine
                        PRIVATE
                        cxx_std_17)

target_compile_options(PhoenixEngine
                       PRIVATE
                       $<$<CXX_COMPILER_ID:MSVC>:/W3 /permissive- /TP>
					   $<$<CXX_COMPILER_ID:GNU>:-Wall -Wextra>)

# Any additional include files would go here
#target_include_directories(PhoenixEngine
#                           PUBLIC
#                           )

target_compile_definitions(PhoenixEngine
                           PRIVATE
                           $<$<CONFIG:Debug>:DEBUG>)

target_link_libraries(PhoenixEngine
                      PRIVATE
                      sfml-graphics
					  sfml-window
					  sfml-system)
