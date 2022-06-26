#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

#define EMPTINESS ""
#define CROSS "x"
#define NOUGHT "o"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

enum Symbol {nought, cross};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Symbol symbol;

    MainWindow(QWidget *parent = nullptr);

    void check_of_pattern();
    void clear_of_field();

    ~MainWindow();

private slots:
    void button_clicked();

private:
    Ui::MainWindow *ui;
};
#endif //MAINWINDOW_H
