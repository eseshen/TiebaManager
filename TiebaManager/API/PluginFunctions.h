﻿#pragma once
// 插件应至少实现Init和Uninit
//extern "C" __declspec(dllexport) bool __cdecl Init()

// 注册Listener
typedef bool(__cdecl *InitType)();
// 必须卸载所有Listener
typedef bool(__cdecl *UninitType)();
typedef CString(__cdecl *GetDescriptionType)();
typedef bool(__cdecl *OnConfigType)();
