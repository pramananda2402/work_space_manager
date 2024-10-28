#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDir>
#include <QFileSystemModel>
#include <QTreeView>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QFileSystemModel *fileModel;
    QTreeView *treeView;
};

#endif // MAINWINDOW_H
