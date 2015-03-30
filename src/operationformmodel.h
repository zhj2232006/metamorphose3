#ifndef OPERATIONFORMMODEL_H
#define OPERATIONFORMMODEL_H

#include <QtWidgets/QWidget>
#include <QtCore/QAbstractTableModel>
#include "operationformitem.h"
#include "core/operationmodel.h"


class OperationFormModel : public QAbstractTableModel
{
public:
    explicit OperationFormModel(QObject *parent = 0);
    ~OperationFormModel();

    QVariant data(const QModelIndex &index,
                  int role = Qt::DisplayRole) const override;
    QVariant headerData(int section,
                        Qt::Orientation orientation,
                        int role = Qt::DisplayRole) const override;
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;
    void addOperationForm(OperationFormItem *opForm);
    OperationModel* getOperations();
    bool isEmpty() const;

private:
    QModelIndex parentItem;
    QList<OperationFormItem*> opFormList;
    OperationModel *operations;
};

#endif // OPERATIONFORMMODEL_H
