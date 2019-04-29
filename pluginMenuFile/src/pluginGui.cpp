#include <QDebug>
#include <QMenu>
#include <QToolBar>
#include <QDockWidget>
#include <QAction>
#include <QApplication>
#include <QMainWindow>

#include "pluginGui.h"
#include "i_wsCore.h"


struct pluginGui::SDATA
{	
	QAction* actionClose = Q_NULLPTR;
	QMenu* menu = Q_NULLPTR;
	i_wsCore* wsCore = Q_NULLPTR;
};
// ----------------------------------------------------------------
pluginGui::pluginGui(i_wsCore* wsCore)
{
	m_data = Q_NULLPTR;
	m_data = new SDATA;

	if (m_data != Q_NULLPTR)
		if (wsCore != Q_NULLPTR)
			m_data->wsCore = wsCore;
}
// ----------------------------------------------------------------
pluginGui::~pluginGui()
{

}
// ----------------------------------------------------------------
QMenu* pluginGui::getMenu() const
{	

	QAction* actionClose = new QAction(tr("Close"));
	actionClose->setObjectName("actionClose");
	connect(actionClose, SIGNAL(triggered()), SLOT(slot_close()));

	

	QMenu* menu = new QMenu(tr("File"));
	menu->setObjectName("MenuFile");
	menu->addAction(actionClose);
	

	return menu;
}
// ----------------------------------------------------------------
QToolBar* pluginGui::getToolBar() const
{
	return Q_NULLPTR;
}
// ----------------------------------------------------------------
QDockWidget* pluginGui::getDockWidget() const
{
	return Q_NULLPTR;
}
// ----------------------------------------------------------------
void pluginGui::slot_close()
{
	if (m_data != Q_NULLPTR)
	{
		if (m_data->wsCore != Q_NULLPTR)
		{
			if (qApp != Q_NULLPTR)
			{
				qApp->quit();
			}
		}
	}
}
// ----------------------------------------------------------------