//
// Created by Wepea Buntugu on 25/11/2022.
//
#include <iostream>
using namespace std;

class Airport{
public:
    string airportID;
    string airportName;
    string airportCity;
    string country;
    string ICAO;

    string toString();
    string getAirportID();
    string setAirportID(string AirportID);
    void setICAO(string ICAO);
    string getICAO() ;
    string getAirportCity();
    void setAirportCity(string airportCity);
    string getAirportName();
    void setAirportName(string airportName);
    string getCountry();
    void setCountry(string country);

    Airport(string ID, string name, string city,
            string country, string ICAO){
        this->airportID = ID;
        this -> airportName = name;
        this -> ICAO = ICAO;
    }


};

string Airport::toString(){
    return airportID + " " + airportName + " " + ICAO;
}

string Airport::getAirportID(){
    return airportID;
};

string Airport::setAirportID(string airportID){
    this -> airportID = airportID;
}

string Airport::getAirportCity() {
    return airportCity;
}

void Airport::setAirportCity(string airportCity) {
    this->airportCity = airportCity;
}

string Airport::getAirportName() {
    return airportName;
}

void Airport::setAirportName(string airportName) {
    this->airportName = airportName;
}

string Airport::getCountry() {
    return country;
}

void Airport::setCountry(string country) {
    this -> country = country;
}

string Airport::getICAO() {
    return ICAO;
}

void Airport::setICAO(string ICAO) {
    this -> ICAO = ICAO;
}

