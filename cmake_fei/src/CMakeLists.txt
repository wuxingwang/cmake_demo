include_directories(${PROJECT_SOURCE_DIR}/libhello)
SET(APP_SRC main.c)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

link_directories(${PROJECT_SOURCE_DIR}/lib)


ADD_EXECUTABLE(hello ${APP_SRC})


target_link_libraries(hello libhello.a)


#why libhello, mathfei?
#because libhello is generated in the same project, and the library name is libhello
#mathfei is generated in another project, and name is libmathfei, but OUTPUT_NAME is changed to mathfei
target_link_libraries(hello libmathfei.a)

#it is executed when sudo make install
install(TARGETS hello DESTINATION /usr/bin/hello)
