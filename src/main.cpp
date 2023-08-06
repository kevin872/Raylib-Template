#include "../include/raylib.h"

const int screenWidth = 1200;
const int screenHeight = 800;

int main(void) {

    InitWindow(screenWidth, screenHeight, "Game");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("Score: todo()!", 20, 20, 20, BLACK);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}

