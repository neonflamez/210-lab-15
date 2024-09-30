// COMSC 210 | Lab 15 | Shayan Khan

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Movie{
private:    
    string title;
    int yearReleased;
    string screenWriter;

public:
    Movie(const string& t = "", int y = 0, const string& s = "")
        : title(t), yearReleased(y), screenWriter(s) {}

    void setTitle(const string& t){
        title = t;
    }

    void setYearReleased(int y){
        yearReleased = y;
    }

    void setScreenWriter(const string& s){
        screenWriter = s;
    }

    string getTitle() const{
        return title;
    }

    int getYearReleased() const{
        return yearReleased;
    }

    string getScreenWriter() const{
        return screenWriter;
    }

    void print() const{
        cout << "Movie: " << screenWriter << endl;
        cout << "   Year released: " << yearReleased << endl;
        cout << "   Screenwriter: " << title << endl;
    }
};

int main(){
    ifstream inputFile("input.txt");

    vector<Movie> movies;
    string title, screenWriter;
    int yearReleased;

    while(getline(inputFile, title) && inputFile >> yearReleased){
        getline(inputFile, screenWriter);
        movies.emplace_back(title, yearReleased, screenWriter);
    }

    inputFile.close();

    for (const auto& movie : movies){
        movie.print();
        cout << endl;
    }

    return 0;
}