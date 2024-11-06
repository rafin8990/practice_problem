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

// V. Frequency Array
/*
#include <stdio.h>
int f[100005];

int main()
{

    int n, m;
    scanf("%d %d", &n, &m);



    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        f[x] += 1;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", f[i]);
    }
    return 0;
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

/*

#include <stdio.h>
int f[1000005];

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    int a[n + 5];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        f[a[i]] += 1;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", f[i]);
    }

    return 0;
}

*/

/*

#include <stdio.h>

int main()
{
    int arr[3][5];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("row= %d column=%d || memory=%d\n", i, j, &arr[i][j]);
        }
    }
    return 0;
}

*/

/*

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);



    int a[n + 5][m + 5];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}


*/

/*



#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int m[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    int element = m[0][0];
    int flag = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (m[i][j] != element)
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                if (m[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag==0){
            break;
        }
    }

    if (flag == 1)
    {
        printf("Scelar");
    }
    else
    {
        printf(" Not Scelar");
    }

    return 0;
}

*/

/*



#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int m[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    int main_diagonal = 0;
    int second_diagonal = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            if (i == j)
            {
                main_diagonal += m[i][j];
            }
            if (i + j == n - 1)
            {
                second_diagonal += m[i][j];
            }
        }
    }

    int difference = abs(main_diagonal-second_diagonal);

    printf("%d\n", difference);
}

*/



// J. Count Letters
/* 
#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000000];
    scanf("%s", s);

    int length = strlen(s);
    int f[26] = {0};

    for (int i = 0; i < length; i++)
    {
        char ch = s[i] ;
        // printf("%c \n", ch);
        int index = ch - 'a';
        f[index]+=1;
    }

    for (int i = 0; i < 26; i++)
    {
        // printf("%d \n", f[i]);
        if (f[i] >0)
        {
            printf("%c : %d \n", i + 'a', f[i]);
        }
    }
    return 0;
}

 */

/* 

//Problem One Assignment
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int m[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    int flag = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                if (m[i][j] != 1) {
                    flag = 0;
                    break;
                }
            } else {
                if (m[i][j] != 0) {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 0) {
            break;
        }
    }

    if (flag == 1) {
        printf("YES\n"); 
    } else {
        printf("NO\n");   
    }

    return 0;
}

 */

/* 
//problem two Assignment

#include <stdio.h>

int main() {
    int n, m, x;
    scanf("%d %d %d", &n, &m, &x);

    int matrix[n][m];
    int count[1001] = {0}; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int element;
            scanf("%d", &element);
            matrix[i][j] = element;
            count[element]++; 
        }
    }

    for (int i = 0; i < x; i++) {
        int number;
        scanf("%d", &number);
        printf("%d\n", count[number]);  
    }
    return 0;
}

 */
/* 

//problem 3 assignment
#include <stdio.h>



int main() {
    int n;
    scanf("%d", &n);

  

    int arr[n];
    int f[100000] = {0}; 

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        f[arr[i]]++;  
    }

    int unique = 0;
    for (int i = 0; i <= 100000; i++) {
        if (f[i] == 1) {
            unique++;
        }
    }

    printf("%d\n", unique); 

    return 0;
}

 */


/* 
// problem four assignment

#include <stdio.h>
#include <stdlib.h>  

int main() {
    int N;
    scanf("%d", &N); 
    int *arr = (int *)malloc(sizeof(int)); 

    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);  
        arr = (int *)realloc(arr, (i + 1) * sizeof(int));
        arr[i] = num;
    }
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}

 */

/* 

// problem 5 assignment
#include <stdio.h>
#include <math.h>

int main() {
    int A, B;
    int *p = &A, *q = &B;  
    

    scanf("%d %d", p, q);
    

    int diff = abs(*p - *q);
    
    printf("%d\n", diff);

    return 0;
}

 */