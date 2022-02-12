/*
** EPITECH PROJECT, 2021
** window
** File description:
** UwU
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "framebuffer.h"

static sfRenderWindow *create_renderwindow(unsigned int x, unsigned int y
, unsigned int bpp, char *title)
{
    sfVideoMode video_mode = {x, y, bpp};
    return (sfRenderWindow_create(video_mode, title, sfResize | sfClose, NULL));
}

void my_put_pixel (framebuffer_t *framebuffer, unsigned int x, unsigned int y,
sfColor color) {

}

int main (void)
{
    sfRenderWindow *window = create_renderwindow(800, 600, 32, "My window");
    sfEvent event;
    sfTexture *texture;
    sfSprite *sprite = sfSprite_create();
    sfRectangleShape *rect;
    sfVector2f size = {800, 600};
    sfColor colorRed = {255, 10, 10, 255};
    sfVector2f position = {0, 255};
    rect = sfRectangleShape_create();
    sfRectangleShape_setSize(rect, size);
    sfRectangleShape_setFillColor(rect, colorRed);
    sfRectangleShape_setPosition(rect, position);

    while (sfRenderWindow_isOpen(window)){
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(window);
            }
        }
        sfRenderWindow_display(window);
    }
}