# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/FileManagerApp_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/FileManagerApp_autogen.dir/ParseCache.txt"
  "FileManagerApp_autogen"
  )
endif()
