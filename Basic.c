/*

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n + 5];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int f[10000] = {0};

    for (int i = 0; i < n; i++)
    {
        f[a[i]] = 1;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", f[i]);
    }

    int m;
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        int x;
        scanf("%d", &x);

        printf("%d ", x);

        if (f[x] == 1)
        {
            printf("ache \n");
        }
        else
        {
            printf("nai\n");
        }
    }
}

*/

/*

****search unique character****

#include <stdio.h>
#include <string.h>

int main()
{
    char str[10] = "apple";
    int f[26]={0};
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        char ch = str[i];

        int index = ch - 'a';

        f[index] = 1;
    }

int count =0;

    for (int i =0; i<26;i++){
        printf("%c %d \n", i+'a', f[i]);
        count+=f[i];

    }

    printf("%d \n", count);


    return 0;
}

*/

#include <stdio.h>
int f[1000005];

int main(){
    int n, m; 

    scanf("%d %d", &n, &m);

    int a[n+5];

for (int i =0; i<n; i++){
    scanf("%d", &a[i]);
}

    return 0; 
}