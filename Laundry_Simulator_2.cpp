#include <iostream>
#include <random>
#include <cstdlib>
#include <fstream>

using namespace std;

// Shoemaker

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
        WashersSH[i] = rand() % 3;
        myFile << WashersSH[i];
    }

    myFile << "D";

    int DryersSH[8];
    for (int i = 0; i < 8; i++) {
        int randnum = rand() % 3;
        DryersSH[i] = randnum;
        myFile << DryersSH[i];
    }

    // LAWRENCE
    myFile << " W";

    int WashersLH[3];
    for (int i = 0; i < 3; i++) {
        int randnum = rand() % 3;
        WashersLH[i] = randnum;
        myFile << WashersLH[i];
    }

    myFile << "D";

    int DryersLH[3];
    for (int i = 0; i < 3; i++) {
        int randnum = rand() % 3;
        DryersLH[i] = randnum;
        myFile << DryersLH[i];
    }

    // MITCHELL
    myFile << " W";

    int WashersMH[6];
    for (int i = 0; i < 6; i++) {
        WashersMH[i] = rand() % 3;
        myFile << WashersMH[i];
    }

    myFile << "D";

    int DryersMH[9];
    for (int i = 0; i < 9; i++) {
        int randnum = rand() % 3;
        DryersMH[i] = randnum;
        myFile << DryersMH[i];
    }

    // CASE HILL HALL
    myFile << " W";

    int WashersCHH[7];
    for (int i = 0; i < 7; i++) {
        WashersCHH[i] = rand() % 3;
        myFile << WashersCHH[i];
    }

    myFile << "D";

    int DryersCHH[8];
    for (int i = 0; i < 8; i++) {
        int randnum = rand() % 3;
        DryersCHH[i] = randnum;
        myFile << DryersCHH[i];
    }

    // STATE VIEW SOUTH
    myFile << " W";

    int Washerssws[3];
    for (int i = 0; i < 3; i++) {
        int randnum = rand() % 3;
        Washerssws[i] = randnum;
        myFile << Washerssws[i];
    }

    myFile << "D";

    int Dryerssws[3];
    for (int i = 0; i < 3; i++) {
        int randnum = rand() % 3;
        Dryerssws[i] = randnum;
        myFile << Dryerssws[i];
    }

    // STATE VIEW NORTH
    myFile << " W";

    int Washersswn[3];
    for (int i = 0; i < 3; i++) {
        int randnum = rand() % 3;
        Washersswn[i] = randnum;
        myFile << Washersswn[i];
    }

    myFile << "D";

    int Dryersswn[3];
    for (int i = 0; i < 3; i++) {
        int randnum = rand() % 3;
        Dryersswn[i] = randnum;
        myFile << Dryersswn[i];
    }

    myFile.close();
    return 0;
}
