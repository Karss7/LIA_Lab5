add_executable(unitTests test_main.cpp doctest.h)

target_sources(unitTests PRIVATE ../MathOps.cpp)
add_custom_target(runtest COMMAND unitTests)
