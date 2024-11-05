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
        int index = ch - 'a';
        f[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (f[i] >0)
        {
            printf("%c : %d \n", i + 'a', f[i]);
        }
    }
    return 0;
}

 */
// #include <stdio.h>

// int main() {
//     int n, m, x;
//     int found = 0;  


//     scanf("%d %d", &n, &m);
    
//     int a[n][m];


//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     scanf("%d", &x);


//     for (int i = 0; i < n && !found; i++) {
//         for (int j = 0; j < m; j++) {
//             if (a[i][j] == x) {
//                 found = 1; 
//                 break; 
//             }
//         }
//     }

//     if (found) {
//         printf("will not take number\n");
//     } else {
//         printf("will take number\n");
//     }

//     return 0;
// }