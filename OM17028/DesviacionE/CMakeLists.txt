cmake_minimum_required ( VERSION 3.14 )
project ( DesviacionE C )

set ( CMAKE_C_STANDARD 99 )

add_executable ( DesviacionE main.c )
target_link_libraries(DesviacionE m)