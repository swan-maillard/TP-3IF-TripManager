/*************************************************************************
                           Trajetcompose  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <Trajetcompose> (fichier Trajetcompose.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <cstring>
using namespace std;

//------------------------------------------------------ Include personnel

#include "Trajetcompose.h"
#include "ListeTrajets.h"


//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Trajetcompose::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
void  Trajetcompose::Afficher() const {
  Trajet::Afficher();

  cout << " en ";

}

int Trajetcompose::getNbTrajets() const{
  #ifdef MAP
      cout << "Appel au Get NbTrajets du Trajet" << endl;
  #endif
  return nbtrajets;
}

ListeTrajets Trajetcompose::getTrajets() const{
  #ifdef MAP
      cout << "Appel au Get Trajets du Trajet" << endl;
  #endif
  return trajets;
}
//-------------------------------------------- Constructeurs - destructeur


Trajetcompose::Trajetcompose(const char* depart, const char* arrivee, ListeTrajets lestrajets,int lenbtrajets)
: Trajet(depart,arrivee), nbtrajets(lenbtrajets)
{
  #ifdef MAP
      cout << "Appel au constructeur de <Trajetcompose>" << endl;
  #endif
}

Trajetcompose::~Trajetcompose ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Trajetcompose>" << endl;
#endif
} //----- Fin de ~Trajetcompose


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
