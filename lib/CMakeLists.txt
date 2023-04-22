# Sources are added with target_source(). When doing that, no sources are
# required here.
add_library(cmake-template-lib STATIC "")

# Add headers to private sources for better support in IDEs.
target_sources(cmake-template-lib
    PRIVATE
        "src/fancy_function.cpp"
    PUBLIC
        "include/fancy_function.h"
)

target_include_directories(cmake-template-lib PUBLIC "include")
