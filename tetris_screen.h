#define ANSI_COLOR_RED     "\x1b[41m\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[42m\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

typedef struct screen screen_t;
screen_t* create_screen();
void display_screen(screen_t* screen);
void free_screen(screen_t* screen);
void receive_block_L (screen_t* screen);
void block_drop (screen_t* screen);
