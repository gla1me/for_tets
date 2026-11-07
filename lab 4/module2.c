#include <stdio.h>
#include "module2.h"
#include "tasks_lab2.h"
#include "tasks_lab3.h"
#include "tasks_lab4_1.h"

int show_lab2_menu()
{
	int choice;
	do {
        printf("\n--- Меню Лабораторной №2 ---\n");
        printf("1. Задание 1\n");
        printf("2. Задание 2\n");
        printf("3. Задание 3\n");
        printf("4. Задание 4\n");
        printf("5. Задание 5\n");
        printf("6. Задание 6\n");
        printf("7. Задание 7\n");
        printf("8. Задание 8\n");
        printf("9. Задание 9\n");
        printf("10. Задание 10\n");
        printf("11.Задание 11\n");
        printf("12. Задание 12\n");
        printf("13. Задание 13\n");
        printf("14. Задание 14\n");
        printf("0. Назад\n");
        scanf_s("%d", &choice);
    
        switch (choice) {
        case 1: z2_1(); break;
        case 2: z2_2(); break;
        case 3: z2_3(); break;
        case 4: z2_4(); break;
        case 5: z2_5(); break;
        case 6: z2_6(); break;
        case 7: z2_7(); break;
        case 8: z2_8(); break;
        case 9: z2_9(); break;
        case 10: z2_10(); break;
        case 11: z2_11(); break;
        case 12: z2_12(); break;
        case 13: z2_13(); break;
        case 14: z2_14(); break;
        case 0: printf("Возврат в главное меню...\n"); break;
        default: printf("wrong input!\n");
        }
    } while (choice != 0);
    
    return 0;
}

int show_lab3_menu()
{
    int choice;
    do {
        printf("\n--- Меню Лабораторной №3 ---\n");
        printf("1. Задание 1\n");
        printf("2. Задание 2\n");
        printf("3. Задание 3\n");
        printf("4. Задание 4\n");
        printf("5. Задание 5\n");
        printf("6. Задание 6\n");
        printf("7. Задание 7\n");
        printf("8. Задание 8\n");
        printf("9. Задание 9\n");
        printf("10. Задание 10\n");
        printf("11.Задание 11\n");
        printf("12. Задание 12\n");
        printf("0. Назад\n");
        scanf_s("%d", &choice);

        switch (choice) {
        case 1: z3_1_1(); z3_1_2(); z3_1_3(); break;
        case 2: z3_2(); break;
        case 3: z3_3(); break;
        case 4: z3_4(); break;
        case 5: z3_5(); break;
        case 6: z3_6(); break;
        case 7: z3_7(); break;
        case 8: z3_8(); break;
        case 9: z3_9(); break;
        case 10: z3_10(); break;
        case 11: z3_11(); break;
        case 12: z3_12(); break;
        case 0: printf("Возврат в главное меню...\n"); break;
        default: printf("wrong inpuit!\n");
        }
    } while (choice != 0);
    
    return 0;
}


int show_lab4_menu()
{
    int choice;
    do {
        printf("\n--- Меню Лабораторной №4 ---\n");
        printf("1. Задание 1\n");
        printf("2. Задание 2\n");
        printf("3. Задание 3\n");
        printf("4. Задание 4\n");
        printf("5. Задание 5\n");
        printf("6. Задание 6\n");
        printf("0. Назад\n");
        scanf_s("%d", &choice);

        switch (choice) {
        case 1: z4_1(); break;
        case 2: z4_2(); break;
        case 3: z4_3(); break;
        case 4: z4_4(); break;
        case 5: z4_5(); break;
        case 6: z4_6(); break;
        case 0: printf("Возврат в главное меню...\n"); break;
        default: printf("wrong input!\n");
        }
    } while (choice != 0);

    return 0;
}