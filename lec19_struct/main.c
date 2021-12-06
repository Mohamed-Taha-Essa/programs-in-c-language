#include <stdio.h>
#include <stdlib.h>
#include "main.h"


persons taha , aml , bosy , essa;
persons *love ;
persons arr_person [3] ;
persons *arr_pperson[3];


int main()
{
    arr_person[0] = taha;
    arr_person[1] = aml ;
    arr_person[2] = bosy ;
    arr_pperson[0] = &taha ;
    arr_pperson[1] = &aml ;
    arr_pperson[2] = &bosy ;
    //printf("%s" , *arr_person);


    //    enter_str_in_array(ahmed.first_name , "ahmed");
    //
    //    enter_str_in_array(ahmed.last_name , "essa");
    //    enter_str_in_array(ahmed.address , "Ismaila");
    //    ahmed.id = 23 ;
    //    ahmed.degree = 3.58 ;
    //    printf("0x%x " , ahmed) ;
   get_pperson_data(&taha ) ;
    get_pperson_data(&aml ) ;
    get_pperson_data(&bosy ) ;
    love =
    &taha ;
    print_pperson_data(love);

    return 0;
}
// enter info of person by pointer
void get_pperson_data( struct Person *person)

{
    //take string and put it in array of char
    //printf("0x%x " , person) ;
   // printf("the name of person is %s"  ,  );
    printf("enter the first name is    : " );
    fflush(stdin);
    gets(person->first_name);
    printf("the last name is           : " );
        fflush(stdin);
    gets(person->last_name);
    printf("enter the address is       :" );
        fflush(stdin);
    gets(person->address);
    printf("enter the id's person is   :");
        scanf("%d" ,&person->id);

    printf("enter the degree of person :" );
        scanf("%f" ,&person->degree);
        fflush(stdin);
    printf("enter your father name     :");
    gets(person->family.fathe_name);
     fflush(stdin) ;
     printf("enter your mother _name   :");
     gets(person->family.mother_name);
     fflush(stdin) ;
     printf("enter your brother name   : ");
     gets(person->family.brother_name);
     fflush(stdin);
     printf("enter your sister name    :") ;
     gets(person->family.sister_name);

     printf("enter your status 'y' to maried or 's' to single :");
     scanf("%s" ,person->status) ;
     if(*person->status == 'y' || *person->status == 'Y')
     {
         printf("  enter your gender  'm'= male , 'f' = female   :");
         scanf("%s" , person->gender) ;
         if(*person->gender == 'm' || *person->gender == 'M')
             {
                 fflush(stdin);
             printf(" enter your wife's name  :") ;
             gets(person->my_love.wife_name);
             }
             else
             {
                 fflush(stdin);
                 printf("enter your husban name    :") ;
                 gets(person->my_love.huspand_name);
             }
             fflush(stdin);
         printf("enter your daughter name           :") ;
         gets(person->my_love.kids.daughter_name);
         fflush(stdin);
         printf("enter your son name                :") ;
         gets(person->my_love.kids.son_name);



     }


}
void enter_str_in_array( char *first, char *second)
{
    //take data from user and put it in struct person

    while (*second != '\0')
    {
        *first = *second ;
        first ++ ;
        second ++ ;
    }
}
struct Person get_person_data( struct Person person)
{
    //take addres of person and print info in screen
    //printf("0x%x " , person) ;
    printf("enter the first name is    : " );
    scanf("%s" ,person.first_name);
    printf("the last name is     : " );
        scanf("%s" ,person.last_name);

    printf("enter the address is       :" );
        scanf("%s" ,person.address);

    printf("enter the id's person is   :");
        scanf("%d" ,&person.id);

    printf("enter the degree of person :" );
        scanf("%f" ,&person.degree);

        return person ;

}
void print_pperson_data( struct Person *person)
{
   printf("==============================================================\n");

    printf("the first name is    : %s\n" ,person->first_name);
    printf("the last name is     : %s\n" ,person->last_name);
    printf("the address is       :%s\n" ,person->address);
    printf("the id's person is   :%i\n" ,person->id);
    printf("the degree of person :%.2f\n" ,person->degree);

    printf("##########   family information  ###############\n" );
    printf("the father name is   : %s\n" ,person->family.fathe_name);
    printf("the mother name is   : %s\n" ,person->family.mother_name);
    printf("the brothe name is   : %s\n" ,person->family.brother_name);
    printf("the sister name is   : %s\n" ,person->family.sister_name);
     if(*person->status == 'y' || *person->status == 'Y')
     {

         if(*person->gender == 'm' || *person->gender == 'M')
             {

                printf("your wife's name is   : %s" , person->my_love.wife_name) ;
             }
             else
             {

                printf("your husband name is  :%s" , person->my_love.huspand_name) ;

             }

         printf("your daughter name is :%s" , person->my_love.kids.daughter_name) ;

         printf("your son name is      :%S" , person->my_love.kids.son_name) ;
         gets(person->my_love.kids.son_name);



     }


}
 //take struct and print the data's struct

void print_person_data( struct Person person1)
{

    printf("the first name is    : %s\n" ,person1.first_name);
    printf("the last name is     : %s\n" ,person1.last_name);
    printf("the address is       :%s\n" ,person1.address);
    printf("the id's person is   :%i\n" ,person1.id);
    printf("the degree of person :%.2f\n" ,person1.degree);
}
