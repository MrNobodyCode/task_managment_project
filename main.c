#include"stdio.h"

 struct task                        // struct has all task info 
{
    int task_id;
    char task_title[50];
    char task_description[500];
    char task_statut[20];
    int task_deadline;
};
 struct task array_task[100]; /// array of the baove struct

 struct user // struct has al the user info 
{
    int user_id;
    char user_name[30];
};
struct user array_user[100]; // array of above struct 

struct management_user_task // struct for management the ralation betweent user id and tasks id
{
    int Mang_user_id;
    int mang_task_id;
};
struct management_user_task mang_array[1000];


int main()
{
    int track_task_count = -1; // init for no task 
    int Unique_taskId = 99;
    int user_needs;

    do
    {
     printf("Add new task");
     scanf("%d", &user_needs);
     switch (user_needs)
     {
     case 1:
        track_task_count++;
        Unique_taskId++;
        array_task[track_task_count].task_id = Unique_taskId;
        printf("\n donner le name du task");
        scanf("%49[^\n]", &array_task[track_task_count].task_title);
        getchar();

        printf("\n donner la description du task");
        scanf("%499[^\n]", &array_task[track_task_count].task_description);


        break;
     
     default:
        break;
     }

    } while (user_needs != 0);
    
}
