//
// Created by Sena Vuvor, Wepea Buntugu on 25/11/2022.
//
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <unordered_map>
#include <vector>

using namespace std;

class Route {
public:
    string airline;
    string airlineID;
    string destinationAirportcode;
    int stops;

    unordered_map<string, vector<Route>> routes;

    Route(string airlineCode, string airlineId, string destAirportCode, int stop) {
        airline = airlineCode;
        airlineID = airlineId;
        destinationAirportcode = destAirportCode;
        stops = stop;
    }

    string getAirline() {return airline;}

    int getStops() {return stops;}

    void setAirline(string parairlineCode) {airline = parairlineCode;}

    string getAirlineID() {return airlineID;}

    void setAirlineID(string parairlineId) {airlineID = parairlineId;}

    string getDestinationAirportCode() {return destinationAirportcode;}

    void setDestinationAirportCode(string pardestinationAirportCode) {destinationAirportcode = pardestinationAirportCode;}

    void setStops(int parstops) {stops = parstops;}

    void setRoutes(unordered_map<string, vector<Route>> new_route) { routes = new_route;}

    string toString() {
        return "Airline= " + airline + " airlineID= " + airlineID +
               " destinationAirportCode= " + destinationAirportcode + " stops= " + to_string(stops);
    }

    bool equals(Route parroute){
        // if(new_Route == NULL)
        return stops == parroute.stops && airline == parroute.airline;
    }

};