#include "main.h"

int createData()
{ 
    string studentFirstName;
    string studentSecondName;
    string studentThirdName;
    string choice;
    int mathematicsScore;
    int englishScore;
    int scienceScore;

    ofstream dataBase("portal.txt", ios::app);

    if (!dataBase.is_open())
    {
        cout << "Data base could not be open for saving" << endl;

        return (1);
    }

    cout << "Start input student data" << endl;

    do
    {
        cout << "Enter student first name: ";
        cin >> studentFirstName;

        cout << "Enter student second name: ";
        cin >> studentSecondName;

        cout << "Enter student third name: ";
        cin >> studentThirdName;

        cout << "What score has in mathematics: ";
        cin >> mathematicsScore;

        cout << "What score has in english: ";
        cin >> englishScore;

        cout << "What score has in science: ";
        cin >> scienceScore;

        dataBase << studentFirstName << " " << studentSecondName << " " << studentThirdName << 
        " " << mathematicsScore << " " << englishScore << " " << scienceScore << endl;

            cout << "RECENT INPUT DATA PREVIEW" << endl << endl;

            cout << studentFirstName << " " << studentSecondName << " " << studentThirdName << ": " 
            << mathematicsScore << " in maths" << " " << englishScore << " in english" << " " 
             << scienceScore << " in science" << endl;

        cout << "\nDo you still have student data to upload. (yes/no): ";
        cin >> choice; 

        if (choice != "yes" && choice != "Yes")
        {    
            break;
        }
    }
    while (true);

    dataBase.close();
    
    return (0);
}

int findData()
{
	string studentFirstName;
	string studentSecondName;
	string studentThirdName;
	int mathsScore;
	int englishScore;
	int scienceScore;

	ifstream findData("portal.txt");

	if (!findData.is_open())
	{
		cout << "Data base could not be open for checking result" << endl;

		return (1);
	}

	cout << "Enter your first name\n";
	cin >> studentFirstName;

	cout << "Enter your second name\n";
	cin >> studentSecondName;

	cout << "Enter your third name\n";
	cin >> studentThirdName;

	while (findData >> studentFirstNameInDB >> studentSecondNameInDB >> studentThirdNameInDB >> mathsScoreInDB >> englishScoreInDB >> scienceScoreInDB\n)
	{
		if (stude
	}
}
