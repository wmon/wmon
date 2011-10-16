#ifndef WTABLEVIEW_H
#define WTABLEVIEW_H

#include <QTableView>
#include <QtDesigner/QDesignerExportWidget>

class QDESIGNER_WIDGET_EXPORT WTableView : public QTableView
{
    Q_OBJECT

    public:
        WTableView(QWidget *parent = 0);

    public slots:
        void setChannelTime(int sec);
        void setEmptyChannelTime(int sec);
        // set interface
        // set channels
        // write to file - stop
        
    signals:
        
};

#endif
