// Ride-Sharing Trip Fare Calculator.cpp

#include <iostream>
using namespace std;

class Trip
{
private:
    float distance_km;
    float rate_per_km;

public:
    Trip()
    {
        distance_km = 9;
        rate_per_km = 12.5;
    }

    void set_distance_km(float dist)
    {
        if (dist >= 0)
        {
            distance_km = dist;
        }
        else
        {
            cout << "Invalid Distance!" << endl;
        }
    }

    void set_rate_per_km(float rate)
    {
        if (rate >= 0)
        {
            rate_per_km = rate;
        }
        else
        {
            cout << "Invalid Rate!" << endl;
        }
    }

    float get_fare()
    {
        return distance_km * rate_per_km;
    }
};

int main()
{
    Trip trip;

    float dist, rate;
    cin >> dist >> rate;

    trip.set_distance_km(dist);
    trip.set_rate_per_km(rate);

    cout << "Fare: " << cout.setf(ios::fixed) << cout.precision(2) << trip.get_fare() << endl;
}