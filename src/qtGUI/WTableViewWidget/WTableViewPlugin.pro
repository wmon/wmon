CONFIG+=designer plugin release 
TEMPLATE=lib 
TARGET =
DEPENDPATH += .
INCLUDEPATH += .

HEADERS+=WTableView.h WTableViewPlugin.h 
SOURCES += WTableView.cpp WTableViewPlugin.cpp 

target.path=~/.designer/plugins/designer 
INSTALLS+=target
