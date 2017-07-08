project(SnakeGame)

include_directories(include)

#not recommend way, but for small project it's enough
file(GLOB SOURCES "src/*.c")

add_executable(Snake ${SOURCES})
