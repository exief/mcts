option(CHESS_EXAMPLE "Enable compilation of Chess Example Application" OFF)

# sdl
if(CHESS_EXAMPLE)
  message("Building Chess Example")
  add_subdirectory(chess)
endif()

# Generic test that uses conan libs
add_executable(mcts main.cpp Node/Node.cpp Node/Node.h)
target_link_libraries(
  mcts PRIVATE project_options project_warnings CONAN_PKG::docopt.cpp
                CONAN_PKG::fmt CONAN_PKG::spdlog)
