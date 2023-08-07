#include <stdio.h>
int main()
{

    // FILE *fptr;
    // fptr = fopen("text.txt", "r"); // Reading a file
    // fclose(fptr);                  // closinf a file

    // "r"=open to read
    // "rb"=open to read in binary
    // "w"=open to write
    // "wb"=open to write in binary
    // "a"=open to append

    // FILE *fptr;
    // // fptr = fopen("newtext.txt", "r"); // if we write "w" instead of "r" since there is no such file then by using "w" it will create a new file
    // fptr = fopen("newtext.txt", "w");
    // if (fptr == NULL)
    // {
    //     printf("file dosen't exist");
    // }
    // else
    // {
    //     fclose(fptr);
    // }

    // READING FROM A FILE
    // char c[10];
    // FILE *fptr;
    // fptr = fopen("newtext.txt", "r");
    // fscanf(fptr, "%s", &c);             //fscanf IS USED TO READ FROM A FILE
    // printf("The character =%s", c);
    // fclose(fptr);

    // // WRITING TO A FILE
    // char str[10];
    // FILE *fptr;
    // fptr = fopen("newtext.txt", "w");  //here "w" command will clear and will replace the content of the file
    // fprintf(fptr, "%s", "world");

    //  APPENDING A FILE
    // char str[10];
    // FILE *fptr;
    // fptr = fopen("newtext.txt", "a"); // here "a" command will add the content passed to the file without clearing the content of the file
    // fprintf(fptr, "%s", "world");

    // fgetc and fputc  (read & write a char)
    //  fgetc(fptr)  fputc('A',fptr)
    // char str[10];
    // FILE *fptr;
    // fptr = fopen("newtext.txt", "w");
    // // printf("%c", fgetc(fptr));
    // printf("%c", fputc('W', fptr));

    // EOF (END OF WHILE used to denote the user that the string has ended)
    FILE *fptr;
    fptr = fopen("newtext.txt", "r");
    char ch;
    ch=fgetc(fptr);
    while (ch!=EOF )
    {
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    

    // int n;
    // FILE *fptr;
    // fptr = fopen("newtext.txt", "r");
    // for (int i = 0; i < 5; i++)
    // {
    //     fscanf(fptr, "%d", &n);
    //     printf("%d", n);
    // }

    return 0;
}