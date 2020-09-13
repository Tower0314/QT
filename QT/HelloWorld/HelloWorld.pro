#加入widgets模块
QT+= widgets

#头文件以及源文件，创建时会自动添加，无IDE时需手动添加。
HEADERS += \
    cwidget.h \
    cwidget.h \
    tempwidget.h

SOURCES += \
    cwidget.cpp \
    main.cpp \
    tempwidget.cpp

RESOURCES += \
    image.qrc

DISTFILES +=
