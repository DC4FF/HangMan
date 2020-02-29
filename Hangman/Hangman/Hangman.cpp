

#include <iostream>
using namespace std;

int main()
{
    int wrong;

    do {
        cout << "How many wrong guesses have been made?" << endl;
        cin >> wrong;
        cout << "\n\n\n\n";


        switch (wrong)
        {
        case 0:
            cout << "\n\n\n\n\n\n\n\n\n\n\n" << "\t\t" << "--------------------";
            break;
        case 1:

            cout << "\n\t\t" << "|";
            cout << "\n\t\t" << "|";
            cout << "\n\t\t" << "|";
            cout << "\n\t\t" << "|";
            cout << "\n\t\t" << "|";
            cout << "\n\t\t" << "|";
            cout << "\n\t\t" << "|\\";
            cout << "\n\t\t" << "| \\";
            cout << "\n\t\t" << "|  \\";
            cout << "\n\t\t" << "|   \\";
            cout << "\n\t\t" << "--------------------";
            break;
        case 2:
            cout << "\n\t\t" << "______________";
            cout << "\n\t\t" << "|";
            cout << "\n\t\t" << "|";
            cout << "\n\t\t" << "|";
            cout << "\n\t\t" << "|";
            cout << "\n\t\t" << "|";
            cout << "\n\t\t" << "|";
            cout << "\n\t\t" << "|\\";
            cout << "\n\t\t" << "| \\";
            cout << "\n\t\t" << "|  \\";
            cout << "\n\t\t" << "|   \\";
            cout << "\n\t\t" << "--------------------";
            break;
        case 3:
            cout << "\n\t\t" << "______________";
            cout << "\n\t\t" << "|            |";
            cout << "\n\t\t" << "|            |";
            cout << "\n\t\t" << "|";
            cout << "\n\t\t" << "|";
            cout << "\n\t\t" << "|";
            cout << "\n\t\t" << "|";
            cout << "\n\t\t" << "|\\";
            cout << "\n\t\t" << "| \\";
            cout << "\n\t\t" << "|  \\";
            cout << "\n\t\t" << "|   \\";
            cout << "\n\t\t" << "--------------------";
            break;
        case 4:
            cout << "\n\t\t" << "______________";
            cout << "\n\t\t" << "|            |";
            cout << "\n\t\t" << "|            |";
            cout << "\n\t\t" << "|           ( )";
            cout << "\n\t\t" << "|";
            cout << "\n\t\t" << "|";
            cout << "\n\t\t" << "|";
            cout << "\n\t\t" << "|\\";
            cout << "\n\t\t" << "| \\";
            cout << "\n\t\t" << "|  \\";
            cout << "\n\t\t" << "|   \\";
            cout << "\n\t\t" << "--------------------";
            break;
        case 5:
            cout << "\n\t\t" << "______________";
            cout << "\n\t\t" << "|            |";
            cout << "\n\t\t" << "|            |";
            cout << "\n\t\t" << "|           ( )";
            cout << "\n\t\t" << "|            |";
            cout << "\n\t\t" << "|";
            cout << "\n\t\t" << "|";
            cout << "\n\t\t" << "|\\";
            cout << "\n\t\t" << "| \\";
            cout << "\n\t\t" << "|  \\";
            cout << "\n\t\t" << "|   \\";
            cout << "\n\t\t" << "--------------------";
            break;
        case 6:
            cout << "\n\t\t" << "______________";
            cout << "\n\t\t" << "|            |";
            cout << "\n\t\t" << "|            |";
            cout << "\n\t\t" << "|           ( )";
            cout << "\n\t\t" << "|          \\ |";
            cout << "\n\t\t" << "|           \\|";
            cout << "\n\t\t" << "|";
            cout << "\n\t\t" << "|\\";
            cout << "\n\t\t" << "| \\";
            cout << "\n\t\t" << "|  \\";
            cout << "\n\t\t" << "|   \\";
            cout << "\n\t\t" << "--------------------";
            break;
        case 7:
            cout << "\n\t\t" << "______________";
            cout << "\n\t\t" << "|            |";
            cout << "\n\t\t" << "|            |";
            cout << "\n\t\t" << "|           ( )";
            cout << "\n\t\t" << "|          \\ | /";
            cout << "\n\t\t" << "|           \\|/";
            cout << "\n\t\t" << "|";
            cout << "\n\t\t" << "|\\";
            cout << "\n\t\t" << "| \\";
            cout << "\n\t\t" << "|  \\";
            cout << "\n\t\t" << "|   \\";
            cout << "\n\t\t" << "--------------------";
            break;
        case 8:
            cout << "\n\t\t" << "______________";
            cout << "\n\t\t" << "|            |";
            cout << "\n\t\t" << "|            |";
            cout << "\n\t\t" << "|           ( )";
            cout << "\n\t\t" << "|          \\ | /";
            cout << "\n\t\t" << "|           \\|/";
            cout << "\n\t\t" << "|           [*]";
            cout << "\n\t\t" << "|\\           |";
            cout << "\n\t\t" << "| \\";
            cout << "\n\t\t" << "|  \\";
            cout << "\n\t\t" << "|   \\";
            cout << "\n\t\t" << "--------------------";
            break;
        case 9:
            cout << "\n\t\t" << "______________";
            cout << "\n\t\t" << "|            |";
            cout << "\n\t\t" << "|            |";
            cout << "\n\t\t" << "|           ( )";
            cout << "\n\t\t" << "|          \\ | /";
            cout << "\n\t\t" << "|           \\|/";
            cout << "\n\t\t" << "|           [*]";
            cout << "\n\t\t" << "|\\           |";
            cout << "\n\t\t" << "| \\         /";
            cout << "\n\t\t" << "|  \\       /";
            cout << "\n\t\t" << "|   \\";
            cout << "\n\t\t" << "--------------------";
            break;
        case 10:
            cout << "\n\t\t" << "______________";
            cout << "\n\t\t" << "|            |";
            cout << "\n\t\t" << "|            |";
            cout << "\n\t\t" << "|           ( )";
            cout << "\n\t\t" << "|          \\ | /";
            cout << "\n\t\t" << "|           \\|/";
            cout << "\n\t\t" << "|           [*]";
            cout << "\n\t\t" << "|\\           |";
            cout << "\n\t\t" << "| \\         / \\";
            cout << "\n\t\t" << "|  \\       /   \\";
            cout << "\n\t\t" << "|   \\";
            cout << "\n\t\t" << "--------------------";
            break;
        default:
            break;
        }


    } while (wrong > 0);

  


}