include(FetchContent)

# Find the path where we will download the Tracy github repository
# we need this to find where the Tracy header files are for inclusion.
set(LIBDEFLATE_INCLUDE "${CMAKE_BINARY_DIR}/_deps/libdeflate-src/")

FetchContent_Declare(
  libdeflate
  GIT_REPOSITORY https://github.com/ebiggers/libdeflate.git
  GIT_TAG        b03254d978d7af21a7512dee8fdc3367bc15c656
)

# Download and populate libdeflate
FetchContent_MakeAvailable(libdeflate)
