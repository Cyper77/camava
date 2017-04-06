INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/src)
LINK_LIBRARIES(${PROJECT_NAME} )

 
ADD_EXECUTABLE(camava_test camava_test.cpp )
INSTALL(TARGETS camava_test   RUNTIME DESTINATION bin)
 
ADD_EXECUTABLE(camava_still_test camava_still_test.cpp )
INSTALL(TARGETS camava_still_test   RUNTIME DESTINATION bin)

IF (OpenCV_FOUND)
ADD_EXECUTABLE(camava_cv_test camava_cv_test.cpp )
target_link_libraries(camava_cv_test  ${PROJECT_NAME}_cv)
ADD_EXECUTABLE(camava_cv_still_test camava_cv_still_test.cpp )
target_link_libraries(camava_cv_still_test ${PROJECT_NAME}_cv)
INSTALL(TARGETS camava_cv_test  camava_cv_still_test RUNTIME DESTINATION bin)
ENDIF()
