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
        ������������� �������        
    */
    virtual bool initialize( QObject* wsCore);


	/*!
		���������� �������� �������
		������������ ��� ��������� ������������
	*/
	virtual QString getName() const;


    /*
        ����������� �� ������ ��������
    */
    virtual QStringList references() const;


	/*!
		���������� ������ �������
	*/
	virtual QIcon getIcon() const;


	/*!
		���������� �������� �������
	*/
	virtual QString about() const;
};

#endif // PLUGINMENUFILE_H
