cmake_minimum_required(VERSION 3.18)
project (vetor VERSION 1.0.0 LANGUAGES CXX )

#=== SETTING VARIABLES ===#
# Compiling flags
set( GCC_COMPILE_FLAGS "-Wall" )


#=== Main App ===

set( APP_NAME "vetor" )

# Components
add_executable( ${APP_NAME}
    "main.cpp"
    "vetor.cpp" )

# C++ Version
target_compile_features( ${APP_NAME}  PUBLIC cxx_std_17 )
