#include <stdio.h>
#include <string.h>

/*
ARRAY DE STRUCTS - Como criar uma array de structs


*/

typedef struct
{
    char name[15];
    int age;
    float grade; // 0-10

} Student;


int main()
{

    Student student1 = {"John", 18, 3.6};
    Student student2 = {"Jessica", 19, 5.8};
    Student student3 = {"Albert", 17, 10.0};

    // criação de array de tipo struct
    Student students[] = {student1, student2, student3};

    // acessar atributos de cada struct da array
    int len_of_Array = sizeof(students) / sizeof(students[0]);
    
    for (int i = 0; i < len_of_Array; i++)
    {
        printf("NAME: %s\nAGE: %d \nGRADE: %.1f\n\n", students[i].name, students[i]. age, students[i].grade);
    }
    return 0;
}