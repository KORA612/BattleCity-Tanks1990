cmake_minimum_required(VERSION 3.5)

project(BattleCity-Tanks1990-APfinal VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        Bullet.h
        Bullet.cpp
        Score.h
        Score.cpp
        Game.h
        Game.cpp
        Player.h
        Player.cpp
        Health.h
        Health.cpp
        res.qrc
        Mapcreator.h
        Mapcreator.cpp
        Wall.h
        Wall.cpp
        Target.h
        Target.cpp
        Menu.h
        Menu.cpp
        gamemenu.h
        gamemenu.cpp
        tank.h
        tank.cpp
        mainwindow.h
        mainwindow.cpp
        mainscene.h
        mainscene.cpp

)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(BattleCity-Tanks1990-APfinal
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET BattleCity-Tanks1990-APfinal APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(BattleCity-Tanks1990-APfinal SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(BattleCity-Tanks1990-APfinal
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(BattleCity-Tanks1990-APfinal PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

set_target_properties(BattleCity-Tanks1990-APfinal PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS BattleCity-Tanks1990-APfinal
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(BattleCity-Tanks1990-APfinal)
endif()
