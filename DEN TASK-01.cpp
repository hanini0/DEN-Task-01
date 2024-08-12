#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Location {
private:
    string name;
    double latitude;
    double longitude;

public:
    Location(string name, double lat, double lon) : name(name), latitude(lat), longitude(lon) {}

    string getName() { return name; }
    double getLatitude() { return latitude; }
    double getLongitude() { return longitude; }
};

class WeatherVariable {
private:
    double temperature;
    double windSpeed;

public:
    void setTemperature(double temp) { temperature = temp; }
    void setWindSpeed(double speed) { windSpeed = speed; }
    double getTemperature() { return temperature; }
    double getWindSpeed() { return windSpeed; }
};

class WeatherForecastingSystem {
private:
    Location location;
    WeatherVariable weatherData;

public:
    WeatherForecastingSystem(Location loc) : location(loc) {}
    void fetchWeatherData() { /* Implementation to fetch data */ }
    void displayWeatherData() { /* Implementation to display data */ }
    void exportToCSV() { /* Implementation to export to CSV */ }
    void exportToJSON() { /* Implementation to export to JSON */ }
};

class HistoricalWeatherSystem {
private:
    Location location;
    WeatherVariable historicalData;

public:
    HistoricalWeatherSystem(Location loc) : location(loc) {}
    void fetchHistoricalData() { /* Implementation to fetch historical data */ }
    void displayHistoricalData() { /* Implementation to display historical data */ }
    void exportToCSV() { /* Implementation to export to CSV */ }
    void exportToJSON() { /* Implementation to export to JSON */ }
};

class AirQualityForecastingSystem {
private:
    Location location;

public:
    AirQualityForecastingSystem(Location loc) : location(loc) {}
    void fetchAirQualityData() { /* Implementation to fetch air quality data */ }
    void displayAirQualityData() { /* Implementation to display air quality data */ }
    void exportToCSV() { /* Implementation to export to CSV */ }
    void exportToJSON() { /* Implementation to export to JSON */ }
};

int main() {
    Location loc("New York", 40.7128, -74.0060);
    cout << "Location: " << loc.getName() << endl;
    cout << "Latitude: " << loc.getLatitude() << endl;
    cout << "Longitude: " << loc.getLongitude() << endl;

    return 0;
}

