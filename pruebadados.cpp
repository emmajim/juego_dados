///Ejercicio:
///Autor: EJL
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>
# include"rlutil.h"
using namespace std;

void drawOne(){

        rlutil::locate(2,4);
        cout<< " ┌─────────┐";
        rlutil::locate(2,5);
        cout<< " │         │";
        rlutil::locate(2,6);
        cout<< " │    ▄    │";
        rlutil::locate(2,7);
        cout<< " │         │";
        rlutil::locate(2,8);
        cout<< " └─────────┘ ";
}

void drawTwo(){

        rlutil::locate(2,4);
        cout<< " ┌─────────┐";
        rlutil::locate(2,5);
        cout<< " │         │";
        rlutil::locate(2,6);
        cout<< " │  ▄   ▄  │";
        rlutil::locate(2,7);
        cout<< " │         │";
        rlutil::locate(2,8);
        cout<< " └─────────┘ ";
}

void drawThree(){

        rlutil::locate(2,4);
        cout<< " ┌─────────┐";
        rlutil::locate(2,5);
        cout<< " │       ■ │";
        rlutil::locate(2,6);
        cout<< " │    ■    │";
        rlutil::locate(2,7);
        cout<< " │ ■       │";
        rlutil::locate(2,8);
        cout<< " └─────────┘ ";
}

void drawFour(){

        rlutil::locate(2,4);
        cout<< " ┌─────────┐";
        rlutil::locate(2,5);
        cout<< " │ ■     ■ │";
        rlutil::locate(2,6);
        cout<< " │         │";
        rlutil::locate(2,7);
        cout<< " │ ■     ■ │";
        rlutil::locate(2,8);
        cout<< " └─────────┘ ";
}

void drawFive(){

        rlutil::locate(2,4);
        cout<< " ┌─────────┐";
        rlutil::locate(2,5);
        cout<< " │ ■     ■ │";
        rlutil::locate(2,6);
        cout<< " │    ■    │";
        rlutil::locate(2,7);
        cout<< " │ ■     ■ │";
        rlutil::locate(2,8);
        cout<< " └─────────┘ ";
}

void drawSix(){

        rlutil::locate(2,4);
        cout<< " ┌─────────┐";
        rlutil::locate(2,5);
        cout<< " │ ■     ■ │";
        rlutil::locate(2,6);
        cout<< " │ ■     ■ │";
        rlutil::locate(2,7);
        cout<< " │ ■     ■ │";
        rlutil::locate(2,8);
        cout<< " └─────────┘ ";
}

int main(){

      rlutil::cls();

    rlutil::setColor(rlutil::WHITE);
    drawOne();
    drawTwo();
    drawThree();
    drawFour();
    drawFive();
    drawSix();




     cout<<endl;
     return 0;
}
