# CMakeList.txt : CMake project for PLOBDH, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (PLOBDH "PLOBDH.cpp" "PLOBDH.h" "SendCommand.h" "SendCommand.cpp" "GetCommand.h" "GetCommand.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET PLOBDH PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
