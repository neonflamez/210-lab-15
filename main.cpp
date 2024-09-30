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


};