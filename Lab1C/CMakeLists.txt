add_executable(Lab1C lab1.c)
target_include_directories(Lab1C PUBLIC ../LibraryC)
target_link_libraries(Lab1C LibraryC)

add_test(NAME TestLab1C_1 COMMAND Lab1C ${CMAKE_CURRENT_SOURCE_DIR}/input.txt)
set_property(TEST TestLab1C_1 PROPERTY PASS_REGULAR_EXPRESSION "9 1")

add_test(NAME TestLab1C_2 COMMAND Lab1C ${CMAKE_CURRENT_SOURCE_DIR}/input2.txt)
set_property(TEST TestLab1C_2 PROPERTY PASS_REGULAR_EXPRESSION "10 2 3 5 7 11")

add_test(NAME TestLab1C_3 COMMAND Lab1C ${CMAKE_CURRENT_SOURCE_DIR}/input3.txt)
set_property(TEST TestLab1C_3 PROPERTY PASS_REGULAR_EXPRESSION "12 6 7 5 11 13 17 19")