#include <bits/stdc++.h>
using namespace std;

int main()
{
    FILE *input_file, *output_file;
    char word[100], replace[100], read[100];

    input_file = fopen("input.txt", "r");
    output_file = fopen("output.txt", "w+");

    if (input_file == NULL || output_file == NULL)
    {
        cout << "Can't open file" << endl;
        return 0;
    }
    cout << "The contents of the file are shown below : " << endl
         << "*****************" << endl;
    while (true)
    {
        char c = fgetc(input_file);
        if (c == EOF)
            break;
        cout << c;
    }
    cout << endl
         << "*****************" << endl
         << "Enter the word to find: ";
    fgets(word, 100, stdin);
    word[strlen(word) - 1] = word[strlen(word)];

    cout << "Enter the word to replace it with: ";
    fgets(replace, 100, stdin);
    replace[strlen(replace) - 1] = replace[strlen(replace)];

    fprintf(output_file, "%s - %s\n", word, replace);

    rewind(input_file);
    int count = 0;
    while (!feof(input_file))
    {
        fscanf(input_file, "%s", read);
        if (strcmp(read, word) == 0)
        {
            count++;
            strcpy(read, replace);
        }
        fprintf(output_file, "%s ", read);
    }

    rewind(output_file);

    cout << "The contents of the file now are shown below : " << endl
         << "*****************" << endl;

    cout << count << " words replaced" << endl;
    while (true)
    {
        char c = fgetc(output_file);
        if (c == EOF)
            break;
        cout << c;
    }
    fclose(input_file);
    fclose(output_file);
    return 0;
}