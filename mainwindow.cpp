#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(512, 512);

    ui->button_grid->SetFixedSize;

    ui->button_00->setFixedSize(64, 64);
    ui->button_10->setFixedSize(64, 64);
    ui->button_20->setFixedSize(64, 64);
    ui->button_30->setFixedSize(64, 64);
    ui->button_40->setFixedSize(64, 64);
    ui->button_50->setFixedSize(64, 64);
    ui->button_60->setFixedSize(64, 64);
    ui->button_70->setFixedSize(64, 64);

    ui->button_01->setFixedSize(64, 64);
    ui->button_11->setFixedSize(64, 64);
    ui->button_21->setFixedSize(64, 64);
    ui->button_31->setFixedSize(64, 64);
    ui->button_41->setFixedSize(64, 64);
    ui->button_51->setFixedSize(64, 64);
    ui->button_61->setFixedSize(64, 64);
    ui->button_71->setFixedSize(64, 64);

    ui->button_02->setFixedSize(64, 64);
    ui->button_12->setFixedSize(64, 64);
    ui->button_22->setFixedSize(64, 64);
    ui->button_32->setFixedSize(64, 64);
    ui->button_42->setFixedSize(64, 64);
    ui->button_52->setFixedSize(64, 64);
    ui->button_62->setFixedSize(64, 64);
    ui->button_72->setFixedSize(64, 64);

    ui->button_03->setFixedSize(64, 64);
    ui->button_13->setFixedSize(64, 64);
    ui->button_23->setFixedSize(64, 64);
    ui->button_33->setFixedSize(64, 64);
    ui->button_43->setFixedSize(64, 64);
    ui->button_53->setFixedSize(64, 64);
    ui->button_63->setFixedSize(64, 64);
    ui->button_73->setFixedSize(64, 64);

    ui->button_04->setFixedSize(64, 64);
    ui->button_14->setFixedSize(64, 64);
    ui->button_24->setFixedSize(64, 64);
    ui->button_34->setFixedSize(64, 64);
    ui->button_44->setFixedSize(64, 64);
    ui->button_54->setFixedSize(64, 64);
    ui->button_64->setFixedSize(64, 64);
    ui->button_74->setFixedSize(64, 64);

    ui->button_05->setFixedSize(64, 64);
    ui->button_15->setFixedSize(64, 64);
    ui->button_25->setFixedSize(64, 64);
    ui->button_35->setFixedSize(64, 64);
    ui->button_45->setFixedSize(64, 64);
    ui->button_55->setFixedSize(64, 64);
    ui->button_65->setFixedSize(64, 64);
    ui->button_75->setFixedSize(64, 64);

    ui->button_06->setFixedSize(64, 64);
    ui->button_16->setFixedSize(64, 64);
    ui->button_26->setFixedSize(64, 64);
    ui->button_36->setFixedSize(64, 64);
    ui->button_46->setFixedSize(64, 64);
    ui->button_56->setFixedSize(64, 64);
    ui->button_66->setFixedSize(64, 64);
    ui->button_76->setFixedSize(64, 64);

    ui->button_07->setFixedSize(64, 64);
    ui->button_17->setFixedSize(64, 64);
    ui->button_27->setFixedSize(64, 64);
    ui->button_37->setFixedSize(64, 64);
    ui->button_47->setFixedSize(64, 64);
    ui->button_57->setFixedSize(64, 64);
    ui->button_67->setFixedSize(64, 64);
    ui->button_77->setFixedSize(64, 64);

    ui->button_00->setIconSize(QSize(64, 64));
    ui->button_10->setIconSize(QSize(64, 64));
    ui->button_20->setIconSize(QSize(64, 64));
    ui->button_30->setIconSize(QSize(64, 64));
    ui->button_40->setIconSize(QSize(64, 64));
    ui->button_50->setIconSize(QSize(64, 64));
    ui->button_60->setIconSize(QSize(64, 64));
    ui->button_70->setIconSize(QSize(64, 64));

    ui->button_01->setIconSize(QSize(64, 64));
    ui->button_11->setIconSize(QSize(64, 64));
    ui->button_21->setIconSize(QSize(64, 64));
    ui->button_31->setIconSize(QSize(64, 64));
    ui->button_41->setIconSize(QSize(64, 64));
    ui->button_51->setIconSize(QSize(64, 64));
    ui->button_61->setIconSize(QSize(64, 64));
    ui->button_71->setIconSize(QSize(64, 64));

    ui->button_06->setIconSize(QSize(64, 64));
    ui->button_16->setIconSize(QSize(64, 64));
    ui->button_26->setIconSize(QSize(64, 64));
    ui->button_36->setIconSize(QSize(64, 64));
    ui->button_46->setIconSize(QSize(64, 64));
    ui->button_56->setIconSize(QSize(64, 64));
    ui->button_66->setIconSize(QSize(64, 64));
    ui->button_76->setIconSize(QSize(64, 64));

    ui->button_07->setIconSize(QSize(64, 64));
    ui->button_17->setIconSize(QSize(64, 64));
    ui->button_27->setIconSize(QSize(64, 64));
    ui->button_37->setIconSize(QSize(64, 64));
    ui->button_47->setIconSize(QSize(64, 64));
    ui->button_57->setIconSize(QSize(64, 64));
    ui->button_67->setIconSize(QSize(64, 64));
    ui->button_77->setIconSize(QSize(64, 64));

    statusBar()->hide();
    ui->mainToolBar->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}
