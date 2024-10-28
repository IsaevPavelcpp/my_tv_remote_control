#ifndef LOGIC_CONTROLLER_H
#define LOGIC_CONTROLLER_H

#include <QMainWindow>
#include <QtWidgets/QLineEdit>
class ControllerMainWindow: public QMainWindow
{
    Q_OBJECT

public:
    QLineEdit* lineEdit;
    QLineEdit* lineEdit_2;
    ControllerMainWindow(QWidget* parent = nullptr):QMainWindow(parent){}
    public slots:
        void addturn()
    {
        if(turn)
        {
            lineEdit->setText("controller off");
            turn = false;
            lineEdit_2->setText("");

        }
        else
        {
            lineEdit->setText("controller on");
            turn = true;
        }
    };
        void add0(){if (turn) lineEdit->setText("0");};
        void add1(){if (turn) lineEdit->setText("1");};
        void add2(){if (turn)lineEdit->setText("2");};
        void add3(){if (turn)lineEdit->setText("3");};
        void add4(){if (turn)lineEdit->setText("4");};
        void add5(){if (turn)lineEdit->setText("5");};
        void add6(){if (turn)lineEdit->setText("6");};
        void add7(){if (turn)lineEdit->setText("7");};
        void add8(){if (turn)lineEdit->setText("8");};
        void add9(){if (turn)lineEdit->setText("9");};
        void next(){
            if (turn)
            {
                if(lineEdit->text().toInt() < 9)
                lineEdit->setText(lineEdit->text().number(lineEdit->text().toInt()+1));
            }
        };
        void prev()
        {
            if (turn)
            {
                if(lineEdit->text().toInt() > 0)
                lineEdit->setText(lineEdit->text().number(lineEdit->text().toInt()-1));
            }
        };
        void valueOff(){if (turn)lineEdit_2->setText("0");};
        void valueUp()
        {
            if (turn)
            {
                if(lineEdit_2->text().toInt() != 100)
                {
                    lineEdit_2->setText(lineEdit_2->text().number(lineEdit_2->text().toInt()+10));
                }
            }
        };
        void valueDown()
        {
            if(turn)
            {
                if(lineEdit_2->text().toInt() != 0)
                {
                    lineEdit_2->setText(lineEdit_2->text().number(lineEdit_2->text().toInt()-10));
                }
            }
        };

private:
    bool turn = false;
};

#endif //LOGIC_CONTROLLER_H
