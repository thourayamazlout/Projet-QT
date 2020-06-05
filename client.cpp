#include "client.h"
#include<QSqlQuery>
#include<QString>
#include<QVariant>

client::client()
{
    cin="";
    tel=00;
    nom="";
    prenom="";
}

client::client(QString cin,long tel,QString nom,QString prenom)
{
this->cin=cin;
this->tel=tel;
this->nom=nom;
this->prenom=prenom;
}

bool client::ajouter()
{
    QSqlQuery query;
    QString res1=QString::number(tel);
          query.prepare("INSERT INTO client (cin,tel, nom, prenom) "
                        "VALUES (:cin, :tel, :nom, :prenom)");
          query.bindValue(":cin", cin);
          query.bindValue(":tel", res1);
          query.bindValue(":nom", nom);
          query.bindValue(":prenom", prenom);

          return  query.exec();
}

QSqlQueryModel * client::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from client");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Cin"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Telephone"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom "));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Prénom"));
    return model;
}


bool client::supprimer(QString cin)
{

    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from client");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Cin"));
QSqlQuery query;
query.prepare("Delete from client where cin = :cin ");
query.bindValue(":cin", cin);
return    query.exec();

}


bool client::modifier(QString cin,long tel,QString nom,QString prenom){
    QSqlQuery query;
    QString res1=QString::number(tel);
    query.prepare("update client set tel=:tel ,nom=:nom ,prenom=:prenom  where cin = :cin");
    query.bindValue(":cin", cin);
    query.bindValue(":tel", res1);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    return query.exec();
}

bool client::rech(QString cin){
    QSqlQuery query;
    QString res1=QString::number(tel);
    query.prepare("select * from client where cin = :cin");
    query.bindValue(":cin", cin);
    query.bindValue(":tel", res1);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);

    return query.exec();
}

QSqlQueryModel * client::afficherclientchercher(QString cin)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from client where Cin= :cin");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Cin"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Telephone"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nom "));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Prénom"));
    return model;
}

QSqlQueryModel * client::trier_cin()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from client ORDER BY Cin");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Cin"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Telephone"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nom "));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Prénom"));
        return model;
}


QSqlQueryModel * client::afficherC()
{

    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select CLIENT.CIN,ClIENT.NOM,COMMANDES.ID from CLIENT inner JOIN COMMANDES ON CLIENT.CIN = COMMANDES.IDC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Cin"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("ID Commandes "));

        return model;
}
QSqlQueryModel * client::afficherR()
{

    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select CLIENT.CIN,ClIENT.NOM,RECLAMATION.CODE from CLIENT inner JOIN RECLAMATION ON CLIENT.CIN = RECLAMATION.CIN");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Cin"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("CODE reclamation "));

        return model;
}


