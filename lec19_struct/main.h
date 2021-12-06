typedef struct Children
{
    char son_name[10] ;
    char daughter_name[10] ;
}childs;
typedef struct Lover
{
    char wife_name[10] ;
    char huspand_name[10] ;
    childs kids ;

}love_love;



typedef struct Family
{
    char fathe_name[10] ;
    char mother_name[10];
    char brother_name[10];
    char sister_name[10] ;
}family_info;

typedef struct Person
{
    family_info family ;
    love_love my_love  ;
    char address[30]   ;
    char first_name[10];
    char last_name[10] ;
    char status [5]     ;
     char gender [5] ;
     struct Persons *relation ;

    float degree  ;
    int id;

}persons;
void get_pperson_data( struct Person *person) ;

 void print_person_data( struct Person person1);
struct  Person get_person_data( struct Person person);
void print_pperson_data( struct Person *person1);
void enter_str_in_array( char *first, char *second) ;

