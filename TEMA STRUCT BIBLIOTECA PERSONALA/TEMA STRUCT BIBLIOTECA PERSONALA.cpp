#include <string>
#include <iostream>
#include <vector>

struct Carte
{
    std::string numeCarte;
    std::string autor;
    int anulPublicarii;
    
    
    Carte()
    {

    }
    /*Carte(std::string nume, std::string Autor, int anPub)
    {
        numeCarte = nume;
        autor = Autor;
        anPub = anulPublicarii;
    }*/
    
    void AdaugaCarte(std::string nume, std::string Autor, int an)sss
    { 
        numeCarte = nume;
        autor = Autor;
        anulPublicarii = an;
    }
    
};
void Log(std::vector<Carte> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        std::cout <<  "Numele cartii: " << arr[i].numeCarte << '\n' <<
                    "Autorul cartii: " << arr[i].autor << '\n' <<
                    "Anul publicarii: " << arr[i].anulPublicarii << "\n\n" << std::endl;
    }
}

int main()
{
    std::vector<Carte> biblioteca;
   // Carte primaCarte("Morometii", "Marin Preda", 1965);
    Carte c1;
    Carte c2;
    Carte c3;
    c1.AdaugaCarte("Morometii", "Marin Preda", 1965);
    c2.AdaugaCarte("Moara cu noroc", "Ioan Slavici", 1934);
    c3.AdaugaCarte("Ultima noapte de drag...", "Camil Petrescu", 1930);

    biblioteca.push_back(c1);
    biblioteca.push_back(c2);
    biblioteca.push_back(c3);
    
    
    Log(biblioteca);
}


