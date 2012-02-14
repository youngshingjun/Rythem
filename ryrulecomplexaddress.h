#ifndef RYRULECOMPLEXADDRESS_H
#define RYRULECOMPLEXADDRESS_H

#include <QtCore>
#include "ryrule.h"
#include "rypipedata.h"

class RyRuleComplexAddress : public RyRule
{
	Q_OBJECT
public:
        explicit RyRuleComplexAddress(QString name, int type, QString pattern, QString replacement, bool enable = true, bool remote = false);
	bool match(const QString &url) const;
	QPair<QByteArray, QByteArray> replace(RyPipeData_ptr conn) const;
	
signals:
	
public slots:
	
};

#endif // RYRULECOMPLEXADDRESS_H
