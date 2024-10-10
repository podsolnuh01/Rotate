//========================================================================
//! @file       Main.cpp
//{=======================================================================
//!
//! @brief      <Заголовок>\n
//! @brief      <Подзаголовок>
//!
//! @version    [Version 0.01 alpha, build 1]
//! @author     Copyright (C) <Автор>, <Год> (<Имя> <Почта>)
//! @date       <Дата>
//!
//! @par        Протестировано
//!           - (TODO: список платформ)
//!
//! @todo     - (TODO: список ближайших планов по этому файлу)
//!
//! @bug      - (TODO: список найденных ошибок в этом файле)
//!
//! @par        История изменений файла
//!           - Версия 0.01 Alpha
//!             - Только что созданный файл
//!
//}=======================================================================

#include "TXLib.h"

void koleso(int x0, int y0, float a, int r)
{

    float a1 = a;
    float a2 = a+120;
    float a3 = a+240;
    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y3;

    txSetColor(TX_WHITE, 10);
    txSetFillColor(TX_BLACK);
    txCircle (x0, y0, r);

    x1 = x0+r*cos(a1*3.14/180);
    y1 = y0+r*sin(a1*3.14/180);
    x2 = x0+r*cos(a2*3.14/180);
    y2 = y0+r*sin(a2*3.14/180);
    x3 = x0+r*cos(a3*3.14/180);
    y3 = y0+r*sin(a3*3.14/180);


    txLine(x0, y0, x1, y1);
    txLine(x0, y0, x2, y2);
    txLine(x0, y0, x3, y3);

    a1 = a1 + 2;
    a2 = a2 + 2;
    a3 = a3 + 2;

}

int main()
    {
    txCreateWindow (800, 600);

    float a = 0;
    int xKolesa;

    while(a < 360)
    {

     txClear();
     koleso(xKolesa, 300, a, 100);
     koleso(xKolesa+200, 350, a, 50);
     a+=2;
     xKolesa += 5;
     txSleep(50);
     txEnd();
        }

    }

