# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "BattleCity-Tanks1990-APfinal_autogen"
  "CMakeFiles\\BattleCity-Tanks1990-APfinal_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\BattleCity-Tanks1990-APfinal_autogen.dir\\ParseCache.txt"
  )
endif()
