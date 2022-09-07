/* Написать функцию void char_cesar(char * ch, int shift), которая изменяет переданный ей символ ch по алгоритму Цезаря с ключом shift. */

void char_cesar(char * ch, int shift){
  *ch += shift;
  if (*ch > 'z') *ch -= 26;
}
