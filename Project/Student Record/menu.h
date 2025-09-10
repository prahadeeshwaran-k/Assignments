#ifndef MENU_H
#define MENU_H

char menu1[][50] = {
        "1. a/A : Add New Record",
        "2. d/D : Delete Record",
        "3. s/S : Show the List",
        "4. m/M : Modify a Records",
        "5. v/V : Save",
        "6. e/E : Exit",
        "7. t/T : Sort The List",
        "8. l/L : Delete all the records",
        "9. r/R : Reverse The List"
    };
char menu2[][50] = {
        "1. r/R : Enter roll to delete",
        "2. n/N : Enter name to delete"
    };
char menu3[][50] = {
        "Enter which record to search for modification",
        "1. r/R : TO Search a RollNo",
        "2. n/N : To Search a Name",
        "3. p/P : Percentage based"
    };
char menu4[][50] = {
        "Enter",
        "1. s/S : Save and Exit",
        "2. e/E : Exit Without Save"
    };
char menu5[][50] = {
        "Enter",
        "1. n/N : Sort With Name",
        "2. p/P : Sort With Percentage",
	"3. r/R : Sort With Roll"
    };

void printMenu(char menu[][50], int size, char*title);

int mainmenu = sizeof(menu1) / sizeof(menu1[0]);
int menu2size = sizeof(menu2) / sizeof(menu2[0]);
int menu3size = sizeof(menu3) / sizeof(menu3[0]);
int menu4size = sizeof(menu4) / sizeof(menu4[0]);
int menu5size = sizeof(menu5) / sizeof(menu5[0]);

#endif
