#ifndef QIRULEGROUP2_H
#define QIRULEGROUP2_H

#include <QtCore>
#include "qirule2.h"

class QiRuleGroup2: public QObject
{
	Q_OBJECT
public:
	explicit QiRuleGroup2(QString name, bool enable = true, bool remote = false);
	void update(QString name, bool enable = true, bool remote = false);
	void addRule(const QiRule2 value, int index = -1);
	int getRuleIndex(const QString name) const;
	QiRule2 getRule(const QString name) const;
	QiRule2 getRuleAt(const int index) const;
	void updateRule(const QString name, const QiRule2 newValue);
	void updateRuleAt(const int index, const QiRule2 newValue);
	void removeRule(const QString name);
	void removeRuleAt(const int index);
	QiRule2 match(const QString path) const;
	QString toJSON() const;

	bool isRemote() const;
	bool isEnable() const;

signals:
	void changed();

private:
	QString _groupName;
	bool _isEnable;
	bool _isRemote;
	QList<QiRule2> _rules;
};

#endif // QIRULEGROUP2_H