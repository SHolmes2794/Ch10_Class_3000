// Smart Parking Garage Manager.cpp

#include <iostream>
using namespace std;

enum SpotStatus
{
    EMPTY, OCCUPIED, RESERVED
};

char status_to_char(SpotStatus s)
{
    if (s == EMPTY)
    {
        return 'E';
    }
    else if (s == OCCUPIED)
    {
        return 's';
    }
    else
    {
        return 'R';
    }
}

void print_garage_map(const SpotStatus garage[3][4])
{
    cout << "===== Garage Map =====" << endl;

    for (int floor = 0; floor < 3; floor++)
    {
        for (int spot = 0; spot < 4; spot++)
        {
            cout << status_to_char(garage[floor][spot]) << " ";
        }
        cout << endl;
    }

    cout << endl;
}

int count_empty_spots(const SpotStatus garage[3][4])
{
    int number_of_empty_spots = 0;
    for (int floor = 0; floor < 3; floor++)
    {
        for (int spot = 0; spot < 4; spot++)
        {
            if (status_to_char(garage[floor][spot]) == 'E')
            {
                number_of_empty_spots++;
            }
        }
    }
    
    return number_of_empty_spots;
}

class ParkingGarage
{
    private:
        SpotStatus garage[3][4];
        int parked_count[3];

    public:
        ParkingGarage()
        {
            // Set All Spots to EMPTY
            for (int floor = 0; floor < 3; floor++)
            {
                for (int spot = 0; spot < 4; spot++)
                {
                    garage[floor][spot] == EMPTY;
                }
            }

            // Set All Parked_Count Values to 0
            for (int floor = 0; floor < 3; floor++)
            {
                parked_count[floor] = 0;
            }

            // Special Rule: Floor 0, Spot 0 is RESERVED
            garage[0][0] = RESERVED;
        }
};

int main()
{
    std::cout << "Hello World!\n";
}