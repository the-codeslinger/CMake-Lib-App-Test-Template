add_executable(cmake-template-app "")

target_sources(cmake-template-app
    PRIVATE
        "src/main.cpp"
)

target_link_libraries(cmake-template-app 
    cmake-template-lib
)
