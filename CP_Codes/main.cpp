#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
  char str[100];
  fgets(str, 100, stdin);

  char tokens[100][100];

  int ind = 0; // koyta token ache tar count
  char *p = strtok(str, " ");
  while (p != NULL) {
    //storing each string in the token table
    int j = 0;
    for (j = 0; p[j + 1] != '\0'; j++) {
      tokens[ind][j] = p[j];
      tokens[ind][j + 1] = '\0';
    }
    if ((p[j] >= 'a' && p[j] <= 'z') || (p[j] >= 'A' && p[j] <= 'Z')) {
      tokens[ind][j] = p[j];
      tokens[ind][j + 1] = '\0';
    }
    ind++;

    p = strtok(NULL, " ");
  }

  int max_frequency = 0;
  char string_with_mx_freq[100];

  for (int i = 0; i < ind; i++) {
    int ageei_ki_peyechi = 0;
    for (int j = 0; j < i; j++) {
      if (strcmp(tokens[i], tokens[j]) == 0) {
        ageei_ki_peyechi = 1;
        break;
      }
    }
    if (ageei_ki_peyechi == 1) { // agei peye gechi, hiseb kora shes
      continue; //tai
    }
    else { // agee hiseb kora hoyni
      int frequency_of_current_word = 1;
      for (int j = i + 1; j < ind; j++) {
        if (strcmp(tokens[i], tokens[j]) == 0) { //pawa geche pore
          frequency_of_current_word++;
        }
      }

      //frequency count shes hole current word er frequency beshi hole answer update korte hobe
      if (max_frequency < frequency_of_current_word) {
        max_frequency = frequency_of_current_word;
        strcpy(string_with_mx_freq, tokens[i]);
      }
    }
  }
  printf("String %s has a max frequency of %d\n", string_with_mx_freq, max_frequency);

}