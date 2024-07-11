#include <raylib.h>

int main()
{
	const int screenWidth = 800;
	const int screenHeight = 450;

	SetConfigFlags(FLAG_WINDOW_TRANSPARENT); // Configures window to be transparent
	InitWindow(screenWidth, screenHeight, "Transparent");
	SetWindowPosition(GetMonitorWidth(0) / 2 - screenWidth / 2, GetMonitorHeight(0) / 2 - screenHeight / 2);
	SetWindowState(FLAG_WINDOW_UNDECORATED); // Hide border/titlebar; omit if you want them there.

	RenderTexture2D target = LoadRenderTexture(screenWidth, screenHeight);

	SetTargetFPS(60);

	while(!WindowShouldClose())
	{
		BeginTextureMode(target);
		
		ClearBackground(BLANK);
		DrawRectangle(50, 50, 200, 100, {255, 0, 0, 192}); // Red at 75% opacity
		EndTextureMode();


		BeginDrawing();
		ClearBackground(BLANK);
		DrawTexturePro(target.texture, { 0.0f, 0.0f, 800.0f, 450.0f }, { 0.0f, 0.0f, 800.0f, 450.0f },
			{ 0.f, 0.f }, 0.0f, WHITE);
		EndDrawing();
	}

	UnloadRenderTexture(target);
	CloseWindow();
}