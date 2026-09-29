add_executable(Lab1C_task1 task1.c)
target_include_directories(Lab1C_task1 PUBLIC ../LibraryC)
target_link_libraries(Lab1C_task1 LibraryC)

add_executable(Lab1C_task2 task2.c)
target_include_directories(Lab1C_task2 PUBLIC ../LibraryC)
target_link_libraries(Lab1C_task2 LibraryC)

add_test(NAME TestLab1Task1C_1 COMMAND Lab1C_task1 ${CMAKE_CURRENT_SOURCE_DIR}/tests/task1_test1.txt)
set_property(TEST TestLab1Task1C_1 PROPERTY PASS_REGULAR_EXPRESSION "9")

add_test(NAME TestLab1Task1C_2 COMMAND Lab1C_task1 ${CMAKE_CURRENT_SOURCE_DIR}/tests/task1_test2.txt)
set_property(TEST TestLab1Task1C_2 PROPERTY PASS_REGULAR_EXPRESSION "10")

add_test(NAME TestLab1Task1C_3 COMMAND Lab1C_task1 ${CMAKE_CURRENT_SOURCE_DIR}/tests/task1_test3.txt)
set_property(TEST TestLab1Task1C_3 PROPERTY PASS_REGULAR_EXPRESSION "12")

add_test(NAME TestLab1Task2C_1 COMMAND Lab1C_task2 ${CMAKE_CURRENT_SOURCE_DIR}/tests/task2_test1.txt)
set_property(TEST TestLab1Task2C_1 PROPERTY PASS_REGULAR_EXPRESSION "1")

add_test(NAME TestLab1Task2C_2 COMMAND Lab1C_task2 ${CMAKE_CURRENT_SOURCE_DIR}/tests/task2_test2.txt)
set_property(TEST TestLab1Task2C_2 PROPERTY PASS_REGULAR_EXPRESSION "2 3 5 7 11")

add_test(NAME TestLab1Task2C_3 COMMAND Lab1C_task2 ${CMAKE_CURRENT_SOURCE_DIR}/tests/task2_test3.txt)
set_property(TEST TestLab1Task2C_3 PROPERTY PASS_REGULAR_EXPRESSION "6 7 5 11 13 17 19")
