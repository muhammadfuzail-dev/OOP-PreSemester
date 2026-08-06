/*Task 06

A cinema hall maintains a record of the movies being screened. Each movie
has a title, director, and duration, and must be permanently associated
with a cinema hall. A movie cannot exist independently outside a cinema
hall.

Your task is to develop a system where:

e A Movie class stores details such as title, director, and duration.

e A CinemaHall class contains a list of movies currently being
screened.

e A function should allow displaying details of the cinema hall and
the movies it is screening.

Develop a program that initializes a cinema hall with its movies, ensures
movies cannot exist without a cinema hall, and displays their details.
*/
#include <iostream>
#include <string>
using namespace std;

class Movie
{
private:
    string title;
    string director;
    int duration;

public:

    Movie(string t="", string d="", int dur=0)
    {
        title = t;
        director = d;
        duration = dur;
    }

    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Director: " << director << endl;
        cout << "Duration: " << duration << " minutes" << endl;
    }
};

class CinemaHall
{
private:
    string hallName;

    Movie movies[10];

    int totalMovies;

public:

    CinemaHall(string name)
    {
        hallName = name;
        totalMovies = 0;
    }

    void addMovie(string title, string director, int duration)
    {
        movies[totalMovies] = Movie(title, director, duration);
        totalMovies++;
    }

    void display()
    {
        cout << "\nCinema Hall: " << hallName << endl;
        cout << "Movies Currently Screening\n\n";

        for(int i=0;i<totalMovies;i++)
        {
            movies[i].display();
            cout << endl;
        }
    }
};

int main()
{
    CinemaHall hall("Cinepax");

    hall.addMovie("Interstellar", "Christopher Nolan", 169);

    hall.addMovie("Inception", "Christopher Nolan", 148);

    hall.addMovie("Avengers: Endgame", "Anthony and Joe Russo", 181);

    hall.display();

    return 0;
}