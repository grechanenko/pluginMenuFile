#ifndef PLUGINGUI_H
#define PLUGINGUI_H

#include <QObject>

#include "i_wsGuiPlugin.h"

class i_wsCore;
class pluginGui : public QObject, public i_wsGuiPlugin
{
	Q_OBJECT
	Q_INTERFACES(i_wsGuiPlugin)

public:
	pluginGui(i_wsCore*);
	~pluginGui();
	

	/*!
		Возвращает меню
	*/
	virtual QMenu* getMenu() const;

	/*!
		Возвращает панель
	*/
	virtual QToolBar* getToolBar() const;

	/*!
		Возвращает dockWidget
	*/
	virtual QDockWidget* getDockWidget() const;

private:

	struct SDATA;
	SDATA* m_data;

private slots:

	/*!
		Закрыть программу
	*/
	void slot_close();

};

#endif // PLUGINGUI_H

