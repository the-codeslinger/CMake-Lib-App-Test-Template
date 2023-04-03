# https://google.github.io/googletest/quickstart-cmake.html

include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.13.0.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings.
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(cmake-template-test "")

target_sources(cmake-template-test
    PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/src/test_fancy_function.cpp"
)

target_link_libraries(cmake-template-test 
    GTest::gtest_main 
    cmake-template-lib
)

include(GoogleTest)
gtest_discover_tests(cmake-template-test)