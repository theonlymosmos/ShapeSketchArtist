// Omar Mohammad Yousef Farag (20236066)
// Mousa Mohamed Mousa Mohamed Hussein (20235042)
// Yousef Hamed Mohamad 20236058
// TA AMANY
#include<iostream>
using namespace std;

int main()
{
    string shape;
    char boardType;
    cout << "Welcome to the Graphical shapes program ..." << endl << "Choose the shape you want to draw or exit." << endl;
    getline(cin, shape);
    if ("square" == shape)
    {
        int size;
        cout << "What is your square size?" << endl;
        cin >> size;
        cout << "What is your board type?" << endl;
        cin >> boardType;
        for (int i = 0; i < size + 2; i++) //rows
        {
            for (int j = 0; j < size + 2; j++) //columns
            {
                if (i == 0 || j == 0 || i == size + 1 || j == size + 1)
                    cout << boardType;
                else
                    cout << ' ';
            }
            cout << endl;
        }
    }
    else if ("rectangle" == shape)
    {
        int length, width;
        cout << "What is your rectangle length?" << endl;
        cin >> length;
        cout << "What is your rectangle width?" << endl;
        cin >> width;
        cout << "What is your board type?" << endl;
        cin >> boardType;
        for (int i = 0; i < length + 2; i++)
        {
            for (int j = 0; j < width + 2; j++)
            {
                if (i == 0 || j == 0 || i == length + 1 || j == width + 1)
                    cout << boardType << flush;
                else
                    cout << ' ' << flush;
            }


            cout << endl << flush;
        }
    }
    else if ("Equilateral triangle" == shape)
    {
        int base;
        cout << "What is your Equilateral triangle base?" << endl;
        cin >> base;
        cout << "What is your board type?" << endl;
        cin >> boardType;
        for (int i = 0; i < 2 + base; i++) //iterating over rows (we added upper and lower row so base+2)
        {
            for (int j = 0; j < 2 * base + 1;)  //iterating over columns (the relation between the base & number of columns> 2base+1 = # of columns)
            {
                if (i != 0 && i != base + 1 && j != 0 && j != 2 * base && i + j == base + 1)
                {
                    for (int k = 0; k < 2 * (i - 1) + 1; k++, j++)
                        cout << ' ' << flush;
                }
                else
                {
                    cout << boardType << flush;
                    j++;
                }
            }
            cout << endl << flush;
        }
    }
    else if ("Right-angled triangle" == shape)
    {
        int base, height;
        cout << "What is your right-angled triangle base?" << endl;
        cin >> base;
        cout << "What is your right-angled triangle height?" << endl;
        cin >> height;
        cout << "What is your board type?" << endl;
        cin >> boardType;
        for (int i = 0; i < height + 2; i++) //rows
        {
            for (int j = 0; j < base * 3 + 2;) //columns
            {
                if (i != 0 && j != 0 && i != height + 1 && j != base + 1 && j == 1)
                {
                    for (int k = 0; k < 2 * (i - 1) + 1; k++, j++)
                        cout << ' ' << flush;
                }
                else
                {
                    cout << boardType << flush;
                    j++;
                }
            }
            cout << endl << flush;
        }
    }
    else if ("rhombus" == shape)
    {
        int sideLength;
        cout << "what is your rhombus Side length?" << endl;
        cin >> sideLength;
        cout << "What is your board type?" << endl;
        cin >> boardType;
        sideLength = sideLength * 2 - 1;
        sideLength = sideLength + 2;
        int diagonal = sideLength - 2;
        int upperRows = sideLength / 2 + 1;
        for (int rows = 0; rows < upperRows; rows++)
        {
            for (int columns = 0; columns < sideLength;)
            {
                for (int k = 0; k < upperRows - rows; k++, columns++)
                    cout << boardType << flush; //printing characters left of the spaces

                for (int l = 0; l < 1 + 2 * (rows - 1); l++, columns++) //printing spaces
                    cout << ' ' << flush;

                for (; columns < sideLength; columns++) //printint characters right of the spaces
                    cout << boardType << flush;
            }
            cout << endl << flush;
        }

        int lowerRows = sideLength - upperRows;
        for (int rows = 0; rows < lowerRows; rows++)
        {
            for (int j = 0; j < sideLength;)
            {
                for (int k = 0; k <= rows + 1; k++, j++) //printintg characters left of the spaces
                    cout << boardType << flush;

                for (int l = diagonal - 2 - 2 * rows; l > 0; l--, j++) //printing spaces
                    cout << ' ' << flush;

                for (; j < sideLength; j++) //printing characters right of the spaces
                    cout << boardType;
            }
            cout << endl;
        }
    }
    return 0;
}