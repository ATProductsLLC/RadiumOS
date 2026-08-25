#ifndef BOOTSPLASH_H
#define BOOTSPLASH_H

/**
 * @file bootsplash.h
 * @brief Terminal-based boot loading screen for RadiumOS
 *
 * Renders a centered ASCII-art radiation logo, the "RadiumOS" wordmark,
 * and a copyright line pinned to the bottom-left corner of the screen —
 * the terminal equivalent of a classic OS loading screen.
 */

/**
 * @brief Draw the full boot splash screen.
 *
 * Clears the terminal, then draws the centered logo/wordmark and the
 * bottom-left copyright line. Does not wait for input or delay on its
 * own — call boot_splash_hold() afterwards if a pause is wanted.
 */
void show_boot_splash(void);

/**
 * @brief Command handler so the splash can be re-shown from the shell.
 */
void bootsplash_command(int argc, char *argv[]);

#endif // BOOTSPLASH_H