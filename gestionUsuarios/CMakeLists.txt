cmake_minimum_required(VERSION 3.19)
project(gestionUsuarios LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(gestionUsuarios
    main.cpp
    usuario.h usuario.cpp
    estudiante.h estudiante.cpp
)

target_link_libraries(gestionUsuarios
    PRIVATE
        Qt::Core
)

include(GNUInstallDirs)

install(TARGETS gestionUsuarios
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
