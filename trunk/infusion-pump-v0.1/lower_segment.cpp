#include "GLCD.h"
#include "DISPLAY.h"

unsigned short int ref = 92;//max=124
char f1 = 1;//Representa a segunda linha de baixo para cima do display.
char f2 = 2;//Representa a terceira linha de baixo para cima do display.

void letter_off(unsigned short int pos) //Apaga qualquer letra
{
    if (pos<=4)
    {
        unsigned short int i;
        for(i=0; i<9; i++)
        {
            glcd_gotoxy(f1,(ref-i)-(pos*10),0);
            glcd_write_data(0x00,1);
        }
        for(i=0; i<9; i++)
        {
            glcd_gotoxy(f2,(ref-i)-(pos*10),0);
            glcd_write_data(0x00,1);
        }
    }
}

void letter_trace(unsigned short int pos)
{
    if (pos<=4)
    {
        unsigned short int i;
        for (i=0; i<5; i++)
        {
            glcd_gotoxy(f1,(ref-2-i)-(pos*10),0);
            glcd_write_data(0x80,1);
            glcd_gotoxy(f2,(ref-2-i)-(pos*10),0);
            glcd_write_data(0x01,1);
        }
    }
}

void letter_twop(unsigned short int pos)
{
    if (pos<=4)
    {
        glcd_gotoxy(f1,(ref-4)-(pos*10),0);
        glcd_write_data(0x18,1);
        glcd_gotoxy(f2,(ref-4)-(pos*10),0);
        glcd_write_data(0x18,1);
    }
}

void letter_0(unsigned short int pos)
{
    if (pos<=4)
    {
        unsigned short int i;
        glcd_gotoxy(f1,(ref)-(pos*10),0);
        glcd_write_data(0x0,1);
        glcd_gotoxy(f2,(ref)-(pos*10),0);
        glcd_write_data(0x0,1);
        glcd_gotoxy(f1,(ref-1)-(pos*10),0);
        glcd_write_data(0xFC,1);
        glcd_gotoxy(f2,(ref-1)-(pos*10),0);
        glcd_write_data(0x3F,1);
        glcd_gotoxy(f1,(ref-2)-(pos*10),0);
        glcd_write_data(0xFF,1);
        glcd_gotoxy(f2,(ref-2)-(pos*10),0);
        glcd_write_data(0xFF,1);
        for(i=0; i<4; i++)
        {
            glcd_gotoxy(f1,(ref-3-i)-(pos*10),0);
            glcd_write_data(0x03,1);
            glcd_gotoxy(f2,(ref-3-i)-(pos*10),0);
            glcd_write_data(0xC0,1);
        }
        glcd_gotoxy(f1,(ref-7)-(pos*10),0);
        glcd_write_data(0xFF,1);
        glcd_gotoxy(f2,(ref-7)-(pos*10),0);
        glcd_write_data(0xFF,1);
        glcd_gotoxy(f1,(ref-8)-(pos*10),0);
        glcd_write_data(0xFC,1);
        glcd_gotoxy(f2,(ref-8)-(pos*10),0);
        glcd_write_data(0x3F,1);
    }
}

void letter_1(unsigned short int pos)
{
    if (pos<=4)
    {
        unsigned short int i;
        for (i=0; i<4; i++)
        {
            glcd_gotoxy(f2,(ref-i)-(pos*10),0);
            glcd_write_data(0x00,1);
        }
        for (i=0;i<7;i++){
            glcd_gotoxy(f1,(ref-i)-(pos*10),0);
            glcd_write_data(0x00,1);
        }            
        glcd_gotoxy(f2,(ref-4)-(pos*10),0);
        glcd_write_data(0x30,1);
        glcd_gotoxy(f2,(ref-5)-(pos*10),0);
        glcd_write_data(0x70,1);
        glcd_gotoxy(f2,(ref-6)-(pos*10),0);
        glcd_write_data(0xE0,1);
        for (i=0; i<2; i++)
        {
            glcd_gotoxy(f2,(ref-7-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
            glcd_gotoxy(f1,(ref-7-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        } 
    }
}

void letter_2(unsigned short int pos)
{
    if (pos<=4)
    {
    unsigned short int i;
    glcd_gotoxy(f1,(ref)-(pos*10),0);
    glcd_write_data(0xFE,1);
    glcd_gotoxy(f2,(ref)-(pos*10),0);
    glcd_write_data(0xC0,1);
    for (i=0;i<6;i++){
        glcd_gotoxy(f2,(ref-1-i)-(pos*10),0);
        glcd_write_data(0xC1,1);
    }
    glcd_gotoxy(f1,(ref-1)-(pos*10),0);
    glcd_write_data(0xFF,1);
    for (i=0;i<6;i++){
        glcd_gotoxy(f1,(ref-2-i)-(pos*10),0);
        glcd_write_data(0x83,1);
    }
    glcd_gotoxy(f2,(ref-7)-(pos*10),0);
    glcd_write_data(0xFF,1);
    glcd_gotoxy(f1,(ref-8)-(pos*10),0);
    glcd_write_data(0x03,1);
    glcd_gotoxy(f2,(ref-8)-(pos*10),0);
    glcd_write_data(0xFF,1);
    }
}

void letter_3(unsigned short int pos)
{
    unsigned short int i;
    if (pos<=4)
    {
    for (i=0;i<7;i++){
        glcd_gotoxy(f1,(ref-i)-(pos*10),0);
        glcd_write_data(0x83,1);
        glcd_gotoxy(f2,(ref-i)-(pos*10),0);
        glcd_write_data(0xC1,1);
    }
    glcd_gotoxy(f1,(ref-7)-(pos*10),0);
    glcd_write_data(0xFF,1);
    glcd_gotoxy(f2,(ref-7)-(pos*10),0);
    glcd_write_data(0xFF,1);
    glcd_gotoxy(f1,(ref-8)-(pos*10),0);
    glcd_write_data(0x7E,1);
    glcd_gotoxy(f2,(ref-8)-(pos*10),0);
    glcd_write_data(0x7E,1);
    }
}

void letter_4(unsigned short int pos)
{
    unsigned short int i;
    if (pos<=4)
    {
    for (i=0;i<2;i++){
    glcd_gotoxy(f2,(ref)-i-(pos*10),0);
    glcd_write_data(0xFF,1);
    }
    glcd_gotoxy(f1,(ref)-(pos*10),0);
    glcd_write_data(0x00,1);
    for (i=0;i<6;i++){
        glcd_gotoxy(f1,(ref-1-i)-(pos*10),0);
        glcd_write_data(0x80,1);
    }
    for (i=0;i<2;i++){
        glcd_gotoxy(f1,(ref-7-i)-(pos*10),0);
        glcd_write_data(0xFF,1);
    }
    for (i=0;i<5;i++){
        glcd_gotoxy(f2,(ref-2-i)-(pos*10),0);
        glcd_write_data(0x01,1);
    }
    for (i=0;i<2;i++){
        glcd_gotoxy(f2,(ref-7-i)-(pos*10),0);
        glcd_write_data(0xFF,1); 
    }
    }
}

void letter_5(unsigned short int pos)
{
    unsigned short int i;
    if (pos<=4)
    {
    glcd_gotoxy(f2,(ref)-(pos*10),0);
    glcd_write_data(0x7F,1);
    glcd_gotoxy(f1,(ref)-(pos*10),0);
    glcd_write_data(0x03,1);
    glcd_gotoxy(f2,(ref-1)-(pos*10),0);
    glcd_write_data(0xFF,1);
    for (i=0;i<5;i++){
    glcd_gotoxy(f1,(ref-1-i)-(pos*10),0);
    glcd_write_data(0x83,1);
    }
    for (i=0;i<5;i++){
    glcd_gotoxy(f2,(ref-2-i)-(pos*10),0);
    glcd_write_data(0xC1,1);
    }
    glcd_gotoxy(f1,(ref-6)-(pos*10),0);
    glcd_write_data(0xFF,1);
    glcd_gotoxy(f1,(ref-7)-(pos*10),0);
    glcd_write_data(0xFE,1);
    glcd_gotoxy(f2,(ref-7)-(pos*10),0);
    glcd_write_data(0xC0,1);
    }
}

void letter_6(unsigned short int pos)
{
    unsigned short int i;
    if (pos<=4)
    {
    glcd_gotoxy(f2,(ref)-(pos*10),0);
    glcd_write_data(0x7F,1);
    glcd_gotoxy(f1,(ref)-(pos*10),0);
    glcd_write_data(0xFE,1);
    glcd_gotoxy(f2,(ref-1)-(pos*10),0);
    glcd_write_data(0xFF,1);
    glcd_gotoxy(f1,(ref-1)-(pos*10),0);
    glcd_write_data(0xFF,1);
    for (i=0;i<6;i++){
        glcd_gotoxy(f2,(ref-2-i)-(pos*10),0);
        glcd_write_data(0xC1,1);
    }
    glcd_gotoxy(f2,(ref-8)-(pos*10),0);
    glcd_write_data(0xC0,1);
    for (i=0;i<5;i++){
        glcd_gotoxy(f1,(ref-2-i)-(pos*10),0);
        glcd_write_data(0x83,1);
    }
    glcd_gotoxy(f1,(ref-7)-(pos*10),0);
    glcd_write_data(0xFF,1);
    glcd_gotoxy(f1,(ref-8)-(pos*10),0);
    glcd_write_data(0xFE,1);
    }
}

void letter_7(unsigned short int pos)
{
    unsigned short int i;
    if (pos<=4)
    {
    glcd_gotoxy(f2,(ref)-(pos*10),0);
    glcd_write_data(0x78,1);
    for (i=0;i<6;i++){
        glcd_gotoxy(f1,(ref-i)-(pos*10),0);
        glcd_write_data(0x0,1);
    }
    glcd_gotoxy(f2,(ref-1)-(pos*10),0);
    glcd_write_data(0xF8,1);
    glcd_gotoxy(f1,(ref-7)-(pos*10),0);
    glcd_write_data(0xFF,1);
    for (i=0;i<5;i++){
        glcd_gotoxy(f2,(ref-2-i)-(pos*10),0);
        glcd_write_data(0xC0,1);
    }
    glcd_gotoxy(f2,(ref-7)-(pos*10),0);
    glcd_write_data(0xFF,1);
    glcd_gotoxy(f1,(ref-8)-(pos*10),0);
    glcd_write_data(0xFF,1);
    glcd_gotoxy(f2,(ref-8)-(pos*10),0);
    glcd_write_data(0x7F,1);
    }
}

void letter_8(unsigned short int pos)
{
    unsigned short int i;
    if (pos<=4)
    {
    glcd_gotoxy(f2,(ref)-(pos*10),0);
    glcd_write_data(0x7E,1);
    glcd_gotoxy(f1,(ref)-(pos*10),0);
    glcd_write_data(0x7E,1);
    glcd_gotoxy(f2,(ref-1)-(pos*10),0);
    glcd_write_data(0xFF,1);
    glcd_gotoxy(f1,(ref-1)-(pos*10),0);
    glcd_write_data(0xFF,1);
    for (i=0;i<5;i++){
        glcd_gotoxy(f2,(ref-2-i)-(pos*10),0);
        glcd_write_data(0xC1,1);
    }
    for (i=0;i<5;i++){
        glcd_gotoxy(f1,(ref-2-i)-(pos*10),0);
        glcd_write_data(0x83,1);
    }
    glcd_gotoxy(f2,(ref-7)-(pos*10),0);
    glcd_write_data(0xFF,1);
    glcd_gotoxy(f1,(ref-7)-(pos*10),0);
    glcd_write_data(0xFF,1);
    glcd_gotoxy(f2,(ref-8)-(pos*10),0);
    glcd_write_data(0x7E,1);
    glcd_gotoxy(f1,(ref-8)-(pos*10),0);
    glcd_write_data(0x7E,1);
    }
}

void letter_9(unsigned short int pos)
{
    unsigned short int i;
    if (pos<=4)
    {
    glcd_gotoxy(f2,(ref)-(pos*10),0);
    glcd_write_data(0x7F,1);
    glcd_gotoxy(f1,(ref)-(pos*10),0);
    glcd_write_data(0x03,1);
    glcd_gotoxy(f2,(ref-1)-(pos*10),0);
    glcd_write_data(0xFF,1);
    for (i=0;i<6;i++){
        glcd_gotoxy(f1,(ref-1-i)-(pos*10),0);
        glcd_write_data(0x83,1);
    }
    for (i=0;i<2;i++){
        glcd_gotoxy(f1,(ref-7-i)-(pos*10),0);
        glcd_write_data(0xFF,1);
    }
    for (i=0;i<5;i++){
        glcd_gotoxy(f2,(ref-2-i)-(pos*10),0);
        glcd_write_data(0xC1,1);
    }
    glcd_gotoxy(f2,(ref-7)-(pos*10),0);
    glcd_write_data(0xFF,1);
    glcd_gotoxy(f2,(ref-8)-(pos*10),0);
    glcd_write_data(0x7F,1);
    }
}


void letter_a(unsigned short int pos) //Imprime a letra A
{
    if (pos<=4)
    {
        unsigned short int i;
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for (i=0; i<5; i++)
        {
            glcd_gotoxy(f2,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0xC0,1);
        }
        for (i=0; i<5; i++)
        {
            glcd_gotoxy(f1,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0xC0,1);
        }
    }
}

void letter_b(unsigned short int pos) //imprime a letra B
{
    if (pos<=4)
    {
        unsigned short int i;
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0x7C,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0x3E,1);
        }
        for (i=0; i<5; i++)
        {
            glcd_gotoxy(f2,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0xC1,1);
        }
        for (i=0; i<5; i++)
        {
            glcd_gotoxy(f1,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0x83,1);
        }
    }
}

void letter_c(unsigned short int pos) //imprime a letra C
{
    if (pos<=4)
    {
        unsigned short int i;
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for (i=0; i<7; i++)
        {
            glcd_gotoxy(f2,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0xC0,1);
        }
        for (i=0; i<7; i++)
        {
            glcd_gotoxy(f1,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0x03,1);
        }
    }
}

void letter_d(unsigned short int pos) //Imprime a letra D
{
    if (pos<=4)
    {
        unsigned short int i;
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0xFC,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0x3F,1);
        }
        for (i=0; i<5; i++)
        {
            glcd_gotoxy(f2,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0xC0,1);
        }
        for (i=0; i<5; i++)
        {
            glcd_gotoxy(f1,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0x03,1);
        }
    }
}

void letter_e(unsigned short int pos) //Imprime a letra E
{
    if (pos<=4)
    {
        unsigned short int i;
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for (i=0; i<7; i++)
        {
            glcd_gotoxy(f2,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0xC1,1);
        }
        for (i=0; i<7; i++)
        {
            glcd_gotoxy(f1,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0x83,1);
        }
    }
}

void letter_f(unsigned short int pos) //Imprime a letra F
{
    if (pos<=4)
    {
        unsigned short int i;
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for (i=0; i<7; i++)
        {
            glcd_gotoxy(f2,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0xC0,1);
        }
        for (i=0; i<7; i++)
        {
            glcd_gotoxy(f1,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0xC0,1);
        }
    }
}

void letter_g(unsigned short int pos) //Imprime a letra G
{
    if (pos<=4)
    {
        unsigned short int i;
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for (i=0; i<5; i++)
        {
            glcd_gotoxy(f2,((ref-4)-i)-(pos*10),0);
            glcd_write_data(0xC1,1);
        }
        for (i=0; i<2; i++)
        {
            glcd_gotoxy(f1,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for (i=0; i<3; i++)
        {
            glcd_gotoxy(f1,((ref-4)-i)-(pos*10),0);
            glcd_write_data(0x83,1);
        }
        for (i=0; i<2; i++)
        {
            glcd_gotoxy(f1,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0x03,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0xC0,1);
        }
    }
}

void letter_h(unsigned short int pos) //Imprime a letra H
{
    if (pos<=4)
    {
        unsigned short int i;
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for (i=0; i<5; i++)
        {
            glcd_gotoxy(f2,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0x01,1);
        }
        for (i=0; i<5; i++)
        {
            glcd_gotoxy(f1,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0x80,1);
        }
    }
}

void letter_i(unsigned short int pos) //Imprime a letra I
{
    if (pos<=4)
    {
        unsigned short int i;
        for(i=0; i<3; i++)
        {
            glcd_gotoxy(f1,(ref-i)-(pos*10),0);
            glcd_write_data(0x03,1);
        }
        for(i=0; i<3; i++)
        {
            glcd_gotoxy(f2,(ref-i)-(pos*10),0);
            glcd_write_data(0xC0,1);
        }
        for(i=0; i<3; i++)
        {
            glcd_gotoxy(f1,((ref-3)-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<3; i++)
        {
            glcd_gotoxy(f2,((ref-3)-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<3; i++)
        {
            glcd_gotoxy(f1,((ref-6)-i)-(pos*10),0);
            glcd_write_data(0x03,1);
        }
        for(i=0; i<3; i++)
        {
            glcd_gotoxy(f2,((ref-6)-i)-(pos*10),0);
            glcd_write_data(0xC0,1);
        }
    }
}

void letter_j(unsigned short int pos) //Imprime a letra J
{
    if (pos<=4)
    {
        unsigned short int i;
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<5; i++)
        {
            glcd_gotoxy(f1,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0x03,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
    }
}

void letter_k(unsigned short int pos) //Imprime a letra K
{
    if (pos<=4)
    {
        unsigned short int i;
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        glcd_gotoxy(f1,((ref-2))-(pos*10),0);
        glcd_write_data(0xC0,1);
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,((ref-3)-i)-(pos*10),0);
            glcd_write_data(0x30,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,((ref-5)-i)-(pos*10),0);
            glcd_write_data(0x0C,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0x03,1);
        }
        for(i=0; i<1; i++)
        {
            glcd_gotoxy(f2,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0x03,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,((ref-3)-i)-(pos*10),0);
            glcd_write_data(0x0C,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,((ref-5)-i)-(pos*10),0);
            glcd_write_data(0x30,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0xC0,1);
        }
    }
}

void letter_l(unsigned short int pos) //Imprime a letra L
{
    if (pos<=4)
    {
        unsigned short int i;
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for (i=0; i<7; i++)
        {
            glcd_gotoxy(f1,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0x03,1);
        }
    }
}

void letter_m(unsigned short int pos) //Imprime a letra M
{
    if (pos<=4)
    {
        unsigned short int i;
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for (i=0; i<2; i++)
        {
            glcd_gotoxy(f1,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for (i=0; i<2; i++)
        {
            glcd_gotoxy(f2,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        glcd_gotoxy(f2,((ref-2))-(pos*10),0);
        glcd_write_data(0x30,1);
        glcd_gotoxy(f2,((ref-3))-(pos*10),0);
        glcd_write_data(0x0C,1);
        glcd_gotoxy(f2,((ref-4))-(pos*10),0);
        glcd_write_data(0x03,1);
        glcd_gotoxy(f2,((ref-5))-(pos*10),0);
        glcd_write_data(0x0C,1);
        glcd_gotoxy(f2,((ref-6))-(pos*10),0);
        glcd_write_data(0x30,1);
    }
}

void letter_n(unsigned short int pos) //Imprime a letra N
{
    if (pos<=4)
    {
        unsigned short int i;
        for (i=0; i<2; i++)
        {
            glcd_gotoxy(f1,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for (i=0; i<2; i++)
        {
            glcd_gotoxy(f2,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for (i=0; i<2; i++)
        {
            glcd_gotoxy(f1,(ref-7-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for (i=0; i<2; i++)
        {
            glcd_gotoxy(f2,((ref-7-i))-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        glcd_gotoxy(f2,((ref-2))-(pos*10),0);
        glcd_write_data(0x18,1);
        glcd_gotoxy(f2,((ref-3))-(pos*10),0);
        glcd_write_data(0x06,1);
        glcd_gotoxy(f2,((ref-4))-(pos*10),0);
        glcd_write_data(0x01,1);
        glcd_gotoxy(f1,((ref-4))-(pos*10),0);
        glcd_write_data(0x80,1);
        glcd_gotoxy(f1,((ref-5))-(pos*10),0);
        glcd_write_data(0x60,1);
        glcd_gotoxy(f1,((ref-6))-(pos*10),0);
        glcd_write_data(0x18,1);
    }
}

void letter_o(unsigned short int pos) //Imprime a letra O
{
    if (pos<=4)
    {
        unsigned short int i;
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for (i=0; i<5; i++)
        {
            glcd_gotoxy(f2,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0xC0,1);
        }
        for (i=0; i<5; i++)
        {
            glcd_gotoxy(f1,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0x03,1);
        }
    }
}

void letter_p(unsigned short int pos) //Imprime a letra P
{
    if (pos<=4)
    {
        unsigned short int i;
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for (i=0; i<5; i++)
        {
            glcd_gotoxy(f2,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0xC1,1);
        }
        for (i=0; i<7; i++)
        {
            glcd_gotoxy(f1,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0x80,1);
        }
    }
}

void letter_q(unsigned short int pos) //Imprime a letra Q
{
    if (pos<=4)
    {
        unsigned short int i;
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,(ref-i)-(pos*10),0);
            glcd_write_data(0xFC,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,(ref-i)-(pos*10),0);
            glcd_write_data(0x3F,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0x3F,1);
        }
        for (i=0; i<5; i++)
        {
            glcd_gotoxy(f2,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0xC0,1);
        }
        for (i=0; i<2; i++)
        {
            glcd_gotoxy(f1,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0x03,1);
        }
        glcd_gotoxy(f1,((ref-4))-(pos*10),0);
        glcd_write_data(0x33,1);
        glcd_gotoxy(f1,((ref-5))-(pos*10),0);
        glcd_write_data(0x0B,1);
        glcd_gotoxy(f1,((ref-6))-(pos*10),0);
        glcd_write_data(0x07,1);
        glcd_gotoxy(f1,((ref-7))-(pos*10),0);
        glcd_write_data(0xFE,1);
        glcd_gotoxy(f1,((ref-8))-(pos*10),0);
        glcd_write_data(0xFD,1);
    }
}

void letter_r(unsigned short int pos) //Imprime a letra R
{
    if (pos<=4)
    {
        unsigned short int i;
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<5; i++)
        {
            glcd_gotoxy(f2,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0xC1,1);
        }
        glcd_gotoxy(f2,((ref-7))-(pos*10),0);
        glcd_write_data(0xFF,1);
        glcd_gotoxy(f2,((ref-8))-(pos*10),0);
        glcd_write_data(0x7F,1);
        for (i=0; i<2; i++)
        {
            glcd_gotoxy(f1,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0x80,1);
        }
        glcd_gotoxy(f1,((ref-4))-(pos*10),0);
        glcd_write_data(0xC0,1);
        glcd_gotoxy(f1,((ref-5))-(pos*10),0);
        glcd_write_data(0xF0,1);
        glcd_gotoxy(f1,((ref-6))-(pos*10),0);
        glcd_write_data(0xBC,1);
        glcd_gotoxy(f1,(ref-7)-(pos*10),0);
        glcd_write_data(0x8F,1);
        glcd_gotoxy(f1,((ref-8))-(pos*10),0);
        glcd_write_data(0x03,1);
    }
}

void letter_s(unsigned short int pos) //Imprime a letra S
{
    if (pos<=4)
    {
        unsigned short int i;
        for(i=0; i<7; i++)
        {
            glcd_gotoxy(f1,(ref-i)-(pos*10),0);
            glcd_write_data(0x83,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<7; i++)
        {
            glcd_gotoxy(f2,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0xC1,1);
        }
    }
}

void letter_t(unsigned short int pos) //Imprime a letra T
{
    if (pos<=4)
    {
        unsigned short int i;
        for(i=0; i<3; i++)
        {
            glcd_gotoxy(f2,(ref-i)-(pos*10),0);
            glcd_write_data(0xC0,1);
        }
        for(i=0; i<3; i++)
        {
            glcd_gotoxy(f2,((ref-3)-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<3; i++)
        {
            glcd_gotoxy(f2,((ref-6)-i)-(pos*10),0);
            glcd_write_data(0xC0,1);
        }
        for(i=0; i<3; i++)
        {
            glcd_gotoxy(f1,((ref-3)-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
    }
}

void letter_u(unsigned short int pos) //Imprime a letra U
{
    if (pos<=4)
    {
        unsigned short int i;
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for (i=0; i<5; i++)
        {
            glcd_gotoxy(f1,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0x03,1);
        }
    }
}

void letter_v(unsigned short int pos) //Imprime a letra V
{
    if (pos<=4)
    {
        unsigned short int i;
        glcd_gotoxy(f1,(ref)-(pos*10),0);
        glcd_write_data(0xC0,1);
        glcd_gotoxy(f1,((ref-1))-(pos*10),0);
        glcd_write_data(0xF0,1);
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        glcd_gotoxy(f1,((ref-2))-(pos*10),0);
        glcd_write_data(0x3C,1);
        glcd_gotoxy(f1,((ref-3))-(pos*10),0);
        glcd_write_data(0x0F,1);
        glcd_gotoxy(f1,((ref-4))-(pos*10),0);
        glcd_write_data(0x03,1);
        glcd_gotoxy(f1,((ref-5))-(pos*10),0);
        glcd_write_data(0x0F,1);
        glcd_gotoxy(f1,((ref-6))-(pos*10),0);
        glcd_write_data(0x3C,1);
        glcd_gotoxy(f1,(ref-7)-(pos*10),0);
        glcd_write_data(0xF0,1);
        glcd_gotoxy(f1,((ref-8))-(pos*10),0);
        glcd_write_data(0xC0,1);
    }
}

void letter_x(unsigned short int pos) //Imprime a letra X
{
    if (pos<=4)
    {
        glcd_gotoxy(f2,(ref)-(pos*10),0);
        glcd_write_data(0xE0,1);
        glcd_gotoxy(f2,((ref-1))-(pos*10),0);
        glcd_write_data(0xF8,1);
        glcd_gotoxy(f2,((ref-2))-(pos*10),0);
        glcd_write_data(0x1E,1);
        glcd_gotoxy(f2,((ref-3))-(pos*10),0);
        glcd_write_data(0x07,1);
        glcd_gotoxy(f2,((ref-4))-(pos*10),0);
        glcd_write_data(0x01,1);
        glcd_gotoxy(f2,((ref-5))-(pos*10),0);
        glcd_write_data(0x07,1);
        glcd_gotoxy(f2,((ref-6))-(pos*10),0);
        glcd_write_data(0x1E,1);
        glcd_gotoxy(f2,(ref-7)-(pos*10),0);
        glcd_write_data(0xF8,1);
        glcd_gotoxy(f2,((ref-8))-(pos*10),0);
        glcd_write_data(0xE0,1);
        glcd_gotoxy(f1,(ref)-(pos*10),0);
        glcd_write_data(0x07,1);
        glcd_gotoxy(f1,((ref-1))-(pos*10),0);
        glcd_write_data(0x1F,1);
        glcd_gotoxy(f1,((ref-2))-(pos*10),0);
        glcd_write_data(0x78,1);
        glcd_gotoxy(f1,((ref-3))-(pos*10),0);
        glcd_write_data(0xE0,1);
        glcd_gotoxy(f1,((ref-4))-(pos*10),0);
        glcd_write_data(0x80,1);
        glcd_gotoxy(f1,((ref-5))-(pos*10),0);
        glcd_write_data(0xE0,1);
        glcd_gotoxy(f1,((ref-6))-(pos*10),0);
        glcd_write_data(0x78,1);
        glcd_gotoxy(f1,(ref-7)-(pos*10),0);
        glcd_write_data(0x1F,1);
        glcd_gotoxy(f1,((ref-8))-(pos*10),0);
        glcd_write_data(0x07,1);
    }
}

void letter_w(unsigned short int pos) //Imprime a letra W
{
    if (pos<=4)
    {
        unsigned short int i;
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for (i=0; i<2; i++)
        {
            glcd_gotoxy(f1,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for (i=0; i<2; i++)
        {
            glcd_gotoxy(f2,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        glcd_gotoxy(f1,((ref-2))-(pos*10),0);
        glcd_write_data(0x0C,1);
        glcd_gotoxy(f1,((ref-3))-(pos*10),0);
        glcd_write_data(0x30,1);
        glcd_gotoxy(f1,((ref-4))-(pos*10),0);
        glcd_write_data(0xC0,1);
        glcd_gotoxy(f1,((ref-5))-(pos*10),0);
        glcd_write_data(0x30,1);
        glcd_gotoxy(f1,((ref-6))-(pos*10),0);
        glcd_write_data(0x0C,1);
    }
}

void letter_y(unsigned short int pos) //Imprime a letra Y
{
    if (pos<=4)
    {
        unsigned short int i;
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,(ref-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<5; i++)
        {
            glcd_gotoxy(f2,((ref-2)-i)-(pos*10),0);
            glcd_write_data(0x01,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f2,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<2; i++)
        {
            glcd_gotoxy(f1,((ref-7)-i)-(pos*10),0);
            glcd_write_data(0x80,1);
        }
        for(i=0; i<3; i++)
        {
            glcd_gotoxy(f1,((ref-3)-i)-(pos*10),0);
            glcd_write_data(0xFF,1);
        }
        for(i=0; i<3; i++)
        {
            glcd_gotoxy(f1,((ref-6)-i)-(pos*10),0);
            glcd_write_data(0x80,1);
        }
    }
}

void letter_z(unsigned short int pos) //Imprime a letra Z
{
    if (pos<=4)
    {
        unsigned short int i;
        for(i=0; i<4; i++)
        {
            glcd_gotoxy(f2,(ref-i)-(pos*10),0);
            glcd_write_data(0xC0,1);
        }
        glcd_gotoxy(f2,((ref-4))-(pos*10),0);
        glcd_write_data(0xC1,1);
        glcd_gotoxy(f2,((ref-5))-(pos*10),0);
        glcd_write_data(0xC3,1);
        glcd_gotoxy(f2,((ref-6))-(pos*10),0);
        glcd_write_data(0xC6,1);
        glcd_gotoxy(f2,(ref-7)-(pos*10),0);
        glcd_write_data(0xFC,1);
        glcd_gotoxy(f2,((ref-8))-(pos*10),0);
        glcd_write_data(0xF8,1);
        glcd_gotoxy(f1,(ref)-(pos*10),0);
        glcd_write_data(0x1F,1);
        glcd_gotoxy(f1,((ref-1))-(pos*10),0);
        glcd_write_data(0x3F,1);
        glcd_gotoxy(f1,((ref-2))-(pos*10),0);
        glcd_write_data(0x63,1);
        glcd_gotoxy(f1,((ref-3))-(pos*10),0);
        glcd_write_data(0xC3,1);
        glcd_gotoxy(f1,((ref-4))-(pos*10),0);
        glcd_write_data(0x83,1);
        for(i=0; i<4; i++)
        {
            glcd_gotoxy(f1,((ref-5)-i)-(pos*10),0);
            glcd_write_data(0x03,1);
        }
    }
}

void clean_letters()
{
    unsigned short int i;
    for(i=0; i<5; i++)
    {
        letter_off(i);
    }
}

unsigned short int convert_letter_number(char letter){
  switch (letter){
  case 'a': return 1;
    break;
  case 'b': return 2;
  break;
  case 'c': return 3;
    break;
  case 'd': return 4;
  break;
  case 'e': return 5;
    break;
  case 'f': return 6;
  break;
  case 'g': return 7;
    break;
  case 'h': return 8;
  break;
  case 'i': return 9;
    break;
  case 'j': return 10;
  break;
  case 'k': return 11;
    break;
  case 'l': return 12;
  break;
  case 'm': return 13;
    break;
  case 'n': return 14;
  break;
  case 'o': return 15;
    break;
  case 'p': return 16;
  break;
  case 'q': return 17;
    break;
  case 'r': return 18;
  break;
  case 's': return 19;
    break;
  case 't': return 20;
  break;
  case 'u': return 21;
    break;
  case 'v': return 22;
  break;
  case 'x': return 23;
    break;
  case 'w': return 24;
  break;
  case 'y': return 25;
    break;
  case 'z': return 26;
  break;
  case '-': return 27;
  break;
  case ':': return 28;
  break;
  case '1': return 29;
  break;
  case '2': return 30;
  break;        
  case '3': return 31;
  break;
  case '4': return 32;
  break;
  case '5': return 33;
  break;
  case '6': return 34;
  break;
  case '7': return 35;
  break;
  case '8': return 36;
  break;
  case '9': return 37;
  break;
  case '0': return 38;
  break;
  default: return 0;
  }
}

void letter(unsigned short int letter, unsigned short int pos)
{
    /*Forma alternativa de escrever cada letra
        (utilizado para fazer efeito de "rolagem" do texto)*/

    if (pos<=4)
    {
        switch(letter)
        {
        case 0:
            letter_off(pos);
            break;
        case 1:
            letter_a(pos);
            break;
        case 2:
            letter_b(pos);
            break;
        case 3:
            letter_c(pos);
            break;
        case 4:
            letter_d(pos);
            break;
        case 5:
            letter_e(pos);
            break;
        case 6:
            letter_f(pos);
            break;
        case 7:
            letter_g(pos);
            break;
        case 8:
            letter_h(pos);
            break;
        case 9:
            letter_i(pos);
            break;
        case 10:
            letter_j(pos);
            break;
        case 11:
            letter_k(pos);
            break;
        case 12:
            letter_l(pos);
            break;
        case 13:
            letter_m(pos);
            break;
        case 14:
            letter_n(pos);
            break;
        case 15:
            letter_o(pos);
            break;
        case 16:
            letter_p(pos);
            break;
        case 17:
            letter_q(pos);
            break;
        case 18:
            letter_r(pos);
            break;
        case 19:
            letter_s(pos);
            break;
        case 20:
            letter_t(pos);
            break;
        case 21:
            letter_u(pos);
            break;
        case 22:
            letter_v(pos);
            break;
        case 23:
            letter_x(pos);
            break;
        case 24:
            letter_w(pos);
            break;
        case 25:
            letter_y (pos);
            break;
        case 26:
            letter_z(pos);
            break;
        case 27:
            letter_trace(pos);
            break;
        case 28:
            letter_twop(pos);
        break;
        case 29:
            letter_1(pos);
        break;
        case 30:
            letter_2(pos);
        break;
        case 31:
            letter_3(pos);
        break;
        case 32:
            letter_4(pos);
        break;
        case 33:
            letter_5(pos);
        break;
        case 34:
            letter_6(pos);
        break;
        case 35:
            letter_7(pos);
        break;
        case 36:
            letter_8(pos);
        break;
        case 37:
            letter_9(pos);
        break;
        case 38:
            letter_0(pos);
        break;
        }
    }
}

void write_data(unsigned char phrase[TAMANHO_FRASE])
{
    unsigned short int i, letra,j, contador, dif;
    contador = 1;
    while(phrase[contador-1]!='\0')
    {
        contador++;
    }
    dif = contador - 5;
    if (contador<=5)
    {
        for (j=0; j<1; j++)
        {
            clean_letters();
            for (i=0; i<contador; i++)
            {
                letra = convert_letter_number(phrase[i]);
                letter(letra, i-j);
            }
            __delay_cycles(1000000);
        }
    }
    else
    {
        for (j=0; j<dif; j++)
        {
            clean_letters();
            for (i=0; i<contador; i++)
            {
                letra = convert_letter_number(phrase[i]);
                letter(letra, i-j);
            }
            __delay_cycles(1000000);
        }
    }
}

void cout(unsigned char frase[TAMANHO_FRASE]){//saida simplificada da frase, chama a funcao write_data_menu.
  write_data(frase);
}