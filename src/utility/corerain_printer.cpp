#include "utility/corerain_printer.h"

using namespace std;

void print_corerain()
{
   printf("\n");
   printf("       #########\n");
   printf("     ####     ####\n");
   printf("    ####        ####                                                                                                ####\n");
   printf("   ####          ####                                                                                               ####\n");
   printf("  ####           #####                                                                                              ####\n");
   printf("  ####            ####\n");
   printf(" ####             ###\n");
   printf(" ####             ###\n");
   printf("####              ##\n");
   printf("####                         ######         #####   ##   ##       ######       #####   ##   ##        ##### ###   ######       #####     ####\n");
   printf("####                       ###    ###     ### ############      ###  #####   ### ############       ###   ####      ####      ## ####  ######\n");
   printf("####                      ###      ###    ##  ############     ###    #####  ##  ############      ###     ##       ####     ##   ### ##  ####\n");
   printf("####                     ####       ###       ####            ###      ####      ####             ###      ##       ####          ### ##  ####\n");
   printf("####                     ###        ####      ###             ###      ####      ###             ####      ##       ####          #####   ####\n");
   printf("####                    ####        ####      ###            ####      ####      ###             ####     ###       ####          #####   ####\n");
   printf(" ###                    ####        ####      ###            ####      ###       ###            ####      ###       ####          ####    ####\n");
   printf(" ####                   ####        ####      ###            ####     ###        ###            ####      ###       ####          ####    ####\n");
   printf("  ###              ##   ####        ####     ####            #### ######        ####            ####      ###       ####          ####    ####\n");
   printf("  ###              ###  ####        ####     ####            ####               ####            ####     ####       ####          ####    ####\n");
   printf("   ###             ###   ###        ###      ####             ####              ####            ####    #####       ####          ###     ####\n");
   printf("    ###           ####   ####      ####      ####             ####              ####            ####    #####       #### ##       ###     ####\n");
   printf("     ###         ###      ###      ###       ####              ####             ####             ####  ## ####      #### ##       ###     #### ##\n");
   printf("      #####    ####        ####   ###        ####               #####  ##       ####             #### ##  ######    ######        ####    ######\n");
   printf("         #######             ######          ######               ######        ######            #####    ####     #####       ########   ####\n");
   printf("\n");

}

void print_program_info(const char *prog_name, int logo)
{

  time_t t = time(NULL);
  struct tm tm = *localtime(&t);
  if(logo)
  {
    printf("  ####    ####    #####    #####  #####     ###   ##  ##  #\n");
    printf(" ##      ##  ##   ##  ##   ##     ##   ##  #####  ##  ##  #\n");
    printf("##      ##    ##  ##  ##   ####   ##   ##  #  ##  ##  ### #\n");
    printf("##      ##    ##  #####    ##     #####    #  ##  ##  #####\n");
    printf("##      ##    ##  ## ##    ##     ## ##    #####  ##  # ###\n");
    printf(" ##      ##  ##   ##  ##   ##     ##  ##   #  ##  ##  #  ##\n");
    printf("  ####    ####    ##  ###  #####  ##  ###  #  ##  ##  #   #\n");
    printf("\n");
    printf("######  #####    ####  ##   ##  ##  #    ####    ##       ####      ####   ##  #####   ####\n");
    printf("  ##    ##      ##     ##   ##  ##  #   ##  ##   ##      ##  ##    ##      ##  ##     ##\n");
    printf("  ##    ####   ##      ##   ##  ### #  ##    ##  ##     ##    ##  ##       ##  ####   ###\n");
    printf("  ##    ##     ##      #######  #####  ##    ##  ##     ##    ##  ##  ##   ##  ##      ###\n");
    printf("  ##    ##     ##      ##   ##  # ###  ##    ##  ##     ##    ##  ##   ##  ##  ##       ###\n");
    printf("  ##    ##      ##     ##   ##  #  ##   ##  ##   ##      ##  ##    ##  ##  ##  ##        ##\n");
    printf("  ##    #####    ####  ##   ##  #   #    ####    #####    ####      #####  ##  #####  ####\n");
    printf("\n");
  }

  printf("[CORERAIN] Date: %d/%d/%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
  printf("[CORERAIN] Time: %d:%d:%d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
  printf("[CORERAIN] Program: %s\n", prog_name);
  printf("\n");
}

