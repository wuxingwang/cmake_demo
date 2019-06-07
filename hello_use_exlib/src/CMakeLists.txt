include_directories(${PROJECT_SOURCE_DIR}/lib)
SET(APP_SRC main.c)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

link_directories(${PROJECT_SOURCE_DIR}/lib)

ADD_EXECUTABLE(hello ${APP_SRC})

target_link_libraries(hello lib_pe.a)

#it is executed when sudo make install
#install(TARGETS hello DESTINATION /usr/bin/hello)
