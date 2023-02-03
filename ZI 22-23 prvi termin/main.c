#include <stdbool.h>
#include <ctype.h>
#include <string.h>
bool capitalizeName(char *name)
{
   int duljina = strlen(name);
   if (strlen(name) == 0)
   {
      return false;
   }
   for (int i = 0; i < n; i++)
   {
      if (i == 0 || name[i - 1] == ' ' || name[i - 1] == '-')
      {
         if (islower(name[i]))
         {
            name[i] = toupper(name[i]);
         }
      }
      else
      {
         if (isupper(name[i]))
         {
            name[i] = tolower(name[i]);
         }
      }
   }
   return true;
}
