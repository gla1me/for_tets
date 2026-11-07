#include <stdio.h>
#include "module1.h"
#include "module2.h"

int lab_selection_menu()
{
	int choice;
	do {
        printf("\n=== ГЛАВНОЕ МЕНЮ ===\n");
        printf("1. Лабораторная работа №2\n");
        printf("2. Лабораторная работа №3\n");
        printf("3. Лабораторная работа №4\n");
        printf("0. Выход\n");
        scanf_s("%d", &choice);
	
        switch (choice) {
        case 1:
            show_lab2_menu();
            break;
        case 2:
            show_lab3_menu();
            break;
        case 3:
            show_lab4_menu();
            break;
        case 0:
            break;
        default:
            printf("wrong input!\n");
        }
    } while (choice != 0);

    return 0;
}