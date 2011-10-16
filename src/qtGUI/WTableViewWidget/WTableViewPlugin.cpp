#include "WTableView.h"
#include "WTableViewPlugin.h"
#include <QtPlugin>

WTableViewPlugin :: WTableViewPlugin(QObject *parent): QObject(parent)
{
  initialized = false;
}

void WTableViewPlugin ::initialize(QDesignerFormEditorInterface * core)
{
  if (initialized) return;
  initialized = true;
}

bool WTableViewPlugin ::isInitialized() const
{
  return initialized;
}

QWidget * WTableViewPlugin ::createWidget(QWidget *parent)
{
  return new WTableView(parent);  // Construir el Widget
}

QString WTableViewPlugin ::name() const
{
  return "WTableView"; // El nom de la classe del Widget
}

QString WTableViewPlugin ::group() const
{
  return "Wmon Widgets";
}

QIcon WTableViewPlugin ::icon() const
{
  return QIcon();
}

QString WTableViewPlugin ::toolTip() const
{
  return "";
}

QString WTableViewPlugin ::whatsThis() const
{
  return "";
}

bool WTableViewPlugin ::isContainer() const
{
  return false;
}

QString WTableViewPlugin ::domXml() const
{
  return "<widget class=\"WTableView\" name=\"WTableView\">\n"
  " <property name=\"geometry\">\n"
  " <rect>\n"
  " <x>0</x>\n"
  " <y>0</y>\n"
  " <width>100</width>\n"
  " <height>100</height>\n"
  " </rect>\n"
  " </property>\n"
  "</widget>\n";
}

QString WTableViewPlugin ::includeFile() const
{
  return "WTableView.h";
}

Q_EXPORT_PLUGIN2(WTableView, WTableViewPlugin)
