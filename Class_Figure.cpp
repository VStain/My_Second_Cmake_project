#include "Class_Figure.h"


    void Figure::Print_info()
    {
        cout << "�������� ������: " << name << endl;
        cout << (check() ? "����������" : "������������") << endl;
        cout << "���������� ������: " << sides_count << endl;
    }

    bool Figure::check()
    {
        return sides_count > 0;
    }

      void Print_info(Figure* figure)
      {
          figure->Print_info();
      }