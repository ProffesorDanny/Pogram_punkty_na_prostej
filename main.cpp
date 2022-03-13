#include <iostream>

using namespace std;

float licztangens(int x[], int y[])
{ float wynik1;
  float wynik2;
  float tangens;
  if (x[0] >= y[0])
  {
    wynik1 = x[0] - y[0];

  }
  else
  {
      wynik1 = y[0] - x[0];
  }

  if (x[1] >= y[1])
  {
    wynik2 = x[1] - y[1];

  }
  else
  {
      wynik2 = y[1] - x[1];
  }



if(wynik2 == 0 || wynik1 == 0)
{
    return 0;
}

  tangens = wynik2 / wynik1;
  

  return tangens;



}

int main()
{
    int x[2] = {0};
    int y[2] = {0};
    int z[2] = {0};

    float tangens1 = 0;
    float tangens2 = 0;
    float tangens3 = 0;
    bool czyprawda = false;

    cin >> x[0];
    cin >> x[1];
    cin >> y[0];
    cin >> y[1];
    cin >> z[0];
    cin >> z[1];

    if(x[0] == y[0] && y[0] == z[0])
    {
        czyprawda = true;
    }

     if(x[1] == y[1] && y[1] == z[1])
    {
        czyprawda = true;
    }

    if (czyprawda == false)
    {
     tangens1 = licztangens(x, y);
     tangens2 = licztangens(y, z);
     tangens3 = licztangens(x, z);


     if(tangens1 == tangens2 && tangens3 == tangens1)
     {
         czyprawda = true;
     }
    }


    if (czyprawda == true)
    {
        cout << "Na jednej prostej." << endl;
    }
    else
    {
        cout << "Nie na jednej prostej." << endl;
    }
}
