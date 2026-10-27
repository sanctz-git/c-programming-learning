#include<stdio.h>
int main()
{
    char s[100005];
    scanf("%s", s);
    char st[100005];
    int top = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st[++top] = s[i];
        }
        else 
        {
            if (top == 0) { printf("NO\n"); return 0; }
            
            if (s[i] == ')' && st[top] == '(' || s[i] == ']' && st[top] == '[' || s[i] == '}' && st[top] == '{')
            {
                top--;
            }
            else {printf("NO\n"); return 0;}
        }
        
    }
    
    if (!top) printf("YES\n");
    else printf("NO\n");
    
    return 0;
}