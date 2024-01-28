cmake_minimum_required(VERSION 3.20)
project(RSA-signature)

set(CMAKE_CXX_STANDARD 11)

add_executable(RSA-signature main.cpp helper_functions.h helper_functions.cpp signer.cpp signer.h trusted_setup.cpp trusted_setup.h verifier.cpp verifier.h)