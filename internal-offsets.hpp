#include <cstdint>
#include <vector>
#include <iostream>
#include <atomic>
#include <Windows.h>

// Roblox-version: version-e380c8edc8f6477c

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

inline uintptr_t FireMouseHoverEnter = REBASE(0x20AEE80);
inline uintptr_t FireMouseHoverLeave = REBASE(0x20AF020);
inline uintptr_t FireTouchInterest = REBASE(0x240F3E0);
inline uintptr_t FireClickDetector = REBASE(0x20AD8E0);
inline uintptr_t GetGlobalState = REBASE(0x12E61D0);
inline uintptr_t GetContextObject = REBASE(0x131F900);
inline uintptr_t GetCapabilites = REBASE(0x3D74420);
inline uintptr_t GetLuaState = REBASE(0xFE2E90);
inline uintptr_t GetGlobalState = REBASE(0xE5C9E0);
inline uintptr_t GetProperty = REBASE(0xE6BE20);
inline uintptr_t GetValues = REBASE(0xFF6B60);
inline uintptr_t GetIdentityStruct = REBASE(0x33730);
inline uintptr_t GetValues = REBASE(0xFF6B60);
inline uintptr_t Encrypt_State = REBASE(0x12E61D0);
inline uintptr_t OpCodeLookUpTable = REBASE(0x5AB1700);
inline uintptr_t IdentityPtr = REBASE(0x1366800);
inline uintptr_t Impersonator = REBASE(0x3D744D0);
inline uintptr_t KTable = REBASE(0x6F49FA0);
inline uintptr_t LuaC_step = REBASE(0x3967D60);
inline uintptr_t LuaD_throw = REBASE(0x396B750);
inline uintptr_t LuaL_register = REBASE(0x39B1480);
inline uintptr_t LuaO_NilObject = REBASE(0x5181A13);
inline uintptr_t luaH_Dummynode = REBASE(0x5B2B8C8);
inline uintptr_t luaA_toobject = REBASE(0x395C710);
inline uintptr_t luaL_checklstring = REBASE(0x3960130);
inline uintptr_t luaF_freeproto = REBASE(0x39C06C0);
inline uintptr_t luaF_newproto = REBASE(0x39C0200);
inline uintptr_t LuaVM_Load = REBASE(0x1178420);
inline uintptr_t LuaL_getmetafield  = REBASE(0x39604A0);
inline uintptr_t luaM_freegco = REBASE(0x39B1360);
inline uintptr_t LuaM_free = REBASE(0x39B12E0);
inline uintptr_t freeblock = REBASE(0x39B1230);
inline uintptr_t luaT_objtypenamestr = REBASE(0x39C0050);
inline uintptr_t Lua_newstate = REBASE(0x396A830);
inline uintptr_t Auxopen = REBASE(0x395CEA0);
inline uintptr_t LuaL_where = REBASE(0x395E4F0);
inline uintptr_t Lua_rawcheckstack = REBASE(0x395CB70);
inline uintptr_t Lua_pushvfstring = REBASE(0x395D6B0);
inline uintptr_t Lua_errorL = REBASE(0x395EE70);
inline uintptr_t Lua_argerrorL = REBASE(0x395E350);
inline uintptr_t LuaL_where = REBASE(0x395E4F0);
inline uintptr_t LuaG_runerrorL = REBASE(0x3968E10);
inline uintptr_t Lua_xmove = REBASE(0x395CEA0);
inline uintptr_t LuaD_rawrunprotected = REBASE(0x396B720);
inline uintptr_t call_binTM = REBASE(0x39B5070);
inline uintptr_t luaV_gettable = REBASE(0x39B3060);
inline uintptr_t luaV_settable = REBASE(0x39B3680);
inline uintptr_t Lua_pushfstringL = REBASE(0x395D720);
inline uintptr_t LuaO_chunkid = REBASE(0x39C69E0);
inline uintptr_t LuaL_checkany = REBASE(0x3991C10);
inline uintptr_t LuaL_checktype = REBASE(0x395E4C0);
inline uintptr_t LuaL_pushresult = REBASE(0x3964120);
inline uintptr_t LuaL_newmetatable = REBASE(0x3960130);
inline uintptr_t node = REBASE(0x5B2B8F0);
inline uintptr_t Luau_Execute = REBASE(0x3972CB0);
inline uintptr_t Pseudo2addr = REBASE(0x395C650);
inline uintptr_t Print = REBASE(0x1A06390);
inline uintptr_t PushInstance = REBASE(0x1366800);
inline uintptr_t RaiseEventInvocation = REBASE(0x19C7440);
inline uintptr_t RawTaskScheduler = REBASE(0x50DD800);
inline uintptr_t ScriptContextResume = REBASE(0x1318160);
inline uintptr_t SetProtoCapabilities = REBASE(0x366F420);
inline uintptr_t VariantCastInt = REBASE(0x19CDB50);
inline uintptr_t VariantCastInt64 = REBASE(0x19CDE50);
inline uintptr_t VariantCastFloat = REBASE(0x19CE390);
inline uintptr_t CastArgs = REBASE(0xFF6B60);
inline uintptr_t Register = REBASE(0x255A130);
inline uintptr_t TaskDefer = REBASE(0x1567E30);
inline uintptr_t TaskDelay = REBASE(0x15686B0);
inline uintptr_t TaskDesync = REBASE(0x1566CD0);
inline uintptr_t TaskCancel = REBASE(0x1568D20);
inline uintptr_t FireProximityPrompt = REBASE(0x210D9F0);
inline uintptr_t FireRightMouseClick = REBASE(0x20ADA80);
inline uintptr_t FakeDataModelPointer = REBASE(0x77A03A8);
}

namespace State {
    inline uintptr_t RequireBypass = 0x878;
    inline uintptr_t ScriptContext = 0x3F0;
    inline uintptr_t GlobalState = 0x140;
    inline uintptr_t DecryptState = 0x0;
    inline uintptr_t Children = 0x70;
    inline uintptr_t Identity = 0x48;
    inline uintptr_t Capabilities = 0x68;
}

namespace FFlags {
    constexpr uintptr_t LockViolationScriptCrash = 0x6617AB8;
    constexpr uintptr_t EnableLoadModule = 0x661EB88;
    constexpr uintptr_t WndProcessCheck = 0x65FC140;
    constexpr uintptr_t TaskSchedulerJobInitThreads = 0x65FAF98;
    constexpr uintptr_t TaskSchedulerJobInGameExecFreqMin = 0x65FAF94;
    constexpr uintptr_t TaskSchedulerJobInGameExecFreqMax = 0x65FAF90;
    constexpr uintptr_t TaskSchedulerJobInGameThreads = 0x65FAF84;
    constexpr uintptr_t TaskSchedulerJobDeadlineMs = 0x6F49F20;
    constexpr uintptr_t TaskSchedulerTaskMaxStackSizeBytes = 0x65FAFA8;
    constexpr uintptr_t TaskSchedulerMaxStackSizeBytes = 0x65FAFA4;
    constexpr uintptr_t TaskSchedulerMaxNumOfJobs = 0x65FAFB0;
    constexpr uintptr_t TaskSchedulerMaxNumOfArbiters = 0x65FAFAC;
    constexpr uintptr_t TaskSchedulerMaxTempArenaSizeBytes = 0x6F49F24;
    constexpr uintptr_t TaskSchedulerTasksDefaultMaxCountPerCycle = 0x65FAFB8;
    constexpr uintptr_t TaskSchedulerTasksDefaultMaxTimeMsPerCycle = 0x65FAFB4;
    constexpr uintptr_t EnableRemoteProfiling = 0x666FAB8;
    constexpr uintptr_t TaskSchedulerAutoThreadLimit = 0x65FAFBC;
    constexpr uintptr_t TaskSchedulerThreadMin = 0x65FAFC0;
    constexpr uintptr_t TaskSchedulerBlockingShutdownInClients = 0x666FBB8;
    constexpr uintptr_t TaskSchedulerBlockingShutdownTimeoutInMs = 0x65FAFCC;
    constexpr uintptr_t TaskSchedulerAsyncTasksMinimumThreadCount = 0x65FAFC4;
    constexpr uintptr_t TaskSchedulerBackgroundCycleRateMs = 0x65FAFC8;
    constexpr uintptr_t TaskSchedulerLimitTargetFpsTo240 = 0x666FB38;
    constexpr uintptr_t WriteLockSpinLockBudgetUSec = 0x65E44F8;
    constexpr uintptr_t ReadLockSpinLockBudgetUSec = 0x65E44F0;
    constexpr uintptr_t WorldStepMax = 0x65E7B24;
    constexpr uintptr_t WorldStepsOffsetAdjustRate = 0x65E7B30;
    constexpr uintptr_t MaxMissedWorldStepsRemembered = 0x65E7B2C;
    constexpr uintptr_t WorldStepsBehind = 0x663D718;
    constexpr uintptr_t WorldStepsBehindG = 0x663D738;
    constexpr uintptr_t WorldStepDtAveExpFactorHundredth = 0x65E7B18;
    constexpr uintptr_t RakNetCalculateApplicationFeedback2 = 0x66490C8;
    constexpr uintptr_t RakNetApplicationFeedbackMaxSpeedBPS = 0x65E9848;
    constexpr uintptr_t RakNetApplicationFeedbackInitialSpeedBPS = 0x65E9844;
    constexpr uintptr_t RakNetApplicationFeedbackScaleUpFactorHundredthPercent = 0x65E9854;
    constexpr uintptr_t RakNetApplicationFeedbackScaleUpThresholdPercent = 0x65E9850;
    constexpr uintptr_t RakNetMinAckGrowthPercent = 0x65E984C;
    constexpr uintptr_t RaknetSocketRxBufferSize = 0x65E9860;
    constexpr uintptr_t OverrideRaknetSocketTxBuffer = 0x66491C8;
    constexpr uintptr_t RaknetSocketTxBufferSize = 0x65E9864;
    constexpr uintptr_t RakNetDisablePollAndSelect = 0x6649228;
    constexpr uintptr_t RakNetDecryptionFailureReportHundredthsPercent = 0x6F118DC;
    constexpr uintptr_t RakNetEncryptionFailureReportHundredthsPercent = 0x6F118E0;
    constexpr uintptr_t ReliabilityLayerLog = 0x66492D0;
    constexpr uintptr_t RakNetUseSlidingWindow4 = 0x6649310;
    constexpr uintptr_t RakNetNakResendDelayMs = 0x6F118E8;
    constexpr uintptr_t RakNetNakResendDelayRttPercent = 0x6F118E4;
    constexpr uintptr_t RakNetNakResendDelayMsMax = 0x6F118F0;
    constexpr uintptr_t RaknetInfluxHundredthsPercentage = 0x6F118EC;
    constexpr uintptr_t RaknetBwStatsInfluxReportDurationInSeconds = 0x65E9888;
    constexpr uintptr_t PhantomFreezeKeepAliveFix = 0x6649380;
    constexpr uintptr_t DecryptionFailDisconnectThreshold = 0x65E988C;
    constexpr uintptr_t PhantomFreezeEncryptionDisconnect = 0x66493B0;
    constexpr uintptr_t EncryptionFailThreshold = 0x65E986C;
    constexpr uintptr_t RakNetDatagramMessageIdArrayLength = 0x65E9874;
}


namespace Signatures {
    inline auto Print = reinterpret_cast<uintptr_t(__fastcall*)(int, const char*, ...)>(Offsets::Print);
    inline auto PushInstance = reinterpret_cast<uintptr_t* (__fastcall*)(lua_State*, uintptr_t)>(Offsets::PushInstance);
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
