#include "main.h"

/**
 * createData - To write data to the file
 * findData - To read data from the file
 * 
 * Return: 0(success), 1(file not open), 2(file empty).
 */

int createData()
{ 
    string studentFirstName;
    string studentSecondName;
    string studentThirdName;
    string choice;
    string comfirmation;
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
        do
        {
             cout << "\nEnter student first name: ";
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

              cout << studentFirstName << " " << studentSecondName << " " << studentThirdName << ": " 
              << mathematicsScore << " in maths" << " " << englishScore << " in english" << " " 
              << scienceScore << " in science" << endl;

             cout << "\nDo you sure above data you uploded for this particular student is accurate. " << 
             "Double check before you save it" << endl;

              cout << "\nDo you want to save now?, (yes/no): ";
              cin >> comfirmation;

              if (comfirmation != "no" && comfirmation != "No")
              {
                break;
              }

              if (comfirmation == "no" || comfirmation == "No")
              {
                cout << "\nRe-enter that student data and make sure it accurate this time" << endl;
              }
        }
        while(true);

        dataBase << studentFirstName << " " << studentSecondName << " " << studentThirdName << 
        " " << mathematicsScore << " " << englishScore << " " << scienceScore << endl;

            cout << "\nRECENT INPUT DATA PREVIEW" << endl << endl;

            cout << studentFirstName << " " << studentSecondName << " " << studentThirdName << ": " 
            << mathematicsScore << " in maths" << " " << englishScore << " in english" << " " 
            << scienceScore << " in science" << endl;

        cout << "\nDo you still have student data to upload. (yes/no): ";
        cin >> choice; 

        if (choice != "yes" && choice != "Yes")
        {   
            string studentFirstNameDB;
            string studentSecondNameDB;
            string studentThirdNameDB;
            int mathematicsScoreDB;
            int englishScoreDB;
            int scienceScoreDB;

            ifstream checkInput("portal.txt");

            if (!checkInput.is_open())
            {
                cout << "Data you uploaded not yet stored" << endl;

                return (3);
            }

            cout << "\nRECAP OF ALL THE STUDENTS RESULTS YOU UPLOADED AND IT HAS BEING SAVED" << endl;

            while (checkInput >> studentFirstNameDB >> studentSecondNameDB >> studentThirdNameDB >>
             mathematicsScoreDB >> englishScoreDB >> scienceScoreDB)
             {
                 cout << studentFirstNameDB << " " << studentSecondNameDB << " " << studentThirdNameDB << ": " 
                 << mathematicsScoreDB << " in maths," << " " << englishScoreDB << " in english," << " " 
                 << scienceScoreDB << " in science" << endl;
             }
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
    string studentFirstNameInDB;
    string studentSecondNameInDB;
    string studentThirdNameInDB;
    int mathsScoreInDB;
    int englishScoreInDB;
    int scienceScoreInDB;
    bool studentDataFound = false;

	ifstream findData("portal.txt");

	if (!findData.is_open())
	{
		cout << "Data base could not be open for checking result" << endl;

		return (1);
	}

    findData.seekg(0, ios::end);

    cout << "\nData base byte: " << findData.tellg() << endl;
    
    if (findData.tellg() == 0)
    {
        cout << "\nLecturer yet to uploaded result into portal, come back later to check" <<endl;

        return (2);
    }

    findData.seekg(0, ios::beg);

	cout << "Enter your first name\n";
	cin >> studentFirstName;

	cout << "Enter your second name\n";
	cin >> studentSecondName;

	cout << "Enter your third name\n";
	cin >> studentThirdName;

	while (findData >> studentFirstNameInDB >> studentSecondNameInDB >> studentThirdNameInDB >> 
    mathsScoreInDB >> englishScoreInDB >> scienceScoreInDB)
	{
		if (studentFirstName == studentFirstNameInDB && studentSecondName == studentSecondNameInDB && 
        studentThirdName == studentThirdNameInDB)
        {
            studentDataFound = true;
            cout << "\nmaths: " << mathsScoreInDB << endl;
            cout << "english: " << englishScoreInDB << endl;
            cout << "science: " << scienceScoreInDB << endl;

            break;
        }
	}

    if (!studentDataFound)
    {
        cout << "\nYour data not availabe due to some reason. Go meet your lecturer for more clarity\n";
    }

    findData.close();

    return (0);
}