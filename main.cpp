#include <iostream>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro.h>
#include <unistd.h>


int main(int argc, char *argv[])
{
    ALLEGRO_DISPLAY *display = nullptr;

    if(!al_init()){
        al_show_native_message_box(nullptr, nullptr,nullptr,"Failed to init allegro",nullptr,0);
        return -1;
        //JIHDZUHDZUHDUZDIUHZDHHZZIUHDZIUHDIUZHDZIUHDZDIZUD
    }

    ///Test push

    display = al_create_display(1920,1080);

    if(!display){
        al_show_native_message_box(nullptr,nullptr,nullptr,"Failed to init allegro",nullptr,0);
        return -1;
    }

    sleep(5);

    al_destroy_display(display);

    return 0;
}



