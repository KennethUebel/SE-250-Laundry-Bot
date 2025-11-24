#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    char Shoemaker [19]= { ' ' };
    char Mitchell [19]= { ' ' };
    char Lawerence [10]= { ' ' };
    char Case [19]= { ' ' };
    int i;
    int k;

    ifstream info_doc("abc.txt");

    string laundry_info;

    getline(info_doc, laundry_info);

    info_doc.close();

    Shoemaker[0] = 'S';
    Shoemaker[1] = 'W';
    Shoemaker[9] = 'D';
    Shoemaker[18]= 'P';
    
    Lawerence[0]= 'L';
    Lawerence[1]= 'W';
    Lawerence[5]= 'D';
    Lawerence[9]= 'P';

    Mitchell[0]= 'M';
    Mitchell[1]= 'W';
    Mitchell[8]= 'D';
    Mitchell[18]= 'P';

    Case[0]= 'C';
    Case[1]= 'W';
    Case[9]= 'D';
    Case[18]= 'P';

    k=0;
    for(i=2; i<9; i++)
    {
        k++;
        Shoemaker[i]= laundry_info[k];
    }

    k=8;
    for(i=10; i<18; i++)
    {
        k++;
        Shoemaker[i] = laundry_info[k];
    }

    k=18;
    for(i=2; i<5; i++)
    {
        k++;
        Lawerence[i] = laundry_info[k];
    }

    k=22;
    for(i=6; i<9; i++)
    {
        k++;
        Lawerence[i] = laundry_info[k];
    }

    k=27;
    for(i=2; i<8; i++)
    {
        k++;
        Mitchell[i] = laundry_info[k];
    }

    k=34;
    for(i=9; i<18; i++)
    {
        k++;
        Mitchell[i] = laundry_info[k];
    }

    k=45;
    for(i=2; i<9; i++)
    {
        k++;
        Case[i] = laundry_info[k];
    }

    k=53;
    for(i=10; i<18; i++)
    {
        k++;
        Case[i] = laundry_info[k];
    }

    ofstream output("Laundry_trans_doc.txt");

    for(i=0; i<19; i++)
    {
        output<< Shoemaker[i];
    }

    output<< "\n";

    for(i=0; i<10; i++)
    {
        output<< Lawerence[i];
    }

    output<< "\n";

    for(i=0; i<19; i++)
    {
        output<< Mitchell[i];
    }

    output<< "\n";

    for(i=0; i<19; i++)
    {
        output<< Case[i];
    }

    output.close();

    return 0;
}