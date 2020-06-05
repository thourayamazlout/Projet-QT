#ifndef client_H
#define client_H
#include<QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class client
{
    long tel;
        QString nom,prenom,cin;

public:
    client();
    client(QString,long,QString,QString);
    QString getcin(){return cin;}
    void setcin(QString cin){this->cin=cin;}
    void settel(long tel){this->tel=tel;}
    void setnom(QString nom){this->nom=nom;}
    void setprenom(QString prenom){this->prenom=prenom;}
    bool ajouter();
    QSqlQueryModel * afficher();
    QSqlQueryModel * afficherC();
    QSqlQueryModel * afficherR();

    bool supprimer(QString);
    bool rech(QString);
        bool modifier(QString,long,QString,QString);
        QSqlQueryModel * afficherclientchercher(QString);

        QSqlQueryModel * trier_cin();
        QSqlQueryModel * client_reclamation();

    ~client(){}


};

#endif // client_H
