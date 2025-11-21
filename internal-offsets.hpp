#include <cstdint>
#include <vector>
#include <iostream>
#include <atomic>
#include <Windows.h>

// Roblox-version: version-fdda949d95e447e3

struct Proto;
struct lua_State;

typedef enum { SUCCESS, YIELD, ERR } ScriptResume_Result;

struct WeakThreadRef
{
    std::atomic<int32_t> Refs;
    lua_State* L;
    int32_t ThreadRef;
    int32_t ObjectId;
    int32_t Unk1;
    int32_t Unk2;

    WeakThreadRef(lua_State* L) : Refs(0), L(L), ThreadRef(0), ObjectId(0), Unk1(0), Unk2(0) {}
};

struct DebuggerResult
{
    int32_t Result;
    int32_t Unk[4];
};

#define REBASE(x) (x + reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr)))

namespace Offsets {

inline uintptr_t FireMouseHoverEnter = REBASE(0x20AEE10);
inline uintptr_t FireMouseHoverLeave = REBASE(0x20AEFB0);
inline uintptr_t FireTouchInterest = REBASE(0x240F370);
inline uintptr_t FireClickDetector = REBASE(0x20AD870);
inline uintptr_t GetContextObject = REBASE(0x131F890);
inline uintptr_t GetGlobalState = REBASE(0x12E6160);
inline uintptr_t GetIdentityptr = REBASE(0x6FB67E8);
inline uintptr_t GetCapabilites = REBASE(0x3D743B0);
inline uintptr_t GetLuaState = REBASE(0xFE2E20);
inline uintptr_t GetProperty = REBASE(0xE6BDB0);
inline uintptr_t GetIdentityStruct = REBASE(0x33730);
inline uintptr_t GetValues = REBASE(0xFF6AF0);
inline uintptr_t Encrypt_State = REBASE(0x12E6160);
inline uintptr_t OpCodeLookUpTable = REBASE(0x5AB1800);
inline uintptr_t IdentityPtr = REBASE(0x1366790);
inline uintptr_t Impersonator = REBASE(0x3D74460);
inline uintptr_t KTable = REBASE(0x6F49EA0);
inline uintptr_t LockViolationInstanceCrash = REBASE(0x6624670);
inline uintptr_t LuaC_step = REBASE(0x3967CF0);
inline uintptr_t LuaD_throw = REBASE(0x396B6E0);
inline uintptr_t LuaL_register = REBASE(0x39B1410);
inline uintptr_t LuaO_NilObject = REBASE(0x5181A13);
inline uintptr_t luaH_Dummynode = REBASE(0x5B2B7E0);
inline uintptr_t luaA_toobject = REBASE(0x395C6A0);
inline uintptr_t luaL_checklstring = REBASE(0x39600C0);
inline uintptr_t luaF_freeproto = REBASE(0x39C0650);
inline uintptr_t luaF_newproto = REBASE(0x39C0190);
inline uintptr_t LuaVM_Load = REBASE(0x11783B0);
inline uintptr_t Auxopen = REBASE(0x395CE30);
inline uintptr_t lua_openbase = REBASE(0x2C896F0);
inline uintptr_t Lua_rawcheckstack = REBASE(0x395CB00);
inline uintptr_t Lua_pushvfstring = REBASE(0x395D640);
inline uintptr_t Lua_errorL = REBASE(0x395EE00);
inline uintptr_t Lua_argerrorL = REBASE(0x395E2E0);
inline uintptr_t LuaL_findtable = REBASE(0x3962710);
inline uintptr_t LuaL_where = REBASE(0x395E480);
inline uintptr_t LuaG_runerrorL = REBASE(0x3968DA0);
inline uintptr_t auxinfo = REBASE(0x3E1F7F5);
inline uintptr_t Lua_xmove = REBASE(0x395CE30);
inline uintptr_t LuaD_rawrunprotected = REBASE(0x396B6B0);
inline uintptr_t call_binTM = REBASE(0x39B5000);
inline uintptr_t luaV_gettable = REBASE(0x39B2FF0);
inline uintptr_t luaV_settable = REBASE(0x39B3610);
inline uintptr_t Lua_pushfstringL = REBASE(0x395D6B0);
inline uintptr_t LuaO_chunkid = REBASE(0x39C6970);
inline uintptr_t LuaL_checkany = REBASE(0x3991BA0);
inline uintptr_t LuaL_checktype = REBASE(0x395E450);
inline uintptr_t LuaL_pushresult = REBASE(0x39640B0);
inline uintptr_t LuaL_newmetatable = REBASE(0x39600C0);
inline uintptr_t node = REBASE(0x5B2B808);
inline uintptr_t Luau_Execute = REBASE(0x3972C40);
inline uintptr_t Pseudo2addr = REBASE(0x395C5E0);
inline uintptr_t Print = REBASE(0x1A06320);
inline uintptr_t PushInstance = REBASE(0x1366790);
inline uintptr_t RaiseEventInvocation = REBASE(0x19C73D0);
inline uintptr_t RawTaskScheduler = REBASE(0x78E2E28);
inline uintptr_t RequestCode = REBASE(0xD2AE00);
inline uintptr_t ScriptContextResume = REBASE(0x13180F0);
inline uintptr_t SetProtoCapabilities = REBASE(0x366F3B0);
inline uintptr_t VariantCastInt = REBASE(0x19CDAE0);
inline uintptr_t VariantCastFloat = REBASE(0x19CE320);
inline uintptr_t CastArgs = REBASE(0xFF6AF0);
inline uintptr_t Register = REBASE(0x255A0C0);
inline uintptr_t TaskDefer  = REBASE(0x1567DC0);
inline uintptr_t TaskDelay = REBASE(0x1568640);
inline uintptr_t TaskDesync = REBASE(0x15671A0);
inline uintptr_t TaskCancel = REBASE(0x1568CB0);
inline uintptr_t FireProximityPrompt = REBASE(0x210D980);
inline uintptr_t FireRightMouseClick = REBASE(0x20ADA10);
inline uintptr_t FakeDataModelPointer = REBASE(0x77A01C8);

namespace State {
    inline uintptr_t RequireBypass = 0x878;
    inline uintptr_t ScriptContext = 0x3F0;
    inline uintptr_t GlobalState = 0x140;
    inline uintptr_t DecryptState = 0x380;
    inline uintptr_t Children = 0x70;
    inline uintptr_t Identity = 0x78;
    inline uintptr_t Capabilities = 0x68;

    namespace FFlags {
        inline uintptr_t Appdatainfo = REBASE(0x779FE78);
        inline uintptr_t FlogDataBank = REBASE(0x7560C98);
        inline uintptr_t EnableLoadModule = REBASE(0x661EB88);
        inline uintptr_t WindowsRealtimeProtocolEnabled = REBASE(0x65FBFA0);
        inline uintptr_t RomarkStartWindowsClientFullScreen = REBASE(0x65FC1F0);
        inline uintptr_t ValidateLauncherPercent = REBASE(0x6F0D284);
        inline uintptr_t BootstrapperVersionNumber = REBASE(0x65DF0A4);
        inline uintptr_t InferredCrashReportingHundredthsPercent = REBASE(0x65DF098);
        inline uintptr_t ClientWebBrowserCompatibleVersion = REBASE(0x65DF09C);
        inline uintptr_t HardwareDebugString = REBASE(0x65DE238);
        inline uintptr_t SendHardwareStatHundredthsPercentageThr = REBASE(0x65DE238);
        inline uintptr_t Auth2Cookie = REBASE(0x65FC060);
        inline uintptr_t WindowsRecursiveMessagePumpReducedFrame = REBASE(0x65DE23C);
        inline uintptr_t WindowsReportAbuseNotification = REBASE(0x65FC030);
        inline uintptr_t WindowsLaunchType = REBASE(0x65FC130);
        inline uintptr_t LocaleNameToLCID = REBASE(0x52962A0);
        inline uintptr_t WebView2Info = REBASE(0x65FC290);
        inline uintptr_t EnableOpenExternalBrowserWin32 = REBASE(0x65FBFC0);
        inline uintptr_t Win32BacktraceWindowsLaunchType = REBASE(0x65FC180);
        inline uintptr_t Win32SearchBoxInAddFriend = REBASE(0x65FBF40);
        inline uintptr_t BootstrapperCycleDetectionMaxInterval = REBASE(0x65DF0A0);
        inline uintptr_t CLI47687 = REBASE(0x65FC240);
        inline uintptr_t WndProcessCheck = REBASE(0x65FC140);
        inline uintptr_t GetFFlag = REBASE(0x4CF0C00);
        inline uintptr_t SetFFlag = REBASE(0x42F4430);
    }
}

namespace Signatures {
    inline auto Print = reinterpret_cast<uintptr_t(__fastcall*)(int, const char*, ...)>(Offsets::Print);
    inline auto PushInstance = reinterpret_cast<uintptr_t* (__fastcall*)(lua_State*, uintptr_t)>(Offsets::PushInstance);
    inline auto RequestCode = reinterpret_cast<uintptr_t(__fastcall*)(uintptr_t, uintptr_t)>(Offsets::RequestCode);
    inline auto FireProximityPrompt = reinterpret_cast<uintptr_t* (__thiscall*)(uintptr_t)>(Offsets::FireProximityPrompt);
    inline auto FireRightMouseClick = reinterpret_cast<void(__fastcall*)(uintptr_t, float, uintptr_t)>(Offsets::FireRightMouseClick);
    inline auto FireMouseHoverEnter = reinterpret_cast<void(__fastcall*)(uintptr_t, uintptr_t)>(Offsets::FireMouseHoverEnter);
    inline auto FireMouseHoverLeave = reinterpret_cast<void(__fastcall*)(uintptr_t, uintptr_t)>(Offsets::FireMouseHoverLeave);
    inline auto FireTouchInterest = reinterpret_cast<void(__fastcall*)(uintptr_t, uintptr_t, uintptr_t, bool, bool)>(Offsets::FireTouchInterest);
    inline auto GetState = reinterpret_cast<uintptr_t(__fastcall*)(uintptr_t, uint64_t*, uint64_t*)>(Offsets::GetGlobalState);
    inline auto GetProperty = reinterpret_cast<uintptr_t* (__thiscall*)(uintptr_t, uintptr_t*)>(Offsets::GetProperty);
    inline auto GetIdentityStruct = reinterpret_cast<uintptr_t(__fastcall*)(uintptr_t)>(Offsets::GetIdentityStruct);
    inline auto KTable = reinterpret_cast<uintptr_t*>(Offsets::KTable);
    inline auto Impersonator = reinterpret_cast<void(__fastcall*)(void*, void*, const void*, uint64_t, uint64_t)>(Offsets::Impersonator);
    inline auto CastInt = reinterpret_cast<void(__fastcall*)(void*)>(Offsets::VariantCastInt);
    inline auto CastFloat = reinterpret_cast<void(__fastcall*)(void*)>(Offsets::VariantCastFloat);
    inline auto TaskDefer = reinterpret_cast<int(__fastcall*)(lua_State*)>(Offsets::TaskDefer);
    inline auto ScriptResume = reinterpret_cast<int(__fastcall*)(uintptr_t, DebuggerResult*, WeakThreadRef**, int32_t, bool, const char*)>(Offsets::ScriptContextResume);
    inline auto Luau_Execute = reinterpret_cast<void(__fastcall*)(lua_State*)>(Offsets::Luau_Execute);
    inline auto LuaD_Throw = reinterpret_cast<void(__fastcall*)(lua_State*, int)>(Offsets::LuaD_throw);
    inline auto LuaVMLoad = reinterpret_cast<uintptr_t(__fastcall*)(int64_t, std::string*, const char*, int)>(Offsets::LuaVM_Load);
}

} 
