# C++ interface source files
set(SRCCXXIF AlgebraicVector.cpp DA.cpp DACEException.cpp DAFormatter.cpp MathExtension.cpp Monomial.cpp compiledDA.cpp)
include_directories(include ${PROJECT_BINARY_DIR}/core/include ${PROJECT_SOURCE_DIR}/core/include)

if(WITH_ALGEBRAICMATRIX)
  list(APPEND SRCCXXIF "AlgebraicMatrix.cpp")
endif(WITH_ALGEBRAICMATRIX)

# Build object files for static and dynamic libraries of C++ interface
add_library(dacecxx_s OBJECT ${SRCCXXIF})
add_library(dacecxx OBJECT ${SRCCXXIF})
set_target_properties(dacecxx PROPERTIES POSITION_INDEPENDENT_CODE True)
if(WIN32)
  target_compile_definitions(dacecxx PRIVATE "DACE_API=__declspec(dllexport)")
  target_compile_definitions(dacecxx_s PRIVATE "DACE_API=")
endif(WIN32)

if(WITH_EIGEN)
  find_package(Eigen3 3.4 REQUIRED)
  include_directories(${EIGEN3_INCLUDE_DIR})
  target_compile_definitions(dacecxx PRIVATE WITH_EIGEN)
  target_compile_definitions(dacecxx_s PRIVATE WITH_EIGEN)
endif(WITH_EIGEN)
