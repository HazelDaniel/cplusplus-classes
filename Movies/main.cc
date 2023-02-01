#include <iostream>

#include "movie.h"
#include "movies.h"

using std::cin;
using std::cout;
using std::endl;

void show_movies (Movies &movie_list);

int main (int argc, char *argv[]){

    Movies movies_list;

    movies_list.add_movie("The Originals", "PG13");
    movies_list.add_movie("House Of Cards","R");
    movies_list.add_watch_count("The Originals",3);
    movies_list.add_movie("Person Of Interest", "G");
    movies_list.add_watch_count("Person Of Interest",1);
    show_movies(movies_list);

    return 0;
}

void show_movies (Movies &movie_list){
    movie_list.display_movies();
    cout << "\ntotal number of movies: " << Movie::get_movie_count() << endl;
}