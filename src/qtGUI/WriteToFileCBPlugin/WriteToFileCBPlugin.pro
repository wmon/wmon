CONFIG+=designer plugin release 
TEMPLATE=lib 
TARGET =
DEPENDPATH += .
INCLUDEPATH += .

HEADERS+=WriteToFileCB.h WriteToFileCBPlugin.h 
SOURCES += WriteToFileCB.cpp WriteToFileCBPlugin.cpp 

target.path=~/.designer/plugins/designer 
INSTALLS+=target
