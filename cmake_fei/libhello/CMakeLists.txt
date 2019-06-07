SET(LIB_SRC hello.c)
ADD_DEFINITIONS("-DLIBHELLO_BUILD")
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/../lib)

#dynamic library
#ADD_LIBRARY(libhello SHARED ${LIB_SRC})

#static library
ADD_LIBRARY(libhello  ${LIB_SRC})

set_target_properties(libhello PROPERTIES OUTPUT_NAME "hello")

#install command is executed when "sudo make install"
#install(TARGETS libhello DESTINATION /usr/lib)
#attention, don't create new folder in /usr/lib, just put libhello.so in /usr/lib directlly'
#install(FILES ${CMAKE_SOURCE_DIR}/libhello/hello.h DESTINATION /usr/include/hello)
