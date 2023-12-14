#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
#include <time.h>
#include <io.h>
#include <ctype.h>
#define OTP_LENGTH 5

// char enrollment[30];
char subject[30];
// Function prototypes
void student();
void Teacher();
void registre();
int loading();
int loading2();
void Teacherlogin();
void Add_Course_request();
void coursedashbrd();
void assincours();
void coursinfo();
void checknoification();
void Studentlogin();
void Studentportal();
void login();
void teacherportal();
int teacherlecture();
int subjectfpfn();
int teacher_course();
void teachersubject();
void remove_subject();
void removeerror();
void teacherquiz();
void Studentlecture();
// void quistionmaker();
void AttedQuiz();
void quizsystem();
void countdltr();
void student_srch_course();
void mainmenu();
void fyubndltr();
void random();
void removequizeac();
struct registre_login
{
    char User_name[30];
    char User_pass[30];
    char t_User_iniatial[30];
    char store_tnam[30];
    char stor_teacher_init[30];
    char storestdnm[30];
    char sys[30];
    char enrollment[30];
    char student_email[100];
    char student_username[100];
    int score;
    int pps;
} s1, s2, s3, s4, s5, s6;
struct teacher
{

    char subject[30];
    char lecture_no[30];
    char teacher_name[30];
    char enrolment_key[30];
    char stor_enrolmentkey[30];
    char stor_teachernm[30];
    char stor_usrnm[30];
    char inusername[30];
    char qek[30];
    char subject_enroll[30];
    char subject_nam[30];
    char subject_initial[30];
    char efstor_usrnm[30];
    char initialquize[30];
    char alphabet[30];
    char quize[30];
    char random[30];
    char lt1[30];
    char sgtore1[30];
    char stinto[30];
    char subnm[30];
    char qti[30];
    char qustion[100];
    int i;

} t1, t2, t3;

int loading()

{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int i;
    char a[8] = "Loading";
    printf("\n\n\n\n\n\n\t\t\t\t");

    for (i = 0; i < 20; i++)
    {
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        printf("\xB2");
        Sleep(10);
    }
    for (i = 0; i < 8; i++)
    {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf(" ");
        printf("%c", a[i]);
        Sleep(60);
    }
    for (i = 0; i < 30; i++)
    {
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_GREEN);
        printf("\xB2");
        Sleep(10);
    }

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
int loading2()
{

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int i;
    char a[8] = "Welcome";
    printf("\n\n\n\n\n\n\n\n");

    for (i = 0; i < 60; i++)
    {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("\xB2");
        Sleep(10);
    }
    for (i = 0; i < 8; i++)
    {
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        printf(" ");
        printf("%c", a[i]);
        Sleep(60);
    }
    for (i = 0; i < 40; i++)
    {
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
        printf("\xB2");
        Sleep(10);
    }

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void mainmenu()
{
    system("cls");
    loading();
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("\n\n\t\t\t\t_________________E-Learning Platform________________\n");
    printf("\n\n\n\n\n\t\t\t\t\t\t1.Register \n\n\t\t\t\t\t\t2.Login");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    char sw[3];
    printf("\n\n\t\t\t\t\t\t\t\t Choos anyone :  ");
    scanf("%s", sw);
    if (strcmp(sw, "1") == 0)
    {
        registre();
    }
    else if (strcmp(sw, "2") == 0)
    {
        login();
    }
    else
    {
        system("cls");
        printf("Invalid Input");
        getch();
        mainmenu();
    }
}
void registre()
{
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int k;
    char c[8] = "Sign Up ";
    printf("\n\n\t\t\t\t");
    for (k = 0; k < 20; k++)
    {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("$");
        Sleep(10);
    }
    for (k = 0; k < 8; k++)
    {
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        printf(" ");
        printf("%c", c[k]);
        Sleep(60);
    }
    for (k = 0; k < 20; k++)
    {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("$");
        Sleep(10);
    }
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    printf("\n\n\n\n\t\t\t\t\t\t1.Student \n\n\t\t\t\t\t\t2.Teacher");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    char ch[3];
    printf("\n\n\t\t\t\t\t\t\tChoos anyone :  ");
    scanf("%s", ch);
    if (strcmp(ch, "1") == 0)
    {
        student();
    }
    else if (strcmp(ch, "2") == 0)
    {
        Teacher();
    }
    else
    {
        printf("Invalid Input");
        getch();
        mainmenu();
    }
}
void login()
{
    system("cls");
    loading();
    system("cls");
    printf("\n\n\t\t___________________Log In___________________\n");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("\n\n\t\t\t\t\t\t1.Student \n\n\t\t\t\t\t\t2.Teacher");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    char ch1[3];
    printf("\n\n\t\t\t\t\t\t\tChoos anyone :  ");
    scanf("%s", ch1);
    if (strcmp(ch1, "1") == 0)
    {
        Studentlogin();
    }
    else if (strcmp(ch1, "2") == 0)
    {
        Teacherlogin();
    }
    else
    {
        printf("Invalid Input");
        getch();
        mainmenu();
    }
}
void student()
{
    system("cls");
    printf("");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf("\n\n\t\t\t_______________Give Your Sign Up Information______________\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    FILE *fp1 = fopen("student", "r");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
    printf("\n\t\t\t\t\t\tUserName :  ");
    scanf("%s", s1.User_name);
    printf("\n\t\t\t\t\t\tPassword :  ");
    scanf("%s", s1.User_pass);
    printf("\n\t\t\t\t\t\tEnter your Email :  ");
    scanf("%s", s1.student_email);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    int found = 0;
    char checkusr[30];
    char checkpass[30];
    char checkemail[100];
    if (strcmp(s1.User_name, s1.student_email) == 0 || strcmp(s1.User_pass, s1.User_name) == 0 || strcmp(s1.User_pass, s1.student_email) == 0)
    {
        printf("\n\t\t\t\t\t\tSomething went to wrong\n\n\n");
        getch();
        mainmenu();
    }
    else
    {
        while (fscanf(fp1, "%s %s %s\n", checkusr, checkpass, checkemail) != EOF)
        {
            if ((strcmp(s1.User_name, checkusr) == 0) && (strcmp(s1.student_email, checkemail) == 0))
            {
                found = 1;
                break;
            }
        }
        if (found == 1)
        {
            printf("\n\t\t\t\t\t\tTry Anotherone\n\n\n");
            getch();
            mainmenu();
        }
        else
        {
            FILE *fp2 = fopen("student", "a");
            printf("\n\t\t\t\t\t\tSign In Successfull\n\n\n");
            fprintf(fp2, "%s %s %s\t", s1.User_name, s1.User_pass, s1.student_email);
            fclose(fp2);
            getch();
            mainmenu();
        }
        fclose(fp1);
    }
}
void Teacher()
{
    system("cls");
    loading();
    system("cls");
    printf("");
    system("cls");
    printf("\n\n\n\n\t\t\t\t\t\tIf you want to leave just press 5  \n\t\t\t\t\t\t  Else press Enter ");
    char ch1;
    while (1)
    {
        printf("");

        if (ch1 = getch() == 53)
        {
            system("cls");
            mainmenu();
        }
        system("cls");
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        printf("\n\n\t\t\t_______________Give Your Sign Up Information______________\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
        printf("\n\n\t\t\t\t\t\tUserName :  ");
        scanf("%s", s3.User_name);
        printf("\n\n\n\t\t\t\t\t\tPassword :  ");
        scanf("%s", s3.User_pass);
        printf("\n\n\n\t\t\t\t\t\tSet teacher initial :  ");
        scanf("%s", s3.t_User_iniatial);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        int found1 = 0;
        char checkusr1[30];
        char checkpass1[30];
        char checkinitial[30];
        if ((strcmp(s3.User_name, s3.t_User_iniatial) == 0) || (strcmp(s3.User_name, s3.User_pass) == 0) || (strcmp(s3.User_pass, s3.t_User_iniatial) == 0))
        {
            printf("\n\t\t\t\t\t\tSomething went to wrong\n\n\n");
            getch();
            Teacher();
        }
        else
        {
            FILE *fp3 = fopen("teacher", "r");
            while (fscanf(fp3, "%s %s ", checkusr1, checkpass1) != EOF)
            {
                if ((strcmp(s3.User_name, checkusr1) == 0))
                {
                    found1 = 1;
                    break;
                }
            }
            fclose(fp3);
            if (found1 == 1)
            {
                system("cls");
                printf("\n\t\t\t\t\t\t Try anotherone \n\n\n");
                printf("\n\n\n\t\t\t\t\t\t Hit Enter button \n\n\n");
                getch();
                Teacher();
            }
            else
            {

                char tick[30];
                int dx = 0;
                FILE *cks = fopen("initial", "r");
                while (fscanf(cks, "%s", tick) != EOF)
                {
                    if ((strcmp(tick, s3.t_User_iniatial) == 0))
                    {
                        dx = 1;
                        break;
                    }
                }
                if (dx == 1)
                {
                    printf("\n\n\t\t\t\t     Try another initial         \n");
                    getch();
                    Teacher();
                }
                else
                {
                    FILE *fp4 = fopen("teacher", "a");
                    fprintf(fp4, "%s %s\t", s3.User_name, s3.User_pass);
                    printf("\n\n\n\t\t\t\t\t\t\t\t\tSign In Successfull\n\n\n");
                    fclose(fp4);
                    FILE *yb = fopen("initial", "a");
                    fprintf(yb, "%s %s\t", s3.t_User_iniatial, s3.User_name);
                    fclose(yb);
                    printf("\t\t\t\t\t\tHit the Enter\n");
                    fclose(cks);
                    getch();
                    Teacherlogin();
                }
                fclose(cks);
            }
        }
    }
}
void notififation()
{
    char ckstnam[30];
    char reckstnam[30];
    char ckstmail[100];
    char crekstmail[100];
    char ckstsub[100];
    char reckstsub[100];
    int found56 = 0;
    int refound56 = 0;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    FILE *cco = fopen("notification", "r");
    while (fscanf(cco, "%s %s %s", ckstnam, ckstsub, ckstmail) != EOF)
    {

        if ((strcmp(s1.stor_teacher_init, ckstnam) == 0))
        {
            found56 = 1;
            break;
        }
    }

    fclose(cco);
    if (found56 == 1)
    {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("\t\t\t\t\t\t\t  You  have a Notification        \n");
    }
    else
    {
        FILE *ccof = fopen("rtnotification", "r");
        while (fscanf(ccof, "%s %s %s", reckstnam, reckstsub, crekstmail) != EOF)
        {

            if ((strcmp(s1.stor_teacher_init, reckstnam) == 0))
            {
                refound56 = 1;
                break;
            }
        }
        fclose(ccof);
        if (refound56 == 1)
        {
            printf("\t\t\t\t\t\t\t  You  have a Notification        \n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        }
        else
        {
            printf("");
        }
    }
}
int teacher_course()
{
    loading();
    system("cls");
    system("cls");
    char cknam[30];
    char ckenrol[30];
    char ckinitial[30];
    // char teachernm[30];
    char teacherpass[30];
    char ckemail[100];
    // char ckenrol[30];
    char ckstusernme[30];
    char teachernm[30];
    char dpnam[30];
    char dpmail[100];
    int gg = 0;
    // char teacherpass[30];
    HANDLE hConsols = GetStdHandle(STD_OUTPUT_HANDLE);

    FILE *fp11 = fopen(t1.stor_usrnm, "r");
    if ((strcmp(t1.stor_usrnm, s4.User_name) == 0))
    {
        printf("");
        FILE *ck = fopen(t1.stor_usrnm, "r");
        int character = fgetc(ck);
        if (character == EOF)
        {
            SetConsoleTextAttribute(hConsols, FOREGROUND_RED);
            printf("\n\n\t\t\t\t\t\t\t\t\t\t     User info: %s         \n", t1.stor_usrnm);
            printf("\n\n\t\t\t\t     You Have No Course Yet         \n");
            SetConsoleTextAttribute(hConsols, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        }
        else
        {

            SetConsoleTextAttribute(hConsols, FOREGROUND_RED);
            printf("\n\t\t\t\t\t\t\t\t\t\t     User info: %s         \n", t1.stor_usrnm);
            SetConsoleTextAttribute(hConsols, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            SetConsoleTextAttribute(hConsols, FOREGROUND_GREEN);
            printf("\t_____________________Dashbord_____________________\n");
            SetConsoleTextAttribute(hConsols, FOREGROUND_BLUE | FOREGROUND_RED);
            printf("\n\tTeacher Inetial    Subject name\t   Enrollment key \n\n");
            SetConsoleTextAttribute(hConsols, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            while (fscanf(fp11, "%s %s %s", ckinitial, cknam, ckenrol) != EOF)
            {
                SetConsoleTextAttribute(hConsols, FOREGROUND_RED | FOREGROUND_GREEN);
                printf("\t\t%s\t\t%s\t\t%s\n", ckinitial, cknam, ckenrol);
                strcpy(s1.stor_teacher_init, ckinitial);
            }
            SetConsoleTextAttribute(hConsols, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

            notififation();
        }
        fclose(ck);
    }
    else
    {
        printf("Invalid username !!");
        getch();
        mainmenu();
    }
    fclose(fp11);
}

void Teacherlogin()
{
    system("cls");
    loading();
    system("cls");
    printf("\n\n\n\n\t\t\t\t\t\tIf you want to leave just press 5  ");
    char ch;
    while (1)
    {
        printf("");

        if (ch = getch() == 53)
        {
            system("cls");
            mainmenu();
            break;
        }
        system("cls");
        FILE *fp5 = fopen("teacher", "r");
        int found2 = 0;
        char checkusr2[30];
        char checkpass2[30];
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY | FOREGROUND_RED);
        printf("\n\n\t\t\t________________Teacher Portal_______________\n\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        printf("\n\n\n\t\t\t\t\t\tUserName :  ");
        scanf("%s", s4.User_name);
        strcpy(t1.stor_usrnm, s4.User_name);
        strcpy(t3.efstor_usrnm, s4.User_name);
        printf("\n\n\n\n\t\t\t\t\t\tPassword :  ");

        int i = 0;
        char ch;
        while (1)
        {
            ch = getch();
            if (ch == 13)
            {
                s4.User_pass[i] = '\0';
                break;
            }
            else if (ch == 8)
            {
                if (i > 0)
                {
                    i--;
                    printf("\b \b");
                }
            }
            else
            {
                s4.User_pass[i] = ch;
                i++;
                printf("*");
            }
        }
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        while (fscanf(fp5, "%s %s", checkusr2, checkpass2) != EOF)
        {
            if ((strcmp(s4.User_name, checkusr2) == 0) && (strcmp(s4.User_pass, checkpass2) == 0))
            {
                found2 = 1;
                break;
            }
        }

        fclose(fp5);

        if (found2 == 1)
        {

            SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
            int j;
            char b[18] = "Log In Successful ";
            printf("\n\n\n\n\t\t\t\t\t");
            for (j = 0; j < 20; j++)
            {
                printf("\xB2");
                Sleep(10);
            }
            for (j = 0; j < 18; j++)
            {
                printf(" ");
                printf("%c", b[j]);
                Sleep(60);
            }
            for (j = 0; j < 20; j++)
            {
                printf("\xB2");
                Sleep(10);
            }
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            FILE *mfile = fopen(s4.User_name, "a");
            fclose(mfile);
            teacherportal();
        }
        else
        {
            system("cls");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
            printf("\n\t\t\t\t\t\tWrong Username or Password !!!\n\n\n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            getch();
            Teacherlogin();
        }
    }
}
void teachersubject()
{
    loading();
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf("\n\n\t\t\t\t______________Add New Course_____________\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf("\n\n\t\t\t\t\t\tName Initial :  ");
    scanf("%s", t1.teacher_name);
    int found4 = 0, i, es = 0, count = 0, rx = 0;
    printf("\n\n\n\t\t\t\t\t\tSubject quantity :  ");
    scanf("%d", &count);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    char subject[30];
    // strt
    char inisubject[30];
    char tcksubject[30];
    char tcktinitial[30];
    char initcktinitial[30];
    char inienrolment[30];
    char tckenrolment[30];
    // end
    char enrolment[30];
    char cktinitial[30];
    char tusernm8[30];
    char tcktinitial1[30];
    char cktinenroll[30];
    char dcheck[30];
    for (i = 1; i <= count; i++)
    {
        system("cls");
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
        printf("\n\n\t\t\t\t\t\tSubject Name :  ");
        scanf("%s", t1.subject);
        printf("\n\n\n\t\t\t\t\t\tEnrolment key :  ");
        scanf("%s", t1.enrolment_key);
        if (strcmp(t1.subject, t1.enrolment_key) == 0)
        {
            system("cls");
            printf("\n\n\n\t\t\t\t\t\tInvalid enrolment key\n\n\n");
            getch();
            teacherportal();
        }
        else
        {

            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            FILE *fp8 = fopen("Enroll_stor", "r");
            while (fscanf(fp8, "%s %s %s", dcheck, subject, enrolment) != EOF)
            {

                if ((strcmp(t1.enrolment_key, enrolment) == 0))
                {
                    found4 = 1;
                    break;
                }
            }
            // strcpy(tcktinitial1, t1.teacher_name);
            fclose(fp8);
            if (found4 == 1)
            {
                system("cls");
                printf("\n\n\n\t\t\t\t\t\tTry another enrolment key\n\n\n");
                getch();
                teachersubject();
            }
            else
            {
                FILE *fkk = fopen("initial", "r");
                while (fscanf(fkk, "%s %s", cktinitial, tusernm8) != EOF)
                {
                    if ((strcmp(t1.teacher_name, cktinitial) == 0) && (strcmp(t1.stor_usrnm, tusernm8) == 0))
                    {
                        es = 1;
                        break;
                    }
                }
                fclose(fkk);
                if (es == 1)
                {
                    FILE *fp10 = fopen(t1.enrolment_key, "a");
                    // fprintf(fp10, "%s %s %s\t", tcktinitial1, t1.subject, t1.enrolment_key);
                    fclose(fp10);
                    FILE *dse9 = fopen(s4.User_name, "a");
                    fprintf(dse9, "%s %s %s\t", t1.teacher_name, t1.subject, t1.enrolment_key);
                    fclose(dse9);
                    FILE *fp7 = fopen("subject", "a");
                    printf("\n\t\t\t\t\t\tSubject add Successfull\n\n\n");
                    fprintf(fp7, "%s %s\t", t1.teacher_name, t1.subject);
                    fclose(fp7);
                    FILE *src = fopen(t1.subject, "a");
                    fprintf(src, "%s %s\t", t1.teacher_name, t1.subject);
                    fclose(src);
                    FILE *enroll = fopen("Enroll_stor", "a");
                    fprintf(enroll, "%s %s %s\t", t1.teacher_name, t1.subject, t1.enrolment_key);
                    fclose(enroll);
                    FILE *inti = fopen(t1.teacher_name, "a");
                    fclose(inti);
                    getch();
                }
                else
                {
                    printf("\n\t\t\t\t\t\tInvalid Initial\n\n\n");
                    // HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                    printf("\n\t\t\t\t\t\t press 1 for leaving Else press Enter\n\n\n");
                    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
                    char chs;
                    if (chs = getch() == 49)
                    {
                        teacherportal();
                    }
                    getch();
                    teachersubject();
                }
            }
        }
    }
    teacherportal();
}
void removeerror()
{
    char ck_initial1[30];
    char ck_nam2[30];
    char ck_enroll3[30];

    FILE *usnam = fopen(t3.efstor_usrnm, "r");
    FILE *xmp = fopen("xamp", "a");
    while (fscanf(usnam, "%s %s %s", ck_initial1, ck_nam2, ck_enroll3) != EOF)
    {

        if ((strcmp(t2.subject_initial, ck_initial1) == 0) && (strcmp(t2.subject_nam, ck_nam2) == 0) && (strcmp(t2.subject_enroll, ck_enroll3) == 0))
        {
            strcpy(ck_initial1, "");
            strcpy(ck_nam2, "");
            strcpy(ck_enroll3, "");
        }
        fprintf(xmp, "%s %s %s\t", ck_initial1, ck_nam2, ck_enroll3);
    }
    fclose(xmp);
    fclose(usnam);
    FILE *usnamsd = fopen(t3.efstor_usrnm, "a");
    fclose(usnamsd);
    remove(t3.efstor_usrnm);
    rename("xamp", t3.efstor_usrnm);
}
void remove_subject()
{
    system("cls");
    loading();
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    printf("\n\n\t\t\t\t______________Course Removing_____________");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    char ck_initials[30];
    char ck_initial[30];
    char ck_nam[30];
    char ck_nams[30];
    char ck_enroll[30];
    int found = 0, fnd = 0;
    char ckn[30];
    char cks[30];
    char cke[30];
    char dsbn[30];
    char dsbi[30];
    char dsbe[30];
    char subdel[30];
    char subi[30];
    char subenrol[30];
    char ii[30];
    FILE *copmp = fopen(t1.stor_usrnm, "r");
    if ((strcmp(t1.stor_usrnm, s4.User_name) == 0))
    {
        FILE *dsb = fopen(t1.stor_usrnm, "r");
        int character = fgetc(dsb);
        if (character == EOF)
        {
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
            printf("\n\n\t\t\t\t\t\t\t\t\t\t     User info: %s         \n", s4.User_name);
            printf("\n\n\t\t\t\t     You Have No Course Yet         \n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        }
        else
        {
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
            printf("\n\t\t\t\t\t\t\t\t\t\t     User info: %s         \n", s4.User_name);
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
            printf("\t\t\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t     ______________Your course list_____________\n\n\t\t\t\t\t\t\t\t\t\tSubject name   Enrollment key\n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            while (fscanf(dsb, "%s %s %s", dsbi, dsbn, dsbe) != EOF)
            {
                SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
                printf("\t\t\t\t\t\t\t\t\t  \t%s      \t%s\n", dsbn, dsbe);
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            }
            fclose(dsb);
        }
    }
    else
    {
        printf("Invalid username !!");
        // HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("\n\t\t\t\t\t\t press 1 for leaving Else press Enter\n\n\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
        char chs;
        if (chs = getch() == 49)
        {
            teacherportal();
        }
        remove_subject();
    }
    fclose(copmp);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("\t\t\t\tName Initial :  ");
    scanf("%s", t2.subject_initial);
    printf("\n\t\t\t\tSubject Name :  ");
    scanf("%s", t2.subject_nam);
    printf("\n\t\t\t\tEnrolment key :  ");
    scanf("%s", t2.subject_enroll);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    FILE *infovfy = fopen("Enroll_stor", "r");
    while (fscanf(infovfy, "%s %s %s", ckn, cks, cke) != EOF)
    {
        if ((strcmp(t2.subject_initial, ckn) == 0) && (strcmp(t2.subject_nam, cks) == 0) && (strcmp(t2.subject_enroll, cke) == 0))
        {
            fnd = 1;
            break;
        }
    }
    fclose(infovfy);
    if (fnd == 1)
    {
        // end
        FILE *remove2 = fopen("Enroll_stor", "r");
        FILE *remove4 = fopen(t2.subject_nam, "r");
        FILE *temp2 = fopen("temp2", "a");
        FILE *temp4 = fopen("temp4", "a");
        while (fscanf(remove4, "%s %s", subi, subdel) != EOF)
        {

            if ((strcmp(t2.subject_initial, subi) == 0) && (strcmp(t2.subject_nam, subdel) == 0))
            {

                strcpy(subi, "");
                strcpy(subdel, "");
            }
            fprintf(temp4, "%s %s\t", subi, subdel);
        }
        fclose(remove4);
        fclose(temp4);

        remove(t2.subject_nam);
        rename("temp4", t2.subject_nam);
        // end
        printf("");
        while (fscanf(remove2, "%s %s %s", ck_initial, ck_nam, ck_enroll) != EOF)
        {
            if ((strcmp(t2.subject_initial, ck_initial) == 0) && (strcmp(t2.subject_nam, ck_nam) == 0) && (strcmp(t2.subject_enroll, ck_enroll) == 0))
            {
                strcpy(ck_initial, "");
                strcpy(ck_nam, "");
                strcpy(ck_enroll, "");
            }
            fprintf(temp2, "%s %s %s\t", ck_initial, ck_nam, ck_enroll);
        }
        fclose(remove2);
        fclose(temp2);

        remove("Enroll_stor");
        remove(t2.subject_enroll);
        rename("temp2", "Enroll_stor");
        removeerror();
        system("cls");
        loading();
        system("cls");
        printf("\n\n\t\t\t\t\tRemove Successfully");
        getch();
        system("cls");
        loading();
        teacherportal();
    }
    else
    {
        system("cls");
        printf("\n\n\t\t\t\t\tInformation Not Found");
        getch();
        // HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("\n\t\t\t\t\t\t press 1 for leaving Else press Enter\n\n\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
        char chs;
        if (chs = getch() == 49)
        {
            teacherportal();
        }
        remove_subject();
    }
}
int subjectfpfn()
{
    system("cls");
    random();
    t1.random;
    char subjectfp[30];
    FILE *fp8 = fopen(t1.random, "a");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    printf("Enter your Lecture : \n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    while (1)
    {
        printf(">");
        fgets(subjectfp, sizeof(subjectfp), stdin);
        subjectfp[strcspn(subjectfp, "\n")] = '\0';
        if (strcmp(subjectfp, "exit") == 0)
        {
            break;
        }
        fprintf(fp8, "%s", subjectfp);
    }
    fprintf(fp8, "\n\n\n");
    fclose(fp8);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    FILE *datast = fopen("lecture", "a");
    fprintf(datast, "%s %s %s\t", s1.enrollment, t1.lt1, t1.random);
    fclose(datast);
    getch();
    teacherportal();
}

int teacherlecture()
{
    loading();
    system("cls");
    char tcknam[30];
    char tckenrol[30];
    char tckinitial[30];
    // char teachernm[30];
    // char teacherpass[30];
    int rx = 0;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    FILE *fp99 = fopen(t1.stor_usrnm, "r");
    if ((strcmp(t1.stor_usrnm, s4.User_name) == 0))
    {
        printf("");
        FILE *ck99 = fopen(t1.stor_usrnm, "r");
        int character = fgetc(ck99);
        if (character == EOF)
        {
            // printf("\n\n\t\t\t\t\t\t\t\t\t\t     User info: %s         \n", t1.stor_usrnm);
            printf("\n\n\t\t\t\t     You Have No Course Yet         \n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        }
        else
        {
            SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            // printf("\n\t\t\t\t\t\t\t\t\t\t     User info: %s         \n", t1.stor_usrnm);
            printf("\t\t_________________Add New lecture____________\n\t\t\t\t\t\t\t\t\t______________Your course list_______________\n\n");
            printf("\n\t\t\t\t\t\t\t\t            Subject name   Enrollment key\n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

            while (fscanf(fp99, "%s %s %s", tckinitial, tcknam, tckenrol) != EOF)
            {
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                printf("\t\t\t\t\t\t\t\t\t\t %s      \t%s\n", tcknam, tckenrol);
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            }
            fclose(fp99);
            SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
            printf("\t\t\t\tsubject name : ");
            scanf("%s", subject);
            printf("\n\n\t\t\t\tsubject enroment key : ");
            scanf("%s", s1.enrollment);
            printf("\n\n\t\t\t\tLecture no/code : ");
            scanf("%s", t1.lt1);
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

        } // students give input lecture no and enroll
        fclose(ck99);
    }
    else
    {
        printf("Invalid username !!");
        getch();
        mainmenu();
    }

    /*start*/
    FILE *fp7 = fopen("Enroll_stor", "r");
    char cksubject[30];
    char ckenroll[30];
    char cktnam[30];
    int ex = 0;
    char inputltc[30];
    /*start*/

    while (fscanf(fp7, "%s %s %s", cktnam, cksubject, ckenroll) != EOF)
    {
        if ((strcmp(subject, cksubject) == 0) && (strcmp(s1.enrollment, ckenroll) == 0))
        {
            ex = 1;
            break;
        }
    }
    fclose(fp7);
    if (ex == 1)
    {
        subjectfpfn();
    }
    else
    {
        system("cls");
        printf("\n\n\t\t\t\t\t\t\t\tPlease add subject First");
        getch();
        teacherportal();
    }
}

void random()
{

    char oer[30];
    srand(time(NULL));
    char otp[OTP_LENGTH + 1];

    for (int i = 0; i < OTP_LENGTH; i++)
    {
        int randomType = rand() % 2;
        if (randomType == 0)
        {
            otp[i] = '0' + (rand() % 10);
        }
        else
        {
            otp[i] = 'A' + (rand() % 26);
        }
    }

    otp[OTP_LENGTH] = '\0';
    strcpy(oer, otp);
    const char *filename = oer;

    if (access(filename, F_OK) != -1)
    {
        random();
    }
    else
    {
        int isNumber = 1;

        for (int i = 0; otp[i] != '\0'; i++)
        {

            if (!isdigit(otp[i]))
            {
                isNumber = 0;
                break;
            }
        }

        if (isNumber)
        {
            random();
        }
        else
        {
            strcpy(t1.random, otp);
        }
    }
}

void quizsystem()
{
    system("cls");
    char ch1;

    loading();
    system("cls");
    int count = 0;

    char option[30];
    char entck[30];
    char initck[30];
    char subntck[30];
    char eer[30];
    char attendcnt[30];
    char anser[30];
    char ckenrls[30];
    char ck[8] = "Answer:";
    int toption = 0, j = 1, i = 1, foundew = 0, attendcounter = 0, foundte = 0;
    FILE *countexu = fopen("counter", "a");
    fclose(countexu);
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf("\n\n\t\t\t_______________Quiz______________\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);

    FILE *counredesaer = fopen("Enroll_stor", "r");
    while (fscanf(counredesaer, "%s %s %s", initck, subntck, entck) != EOF)
    {
        if ((strcmp(t1.qti, initck) == 0) && (strcmp(t1.qek, entck) == 0))
        {
            foundte = 1;
            break;
        }
    }
    fclose(counredesaer);
    if (foundte == 1)
    {
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
        printf("\n\n\n\t\t\t\t\t\tAttend quantity :  ");
        scanf("%d", &attendcounter);
        printf("\n\n\n\t\t\t\t\t\tQustion quantity :  ");
        scanf("%d", &count);
    }
    else
    {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("\n\n\n\t\t\t\t\t\t Invalid enroll");
        getch();
        teacherportal();
    }
    FILE *counreder = fopen("counter", "r");
    while (fscanf(counreder, "%s %s %s", ckenrls, eer, attendcnt) != EOF)
    {
        if ((strcmp(ckenrls, t1.qek) == 0))
        {
            foundew = 1;
            break;
        }
    }
    fclose(counreder);
    if (foundew == 1)
    {
        system("cls");
        loading();
        system("cls");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("\n\n\n\t\t\t\t\t\t quize is running");
        getch();
        teacherportal();
    }
    else
    {
        FILE *couxnter = fopen("counter", "a");
        fprintf(couxnter, "%s %d %d\t", t1.qek, count, attendcounter);
        fclose(couxnter);
    }

    for (i = 1; i <= count; i++)
    {
        system("cls");
        random();
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("\n\n\n\t\t\t\t\t\tQustion  :  ");
        scanf("%s", t3.qustion);
        FILE *quize1 = fopen(t1.quize, "a");
        fprintf(quize1, "\t%s %s\t", t1.random, t3.qustion);
        fclose(quize1);
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        printf("\n\n\n\t\t\t\t\t\tOption quantity :  ");
        scanf("%d", &toption);
        for (j = 1; j <= toption; j++)
        {
            SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
            printf("\n\n\n\t\t\t\t\t\tOption %d   ", j);
            scanf("%s", option);
            FILE *option3 = fopen("option", "a");
            fprintf(option3, " %s %s %s\t", t1.qek, t1.random, option);
            fclose(option3);
            ;
        }
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
        printf("\n\n\n\t\t\t\t\t\tAnswer: ");
        scanf("%s", anser);
        FILE *ansstr = fopen(t1.random, "a");
        fprintf(ansstr, "%s\n", anser);
        fclose(ansstr);
        FILE *ansstrsds = fopen(t1.qek, "a");
        fprintf(ansstrsds, "%s %s\t", t1.random, t1.quize);
        fclose(ansstrsds);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
    }
}
void teacherquiz()
{
    system("cls");
    // char qti[30];
    char qsb[30];
    char ckqti[30];
    char ckqsb[30];
    char ckqen[30];
    int found8 = 0;
    system("cls");
    printf("\n\n\n\n\t\t\t\t\t\tIf you want to leave just press 5  \n\t\t\t\t\t\t \n\n\t\t\t\t\t\t Else press Enter ");
    char ch1;
    while (1)
    {
        printf("");

        if (ch1 = getch() == 53)
        {
            system("cls");
            loading();
            teacherportal();
        }

        system("cls");
        loading();
        system("cls");
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        printf("\n\n\t\t\t_______________Quiz______________\n\n");
        printf("\n\n\t\t\t\t\t\tName Initial :  ");
        scanf("%s", t1.qti);
        printf("\n\n\t\t\t\t\t\tSubject Name :  ");
        scanf("%s", qsb);
        printf("\n\n\n\t\t\t\t\t\tEnrolment key :  ");
        scanf("%s", t1.qek);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
        random();
        strcpy(t1.quize, t1.random);
        FILE *qck = fopen("Enroll_stor", "r");

        while (fscanf(qck, "%s %s %s", ckqti, ckqsb, ckqen) != EOF)
        {
            if ((strcmp(t1.qti, s1.stor_teacher_init) == 0) && (strcmp(qsb, ckqsb) == 0) && (strcmp(t1.qek, ckqen) == 0))
            {
                found8 = 1;
                break;
            }
        }
        fclose(qck);
        if (found8 == 1)
        {
            system("cls");
            const char *filename = t1.quize;

            if (access(filename, F_OK) != -1)
            {

                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                int j;
                char b[13] = "Please Wait ";
                printf("\n\n\n\n\t\t\t\t\t");
                for (j = 0; j < 20; j++)
                {
                    printf("\xB2");
                    Sleep(10);
                }
                for (j = 0; j < 13; j++)
                {
                    printf(" ");
                    printf("%c", b[j]);
                    Sleep(60);
                }
                for (j = 0; j < 20; j++)
                {
                    printf("\xB2");
                    Sleep(10);
                }
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

                random();
            }
            else
            {
                quizsystem();
            }
            teacherportal();
        }
        else
        {
            system("cls");
            printf("\n\n\t\t\t\t\tInformation Not Found");
            getch();
            // HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
            printf("\n\t\t\t\t\t\t press 1 for leaving Else press Enter\n\n\n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
            char chs;
            if (chs = getch() == 49)
            {

                teacherportal();
            }
            teacherquiz();
        }
    }
}
void retakentf()
{
    char rck_initial1[30];
    char rck_sub[30];
    char rck_mail1[100];
    FILE *usnaddmd = fopen("rtnotification", "r");
    FILE *xmsspc = fopen("WAamp", "a");
    while (fscanf(usnaddmd, "%s %s %s", rck_initial1, rck_sub, rck_mail1) != EOF)
    {

        if ((strcmp(s1.stor_teacher_init, rck_initial1) == 0))
        {
            strcpy(rck_initial1, " ");
            strcpy(rck_sub, " ");
            strcpy(rck_mail1, " ");
        }
        fprintf(xmsspc, "%s %s %s\t", rck_initial1, rck_sub, rck_mail1);
    }
    fclose(xmsspc);
    fclose(usnaddmd);
    FILE *usnamsdd = fopen("rtnotification", "a");
    fclose(usnamsdd);
    remove("rtnotification");
    rename("WAamp", "rtnotification");
    teacherportal();
}
void addingntf()
{
    char ck_initial1[30];

    char ck_sub[30];

    char ck_mail[100];

    FILE *usnaddm = fopen("notification", "r");
    FILE *xmssp = fopen("Aamp", "a");
    while (fscanf(usnaddm, "%s %s %s", ck_initial1, ck_sub, ck_mail) != EOF)
    {

        if ((strcmp(s1.stor_teacher_init, ck_initial1) == 0))
        {
            strcpy(ck_initial1, "");
            strcpy(ck_sub, "");
            strcpy(ck_mail, "");
        }
        fprintf(xmssp, "%s %s %s\t", ck_initial1, ck_sub, ck_mail);
    }
    fclose(xmssp);
    fclose(usnaddm);
    FILE *usnamsd = fopen("notification", "a");
    fclose(usnamsd);
    remove("notification");
    rename("Aamp", "notification");

    teacherportal();
}

void checknoification()
{

    system("cls");
    char ck_sub1[30];
    char rck_sub1[30];
    char ck_mail1[100];
    char ck_nt[30];
    char rck_nt[30];
    char rck_ntdd[30];
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    printf("\n\t\t\t\t\t\t press 1 for Clear All Notifications Else press Enter\n\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
    char chs;
    int poi = 0, poi2 = 0;
    char rmv[3];
    if (chs = getch() == 49)
    {
        printf("\n\n\n\n\t\t\t\t\t\t1.Remove Adding Request\n\n\t\t\t\t\t\t2.Remove Retake Request\n\n\t\t\t\t\t\tChoos anyone ");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
        scanf("%s", rmv);
        if (strcmp(rmv, "1") == 0)
        {
            addingntf();
        }
        else if (strcmp(rmv, "2") == 0)
        {
            retakentf();
        }
        else
        {
            printf("\n\n\n\t\t\t\t\t\tInvalid selection ");
            teacherportal();
        }
    }
    else
    {
        system("cls");
        FILE *usnaddm = fopen("notification", "r");
        while (fscanf(usnaddm, "%s %s %s", ck_nt, ck_sub1, ck_mail1) != EOF)
        {
            poi = 1;

            if ((strcmp(s1.stor_teacher_init, ck_nt) == 0))
            {
                poi = 0;
                printf("\n\n\n\t\t\t\t\t\t\t\t\tYour notification for adding ");
                printf("\n\n\t\t\t\t\t\t\t\t\t %s      \t%s\n", ck_sub1, ck_mail1);
            }
        }

        fclose(usnaddm);
        if (poi == 1)
        {
            printf("\n\n\n\t\t\t\t\t\tYou have no notification for Adding requst ");
        }
        getch();
        FILE *ccofff = fopen("rtnotification", "r");
        while (fscanf(ccofff, "%s %s %s", rck_nt, rck_sub1, rck_ntdd) != EOF)
        {
            poi2 = 1;
            if ((strcmp(s1.stor_teacher_init, rck_nt) == 0))
            {
                poi2 = 0;
                printf("\n\n\n\t\t\t\t\t\t\t\t\tYour notification for retack ");
                printf("\n\n\t\t\t\t\t\t\t\t\t %s      \t%s\n", rck_sub1, rck_ntdd);
            }
        }
        fclose(ccofff);
        if (poi2 == 1)
        {
            printf("\n\n\n\t\t\t\t\t\tYou have no notification for retack requst ");
        }

        getch();
        teacherportal();
    }
}
void qactivitycleare()
{
    char ck_ini[30];
    char ck_nam[30];
    char ck_en[30];

    FILE *usnamrm = fopen("attendquiz", "r");
    FILE *xmppo = fopen("xampr", "a");
    while (fscanf(usnamrm, "%s %s %s", ck_ini, ck_nam, ck_en) != EOF)
    {

        if ((strcmp(s4.sys, ck_en) == 0))
        {
            strcpy(ck_ini, "");
            strcpy(ck_nam, "");
            strcpy(ck_en, "");
        }
        fprintf(xmppo, "%s %s %s\t", ck_ini, ck_nam, ck_en);
    }
    fclose(xmppo);
    fclose(usnamrm);
    FILE *usnamsdtt = fopen("attendquiz", "a");
    fclose(usnamsdtt);
    remove("attendquiz");
    rename("xampr", "attendquiz");
    teacherportal();
}
void quizActivity()
{
    system("cls");
    loading();
    system("cls");
    char ti[30];
    char tsub[30];
    char ten[30];
    char d[30];
    char x[30];
    char s[30];
    char er[30];
    char ex[30];
    char ey[30];
    char ss[30];
    int fountd = 0, io;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    printf("\n\n\t\t\t\t\tSubjact Name:  ");
    scanf("%s", ss);
    printf("\n\n\t\t\t\t\tEnrollment key:  ");
    scanf("%s", s4.sys); // s1.stor_teacher_init
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
    FILE *fileck = fopen("Enroll_stor", "r");
    while (fscanf(fileck, "%s %s %s", ti, tsub, ten) != EOF)
    {
        if ((strcmp(s1.stor_teacher_init, ti) == 0) && (strcmp(tsub, ss) == 0) && (strcmp(ten, s4.sys) == 0))
        {
            fountd = 1;
            break;
        }
    }
    fclose(fileck);
    if (fountd == 1)
    {
        printf("\n\n\n\t\t\t\t\t\t press 1 for Clear All Notifications Else press Enter\n\n\n");

        char chs;
        int rmv;
        if (chs = getch() == 49)
        {

            qactivitycleare();
        }
        else
        {
            FILE *attendinfre = fopen("attendquiz", "r");
            while (fscanf(attendinfre, "%s %s %s", er, ex, ey) != EOF)
            {
                io = 0;
                if ((strcmp(s4.sys, ey) == 0))
                {
                    io = 1;
                    printf("\n\n\t\t\t\t\t%s %s %s", er, ex, ey);
                }
            }
            fclose(attendinfre);
            if (io == 1)
            {
                getch();
                teacherportal();
            }
            else
            {
                printf("\n\n\t\t\t\t\tNo activity found ");
                getch();
                teacherportal();
            }
        }
    }
    else
    {
        printf("\n\n\t\t\t\t\tSubjact Not Found  ");
        getch();
        teacherportal();
    }
}
void removequizeac()
{
    system("cls");
    loading();
    system("cls");
    char eroll[30];
    char sub[30];
    char init[30];
    char enroll[30];
    char anss[30];
    char qui[30];
    char enrolop[30];
    char enrolops[30];
    char op_Id[30];
    char op_Ids[30];
    char optun[30];
    char optuns[30];
    char endoptuns[30];
    char endoptunss[30];
    char endoptcuns[30];
    int trs = 0;
    printf("\n\n\t\t\t\t\tEnrollment key:  ");
    scanf("%s", eroll);
    FILE *fildeckps = fopen("Enroll_stor", "r");

    while (fscanf(fildeckps, "%s %s %s", endoptuns, endoptunss, endoptcuns) != EOF)
    {
        if (strcmp(eroll, endoptcuns) == 0)
        {
            trs = 1;
            break;
        }
    }
    fclose(fildeckps);
    if (trs == 1)
    {
        FILE *fildeck = fopen("Enroll_stor", "r");

        while (fscanf(fildeck, "%s %s %s", init, sub, enroll) != EOF)
        {

            if (strcmp(eroll, enroll) == 0)
            {

                FILE *fildecke = fopen(enroll, "r");

                while (fscanf(fildecke, "%s", anss) != EOF)
                {
                    FILE *rmcv = fopen(anss, "a");
                    fclose(rmcv);
                    remove(anss);
                }

                fclose(fildecke);
            }
        }

        fclose(fildeck);

        FILE *otps = fopen("option", "r");
        FILE *xmppod = fopen("examprs", "a");
        while (fscanf(otps, "%s %s %s", enrolop, op_Id, optun) != EOF)
        {
            if ((strcmp(enrolop, eroll) == 0))
            {
                strcpy(enrolop, " ");
                strcpy(op_Id, " ");
                strcpy(optun, " ");
            }
            fprintf(xmppod, "%s %s %s\t", enrolop, op_Id, optun);
        }
        fclose(otps);
        fclose(xmppod);
        remove("option");
        rename("examprs", "option");
        FILE *otpsr = fopen("counter", "r");
        FILE *xmppodsd = fopen("seamprs", "a");
        while (fscanf(otpsr, "%s %s %s", enrolops, op_Ids, optuns) != EOF)
        {
            if ((strcmp(enrolops, eroll) == 0))
            {
                strcpy(enrolops, " ");
                strcpy(op_Ids, " ");
                strcpy(optuns, " ");
            }
            fprintf(xmppodsd, "%s %s %s\t", enrolops, op_Ids, optuns);
        }
        fclose(otpsr);
        fclose(xmppodsd);
        remove("counter");
        rename("seamprs", "counter");
        FILE *ppu = fopen(eroll, "w");
        fprintf(ppu, " ");
        fclose(ppu);
    }
    else
    {
        system("cls");
        printf("\n\n\t\t\t\t\t\t\t\t\t\t\tInvalid enroll ");
    }
    getch();
    teacherportal();
}

void teacherportal()
{
    system("cls");
    loading();
    system("cls");
    teacher_course();
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf("\t\t\t\t\t\t\t\t\t\t\t1.Add subject \n\t\t\t\t\t\t\t\t\t\t\t2.Remove Subject \n\t\t\t\t\t\t\t\t\t\t\t3.Add lecture \n\t\t\t\t\t\t\t\t\t\t\t4.Add Qize\n\t\t\t\t\t\t\t\t\t\t\t5.Check Notification's\n\t\t\t\t\t\t\t\t\t\t\t6.Quize Activity\n\t\t\t\t\t\t\t\t\t\t\t7.Remove Quize Activity\n\t\t\t\t\t\t\t\t\t\t\t8.Refresh \n\t\t\t\t\t\t\t\t\t\t\t9.Log Out ");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    char sw1[3];
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tChoos anyone :  ");
    scanf("%s", sw1);
    if (strcmp(sw1, "1") == 0)
    {
        teachersubject();
    }
    else if (strcmp(sw1, "2") == 0)
    {
        remove_subject();
    }
    else if (strcmp(sw1, "3") == 0)
    {
        teacherlecture();
    }
    else if (strcmp(sw1, "4") == 0)
    {
        teacherquiz();
    }
    else if (strcmp(sw1, "5") == 0)
    {
        checknoification();
    }
    else if (strcmp(sw1, "6") == 0)
    {
        quizActivity();
    }
    else if (strcmp(sw1, "7") == 0)
    {
        removequizeac();
    }
    else if (strcmp(sw1, "8") == 0)
    {
        teacherportal();
    }
    else if (strcmp(sw1, "9") == 0)
    {
        mainmenu();
    }
    else
    {
        printf("Invalid Input");
        getch();
        Teacherlogin();
    }
}
void Studentlogin()
{
    system("cls");
    loading();
    system("cls");
    printf("\n\n\t\t\t________________Student Portal_______________\n\n");
    FILE *fp6 = fopen("student", "r");
    int found3 = 0;
    char checkusr3[30];
    char checkpass3[30];
    char checkmail3[100];
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("\n\n\t\t\t\t\tUserName :  ");
    scanf("%s", s5.User_name);
    strcpy(s1.storestdnm, s5.User_name);
    printf("\n\t\t\t\t\tPassword :  ");
    int i = 0;
    char ch;
    while (1)
    {
        ch = getch();
        if (ch == 13)
        {
            s5.User_pass[i] = '\0';
            break;
        }
        else if (ch == 8)
        {
            if (i > 0)
            {
                i--;
                printf("\b \b");
            }
        }
        else
        {
            s5.User_pass[i] = ch;
            i++;
            printf("*");
        }
    }
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    while (fscanf(fp6, "%s %s %s", checkusr3, checkpass3, checkmail3) != EOF)
    {
        if ((strcmp(s5.User_name, checkusr3) == 0) && (strcmp(s5.User_pass, checkpass3) == 0))
        {
            found3 = 1;
            break;
        }
    }
    if (found3 == 1)
    {
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        int j;
        char b[18] = "Log In Successful ";
        printf("\n\n\n\n\t\t\t\t\t");
        for (j = 0; j < 20; j++)
        {
            printf("\xB2");
            Sleep(10);
        }
        for (j = 0; j < 18; j++)
        {
            printf(" ");
            printf("%c", b[j]);
            Sleep(60);
        }
        for (j = 0; j < 20; j++)
        {
            printf("\xB2");
            Sleep(10);
        }
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        strcpy(s6.student_username, s5.User_name);
        Studentportal();
    }
    else
    {
        system("cls");
        loading();
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("\n\t\t\t\t\t\tWrong Username\n\n\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        // HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("\n\t\t\t\t\t\t press 1 for leaving Else press Enter\n\n\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
        char chs;
        if (chs = getch() == 49)
        {
            mainmenu();
        }
        getch();
        Studentlogin();
    }
    fclose(fp6);
}
void student_srch_course()
{
    system("cls");
    loading();
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    printf("\n\n\t\t\t\t\t\tSearch subject : ");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
    char srcsubject[30];
    scanf("%s", srcsubject);
    char cksubject[30];
    char ckteacherinetial[30];
    int found6 = 0;
    FILE *fp13 = fopen(srcsubject, "r");
    printf("\n\t\t\t\t\t\t Result\t\t\t\t\t\t\n");
    while (fscanf(fp13, "%s %s", ckteacherinetial, cksubject) != EOF)
    {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("\n\t\t\t\t\t\t%s %s\n", ckteacherinetial, cksubject);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
    }
    fclose(fp13);
    if ((strcmp(srcsubject, cksubject) != 0))
    {

        perror("\n\t\t\t\t\t\t\tInvalid keyword");
        getch();
    }
    getch();
    Studentportal();
}
void Studentlecture()
{
    system("cls");
    loading();
    system("cls");
    char enrolment[30];
    char ck_enrolment[30];
    char let_no[30];
    char ck_let_no[30];
    char ck_ltId[30];
    char ck_lt_print[30];
    char ck_enro[30];
    char ck_in[30];
    char ck_sub[30];
    char store_id[30];
    int yt = 0, kt = 0;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf("\n\n\t\t\t\t\t\tEnrollment key :  ");
    scanf("%s", enrolment);
    printf("\n\n\t\t\t\t\t\tleture no :  ");
    scanf("%s", let_no);

    FILE *enrolp = fopen(s1.storestdnm, "r");
    while (fscanf(enrolp, "%s %s %s", ck_in, ck_sub, ck_enro) != EOF)
    {
        if ((strcmp(enrolment, ck_enro) == 0))
        {
            yt = 1;
            break;
        }
    }
    fclose(enrolp);
    if (yt == 1)
    {
        FILE *lture = fopen("lecture", "r");
        while (fscanf(lture, "%s %s %s", ck_enrolment, ck_let_no, ck_ltId) != EOF)
        {
            if ((strcmp(enrolment, ck_enrolment) == 0) && (strcmp(let_no, ck_let_no) == 0))
            {
                kt = 1;
                strcpy(store_id, ck_ltId);
                break;
            }
        }
        fclose(lture);
        if (kt == 1)
        {
            system("cls");
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
            printf("\t\t\t\t\t\t\n\t\t\t\t\t\tEnrollment key : %s", enrolment);
            printf("\t\t\t\t\t\t\n\t\t\t\t\t\tleture no : %s", let_no);
            printf("\n\n>>\n");
            FILE *rre = fopen(store_id, "r");
            while (fscanf(rre, "%s", ck_lt_print) != EOF)
            {
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                printf(" %s ", ck_lt_print);
            }
            fclose(rre);
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);

            getch();
        }
        else
        {
            system("cls");
            loading();
            system("cls");
            printf("\n\n\t\t\t\t\t\tNo leture Found  ");
            getch();
            coursinfo();
        }
    }
    else
    {
        system("cls");
        loading();
        system("cls");
        printf("\n\n\t\t\t\t\t\tPlease enroll first  ");
        getch();
        coursinfo();
    }
    coursinfo();
}
void Studentportal()
{

    system("cls");
    loading();
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    printf("\n\n\t\t\t\t\t\t\t\t\t\t     User info: %s         ", s6.student_username);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf("\n\n\t\t\t________________Student Portal_______________\n\n\n\t\t\t1.Search Course\n\n\t\t\t2.Add Course request\n\n\t\t\t3.Corse Info\n\n\t\t\t4.Log Out\n\n ");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    char sw[3];
    printf("\t\t\tChoose anyone ");
    scanf("%s", sw);
    if (strcmp(sw, "1") == 0)
    {
        student_srch_course();
    }
    else if (strcmp(sw, "2") == 0)
    {
        Add_Course_request();
    }
    else if (strcmp(sw, "3") == 0)
    {
        coursinfo();
    }
    else if (strcmp(sw, "4") == 0)
    {
        mainmenu();
    }
    else
    {
        printf("Invalid Input");
        getch();
        Studentportal();
    }
}
void AttedQuiz()
{
    system("cls");
    loading();
    system("cls");

    char subenrl[30];
    char sub_ck[30];
    char ck_enrl[30];
    char enrl_ck[30];
    char quits_ck[30];
    char In_ck[30];
    char qui_id[30];
    char quition[100];
    char store_qid[30];
    char randomes[30];
    char opts[30];
    char anser[30];
    char ck_anser[30];
    char ckenol[30];
    char optiondlt[30];
    char optiondelt_id[30];
    char student_usnam[30];
    char student_pass[30];
    char openrl[30];
    char opqiz[30];
    char attckqz[30];
    char attckqzss[30];
    char attckenrl[30];
    char ytsr[30];
    char wdstudent_email[100];
    char ckstudent_email[100];

    int strd = 0, result = 0, ooiu = 0, ff = 0, op = 0, j = 0, attendqunt = 0, ckcnt = 0, tts = 0, plo = 0, opi = 0, ckf_count, nio, cnty, attendcsp, rr = 0;
    t1.i = 0;
    s1.score = 0;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf("\n\n\t\t\t________________Quiz_______________\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
    printf("\n\n\t\t\t\t\t\tSubject Name :  ");
    scanf("%s", t1.subnm);
    printf("\n\n\t\t\t\t\t\tEnrolment Key :  ");
    scanf("%s", subenrl);
    strcpy(t1.sgtore1, subenrl);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    FILE *infost = fopen("attendquiz", "r");
    while (fscanf(infost, "%s %s %s", attckqzss, attckqz, attckenrl) != EOF)
    {
        if ((strcmp(attckqz, s1.storestdnm) == 0) && (strcmp(attckenrl, subenrl) == 0))
        {
            ooiu = 1;
            break;
        }
    }
    fclose(infost);
    if (ooiu == 1)
    {
        system("cls");
        loading();
        system("cls");
        printf("\n\n\t\t\t\t\t\tYou cann't attend this quize anymore ");
        getch();
        coursinfo();
    }
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
    printf("\n\n\t\t\t\t\t\tStudent Mail :  ");
    scanf("%s", wdstudent_email);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    FILE *mlck = fopen("student", "r");
    while (fscanf(mlck, "%s %s %s", student_usnam, student_pass, ckstudent_email) != EOF)
    {
        if ((strcmp(wdstudent_email, ckstudent_email) == 0))
        {
            strd = 1;
            break;
        }
    }
    fclose(mlck);
    if (strd == 1)
    {
        FILE *stdseff = fopen(s6.student_username, "r");
        while (fscanf(stdseff, "%s %s %s", In_ck, sub_ck, ck_enrl) != EOF)
        {
            if ((strcmp(t1.subnm, sub_ck) == 0) && (strcmp(subenrl, ck_enrl) == 0))
            {
                strcpy(t1.stinto, In_ck);
                ff = 1;
                break;
            }
        }
        fclose(stdseff);
    }
    else
    {
        system("cls");
        loading();
        system("cls");
        printf("\n\n\t\t\t\t\t\tStudent Mail not found ");
        getch();
        coursinfo();
    }

    if (ff == 1)
    {
        s1.pps = 0;
        FILE *ckcunt = fopen("counter", "r");
        while (fscanf(ckcunt, "%s %d %d", ckenol, &ckcnt, &attendqunt) != EOF)
        {
            if ((strcmp(subenrl, ckenol) == 0))
            {
                tts = ckcnt;
                s1.pps = attendqunt;
                break;
            }
        }
        fclose(ckcunt);
        if (s1.pps == 0)
        {
            system("cls");
            loading();
            system("cls");
            printf("\n\n\t\t\t\t\t\tStudent Fill Up ");
            getch();
            coursinfo();
        }

        FILE *erls = fopen(subenrl, "r");
        while (fscanf(erls, "%s %s", enrl_ck, quits_ck) != EOF)
        {
            if (s1.pps == 0)
            {
                break;
            }
            FILE *quitions = fopen(quits_ck, "r");
            while (fscanf(quitions, "%s %s", qui_id, quition) != EOF)
            {
                if (strcmp(qui_id, enrl_ck) == 0)
                {

                    system("cls");
                    opi++;
                    printf("\n\t\t\t\t\t\tQ%d: %s", opi, quition);
                    strcpy(store_qid, qui_id);
                    getch();
                    break;
                }
            }
            fclose(quitions);
            FILE *optiones = fopen("option", "r");
            while (fscanf(optiones, "%s %s %s", opqiz, randomes, opts) != EOF)
            {
                if (strcmp(enrl_ck, randomes) == 0)
                {
                    plo++;
                    printf("\n\n\t\t\t\t\t\t%d %s", plo, opts);
                }
            }
            fclose(optiones);
            printf("\n\n\t\t\t\t\t\tAnswer :  ");
            scanf("%s", anser);
            FILE *anserd = fopen(enrl_ck, "r");
            while (fscanf(anserd, "%s", ck_anser) != EOF)
            {
                if (strcmp(ck_anser, anser) == 0)
                {

                    op = 1;
                    break;
                }
            }
            fclose(anserd);

            if (op == 1)
            {
                t1.i++;
                printf("\n\n\t\t\t\t\t\tAnswer is Correct");
                getch();
            }
            else
            {
                printf("\n\n\t\t\t\t\t\tAnswer is Wrong");
                getch();
                printf("\n\n\t\t\t\t\t\tCorrect Answer : %s", ck_anser);
                getch();
            }
            plo = 0;
            op = 0;
            j++;

            tts--;

            if (tts == 0)
            {
                break;
            }
        }
        fclose(erls);
        printf("");
        s1.pps--;
        s1.score = j / 2;
        countdltr();
        fyubndltr();
        getch();
    }
    else
    {
        printf("\n\n\t\t\t\t\t\tInvalid enroll");
        getch();
        coursinfo();
    }
}

void fyubndltr()
{
    if (t1.i > s1.score)
    {
        loading();
        system("cls");
        HANDLE hConsolec = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsolec, FOREGROUND_GREEN);
        printf("\n\n\t\t\t\t\t\tPass Mark : %d  Your Currect Anaswer %d", s1.score + 1, t1.i);
        printf("\n\n\t\t\t\t\t\tYou are pass");
        SetConsoleTextAttribute(hConsolec, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        FILE *attendinfor = fopen("attendquiz", "a");
        fprintf(attendinfor, "\tPass %s %s\t", s1.storestdnm, t1.sgtore1);
        fclose(attendinfor);
        getch();
        coursinfo();
    }
    else
    {
        system("cls");
        loading();
        system("cls");
        HANDLE hConsolec = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsolec, FOREGROUND_RED);
        printf("\n\n\t\t\t\t\t\tPass Mark : %d  Your Currect Anaswer %d", s1.score + 1, t1.i);
        printf("\n\n\t\t\t\t\t\tYou are fail");
        SetConsoleTextAttribute(hConsolec, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);

        getch();
        FILE *attendinfo = fopen("attendquiz", "a");
        fprintf(attendinfo, "\tFail %s %s\t", s1.storestdnm, t1.sgtore1);
        fclose(attendinfo);
        loading();
        system("cls");
        SetConsoleTextAttribute(hConsolec, FOREGROUND_GREEN);
        printf("\n\n\t\t\t\t\t\tIf you want to take retake press 1 ");
        SetConsoleTextAttribute(hConsolec, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        char chs = '\0';
        if ((chs = getch()) == 49)
        {

            loading();
            system("cls");
            FILE *ccoff = fopen("rtnotification", "a");
            fprintf(ccoff, "%s %s %s\t", t1.stinto, s1.storestdnm, t1.subnm);
            fclose(ccoff);
        }
        coursinfo();
    }
}
void countdltr()
{
    // perror("\nf");
    char ienrl[30];
    char countck[30];
    int atttendpref, erpo = 0;
    FILE *attenddar = fopen("counter", "r");
    FILE *topm = fopen("Ausudr", "a");

    while (fscanf(attenddar, "%s %s %d", ienrl, countck, &atttendpref) != EOF)
    {

        if ((strcmp(ienrl, t1.sgtore1) == 0))
        {

            atttendpref = 0;
            erpo = s1.pps;
            atttendpref = erpo;
        }
        fprintf(topm, "%s %s %d\t", ienrl, countck, atttendpref);
    }

    fclose(attenddar);
    fclose(topm);
    remove("counter");
    rename("Ausudr", "counter");
    // perror("\nr");
}
void assincours()
{
    system("cls");
    loading();
    system("cls");
    printf("\n\n\t\t\t________________Assign Course_______________\n\n");
    char stinitial[30];
    char stsubject[30];
    char cksubject[30];
    char ckinitial[30];
    char ckenrol[30];
    char sterolment[30];
    char u[30];
    char p[30];
    char m[30];
    char umt[30];
    char pst[30];
    char mle[100];
    int pass = 0, fnd = 0;
    if ((strcmp(s6.student_username, s1.storestdnm) == 0))
    {
        HANDLE hConsolec = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsolec, FOREGROUND_RED);
        printf("\n\n\t\t\t\t\t\tTeacher Initial :  ");
        scanf("%s", stinitial);
        printf("\n\n\t\t\t\t\t\tSubject Name :  ");
        scanf("%s", stsubject);
        printf("\n\n\t\t\t\t\t\tEnrolment Key :  ");
        scanf("%s", sterolment);
        SetConsoleTextAttribute(hConsolec, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        FILE *uop = fopen("Enroll_stor", "r");
        while (fscanf(uop, "%s %s %s", ckinitial, cksubject, ckenrol) != EOF)
        {
            if ((strcmp(stinitial, ckinitial) == 0) && (strcmp(stsubject, cksubject) == 0) && (strcmp(sterolment, ckenrol) == 0))
            {
                pass = 1;
                break;
            }
        }
        fclose(uop);
        if (pass == 1)
        {

            system("cls");
            loading();
            system("cls");
            HANDLE hConsolec = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsolec, FOREGROUND_GREEN);
            printf("\n\n\t\t\t\t\t\tStudent Mail :  ");
            scanf("%s", s1.student_email);
            SetConsoleTextAttribute(hConsolec, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            FILE *mlck = fopen("student", "r");
            while (fscanf(mlck, "%s %s %s", umt, pst, mle) != EOF)
            {
                if ((strcmp(s1.student_email, mle) == 0))
                {
                    fnd = 1;
                    break;
                }
            }
            fclose(mlck);
            if (fnd == 1)
            {
                printf("\n\t\t\t\t\t\tEnroled successfully\n\n\n");
                FILE *enrooed3 = fopen(s6.student_username, "a");
                fprintf(enrooed3, " %s %s %s", stinitial, stsubject, sterolment);
                fclose(enrooed3);
                getch();
                coursinfo();
            }
            else
            {

                system("cls");
                printf("\t\t\t\t\t\tInvalid Mail ");
                HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                printf("\n\t\t\t\t\t\t press 1 for leaving Else press Enter\n\n\n");
                SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
                char chs;
                if (chs = getch() == 49)
                {
                    Studentportal();
                }
                coursinfo();
            }
        }
        else
        {
            system("cls");
            printf("\t\t\t\t\t\tInvalid Information ");
            system("cls");
            printf("\t\t\t\t\t\tIf you want to leave then press 5 ");
            char ch;
            while (1)
            {
                printf("");

                if (ch = getch() == 53)
                {
                    system("cls");
                    coursinfo();
                    break;
                }
                getch();
                assincours();
            }
        }
    }
    else
    {
        printf("\t\t\t\t\t\tInvalid Username ");
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("\n\t\t\t\t\t\t press 1 for leaving Else press Enter\n\n\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
        char chs;
        if (chs = getch() == 49)
        {
            Studentportal();
        }
        assincours();
    }
}
void coursedashbrd()
{
    char a[30];
    char b[30];
    char c[30];
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    FILE *stdse = fopen(s6.student_username, "r");
    int dd = fgetc(stdse);
    if (dd == EOF)
    {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("\n\n\t\t\t\t\t\t\t\t\t\t     User info: %s          ", s6.student_username);
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        printf("\n\n\t\t\t\t     You are not assign any course Yet         \n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);
    }
    else
    {
        printf("");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("\n\n\t\t\t\t\t\t\t\t\t\t     User info: %s         ", s6.student_username);
        printf("");
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
        printf("\n\t_______________Dashbord_______________\n\n\tTeacher Inetial    Subject name\n\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);
        while (fscanf(stdse, "%s %s %s", a, b, c) != EOF)
        {
            SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
            printf("\t     %s             \t%s\n", a, c);
            SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);
        }
        fclose(stdse);
    }
}
void coursinfo()
{
    system("cls");
    loading();
    system("cls");
    printf("");
    coursedashbrd();
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t1.Assign Course \n\t\t\t\t\t\t\t\t\t\t\t2.Attend a quize  \n\t\t\t\t\t\t\t\t\t\t\t3.Read lecture \n\t\t\t\t\t\t\t\t\t\t\t4.Exit\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    printf("\n\t\t\t\t\t\t\t\t\t\t\tChoss anyone ");
    char chois[3];
    scanf("%s", chois);
    if (strcmp(chois, "1") == 0)
    {
        assincours();
    }
    else if (strcmp(chois, "2") == 0)
    {
        AttedQuiz();
    }
    else if (strcmp(chois, "3") == 0)
    {
        Studentlecture();
    }
    else if (strcmp(chois, "4") == 0)
    {
        Studentportal();
    }
    else
    {
        getch();
        Studentportal();
    }
}
void Add_Course_request()
{
    system("cls");
    loading();
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("\n\n\t\t\t________________Send Request_______________\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    char stusrnme[30];
    char stuemail[100];
    char ckusrnme[30];
    char ckemail[100];
    char ckpass[30];
    char insubject[30];
    char cksubject[30];
    // char inusername[30];
    char inteacherinitial[30];
    char ckinteacherinitial[30];
    int std1 = 0, std2 = 0;
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf("\t\t\t\t\t\tStudent UserName :  ");
    scanf("%s", t1.inusername);
    // strcpy(t1.inusername,t1.stor_student_usrnm);
    printf("\n\n\t\t\t\t\t\tSubject:  ");
    scanf("%s", insubject);
    printf("\n\n\t\t\t\t\t\tTeacher Inetial :  ");
    scanf("%s", inteacherinitial);
    printf("\n\n\t\t\t\t\t\tEmail adress :  ");
    scanf("%s", stuemail);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    FILE *st1 = fopen(insubject, "r");
    while (fscanf(st1, "%s %s", ckinteacherinitial, cksubject) != EOF)
    {
        if ((strcmp(inteacherinitial, ckinteacherinitial) == 0) && (strcmp(insubject, cksubject) == 0))
        {
            std1 = 1;
            break;
        }
    }
    fclose(st1);
    if (std1 == 1)
    {
        FILE *st2 = fopen("student", "r");
        while (fscanf(st2, "%s %s %s", ckusrnme, ckpass, ckemail) != EOF)
        {
            if ((strcmp(t1.inusername, ckusrnme) == 0) && (strcmp(stuemail, ckemail)) == 0)
            {
                std2 = 1;
                break;
            }
        }
        fclose(st2);
        if (std2 == 1)
        {
            FILE *st3 = fopen("notification", "a");
            fprintf(st3, "%s %s %s\t", inteacherinitial, insubject, stuemail);
            fclose(st3);
            system("cls");
            loading();
            system("cls");
            printf("\n\n\t\t\t\t\t\t Send Request Successfully  ");
            getch();

            Studentportal();
        }
        else
        {
            system("cls");
            printf("\n\n\t\t\t\t\t\t Invalid Student Information  ");
            // HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
            printf("\n\t\t\t\t\t\t press 1 for leaving Else press Enter\n\n\n");
            SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
            char chs;
            if (chs = getch() == 49)
            {
                Studentportal();
            }
            Add_Course_request();
        }
    }
    else
    {
        system("cls");
        printf("\t\t\t\t\t\tUse valid initial  ");
        getch();
        Studentportal();
    }
}
int MaximizeOutputWindow(void)
{

    HWND ConsoleWindow;

    ConsoleWindow = GetConsoleWindow();

    ShowWindow(ConsoleWindow, SW_MAXIMIZE);

    return 0;
}
int ConsoleTitle(void)
{

    SetConsoleTitle("1st_Workplace");

    return 0;
}
int SetConsoleSize(void)
{

    system("mode CON: COLS=220");

    return 0;
}
int main()
{
    ConsoleTitle();
    // MaximizeOutputWindow();
    SetConsoleSize();
    system("cls");
    loading2();
    system("cls");
    system("COLOR A ");
    mainmenu();
}
