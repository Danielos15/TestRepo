#ifndef DATABASE
#define DATABASE
#include <vector>
#include <string>
#include <iostream>

using namspace std;

class database
{
public:
    database();
    void connect(char* table);
    void fetchAll();
    void fetchByName();
    void fetchByBorn();
    void fetchByDeath();
    void save();
    void add();
    void remove();

private:
    string fileName;

    ifstream inStream;
    ofstream outStream;

};

#endif // DATABASE

