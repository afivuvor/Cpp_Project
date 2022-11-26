//
// Created by Sena Vuvor on 25/11/2022.
//

#include <string>

using namespace std;

class Airline {
public:
    int airlineID;
    string airlineName;
    string alias;
    string airlineIATA;
    string airlineICAO;
    string country;

    Airline(int ID, string name, string Alias, string IATA, string ICAO, string Country) {
        this -> airlineID = ID;
        this -> airlineName = name;
        this -> alias = Alias;
        this -> airlineIATA = IATA;
        this -> airlineICAO = ICAO;
        this -> country = Country;
    }

    string toString();
    int getAirlineID();
    void setAirlineID(int airlineId);
    string getAirlineName();
    void setAirlineName(string airlinename);
    string getAlias();
    void setAlias(string paralias);
    string getAirlineIATA();
    void setAirlineIATA(string airline_IATA);
    string getAirlineICAO();
    void setAirlineICAO(string airline_ICAO);
    string getCountry();
    void setCountry(string Country);
};

string Airline::toString(){
    return airlineID + " " + airlineName + " " + airlineIATA + " " + airlineICAO + " " + country;
}

int Airline::getAirlineID() {
    return airlineID;
}

void Airline::setAirlineID(int airlineId) {
    this -> airlineID = airlineId;
}

string Airline::getAirlineName() {
    return airlineName;
}

void Airline::setAirlineName(string airlinename) {
    this -> airlineName = airlinename;
}

string Airline::getAlias() {
    return alias;
}

void Airline::setAlias(string paralias) {
    this -> alias = paralias;
}

string Airline::getAirlineIATA() {
    return airlineIATA;
}

void Airline::setAirlineIATA(string airline_IATA) {
    this -> airlineIATA = airline_IATA;
}

string Airline::getAirlineICAO() {
    return airlineICAO;
}

void Airline::setAirlineICAO(string airline_ICAO) {
    this->airlineICAO = airline_ICAO;
}

string Airline::getCountry() {
    return country;
}

void Airline::setCountry(string Country) {
    this->country = Country;
}
