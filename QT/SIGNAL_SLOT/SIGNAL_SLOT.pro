QT += widgets
# 自定义类中使用Q_OBJECT时使用
OBJECTS_DIR  = tmp
MOC_DIR      = tmp
SOURCES += \
    loginpage.cpp \
    main.cpp \
    ui_passwordlineedit.cpp

HEADERS += \
    loginpage.h \
    ui_passwordlineedit.h

RESOURCES += \
    image.qrc
