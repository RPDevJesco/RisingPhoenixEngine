cmake_minimum_required(VERSION 3.6)
project(RisingPhoenixEngine)

find_package(SFML 2.5 COMPONENTS system window graphics REQUIRED)
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
add_executable(RisingPhoenixEngine src/main.cpp)

target_compile_features(RisingPhoenixEngine
                        PRIVATE
                        cxx_std_17)

target_compile_options(RisingPhoenixEngine
                       PRIVATE
                       $<$<CXX_COMPILER_ID:MSVC>:/W3 /permissive- /TP>
					   $<$<CXX_COMPILER_ID:GNU>:-Wall -Wextra>)

# Any additional include files would go here
#target_include_directories(RisingPhoenixEngine
#                           PUBLIC
#                           )

target_compile_definitions(RisingPhoenixEngine
                           PRIVATE
                           $<$<CONFIG:Debug>:DEBUG>)

target_link_libraries(RisingPhoenixEngine
                      PRIVATE
                      sfml-graphics
					  sfml-window
					  sfml-system)
