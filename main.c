#include <stdio.h>

#include<conio.h>

#include<math.h>

void newstudent();
void presentstudent();
void searchstudent();
void tutionstudent();
void addministratorsearchstudent();
void deletestudents();
void addtution();
void administratorsearchteacher();
void newteacher();
void presentteacher();
void searchteacher();
void salaryteacher();
void addsalary();
void deleteteachers();
void take_attendance_class6();
void see_attendance_class6();

int i, j, n;
struct school {
  struct teacher {
    int id;
    char name[50];
    char add[50];
    int salary;
    int password;
  }
  tea[50];

  struct student {
    int id;
    char name[50];
    char add[50];
    int tution;
    int password;
  }
  stu[50];

  struct attendance {
    int class6;
    int class7;
    int class8;
    int class9;
    int class10;
  }
  att[50];

  struct day {
    int dayofmonth
  }
  day[31];

}
sch;

float r[10];

int choice, ch;

int main() {

  do {
    system("cls");

    printf("\n\n \t    \t    \t STUDENT MANAGEMENT SYSTEM");

    printf("\n\n\n \t    \t    \t \t  Main Menu");

    printf("");

    printf("\n\n\n\n \t    \t    \t  1.Students Information  \n\n \n\n \t    \t    \t  2.Teachers Information    \n \n \n\n \t    \t    \t  3.Account Information \n\n    \n \n \t    \t    \t  4.Administrator    \n \n \n\n \t    \t    \t  5.Take attendance of students    \n \n \n\n \t    \t    \t  6.Exit \n\n\n");
    scanf("%d", & choice);
    if (choice == 1) /* 1.Students Information */ {
      do {
        system("cls");
        printf("\n\n\n\n \t    \t    \t  Student Information Menu \n\n\n 1.Create an account for student \n\n\n 2.Already have an account ? \n\n press 2 for Log In \n\n\n 3.Exit \n\n");
        scanf("%d", & ch);

        if (ch == 1)

        {
          newstudent();
        } else if (ch == 2)

        {
          searchstudent();
        }
      }
      while ((ch == 1) || (ch == 2));
    } else if (choice == 2) /* Teacher Information */ {
      do {
        system("cls");
        printf("\n\n\n\n \t    \t    \t  Teacher Information Menu \n\n\n 1.Create an account for teacher \n\n\n 2.Already have an account ? \n\n press 2 for Log In \n\n\n 3.Exit \n\n");
        scanf("%d", & ch);
        if (ch == 1) {
          newteacher();
        } else if (ch == 2)

        {
          searchteacher();
        }
      }
      while ((ch == 1) || (ch == 2));
    } else if (choice == 3) /* Account Information */ {
      do {
        system("cls");
        printf("\n\n\n\n \t    \t    \t  Account Information Menu \n\n\n 1.Add tution fee of students \n\n 2.Give salary of teachers \n\n 3.Total tution fee of students \n\n 4.Total salary of Teachers \n\n 5.Remains money \n\n 6.Exit \n\n");
        scanf("%d", & ch);

        if (ch == 1)

        {
          addtution();
        } else if (ch == 2)

        {
          addsalary();
        } else if (ch == 3)

        {
          tutionstudent();
        } else if (ch == 4)

        {
          salaryteacher();
        } else if (ch == 5)

        {
          float dif;
          dif = (float) r[1] - r[2];
          printf("\n Remains money : %f \n", dif);
          printf("\n\n Press ENTER for back to Account Information Menu \n");
          getch();
        }
      }
      while ((ch == 1) || (ch == 2) || (ch == 3) || (ch == 4) || (ch == 5));
    } else if (choice == 4) /* 4.Administrator Information */ {
      do {
        system("cls");
        printf("\n\n\n\n \t    \t    \t  Administrator Information Menu \n\n\n 1.Students record \n\n 2.Teachers record \n\n 3.Delete students \n\n 4.Delete teachers \n\n 5.Total tution fee of student \n\n 6.Total salary of teacher \n\n 7.Exit \n\n");
        scanf("%d", & ch);
        if (ch == 1)

        {
          addministratorsearchstudent();
        } else if (ch == 2)

        {
          administratorsearchteacher();
        } else if (ch == 3)

        {
          deletestudents();
        } else if (ch == 4)

        {
          deleteteachers();
        } else if (ch == 5)

        {
          tutionstudent();
        } else if (ch == 6)

        {
          salaryteacher();

        }
      }
      while ((ch == 1) || (ch == 2) || (ch == 3) || (ch == 4) || (ch == 5) || (ch == 6));
    } else if (choice == 5) /* 1.Students Information */ {
      do {
        system("cls");
        printf("\n\n\n\n \t    \t    \t  Attendance Information Menu \n\n\n 1.Take attendance \n\n 2.See Students attendance records \n\n 3.Exit \n\n");
        scanf("%d", & ch);

        if (ch == 1)

        {
          take_attendance_class6();
        } else if (ch == 2)

        {
          see_attendance_class6();
        }
      }
      while ((ch == 1) || (ch == 2));
    } else if (choice == 6) /* 6.Exit */

    {
      printf("Thank you");
    }

  }

  while ((choice == 1) || (choice == 2) || (choice == 3) || (choice == 4) || (choice == 5) || (choice == 6)); /* Main menu loop */

  return 0;
}

/* Start Student Information */

void newstudent() {
  system("cls");

  for (i = 0; i < 50; i++) {
    if (sch.stu[i].id == 0) {

      printf("\n\n Enter the id of %d no student:", i + 1);
      scanf("%d", & sch.stu[i].id);

      printf("\n\n Enter your password :");
      scanf("%d", & sch.stu[i].password);

      printf("\n\n Name :");
      scanf("%s", & sch.stu[i].name);

      printf("\n\n Address :");
      scanf("%s", & sch.stu[i].add);

      printf("\n\n Do you want to create more account? \n\n Press 1 for YES \n\n Press 2 for No \n\n");
      scanf("%d", & choice);

      if (choice == 1)

      {
        continue;
      } else if (choice == 2) {
        break;
      }
    }

  }

}

/*  void presentstudent()
  {

        for(i=0;i<2;i++)
     {

      printf("\n\n The id of %d no student is: %d",i+1,sch.stu[i].id);

     printf("\n\n Name : %s",sch.stu[i].name);

     printf("\n\n Address : %s",sch.stu[i].add);

     printf("\n\n Tution fee : %d\n",sch.stu[i].tution);

     }

     printf("\n\n Press ENTER for back to Student Information Menu \n");

      getch();

  }

  */

void searchstudent() {
  system("cls");
  int search, password;
  printf("\n\n Enter the ID of student which you want to search :");
  scanf("%d", & search);

  printf("\n\n Enter your password :");
  scanf("%d", & password);
  for (i = 0; i < 50; i++) {
    if ((search == sch.stu[i].id) && (password == sch.stu[i].password)) {
      printf("\n\n The id of %d no student is: %d", i + 1, sch.stu[i].id);

      printf("\n\n Name : %s", sch.stu[i].name);

      printf("\n\n Address : %s", sch.stu[i].add);

      printf("\n\n Tution fee : %d\n", sch.stu[i].tution);

      if ((search == sch.stu[i].id) && (password == sch.stu[i].password)) {
        break;
      }
    }
  }
  if ((search != sch.stu[i].id) && (password != sch.stu[i].password))
    printf("\n\n Sorry,your password is incorrect or in student database there is no information \n about %d no ID\n\n", search);

  printf("\n\n Press ENTER for Log Out \n");

  getch();

}

/* End Student Information */

/* Start Teacher Information */

void newteacher() {
  system("cls");
  for (i = 0; i < 50; i++) {
    if (sch.tea[i].id == 0) {
      printf("\n\n Enter the id of %d no teacher:", i + 1);
      scanf("%d", & sch.tea[i].id);

      printf("\n\n Enter your password :");
      scanf("%d", & sch.tea[i].password);

      printf("\n\n Name :");
      scanf("%s", & sch.tea[i].name);

      printf("\n\n Address :");
      scanf("%s", & sch.tea[i].add);

      printf("\n\n Do you want to create more account? \n\n Press 1 for YES \n\n Press 2 for No \n\n");
      scanf("%d", & choice);

      if (choice == 1)

      {
        continue;
      } else if (choice == 2) {
        break;
      }

    }

  }

  printf("\n\n Press ENTER for back to Teacher Information Menu \n");

  getch();
}

/*  void presentteacher()
  {
      for(i=0;i<2;i++)
     {

     printf("\n\n The id of %d no teacher is: %d",i+1,sch.tea[i].id);

     printf("\n\n Name : %s",sch.tea[i].name);

     printf("\n\n Address : %s",sch.tea[i].add);

     printf("\n\n Salary : %d\n",sch.tea[i].salary);

     }

     printf("\n\n Press ENTER for back to Teacher Information Menu \n");

      getch();

  }

  */

void searchteacher() {
  system("cls");
  int search, password;
  printf("\n\n Enter the ID of teacher which you want to search :");
  scanf("%d", & search);
  printf("\n\n Enter your password :");
  scanf("%d", & password);
  for (i = 0; i < 50; i++) {
    if ((search == sch.tea[i].id) && (password == sch.tea[i].password)) {
      printf("\n\n The id of %d no teacher is: %d", i + 1, sch.tea[i].id);

      printf("\n\n Name : %s", sch.tea[i].name);

      printf("\n\n Address : %s", sch.tea[i].add);

      printf("\n\n Salary : %d\n", sch.tea[i].salary);

      break;
    }
  }
  if ((search != sch.tea[i].id) && (password != sch.tea[i].password)) {
    printf("\n\n Sorry,your password is incorrect or in teachers database there is no information \n about %d no ID\n\n", search);
  }
  printf("\n\n Press ENTER for Log Out \n");

  getch();
}

/* End Teacher Information */

/* Start Account Information */

void addtution() {
  system("cls");
  int search;
  printf("\n\n Enter student ID which you want to add tution fee :");
  scanf("%d", & search);
  for (i = 0; i < 50; i++) {
    if (search == sch.stu[i].id) {

      printf("\n\n Tution fee :");
      scanf("%d", & sch.stu[i].tution);
      break;
    }
  }
  if (search != sch.stu[i].id) {
    printf("\n\n Sorry,in students database there is no information about %d no ID", search);
  }
  printf("\n\n Press ENTER for back to Account Information Menu \n");
  getch();
}

void addsalary() {
  system("cls");
  int search;
  printf("\n\n Enter teacher ID which you want to add salary :");
  scanf("%d", & search);
  for (i = 0; i < 50; i++) {
    if (search == sch.tea[i].id) {

      printf("\n\n Salary :");
      scanf("%d", & sch.tea[i].salary);
      break;
    }

  }
  if (search != sch.tea[i].id) {
    printf("\n\n Sorry,in teachers database there is no information about %d no ID\n\n", search);
  }
  printf("\n\n Press ENTER for back to Account Information Menu \n");
  getch();
}

void tutionstudent() {
  system("cls");
  float tutionfee = 0;
  for (i = 0; i < 50; i++) {
    tutionfee = tutionfee + sch.stu[i].tution;
  }
  printf("\n Total tution fee of students : %f \n", tutionfee);
  r[1] = tutionfee;

  printf("\n\n Press ENTER for back to Account Information Menu \n");

  getch();

}

void salaryteacher() {
  system("cls");
  float salary = 0;
  for (i = 0; i < 50; i++) {
    salary = salary + sch.tea[i].salary;
  }
  printf("\n Total salary of teachers : %f \n", salary);

  r[2] = salary;

  printf("\n\n Press ENTER for back to Account Information Menu \n");

  getch();
}

/* End Account Information */

/* Start Administration Information */

void addministratorsearchstudent() {
  system("cls");
  int search;
  printf("\n\n Enter the ID of student which you want to search :");
  scanf("%d", & search);

  for (i = 0; i < 50; i++) {
    if ((search == sch.stu[i].id)) {
      printf("\n\n The id of %d no student is: %d", i + 1, sch.stu[i].id);

      printf("\n\n Name : %s", sch.stu[i].name);

      printf("\n\n Address : %s", sch.stu[i].add);

      printf("\n\n Tution fee : %d\n", sch.stu[i].tution);

      break;
    }
  }
  if ((search != sch.stu[i].id)) {
    printf("\n\n Sorry,in student database there is no information about %d no ID\n\n", search);
  }
  printf("\n\n Press ENTER for back to Administrator Information Menu \n");

  getch();
}

void administratorsearchteacher() {
  system("cls");
  int search;
  printf("\n\n Enter the ID of teacher which you want to search :");
  scanf("%d", & search);

  for (i = 0; i < 50; i++) {
    if ((search == sch.tea[i].id)) {
      printf("\n\n The id of %d no teacher is: %d", i + 1, sch.tea[i].id);

      printf("\n\n Name : %s", sch.tea[i].name);

      printf("\n\n Address : %s", sch.tea[i].add);

      printf("\n\n Salary : %d\n", sch.tea[i].salary);

      break;
    }

  }
  if ((search != sch.tea[i].id)) {
    printf("\n\n Sorry,in teachers database there is no information about %d no ID\n\n", search);
  }

  printf("\n\n Press ENTER for back to Administrator Information Menu \n");

  getch();
}

void deletestudents() {
  system("cls");
  int delete;
  printf("\n\n Enter position of students array which you want to delete : \n\n ");
  scanf("%d", & delete);
  for (i = delete - 1; i < 50; i++) {
    sch.stu[i].id = sch.stu[i + 1].id;
  }
  printf("\n\n Delete successfully done \n\n");

  printf("\n\n Press ENTER for back to Administrator Information Menu \n");

  getch();
}
void deleteteachers() {
  system("cls");
  int delete;
  printf("\n\n Enter position of teachers array which you want to delete : \n\n ");
  scanf("%d", & delete);
  for (i = delete - 1; i < 50; i++) {
    sch.tea[i].id = sch.tea[i + 1].id;
  }
  printf("\n\n Delete successfully done \n\n");

  printf("\n\n Press ENTER for back to Administrator Information Menu \n");

  getch();
}

/* End Administration Information */

void take_attendance_class6() {
  system("cls");
  printf("\n\n Date \n\n Day no of this month : ");
  scanf("%d", & sch.day[i].dayofmonth);

  for (j = (sch.day[i].dayofmonth); j <= 31; j++) {
    for (i = 0; i < (sch.stu[i].id); i++) {
      printf("\n\n ID no : %d\n\n", sch.stu[i].id);

      printf("\n\n 1.Present \n\n 0.Absent \n\n");
      scanf("%d", & sch.att[i].class6);
    }
    break;
  }
  printf("\n\n In this class there have %d students,you can not take attendance more than %d", sch.stu[i].id, sch.stu[i].id);

  printf("\n\n Press ENTER for back to Class Menu \n");

  getch();
}

void see_attendance_class6() {
  system("cls");
  printf("\n\n Date \n\n Enter day no of this month which records you want to see : ");
  scanf("%d", & sch.day[i].dayofmonth);

  printf("\n\n 1.Present \n\n 0.Absent \n\n");

  for (j = (sch.day[i].dayofmonth); j <= 31; j++) {
    for (i = 0; i < (sch.stu[i].id); i++) {
      printf("\n\n ID no : %d\n\n", sch.stu[i].id);

      printf("\n\n %d \n\n", sch.att[i].class6);
    }
    break;
  }
  printf("\n\n In this class there have %d students,you can not take attendance more than %d", sch.stu[i].id, sch.stu[i].id);

  printf("\n\n Press ENTER for back to Class Menu \n");

  getch();
}
