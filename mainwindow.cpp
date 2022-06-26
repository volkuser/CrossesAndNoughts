#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow){

    ui->setupUi(this);

    /* (example of button name) b01:
        b - button,
        0 - column of button,
        1 - row of button */

    connect(ui->b00, SIGNAL(clicked()), this, SLOT(button_clicked()));
    connect(ui->b01, SIGNAL(clicked()), this, SLOT(button_clicked()));
    connect(ui->b02, SIGNAL(clicked()), this, SLOT(button_clicked()));
    connect(ui->b10, SIGNAL(clicked()), this, SLOT(button_clicked()));
    connect(ui->b11, SIGNAL(clicked()), this, SLOT(button_clicked()));
    connect(ui->b12, SIGNAL(clicked()), this, SLOT(button_clicked()));
    connect(ui->b20, SIGNAL(clicked()), this, SLOT(button_clicked()));
    connect(ui->b21, SIGNAL(clicked()), this, SLOT(button_clicked()));
    connect(ui->b22, SIGNAL(clicked()), this, SLOT(button_clicked()));

    symbol = nought;
    // determining who is moving
    /* if symbol is nought, then the player,
        who puts a noughts,
        else if symbol is cross, then the player,
        who puts a crosses */
}

void MainWindow::button_clicked(){
    if(symbol == nought) {

        /* put a nought on the desired button
        and move to check of patterns */

        if(this->sender()->objectName() == "b00"
                && ui->b00->text() == EMPTINESS){
            ui->b00->setText(NOUGHT);
            check_of_pattern();
        }
        if(this->sender()->objectName() == "b01"
                && ui->b01->text() == EMPTINESS){
            ui->b01->setText(NOUGHT);
            check_of_pattern();
        }
        if(this->sender()->objectName() == "b02"
                && ui->b02->text() == EMPTINESS){
            ui->b02->setText(NOUGHT);
            check_of_pattern();
        }
        if(this->sender()->objectName() == "b10"
                && ui->b10->text() == EMPTINESS){
            ui->b10->setText(NOUGHT);
            check_of_pattern();
        }
        if(this->sender()->objectName() == "b11"
                && ui->b11->text() == EMPTINESS){
            ui->b11->setText(NOUGHT);
            check_of_pattern();
        }
        if(this->sender()->objectName() == "b12"
                && ui->b12->text() == EMPTINESS){
            ui->b12->setText(NOUGHT);
            check_of_pattern();
        }
        if(this->sender()->objectName() == "b20"
                && ui->b20->text() == EMPTINESS){
            ui->b20->setText(NOUGHT);
            check_of_pattern();
        }
        if(this->sender()->objectName() == "b21"
                && ui->b21->text() == EMPTINESS){
            ui->b21->setText(NOUGHT);
            check_of_pattern();
        }
        if(this->sender()->objectName() == "b22"
                && ui->b22->text() == EMPTINESS){
            ui->b22->setText(NOUGHT);
            check_of_pattern();
        }
   }
    else {

        /* put a cross on the desired button
        and move to check of patterns */

        if(this->sender()->objectName() == "b00"
                && ui->b00->text() == EMPTINESS){
            ui->b00->setText(CROSS);
            check_of_pattern();
        }
        if(this->sender()->objectName() == "b01"
                && ui->b01->text() == EMPTINESS){
            ui->b01->setText(CROSS);
            check_of_pattern();
        }
        if(this->sender()->objectName() == "b02"
                && ui->b02->text() == EMPTINESS){
            ui->b02->setText(CROSS);
            check_of_pattern();
        }
        if(this->sender()->objectName() == "b10"
                && ui->b10->text() == EMPTINESS){
            ui->b10->setText(CROSS);
            check_of_pattern();
        }
        if(this->sender()->objectName() == "b11"
                && ui->b11->text() == EMPTINESS){
            ui->b11->setText(CROSS);
            check_of_pattern();
        }
        if(this->sender()->objectName() == "b12"
                && ui->b12->text() == EMPTINESS){
            ui->b12->setText(CROSS);
            check_of_pattern();
        }
        if(this->sender()->objectName() == "b20"
                && ui->b20->text() == EMPTINESS){
            ui->b20->setText(CROSS);
            check_of_pattern();
        }
        if(this->sender()->objectName() == "b21"
                && ui->b21->text() == EMPTINESS){
            ui->b21->setText(CROSS);
            check_of_pattern();
        }
        if(this->sender()->objectName() == "b22"
                && ui->b22->text() == EMPTINESS){
            ui->b22->setText(CROSS);
            check_of_pattern();
        }
    }
}

void MainWindow::check_of_pattern(){

    // draw
    if(ui->b00->text()!=EMPTINESS && ui->b01->text()!=EMPTINESS
           && ui->b02->text()!=EMPTINESS && ui->b10->text()!=EMPTINESS
            && ui->b11->text()!=EMPTINESS && ui->b12->text()!=EMPTINESS
            && ui->b20->text()!=EMPTINESS && ui->b21->text()!=EMPTINESS
            && ui->b22->text()!=EMPTINESS){
        QMessageBox::information(this , "game ended" , "draw" );
        clear_of_field();
    }
    // victory of noughts (checking the variants)
    else if(symbol == nought){
    //check for o-player pattern
        if(ui->b00->text()==NOUGHT && ui->b01->text()==NOUGHT && ui->b02->text()==NOUGHT){
            QMessageBox::information(this , "game ended" , "noughts won" );
            clear_of_field();
        }
        else if(ui->b10->text()==NOUGHT && ui->b11->text()==NOUGHT && ui->b12->text()==NOUGHT){
            QMessageBox::information(this , "game ended" , "noughts won" );
            clear_of_field();
        }
        else if(ui->b20->text()==NOUGHT && ui->b21->text()==NOUGHT && ui->b22->text()==NOUGHT){
             QMessageBox::information(this , "game ended" , "noughts won" );
             clear_of_field();
        }
        else if(ui->b00->text()==NOUGHT && ui->b10->text()==NOUGHT && ui->b20->text()==NOUGHT){
             QMessageBox::information(this , "game ended" , "noughts won" );
             clear_of_field();
        }
        else if(ui->b01->text()==NOUGHT && ui->b11->text()==NOUGHT && ui->b21->text()==NOUGHT){
             QMessageBox::information(this , "game ended" , "noughts won" );
             clear_of_field();
        }
        else if(ui->b02->text()==NOUGHT && ui->b12->text()==NOUGHT && ui->b22->text()==NOUGHT){
             QMessageBox::information(this , "game ended" , "noughts won" );
             clear_of_field();
        }
        else if(ui->b00->text()==NOUGHT && ui->b11->text()==NOUGHT && ui->b22->text()==NOUGHT){
             QMessageBox::information(this , "game ended" , "noughts won" );
             clear_of_field();
        }
        else if(ui->b20->text()==NOUGHT && ui->b11->text()==NOUGHT && ui->b02->text()==NOUGHT){
             QMessageBox::information(this , "game ended" , "noughts won" );
             clear_of_field();
        }
        else
            symbol = cross;
    }
    // victory of crosses (checking the variants)
    else {
    // check for x-player pattern
        if(ui->b00->text()==CROSS && ui->b01->text()==CROSS && ui->b02->text()==CROSS){
            QMessageBox::information(this, "game ended", "crosses won" );
            clear_of_field();
        }
        else if(ui->b10->text()==CROSS && ui->b11->text()==CROSS && ui->b12->text()==CROSS){
            QMessageBox::information(this, "game ended", "crosses won" );
            clear_of_field();
        }
        else if(ui->b20->text()==CROSS && ui->b21->text()==CROSS && ui->b22->text()==CROSS){
             QMessageBox::information(this, "game ended", "crosses won" );
             clear_of_field();
        }
        else if(ui->b00->text()==CROSS && ui->b10->text()==CROSS && ui->b20->text()==CROSS){
             QMessageBox::information(this, "game ended", "crosses won" );
             clear_of_field();
        }
        else if(ui->b01->text()==CROSS && ui->b11->text()==CROSS && ui->b21->text()==CROSS){
             QMessageBox::information(this, "game ended", "crosses won" );
             clear_of_field();
        }
        else if(ui->b02->text()==CROSS && ui->b12->text()==CROSS && ui->b22->text()==CROSS){
             QMessageBox::information(this, "game ended", "crosses won" );
             clear_of_field();
        }
        else if(ui->b00->text()==CROSS && ui->b11->text()==CROSS && ui->b22->text()==CROSS){
             QMessageBox::information(this, "game ended", "crosses won" );
             clear_of_field();
        }
        else if(ui->b20->text()==CROSS && ui->b11->text()==CROSS && ui->b02->text()==CROSS){
             QMessageBox::information(this, "game ended", "crosses won" );
             clear_of_field();
        }
        else
            symbol = nought;

    }
}

void MainWindow::clear_of_field(){
    ui->b00->setText(EMPTINESS);
    ui->b01->setText(EMPTINESS);
    ui->b02->setText(EMPTINESS);
    ui->b10->setText(EMPTINESS);
    ui->b11->setText(EMPTINESS);
    ui->b12->setText(EMPTINESS);
    ui->b20->setText(EMPTINESS);
    ui->b21->setText(EMPTINESS);
    ui->b22->setText(EMPTINESS);
}

MainWindow::~MainWindow()
{
    delete ui;
}
