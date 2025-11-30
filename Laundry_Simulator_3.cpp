#include <iostream>
#include <random>
#include <cstdlib>
#include <fstream>

using namespace std;

// function to weight the randomization
int weighted_rand();

int main() {
    
    //create random seed
    srand(time(NULL));

    // text file
    ofstream myFile;
    myFile.open("abc.txt");    

    // SHOEMAKER
    myFile << "W";

    int WashersSH[7];
    for (int i = 0; i < 7; i++) {
        WashersSH[i] = weighted_rand();
        myFile << WashersSH[i];
    }

    myFile << "D";

    int DryersSH[8];
    for (int i = 0; i < 8; i++) {
        int randnum = weighted_rand();
        DryersSH[i] = randnum;
        myFile << DryersSH[i];
    }

    // LAWRENCE
    myFile << " W";

    int WashersLH[3];
    for (int i = 0; i < 3; i++) {
        int randnum = weighted_rand();
        WashersLH[i] = randnum;
        myFile << WashersLH[i];
    }

    myFile << "D";

    int DryersLH[3];
    for (int i = 0; i < 3; i++) {
        int randnum = weighted_rand();
        DryersLH[i] = randnum;
        myFile << DryersLH[i];
    }

    // MITCHELL
    myFile << " W";

    int WashersMH[6];
    for (int i = 0; i < 6; i++) {
        WashersMH[i] = weighted_rand();
        myFile << WashersMH[i];
    }

    myFile << "D";

    int DryersMH[9];
    for (int i = 0; i < 9; i++) {
        int randnum = weighted_rand();
        DryersMH[i] = randnum;
        myFile << DryersMH[i];
    }

    // CASE HILL HALL
    myFile << " W";

    int WashersCHH[7];
    for (int i = 0; i < 7; i++) {
        WashersCHH[i] = weighted_rand();
        myFile << WashersCHH[i];
    }

    myFile << "D";

    int DryersCHH[8];
    for (int i = 0; i < 8; i++) {
        int randnum = weighted_rand();
        DryersCHH[i] = randnum;
        myFile << DryersCHH[i];
    }

    // STATE VIEW SOUTH
    myFile << " W";

    int Washerssws[3];
    for (int i = 0; i < 3; i++) {
        int randnum = weighted_rand();
        Washerssws[i] = randnum;
        myFile << Washerssws[i];
    }

    myFile << "D";

    int Dryerssws[3];
    for (int i = 0; i < 3; i++) {
        int randnum = weighted_rand();
        Dryerssws[i] = randnum;
        myFile << Dryerssws[i];
    }

    // STATE VIEW NORTH
    myFile << " W";

    int Washersswn[3];
    for (int i = 0; i < 3; i++) {
        int randnum = weighted_rand();
        Washersswn[i] = randnum;
        myFile << Washersswn[i];
    }

    myFile << "D";

    int Dryersswn[3];
    for (int i = 0; i < 3; i++) {
        int randnum = weighted_rand();
        Dryersswn[i] = randnum;
        myFile << Dryersswn[i];
    }

    myFile.close();
    return 0;
}

int weighted_rand()
{
    int r = rand() % 5;  
    if (r < 2) return 0; 
    if (r < 4) return 1; 
    return 2;            
}
