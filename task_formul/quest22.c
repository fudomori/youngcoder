/* Написать функцию void char_register(char * ch, int fl), которая переводит переданный ей символ ch (символ латинского алфавита) в заданный переменной fl регистр: 0 — нижний, 1 — верхний. */

void char_register(char * ch, int fl){
  if ((*ch >= 'A' && *ch <= 'Z') || (*ch >= 'a' && *ch <= 'z'))
    if (fl) {
      if (*ch >= 'a') *ch -= 32;
    } else {
      if (*ch <= 'Z') *ch += 32;
    }

    /* *ch = (fl)? toupper(*ch):tolower(*ch);  */
}
