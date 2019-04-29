#include <QDebug>
#include <QIcon>

#include "pluginmenufile.h"
#include "pluginGui.h"
#include "i_wsCore.h"

PluginMenuFile::PluginMenuFile()
{

}
// ----------------------------------------------------------------
PluginMenuFile::~PluginMenuFile()
{

}
// ----------------------------------------------------------------
bool PluginMenuFile::initialize(QObject* wsCore)
{
	i_wsCore* ws = Q_NULLPTR;
	ws = qobject_cast<i_wsCore*>(wsCore);

	if (ws != Q_NULLPTR)
	{
		//ws->addTranslator("pluginMenuFile_ru.qm");
		ws->addGui(new pluginGui(ws));
	}

	return true;
}
// ----------------------------------------------------------------
QString PluginMenuFile::getName() const
{
	return QString("MenuFile");
}
// ----------------------------------------------------------------
QStringList PluginMenuFile::references() const
{
	return QStringList();
}
// ----------------------------------------------------------------
QIcon PluginMenuFile::getIcon() const
{
	return QIcon();
}
// ----------------------------------------------------------------
QString PluginMenuFile::about() const
{
	return QString(tr("Menu file"));
}
// ----------------------------------------------------------------
