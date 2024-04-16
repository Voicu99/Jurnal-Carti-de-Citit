// Jurnal Carti de Citit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

class Carte {
private:
    std::string titlu;
    std::string autor;
    int numarPaginiCitite;

public:
    // Constructor
    Carte(std::string titlu, std::string autor, int numarPaginiCitite)
        : titlu(titlu), autor(autor), numarPaginiCitite(numarPaginiCitite) {}

    // Metode pentru accesarea informatiilor despre carte
    std::string getTitlu() const {
        return titlu;
    }

    std::string getAutor() const {
        return autor;
    }

    int getNumarPaginiCitite() const {
        return numarPaginiCitite;
    }
};

class Jurnal {
private:
    std::vector<Carte> cartiCitite;

public:
    // Metoda pentru adaugarea unei noi carti in jurnal
    void adaugaCarte(const Carte& carte) {
        cartiCitite.push_back(carte);
    }

    // Metoda pentru afisarea jurnalului de carti citite
    void afiseazaJurnal() const {
        std::cout << "Jurnalul de carti citite:" << std::endl;
        for (const auto& carte : cartiCitite) {
            std::cout << "Titlu: " << carte.getTitlu() << std::endl;
            std::cout << "Autor: " << carte.getAutor() << std::endl;
            std::cout << "Numar pagini citite: " << carte.getNumarPaginiCitite() << std::endl;
            std::cout << std::endl;
        }
    }
};

int main() {
    // Exemplu de utilizare a claselor Carte si Jurnal
    Carte carte1("Flacara de fier", "Rebecca Yarros", 863);
    Carte carte2("Jocurile Foamei", "Suzanne Collins", 309);
    Carte carte3("Rezerva", "Printul Harry", 455);
    Carte carte4("Master", "Librimir Voicu", 355);

    Jurnal jurnal;
    jurnal.adaugaCarte(carte1);
    jurnal.adaugaCarte(carte2);
    jurnal.adaugaCarte(carte3);
    jurnal.adaugaCarte(carte4);
    jurnal.afiseazaJurnal();

    return 0;                                       
}
