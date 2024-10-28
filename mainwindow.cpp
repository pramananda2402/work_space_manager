#include "mainwindow.h"
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), fileModel(new QFileSystemModel(this)), treeView(new QTreeView(this)) {
    // Set up the file model to browse the root directory
    fileModel->setRootPath(QDir::rootPath());

    // Set up the tree view and link it to the file model
    treeView->setModel(fileModel);
    treeView->setRootIndex(fileModel->index(QDir::homePath()));
    treeView->setColumnWidth(0, 250); // Adjust column width as necessary

    // Layout for the main window
    auto *layout = new QVBoxLayout();
    layout->addWidget(treeView);

    // Main widget setup
    QWidget *mainWidget = new QWidget(this);
    mainWidget->setLayout(layout);
    setCentralWidget(mainWidget);

    setWindowTitle("Simple File Manager");
}

MainWindow::~MainWindow() {
    // Destructor
}
