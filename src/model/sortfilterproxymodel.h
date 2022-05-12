#ifndef SORTFILTERPROXYMODEL_H
#define SORTFILTERPROXYMODEL_H

#include <QObject>
#include <QSortFilterProxyModel>
#include "languagetranformation.h"

class SortFilterProxyModel : public QSortFilterProxyModel
{
    Q_OBJECT
public:
    SortFilterProxyModel(QObject *parent = Q_NULLPTR);

protected:
    bool filterAcceptsRow(int sourceRow, const QModelIndex &sourceParent) const Q_DECL_OVERRIDE;

private:
    QString m_filterStr;
    LanguageTransformation *m_languageSwitch;
};

#endif
