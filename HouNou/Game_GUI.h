#pragma once



#include "D3DGUIClass.h"


//创建四个GUI类对象，分别代表四个页面
extern D3DGUIClass		*g_MainGUI;   //主窗口
extern D3DGUIClass		*g_StartGUI;  //游戏开始窗口
extern D3DGUIClass		*g_MultiGUI;   //游戏载入窗口
extern D3DGUIClass		*g_OptionGUI; //游戏设置窗口

extern D3DGUIClass		*g_WinGUI;    //胜利窗口
extern D3DGUIClass		*g_LoseGUI;   //失败窗口
extern D3DGUIClass		*g_HelpGUI;   //帮助窗口

extern int				g_MainGUIFontID;	//  GUI中字体对象的ID
extern int				g_StartGUIFontID;	//  GUI中字体对象的ID
extern int				g_LoadGUIFontID;	//  GUI中字体对象的ID
extern int				g_OptionGUIFontID;	//  GUI中字体对象的ID

extern int				g_WinGUIFontID;       //  GUI中字体对象的ID
extern int				g_LoseGUIFontID;       //  GUI中字体对象的ID
extern int				g_HelpGUIFontID;       //  GUI中字体对象的ID

extern int				g_currentGUI;       //一个当前的GUI标识

bool GUI_Init();
void GUICallback(int id, int state);
void GUI_CleanUp();
void GUI_InputUpdate(D3DGUIClass* gui);