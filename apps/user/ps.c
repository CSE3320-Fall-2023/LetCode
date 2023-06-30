#include "app.h"
#include "../grass/process.h"

int main(int argc, char** argv) {

    int i;
    struct process * process_table = grass->proc_get_proc_set();
    
    printf("PID\tSTATUS\tCOLOR\n");
    for( i = 0; i < MAX_NPROCESS; i++ )
    {
      if( process_table[i].pid )
      {
        printf("%d\t%d\t%d\n", process_table[i].pid, process_table[i].status, process_table[i].color);
      }
    }

    return 0;
}