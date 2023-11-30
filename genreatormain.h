#ifndef GENREATORMAIN_H
#define GENREATORMAIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class genreatormain;
}
QT_END_NAMESPACE

class genreatormain : public QMainWindow
{
    Q_OBJECT

public:
    genreatormain(QWidget *parent = nullptr);
    ~genreatormain();

private slots:
    void on_pushButton_clicked();

private:
    Ui::genreatormain *ui;
};
#endif // GENREATORMAIN_H
