#ifndef MOVIE_HPP

#define MOVIE_HPP

#include <vector>
// Movie.hpp
//
// placeholder for Movie class

// define Movie genre

#define MOVIE_GENRE_NONE    0
#define MOVIE_GENRE_COMEDY  1
#define MOVIE_GENRE_DRAMA   2
#define MOVIE_GENRE_ACTION  3
#define MOVIE_GENRE_SCIFI   4

class Movie
{
public:
    string  getMovieName();
    void    setMovieName(string movieName);
    int     getMovieRating();
    void    setMovieRating(int rating);
    int     getReviewCounts();
    void    increaseReviewCount();  // works as setter
    int     getMovieGenre();
    void    setMovieGenre(vector<string> genre);
    bool    isMovieGenre(string genre);

private:
    string  m_name;
    int     m_rating;       // combine rating
    int     m_ratingCounts; // can be define as reviewCounts
    int     m_genre;     
}

#endif
