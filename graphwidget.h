/******************************************************************************
*                       _                 _       _
*                    __| |_   _  ___ _ __| | __ _| |__
*                   / _` | | | |/ _ \ '__| |/ _` | '_ \
*                  | (_| | |_| |  __/ |  | | (_| | |_) |
*                   \__,_|\__, |\___|_|  |_|\__,_|_.__/
*                         |___/
*
*  graphwidget.h
*
*  Created: 5 2017 by rodney
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

#ifndef GRAPHWIDGET_H
#define GRAPHWIDGET_H

#include <QWidget>
#include <QtCharts>
#include <QHBoxLayout>
#include "graphview.h"
#include "graphscene.h"
#include "graph.h"




class GraphWidget : public QWidget
{
    Q_OBJECT
public:
    explicit GraphWidget(Graph *theGraph = 0, QWidget *parent = 0);

    void changeGraph( Graph *theGraph );

signals:

public slots:

private:
    GraphScene *graphScene;
    GraphView *graphView;
    QHBoxLayout *mainLayout;
    QVBoxLayout *graphLayout;

    QChartView *degreeView;
    QChartView *closenessView;
    QChartView *betweennessView;


};

#endif // GRAPHWIDGET_H
