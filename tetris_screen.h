typedef struct screen screen_t;
screen_t* create_screen();
void free_screen(screen_t* screen);
void receive_block_L (screen_t* screen);
