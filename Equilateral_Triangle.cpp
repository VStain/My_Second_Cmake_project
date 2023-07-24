#include "Equilateral_Triangle.h"


Equilateral_Triangle::Equilateral_Triangle(int a_side, int A_angle)
    : Triangle(a_side, a_side, a_side, A_angle, A_angle)
{
    name = "�������������� ����������� ";
}
/* { // �������������� ������� ������
    name = "�������������� ����������� ";
    sides_count = 3;
    c_side = this->a_side;
    b_side = this->a_side;
    B_angle = 60;
    C_angle = 60;
}*/
void Equilateral_Triangle::Print_info()
{
    cout << "�������� ������: " << name << endl;
    cout << (check() ? "����������" : "������������") << endl;
    cout << "���������� ������: " << sides_count << endl;
    cout << "�������: a = " << a_side << " b = " << b_side << " c = " << c_side << endl;
    cout << "����: A = " << A_angle << " B = " << B_angle << " C = " << C_angle << endl << endl;
}

bool Equilateral_Triangle::check()
{
    if (!Triangle::check())
    {
        return false;
    }
    if (a_side != b_side != c_side && A_angle != 60 && B_angle != 60 && C_angle != 60)
    {
        return false;
    }
    return true;
}