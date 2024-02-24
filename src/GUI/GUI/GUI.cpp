#include "GUI.h"

LPCSTR GUI::lpWindowName = "ImGui + CMake";
ImVec2 GUI::vWindowSize = {350, 75 };
ImGuiWindowFlags GUI::WindowFlags = 0;
bool GUI::bDraw = true;

void GUI::Active()
{
    bDraw = true;
}

bool GUI::isActive()
{
    return bDraw == true;
}

void GUI::Draw()
{
    if (isActive())
    {
        ImGui::SetNextWindowSize(vWindowSize, ImGuiCond_Once);
        ImGui::SetNextWindowBgAlpha(1.0f);
        ImGui::Begin(lpWindowName, &bDraw, WindowFlags);
        {

        }
        ImGui::End();
    }
}