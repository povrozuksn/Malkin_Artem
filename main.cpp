#include "TXLib.h"



void drawLopata()
{
txLine(604,212,604,174);
txLine(604,190,697,190);
txRectangle(694,212,745,174);
}

void drawBackGround()
{
    txSetColor(RGB(70,190,230));
    txSetFillColor(RGB(70,190,230));
    txRectangle(800,0,0,600);
}

void drawGrass()
{
    txSetColor(TX_GREEN);
    txSetFillColor(TX_GREEN);
    txRectangle (0,451,800,600);
}

void drawHouse()
{
    txSetColor(TX_BLACK,5);
    txSetFillColor(RGB(128,64,0));
    txRectangle(77,201,401,468);
    POINT star[3] = {{77,201}, {227,77}, {400,200}};
    txPolygon (star, 3);
    txSetColor(TX_BLACK,5);
    txSetFillColor(TX_LIGHTCYAN);
    txRectangle(103,290,202,398);
    txLine(150,291,150,398);
    txSetColor(TX_BLACK,5);
    txLine(150,328,200,328);
    txSetFillColor(TX_WHITE);
    txRectangle(250,220,350,440);

}

void drawMan1(int x,int y,double razm)
{
    txSetFillColor(TX_WHITE);
    txSetColor(TX_BLACK,5);
    txLine(x+(681-706)*razm,y+(447-371)*razm,x+(706-706)*razm,y+(371-371)*razm);
    txLine(x+(738-706)*razm,y+(452-371)*razm,x+(706-706)*razm,y+(371-371)*razm);
    //body
    txLine(x+(706-706)*razm,y+(371-371)*razm,x+(710-706)*razm,y+(268-371)*razm);
    txLine(x+(710-706)*razm,y+(268-371)*razm,x+(669-706)*razm,y+(339-371)*razm);
    txLine (x+(710-706)*razm,y+(268-371)*razm,x+(757-706)*razm,y+(339-371)*razm);
    txCircle  (x+(707-706),y+(242-371)*razm,30);
    txCircle (x+(697-706)*razm,y+(232-371)*razm,2);
    txCircle (x+(717-706)*razm,y+(232-371)*razm,2);
    txArc (x-15*razm,y-115*razm,x+20*razm,y-140*razm,180,180);

}

void drawMan2(int x,int y,double razm)
{
    txSetFillColor(TX_WHITE);
    txSetColor(TX_BLACK,5);
    txLine(x+(681-706)*razm,y+(447-371)*razm,x+(706-706)*razm,y+(371-371)*razm);
    txLine(x+(738-706)*razm,y+(452-371)*razm,x+(706-706)*razm,y+(371-371)*razm);
    //body
    txLine(x+(706-706)*razm,y+(371-371)*razm,x+(710-706)*razm,y+(268-371)*razm);
    txLine(x+(710-706)*razm,y+(268-371)*razm,x+(669-706)*razm,y+(339-371)*razm);
    txLine (x+(710-706)*razm,y+(268-371)*razm,x+(757-706)*razm,y+(339-371)*razm);
    txCircle  (x+(707-706),y+(242-371)*razm,30);
    txCircle (x+(697-706)*razm,y+(232-371)*razm,2);
    txCircle (x+(717-706)*razm,y+(232-371)*razm,2);
    txArc (x-15*razm,y-115*razm,x+20*razm,y-140*razm,180,180);

}

void drawDoor(int x,int y)
{

    txSetColor(TX_BLACK,5);
    txSetFillColor(RGB(128,64,0));
    POINT star[4] = {{x,y}, {350,220}, {350,440}, {x,y+220}};
          txPolygon (star,4);


}

void drawManIsKomnataPraviy(int x,int y)
{
txSetColor(TX_BLACK,5);
txLine(491,258,491,377);
txLine(491,377,419,377);
txLine(419,377,421,487);
txCircle(491,225,30);
txLine(451,292,x+402-366,y+310-289);
txLine(451,292,492,270);
//?????? ?????
txSetFillColor(TX_WHITE);
txRectangle(x+366-366,y+289-289,x+405-366,y+333-289);
}

void drawManIsKomnatLeviy()
{
txSetColor(TX_BLACK,5);
txLine(116,258,116,377);
txLine(116,377,194,377);
txLine(116,377,194,377);
txLine(194,377,194,487);
txSetFillColor(TX_WHITE);
//????? ?????
txRectangle(209,289,245,333);
txCircle(116,229,30);
txLine(116,292,211,317);
}

void Scene()
{
    drawBackGround();
    drawHouse();
    drawGrass();


}

void drawRoom()
{
//???
txSetColor(RGB(201,125,69));
txSetFillColor(RGB(201,125,69));
txRectangle(0,0,800,600);
txSetColor(TX_BLACK,5);
txSetFillColor(TX_BLACK);
//???
txLine(0,487,800,487);
//?????
txLine(575,134,753,134);
txLine(753,134,753,220);
txLine(575,220,753,220);
txLine(575,134,575,220);

//?????? ????
txLine(506,274,506,487);
txLine(506,389,439,389);
txLine(439,389,439,487);
//????? ????
txLine(107,274,107,487);
txLine(107,389,180,389);
txLine(180,389,180,487);

//????
txLine(205,487,205,333);
txLine(183,333,430,333);
txLine(393,333,393,487);
//????
txSetFillColor(RGB(70,190,230));
txRectangle(236,94,383,266);
txLine(304,97,304,262);
txLine(304,150,380,150);
txSetFillColor(RGB(255,255,0));
txSetColor(TX_BLACK,1);
txCircle(269,129,30);


}

void drawDialog(int x,int y,const char* slovo)
{
    txSelectFont("Times",20);
    txSetColor(TX_BLACK,1);
    txSetFillColor(TX_WHITE);
    txRectangle(x,y,x+115,y+25);
    txTextOut(x+5,y+5,slovo);
}


int main()
    {

    txCreateWindow(800,600);
   //drawRoom
     drawRoom();
    int xMan1=680;
    int xMan2=300;
    int xDoor=250;
    int yDoor=220;
    int xHAND=366;
    int yHAND=289;
    int yText=1500;


    double razmMan2=0.7;



        while(yText > -50)
    {
        txBegin();
        txSetColor(TX_WHITE);
        txSetFillColor(TX_BLACK);
        txRectangle(0,0,800,600);
        txSelectFont("Times",100);
        txDrawText(0,yText-600,800,yText,
                        "Artem pictures\n"
                        "\n"
                        "????????????");
        yText=yText-10;
        txSleep(50);
        txEnd();
    }
yText=1500;
     while(yText > -50)
    {
        txBegin();
        txSetColor(TX_WHITE);
        txSetFillColor(TX_BLACK);
        txRectangle(0,0,800,600);
        txSelectFont("Times",100);
        txDrawText(0,yText-600,800,yText,
                        "??? ?????\n"
                        "\n"
                        "-??? ????");
        yText=yText-10;
        txSleep(50);
        txEnd();
    }

    while(xMan1>450)
    {
    txBegin();
    Scene();
    drawMan1(xMan1,385,1);
    xMan1=xMan1-10;
    drawDoor(xDoor,yDoor);
    txEnd();
    txSleep(50);
    }

    while(xDoor<350)
    {
    txBegin();
    Scene();
    drawMan1(xMan1,385,1);
    drawDoor(xDoor,yDoor);
    xDoor=xDoor+10;
    yDoor=yDoor+10;
    txEnd();
    txSleep(50);
    }

    while(razmMan2<1)
    {
    txBegin();
    Scene();
    drawMan1(xMan1,385,1);
    drawDoor(xDoor,yDoor);
    drawMan2(xMan2,385,razmMan2);
    razmMan2=razmMan2+0.05;
    txSleep(50);
    drawDialog(315,215,"??????,??????");
    txEnd();
    txSleep(50);
    }
    txSleep(1500);

    while (xHAND<420)
    {
    txBegin();
    drawRoom();
    txSetColor(TX_BLACK,5);
    txSetFillColor(TX_BLACK);
    drawLopata();
    drawManIsKomnatLeviy();
    drawManIsKomnataPraviy(xHAND,yHAND);
    xHAND=xHAND+2;
    yHAND=yHAND-2;
    txEnd();
    txSleep(50);
    }

    while (xHAND>366)
    {
    txBegin();
    drawRoom();
    txSetColor(TX_BLACK,5);
    txSetFillColor(TX_BLACK);
    drawLopata();
    drawManIsKomnatLeviy();
    drawManIsKomnataPraviy(xHAND,yHAND);
    xHAND=xHAND-2;
    yHAND=yHAND+2;
    txEnd();
    txSleep(50);
    }
    drawDialog(116,170,"??,????? ?????");
    txSleep(1000);
    drawRoom();
    txSetColor(TX_BLACK,5);
    txSetFillColor(TX_BLACK);
    drawLopata();
    drawManIsKomnatLeviy();
    drawManIsKomnataPraviy(xHAND,yHAND);
    drawDialog(491,180,"? ????? ?????...");
    txSleep(1000);
    drawDialog(491,180,"? ?????");
    txSleep(1000);
    drawDialog(491,180,"?? ??? ?????????");
    txSleep(1000);
    drawDialog(491,180,"?? ???,???????");
    txSleep(1000);
    drawDialog(491,180,"?????????");
    txSleep(1000);
    drawDialog(491,180,"?????");
    txSleep(1000);
    drawDialog(491,180,"????? ? ??? ??");
    txSleep(1000);
    drawRoom();
    txSetColor(TX_BLACK,5);
    txSetFillColor(TX_BLACK);
    drawLopata();
    drawManIsKomnatLeviy();
    drawManIsKomnataPraviy(xHAND,yHAND);
    drawDialog(116,170,"??? ??");
    txSleep(1000);
    drawRoom();
    txSetColor(TX_BLACK,5);
    txSetFillColor(TX_BLACK);
    drawLopata();
    drawManIsKomnatLeviy();
    drawManIsKomnataPraviy(xHAND,yHAND);
    drawDialog(491,180,"? ???? ?? ?????");
    txSleep(1000);
    drawDialog(491,180,"????? ??????");
    txSleep(1000);
    drawDialog(491,180,"????? ?????????");
    txSleep(1000);
    drawRoom();
    txSetColor(TX_BLACK,5);
    txSetFillColor(TX_BLACK);
    drawLopata();
    drawManIsKomnatLeviy();
    drawManIsKomnataPraviy(xHAND,yHAND);
    drawDialog(116,170,"??? ?????");
    txSleep(1000);

    yText=1500;
    while(yText > -50)
    {
        txBegin();
        txSetColor(TX_WHITE);
        txSetFillColor(TX_BLACK);
        txRectangle(0,0,800,600);
        txSelectFont("Times",100);
        txDrawText(0,yText-600,800,yText,
                        "????? ???\n"
                        "\n"
                        "???????????");
        yText=yText-10;
        txSleep(50);
        txEnd();
    }






    return 0;
    }
