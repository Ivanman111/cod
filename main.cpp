#include "TXLib.h"

int main()
    {
    txCreateWindow (800, 600);

     txCircle (300, 300, 100);

char message[100] = "Maybe...";
          sprintf (message, "", random (100), 100);
          txMessageBox (message, "Lottery");

    return 0;
    }

