#ifndef PLUGINMENUFILE_H
#define PLUGINMENUFILE_H

#include <QObject>
#include "pluginmenufile_global.h"
#include "i_wsPlugin.h"

class PLUGINMENUFILE_EXPORT PluginMenuFile : public QObject, public virtual i_wsPlugin
{
	Q_OBJECT	
	Q_INTERFACES(i_wsPlugin)
	Q_PLUGIN_METADATA(IID "PluginMenuFile")
	
public:
	PluginMenuFile();
	~PluginMenuFile();

	/*!
        Инициализация плагина        
    */
    virtual bool initialize( QObject* wsCore);


	/*!
		Возвращает название плагина
		Используется для механизма зависимостей
	*/
	virtual QString getName() const;


    /*
        Зависимости от других плагинов
    */
    virtual QStringList references() const;


	/*!
		Возвращает иконку плагина
	*/
	virtual QIcon getIcon() const;


	/*!
		Возвращает описание планига
	*/
	virtual QString about() const;
};

#endif // PLUGINMENUFILE_H
