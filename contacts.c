 #include <stdio.h> 

 typedef struct Student
    {
        char name[20];
        int score;
    } Student;
    
    Student s[105];

 int main()
 {
    int n = 0;
    FILE *fp;

    fp = fopen("cobtacts.txt", "r");
    if (fp != NULL)
    {
        while (fscanf(fp,"%s %d", s[n].name, &s[n].score) == 2)
            n++;
        fclose(fp);
    }
    
    if (n == 0)
    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%s", s[i].name);
            scanf("%d", &s[i].score);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (s[i].score < s[j].score)
            {
                Student t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s %d\n",s[i].name, s[i].score);
    }
    
    fp = fopen("cobtacts.txt", "w");
    if (fp == NULL) { printf("open fail\n"); return 0; }

    for (int i = 0; i < n; i++)
        fprintf(fp, "%s %d\n",s[i].name, s[i].score);

    fclose(fp);
    
    return 0;
    }