#include <cstdint>
#include <vector>
#include <iostream>
#include <atomic>
#include <Windows.h>

// Roblox-version: version-1849ecbff0824113

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

inline uintptr_t FireMouseHoverEnter     = REBASE(0x2181870);
    inline uintptr_t FireMouseHoverLeave     = REBASE(0x2181A10);
    inline uintptr_t FireTouchInterest       = REBASE(0x24DE930);
    inline uintptr_t FireClickDetector       = REBASE(0x21802D0);
    inline uintptr_t FireProximityPrompt     = REBASE(0x21DFBE0);
    inline uintptr_t FireRightMouseClick     = REBASE(0x21802D0);

    inline uintptr_t GetCurrentThreadContext = REBASE(0xD12F20);
    inline uintptr_t GetCurrentThreadID      = REBASE(0x4329C10);
    inline uintptr_t GetCurrentFileAsAnsi    = REBASE(0x4E471C8);
    inline uintptr_t GetContextObject        = REBASE(0x13F4280);
    inline uintptr_t GetCurrentContext       = REBASE(0x3F414C0);
    inline uintptr_t GetFFlag                = REBASE(0x4E0C730);
    inline uintptr_t GetGlobalState          = REBASE(0xF13E90);
    inline uintptr_t GetCapabilites          = REBASE(0x3E6D7F0);
    inline uintptr_t GetLuaState             = REBASE(0x109CFC0);
    inline uintptr_t GetProperty             = REBASE(0xF23170);
    inline uintptr_t GetModuleFromVMStateMap = REBASE(0x13F6152);
    inline uintptr_t GetIdentityStruct       = REBASE(0x33730);
    inline uintptr_t GetValues               = REBASE(0x10B1320);
    inline uintptr_t GetChannelState         = REBASE(0x3D1CED0);
    inline uintptr_t GetEventEngine          = REBASE(0x735680);
    inline uintptr_t GetEngineLoadStatus     = REBASE(0x735F30);
    
    inline uintptr_t IdentityPtr             = REBASE(0x143AF80);
    inline uintptr_t PushInstance            = REBASE(0x143AF80);
    inline uintptr_t PhantomIndex            = REBASE(0x1503100);
    inline uintptr_t ProcessEvent            = REBASE(0x3BC6960);
    inline uintptr_t Impersonator            = REBASE(0x3E6D8A0);
    inline uintptr_t Pseudo2addr             = REBASE(0x3B41AE0);
    inline uintptr_t Print                   = REBASE(0x1AE0A80);

    inline uintptr_t KTable                  = REBASE(0x7065F80);
    inline uintptr_t RawTaskScheduler        = REBASE(0x79E1868);
    inline uintptr_t FakeDataModelPointer    = REBASE(0x78A24C8);
    inline uintptr_t LockViolationInstanceCrash = REBASE(0x6738E38);

    inline uintptr_t LuaC_step               = REBASE(0x3B4D3C0);
    inline uintptr_t LuaC_fullgc             = REBASE(0x3B73AA0);

    inline uintptr_t LuaD_throw              = REBASE(0x3B50D80);
    inline uintptr_t LuaD_precall            = REBASE(0x3B50D50);
    inline uintptr_t LuaD_growstack          = REBASE(0x3B41CE0);
    inline uintptr_t LuaD_rawrunprotected    = REBASE(0x3B50D50);

    inline uintptr_t LuaG_errorL             = REBASE(0x3B44380);
    inline uintptr_t Lua_argerrorL           = REBASE(0x3B43870);
    inline uintptr_t LuaG_runerrorL          = REBASE(0x3B4E440);
    inline uintptr_t LuaG_breakpoint         = REBASE(0x3BA6890);
    inline uintptr_t LuaG_aritherror         = REBASE(0x3B4DD20);
    inline uintptr_t LuaG_concaterror        = REBASE(0x3B4DCD0);
    inline uintptr_t LuaG_indexerror         = REBASE(0x3B4DE40);
    inline uintptr_t LuaG_ordererror         = REBASE(0x3B4DDC0);

    inline uintptr_t LuaL_register           = REBASE(0x3B97800);
    inline uintptr_t LuaL_where              = REBASE(0x3B43A10);
    inline uintptr_t LuaL_checkany           = REBASE(0x3B771C0);
    inline uintptr_t LuaL_checktype          = REBASE(0x3B439E0);
    inline uintptr_t LuaL_pushresult         = REBASE(0x3B49630);
    inline uintptr_t LuaL_newmetatable       = REBASE(0x3B45630);
    inline uintptr_t LuaL_checklstring       = REBASE(0x3B45630);
    inline uintptr_t LuaL_getmetafield       = REBASE(0x3B45AD0);
    inline uintptr_t LuaL_freebuffer         = REBASE(0x3B84820);
  
    inline uintptr_t LuaM_freegco            = REBASE(0x3B976E0);
    inline uintptr_t LuaM_freearray          = REBASE(0x3B97660);

    inline uintptr_t LuaO_NilObject          = REBASE(0x5279A13);
    inline uintptr_t LuaO_chunkid            = REBASE(0x3BACDE0);
    inline uintptr_t LuaH_Dummynode          = REBASE(0x5C34548);

    inline uintptr_t AssignedNode            = REBASE(0x1739362);
    inline uintptr_t InsertNode              = REBASE(0x3BC6680);
    inline uintptr_t CacheNode               = REBASE(0x3FF54D0);
    inline uintptr_t ArgsElement             = REBASE(0x4144320);

    inline uintptr_t Lua_pushvfstring        = REBASE(0x3B42B50);
    inline uintptr_t Lua_pushfstringL        = REBASE(0x3B42BC0);
    inline uintptr_t Lua_newstate            = REBASE(0x3B4FE60);
    inline uintptr_t Lua_rawcheckstack       = REBASE(0x3B42000);
    inline uintptr_t Lua_xmove               = REBASE(0x3B42330);
    inline uintptr_t Lua_clock               = REBASE(0x3B05F70);

    inline uintptr_t LuaA_toobject           = REBASE(0x3B41BA0);
    inline uintptr_t F_luaopen               = REBASE(0x3B4EAA0);

    inline uintptr_t LuaF_freeproto          = REBASE(0x3BA6A50);
    inline uintptr_t LuaF_newproto           = REBASE(0x3BA6580);

    inline uintptr_t LuaT_objtypenamestr     = REBASE(0x3BA63D0);

    inline uintptr_t LuaV_gettable           = REBASE(0x3B993C0);
    inline uintptr_t LuaV_settable           = REBASE(0x3B999E0);
    
    inline uintptr_t Lua_setmetatable        = REBASE(0x3B63719);
    inline uintptr_t Luau_Execute            = REBASE(0x3B582B0);
    inline uintptr_t LuaV_Execute            = REBASE(0x3B58360);
    inline uintptr_t LuaVM_Load              = REBASE(0x1249CA0);
    inline uintptr_t OpCodeLookUpTable       = REBASE(0x5C33110);

    inline uintptr_t call_binTM              = REBASE(0x3B9B3C0);
    inline uintptr_t atomic                  = REBASE(0x3B732F0);
    inline uintptr_t freeblock               = REBASE(0x3B975B0);
    inline uintptr_t Node                    = REBASE(0x5C34538);
    inline uintptr_t Auxopen                 = REBASE(0x3B42330);
    inline uintptr_t KeyID                   = REBASE(0x441BA50);

    inline uintptr_t BrowserTracker          = REBASE(0x7C7DE0);
    inline uintptr_t DatabaseEntry           = REBASE(0x411EB80);
    
    inline uintptr_t ValidateBytecode        = REBASE(0x117E350);
    inline uintptr_t Register                = REBASE(0x2629320);
    inline uintptr_t RequestCode             = REBASE(0xDDFD00);

    inline uintptr_t VariantCastInt          = REBASE(0x1AA6DB0);
    inline uintptr_t VariantCastInt64        = REBASE(0x1AA70B0);
    inline uintptr_t VariantCastFloat        = REBASE(0x1AA75F0);

    inline uintptr_t TaskDefer               = REBASE(0x1632410);
    inline uintptr_t TaskDelay               = REBASE(0x1632CA0);
    inline uintptr_t TaskDesync              = REBASE(0x16312B0);
    inline uintptr_t TaskCancel              = REBASE(0x1633320);

    inline uintptr_t SetFFlag                = REBASE(0x43EAED0);
    inline uintptr_t SetChannelState         = REBASE(0x3D1DD30);
    inline uintptr_t SetEventEngine          = REBASE(0x7353C0);
    inline uintptr_t SetStringEngine         = REBASE(0x735C80);
    inline uintptr_t SetDebugOutput          = REBASE(0x4015600);
    inline uintptr_t SetInstanceObject       = REBASE(0x2267BD0);
    inline uintptr_t SetSingletonObject      = REBASE(0x2838192);
    inline uintptr_t SetMemoryInfo           = REBASE(0x694840);
    inline uintptr_t ScriptContextResume     = REBASE(0x13ECAE0);
    inline uintptr_t SetProtoCapabilities    = REBASE(0x37215C0);
    
    inline uintptr_t WriteStream             = REBASE(0xEFBFD9);
    inline uintptr_t CryptoUILogStamp        = REBASE(0x4C529F0);
    inline uintptr_t HandlerRoutine          = REBASE(0x4E32A30);
    inline uintptr_t MallocMemory            = REBASE(0x43C46D0);

    inline uintptr_t FormatEngineText        = REBASE(0x284BA00);
    inline uintptr_t ThreadGuardSephamore    = REBASE(0x37CF040);
    inline uintptr_t Std_setError            = REBASE(0x4DEBBDC);
}

namespace Signatures {
    inline auto Print = reinterpret_cast<uintptr_t(__fastcall*)(int, const char*, ...)>(Offsets::Print);
    inline auto PushInstance = reinterpret_cast<uintptr_t* (__fastcall*)(lua_State*, uintptr_t)>(Offsets::PushInstance);
    inline auto FireProximityPrompt = reinterpret_cast<uintptr_t* (__thiscall*)(uintptr_t)>(Offsets::FireProximityPrompt);
    inline auto FireRightMouseClick = reinterpret_cast<void(__fastcall*)(uintptr_t, float, uintptr_t)>(Offsets::FireRightMouseClick);
    inline auto FireMouseHoverEnter = reinterpret_cast<void(__fastcall*)(uintptr_t, uintptr_t)>(Offsets::FireMouseHoverEnter);
    inline auto FireMouseHoverLeave = reinterpret_cast<void(__fastcall*)(uintptr_t, uintptr_t)>(Offsets::FireMouseHoverLeave);
    inline auto FireTouchInterest = reinterpret_cast<void(__fastcall*)(uintptr_t, uintptr_t, uintptr_t, bool, bool)>(Offsets::FireTouchInterest);
    inline auto SetDebugInfo     = reinterpret_cast<void(_thiscall*)(const char*, uintptr_t, uintptr_t)>(Offsets::SetDebugOutput);
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
