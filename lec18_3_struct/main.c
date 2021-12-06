#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct Familly_info
{

    char f_name[25] ;
    char m_name[25];

};
struct person
{
    // مش اانشياليزد ومش استاتيك العناصر

    int id ;
    char name[25] ;
    char address[25];
    float degree ;
    struct Familly_info family ;


};
struct person ahmed ;
void string_copy (char * destinattion , char * source) ;

int main()
{
    printf("%i \n", sizeof(ahmed));
    ahmed.id = 11 ;
    string_copy(ahmed.name , "ahmed essa") ;
    string_copy(ahmed.address , "Ismailia") ;
    ahmed.degree = 3.5 ;
    string_copy(ahmed.family.f_name , "abdallah");
    string_copy(ahmed.family.m_name , " Aml Aml") ;



    printf(" %i \n %s \n%s \n degree is :%.2f\n %s \n %s \n " , ahmed.id , ahmed.name , ahmed.address ,
                                                 ahmed.degree,ahmed.family.f_name,ahmed.family.m_name) ;



    return 0;
}

void string_copy (char * destinattion , char * source)
{

    while (*source != NULL)
      {

    *destinattion = *source ;
    destinattion++;
    source++;

      }
}
