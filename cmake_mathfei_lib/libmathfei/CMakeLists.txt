SET(LIB_SRC mathfei.c)
ADD_DEFINITIONS("-DLIBEVEN_BUILD")
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

#dynamic library
#ADD_LIBRARY(libmathfei SHARED ${LIB_SRC})

#static library
ADD_LIBRARY(libmathfei  ${LIB_SRC})

set_target_properties(libmathfei PROPERTIES OUTPUT_NAME "mathfei")

#install command is executed when "sudo make install"
install(TARGETS libmathfei DESTINATION /usr/lib)
#attention, don't create new folder in /usr/lib, just put libmathfei.so in /usr/lib directlly'
install(FILES ${CMAKE_SOURCE_DIR}/libmathfei/mathfei.h DESTINATION /usr/include/mathfei)