#ifndef VLISTWIDGETDOUBLEROWS_H
#define VLISTWIDGETDOUBLEROWS_H

#include "vlistwidget.h"

#include <QIcon>

class QListWidgetItem;


class VListWidgetDoubleRows : public VListWidget
{
    Q_OBJECT
public:
    explicit VListWidgetDoubleRows(QWidget *p_parent = nullptr);

    QListWidgetItem *addItem(const QIcon &p_icon,
                             const QString &p_firstRow,
                             const QString &p_secondRow);

    void clearAll() Q_DECL_OVERRIDE;
};

#endif // VLISTWIDGETDOUBLEROWS_H
