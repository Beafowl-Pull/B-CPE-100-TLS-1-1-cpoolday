/*
** EPITECH PROJECT, 2021
** exemple
** File description:
** UwU
*/

#include <SFML/Graphics.h>
#include <stdlib.h>

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{

}

void framebuffer_destroy(framebuffer_t *framebuffer)
{

}

void my_put_pixel(framebuffer_t *framebuffer, unsigned int x, unsigned int y, sfColor color)
{

}

int main()
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow* window;
    sfTexture* texture;
    sfSprite* sprite;
    sfEvent event;
    framebuffer_t *framebuffer;
    window = sfRenderWindow_create(mode, "SFML window", sfResize | sfClose, NULL);
    if (!window)
        return EXIT_FAILURE;
    framebuffer = framebuffer_create(800, 600);
    texture = sfTexture_create(800, 600);
    if (!texture)
        return EXIT_FAILURE;
    sprite = sfSprite_create();
    /* Link the texture to the sprite */
    sfSprite_setTexture(sprite, texture, sfTrue);
    /* Limit the window framerate */
    sfRenderWindow_setFramerateLimit(window, 30);
    /* Start the game loop */
    while (sfRenderWindow_isOpen(window))
    {
        /* Process events */
        while (sfRenderWindow_pollEvent(window, &event))
        {
            /* Close window : exit */
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        /* Draw the pixel at (100,100) in the framebuffer */
        my_put_pixel(framebuffer, 100, 100, sfRed);
        /* Update the texture from the pixels array of the framebuffer */
        sfTexture_updateFromPixels(texture, framebuffer->pixels, 800, 600, 0, 0);
        /* Clear the screen */
        sfRenderWindow_clear(window, sfBlack);
        /* Draw the sprite */
        sfRenderWindow_drawSprite(window, sprite, NULL);
        /* Update the window */
        sfRenderWindow_display(window);
    }
    /* Cleanup resources */
    framebuffer_destroy(framebuffer);
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
    sfRenderWindow_destroy(window);
    return EXIT_SUCCESS;
}
