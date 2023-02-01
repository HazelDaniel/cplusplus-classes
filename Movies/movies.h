#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <string>
#include <vector>

#include "movie.h"

class Movies{
private:
    std::vector<Movie> movies;

public:
    void add_movie(std::string movie_name, std::string movie_rating);
    void add_watch_count(std::string movie_name, size_t watch_count);
    void display_movies();

};

void Movies::add_movie(std::string movie_name, std::string movie_rating){

    Movie new_movie {movie_name, movie_rating};

    movies.push_back(new_movie);
}

void Movies::add_watch_count(std::string movie_name, size_t watch_count){
    bool found_movie {false};
    std::cout << std::boolalpha;
    for (auto &movie: movies){

        if(movie.get_name() == movie_name){
            movie.watched+=watch_count;
            found_movie = true;
            break;
        }
    }
    std::cout << "found movie " << "(" << movie_name << "): " << found_movie << std::endl;
}

void Movies::display_movies(){
    
    for(auto const &movie: movies){
        movie.display();
    }
}


#endif