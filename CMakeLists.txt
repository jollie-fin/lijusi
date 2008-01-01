project(Lijusi)
cmake_minimum_required(VERSION 2.6)
find_package(Qt4 REQUIRED)

include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})

set(Lijusi_SRCS lumeme_generic.cpp Lijusi.cpp main.cpp)
qt4_automoc(${Lijusi_SRCS})
add_executable(Lijusi ${Lijusi_SRCS})
target_link_libraries(Lijusi ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY})
