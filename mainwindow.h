/******************************************************************************
*                       _                 _       _
*                    __| |_   _  ___ _ __| | __ _| |__
*                   / _` | | | |/ _ \ '__| |/ _` | '_ \
*                  | (_| | |_| |  __/ |  | | (_| | |_) |
*                   \__,_|\__, |\___|_|  |_|\__,_|_.__/
*                         |___/
*
*  mainwindow.h
*
*  Created: 4 2017 by rodney
*
*  Copyright 2017 rodney.  All Rights Reserved.
*
* This file may be distributed under the terms of GNU Public License version
* 3 (GPL v3) as defined by the Free Software Foundation (FSF). A copy of the
* license should have been included with this file, or the project in which
* this file belongs to. You may also find the details of GPL v3 at:
*
* http://www.gnu.org/licenses/gpl-3.0.txt
*
* If you have any questions regarding the use of this file, feel free to
* contact the author of this file, or the owner of the project in which
* this file belongs to.
*
******************************************************************************/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDir>
#include <QMenu>
#include <QString>
#include <QAction>
#include <QSplitter>
#include <QTableView>
#include <QMainWindow>


#include "dataset.h"
#include "graphwidget.h"
#include "graphdatatablemodel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void closeEvent(QCloseEvent *event);

private:
    Ui::MainWindow *ui;
    QSplitter *mainSplitter;
    QTableView *tableView;

    GraphWidget *graphWidget;

    QAction *actionOpenDataFolder;
    QAction *actionToggleLayout;
    QAction *actionQuit;
    QDir *dataDir;

    GraphDataTableModel *tableModel;
    DataSet *dataSet;

    void makeActions();
    void makeMenus();
    void makeUI();
    void loadSettings();
    void saveSettings();



public slots:
    void slotSetFolder();
    void slotGraphClicked(const QModelIndex &index);
    void slotGraphSelectionChanged(QModelIndex current, QModelIndex previous);
    void slotToggleLayout();

};

#endif // MAINWINDOW_H
