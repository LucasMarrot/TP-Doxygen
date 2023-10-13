/**
 * @file Individu.h
 * @author Philippe Lopistéguy
 * @brief Spécifie une classe Individu en relation réciproque avec sa Voiture
 * @version 0.1
 * @date 2023-10-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */
/**
 * @brief Cette classe définie un Individu à partir de son nom et de son prénom
 * 
 * @details Au delà de définir un Individu par son et son prénom cette classe permet aussi de désigner la Voiture conduite par l'Individu
 * 
 * La Voiture conduite par l'Individu est bien je pense mais j'ai pas eu le temps
 * 
 * @warning Un Individu conduit au plus 1 Voiture
 * 
 */
class Individu
{
    // ATTRIBUTS
  public:
  /**
   * @brief Le nom de l'individu
   * 
   */
    string nom;

    /**
     * @brief Le prénom de l'individu
     * 
     */
    string prenom;

    /**
     * @brief Lien avec la voiture de l'individu
     * 
     */
    Voiture *maVoiture;

    // MÉTHODES
  public:
    /**
     * @brief Construit un object Individu à partir de son nom (1er paramètre) et de son prénom (2e paramètre)
     * 
     */
    Individu(string = "", string = "");
   
    /**
     * @brief Détruit un object Individu
     * 
     */
    ~Individu();

    /**
     * @brief Affiche l'identité de l'Individu
     * 
     * @return string (sous la forme nom prénom)
     * 
     * @bug Un espace en trop entre le nom et le prénom
     * 
     * @todo Ajouter un paramètre pour choisir un mode d'affiche entre : nom prénom OU prénom nom
     */
    string toString(); 
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);
    /**
     * @brief Définie la Voiture conduite par l'Individu
     * 
     * @param [in] voiture un pointeur vers l'object Voiture conduit par l'Individu
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H