#ifndef NIZAR_H
#define NIZAR_H
#include "client.h"
#include "reclamation.h"
#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class Nizar; }
QT_END_NAMESPACE

class Nizar : public QMainWindow
{
    Q_OBJECT

public:
    explicit Nizar(QWidget *parent = nullptr);
    ~Nizar();

private slots:
    void on_ajouterclient_clicked();


    void on_supprimerclient_clicked();

    void on_ajouterreclamation_clicked();

    void on_supprimerreclamation_clicked();


    void on_modifierclient_clicked();

    void on_modifierreclamation_clicked();

    void on_trierclient_clicked();

    void on_trierreclamation_clicked();


    void on_PDF_clicked();





    void on_cherch_code_textChanged(const QString &arg1);

private:
    Ui::Nizar *ui;
    client tmpclient;
    reclamation tmpreclamation;
};
#endif
