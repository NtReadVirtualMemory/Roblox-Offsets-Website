#include <Windows.h>
#include <vector>
#include <iostream>

#define REBASE(x) (x + (uintptr_t)(GetModuleHandle(nullptr)))

namespace Offsets {

inline uintptr_t OpcodeLookupTable = REBASE(0x58E5380);
//Offsets

inline uintptr_t AppdataInfo = REBASE(0x759FA98);
inline uintptr_t DebugCheckRenderThreading = REBASE(0x645B9F0);
inline uintptr_t DisableCorescriptLoadstring = REBASE(0x6427228);
inline uintptr_t EnableLoadModule = REBASE(0x6427258);
inline uintptr_t FireClickDetector = REBASE(0x20001A0);
inline uintptr_t FireMouseHoverEnter = REBASE(0x2001740);
inline uintptr_t FireMouseHoverLeave = REBASE(0x20018E0);
inline uintptr_t FireTouchInterest = REBASE(0x2332980);
inline uintptr_t FlogDataBank = REBASE(0x7317CF8);
inline uintptr_t freeblock = REBASE(0x3888070);
inline uintptr_t freeclasspage = REBASE(0x3887EA0);
inline uintptr_t GetContextObject = rebase(0x12E0520);
inline uintptr_t GetFFlag = REBASE(0x4B92CD0);
inline uintptr_t GetGlobalState = REBASE(0xE33140);
inline uintptr_t GetIdentityptr = REBASE(0x6D96118);
inline uintptr_t GetLuaState = REBASE(0xFB40E0);
inline uintptr_t GetMemoryStats = REBASE(0x13EAA20);
inline uintptr_t GetModuleFromVMStateMap = REBASE(0x14513E0);
inline uintptr_t GetProperty = REBASE(0xE43AF0);
inline uintptr_t GetScriptContext = REBASE(0x1BE8300);
inline uintptr_t GetValues = REBASE(0xFC7030);
inline uintptr_t GetIdentityStruct = REBASE(0x33730);
inline uintptr_t IdentityPtr = REBASE(0x6D96118);
inline uintptr_t Impersonator = REBASE(0x3C22B80);
inline uintptr_t KTable = REBASE(0x6D41190);
inline uintptr_t LockViolationInstanceCrash = REBASE(0x642CD18);
inline uintptr_t LockViolationScriptCrash = REBASE(0x6420DB8);
inline uintptr_t LuaC_step = REBASE(0x383E980);
inline uintptr_t LuaD_precall = REBASE(0x62BCF0);
inline uintptr_t LuaD_throw = REBASE(0x3842330);
inline uintptr_t LuaF_newproto = REBASE(0xFFD550);
inline uintptr_t luaA_toobject = REBASE(0x3832EB0);
inline uintptr_t lua_freeproto = REBASE(0x38969B0);
inline uintptr_t luaG_runerrorL = REBASE(0x383F9E0);
inline uintptr_t luaH_Dummynode = REBASE(0x5439128);
inline uintptr_t luaH_getset = REBASE(0x2942FB0);
inline uintptr_t luaL_argerrorL = REBASE(0x3834B00);
inline uintptr_t luaL_checklstring = REBASE(0x38368F0);
inline uintptr_t luaL_register = REBASE(0x38882C0);
inline uintptr_t luaM_free = REBASE(0x3888120);
inline uintptr_t luaM_freegco = REBASE(0x38881A0);
inline uintptr_t luaM_toobig = REBASE(0x383F4C0);
inline uintptr_t luaO_NilObject = REBASE(0x5439708);
inline uintptr_t lua_pushvfstring = REBASE(0xE63105);
inline uintptr_t lua_rawcheckstack = REBASE(0x3833310);
inline uintptr_t Luau_execute = REBASE(0x3849BC0);
inline uintptr_t LuaStepIntervalMsOverride = REBASE(0x6D076C0);
inline uintptr_t LuaStepIntervalMsOverrideEnabled = REBASE(0x6424BE0);
inline uintptr_t LuaVM_Load = REBASE(0x113A820);
inline uintptr_t newblock = REBASE(0x3887F40);
inline uintptr_t newclasspage = REBASE(0x3887E30);
inline uintptr_t newgcoblock = REBASE(0x3887FD0);
inline uintptr_t newpage = REBASE(0x3887D80);
inline uintptr_t Pseudo2addr = REBASE(0x3832DF0);
inline uintptr_t Print = REBASE(0x1968440);
inline uintptr_t PushInstance = REBASE(0x1326620);
inline uintptr_t PushInstance2 = REBASE(0x1326670);
inline uintptr_t RaiseEventInvocation = REBASE(0x192C2A0);
inline uintptr_t RawTaskScheduler = REBASE(0x76DE128);
inline uintptr_t RenderDebugCheckThreading2 = REBASE(0x645ACB0);
inline uintptr_t RequestCode = REBASE(0xD0DBA0);
inline uintptr_t Register  = REBASE(0x249CE20);
inline uintptr_t ScriptContextResume = REBASE(0x12D8E10);
inline uintptr_t SetFFlag = REBASE(0x41931B0);
inline uintptr_t SetProtoCapabilities = REBASE(0x354F9E0);
inline uintptr_t TaskCancel = REBASE(0x151E370);
inline uintptr_t Task_Defer = REBASE(0x151D5A0);
inline uintptr_t TaskDelay = REBASE(0x151DD10);
inline uintptr_t TaskSchedulerTargetFps = REBASE(0x6D41110);
inline uintptr_t TaskSpawn = REBASE(0x738480);
inline uintptr_t VariantCastFloat = REBASE(0x1932290);
inline uintptr_t VariantCastInt = REBASE(0x1931CB0);
inline uintptr_t VSnPrintf = REBASE(0x5E59C0);
inline uintptr_t WndProcessCheck = REBASE(0x6405E38);

}

namespace FFlags {
	inline uintptr_t WorldStepDtAveExpFactorHundredth = REBASE(0x63F187C);
	inline uintptr_t WorldStepMax = REBASE(0x63F1890);
	inline uintptr_t WorldStepsBehind = REBASE(0x64459C0);
	inline uintptr_t WorldStepsBehindG = REBASE(0x64459E0);
	inline uintptr_t WorldStepsOffsetAdjustRate = REBASE(0x63F1888);

//Raknet
	inline uintptr_t RakNetPacketTracingInit = REBASE(0x6450D30);
	inline uintptr_t RakNetPacketTracingMinMTUSize = REBASE(0x63F35D4);
	inline uintptr_t RakNetPingFrequencyMillisecond = REBASE(0x63F1E74);
	inline uintptr_t RakNetPingTrace = REBASE(0x6450C58);
	inline uintptr_t RakNetPingTracePointsEventThrottlePerMillion = REBASE(0x6D08AD4);
	inline uintptr_t RakNetPingTracePointsThrottleHP = REBASE(0x6D08AD0);
	inline uintptr_t RakNetPingTraceReportThresholdMS = REBASE(0x63F34DC);
	inline uintptr_t RakNetPktTrace = REBASE(0x64507C0);
	inline uintptr_t RakNetResendBufferArrayLength = REBASE(0x63F35B4);
	inline uintptr_t RakNetResendMaxThresholdTimeInUs = REBASE(0x63F35DC);
	inline uintptr_t RakNetResendMinThresholdTimeInUs = REBASE(0x63F35E0);
	inline uintptr_t RakNetResendRttMultiple = REBASE(0x63F35E4);
	inline uintptr_t RakNetResendScaleBackFactorHundredthsPercent = REBASE(0x6D08B24);
	inline uintptr_t RakNetSelectTimeoutMs = REBASE(0x63F35A8);
	inline uintptr_t RakNetSelectUnblockSocketWriteDurationMs = REBASE(0x63F316C);
	inline uintptr_t RakNetServerStatsToEventsFlow = REBASE(0x641B9C0);
	inline uintptr_t RakNetSignalThreadExitReliably = REBASE(0x6450D70);
	inline uintptr_t RakNetSocketRecvTimeoutMs = REBASE(0x6D08ADC);
	inline uintptr_t RakNetSocketSendTimeoutMs = REBASE(0x6D08AD8);
	inline uintptr_t RakNetStaleSendQueue = REBASE(0x6451350);
	inline uintptr_t RakNetStaleSendQueueReportIntervalMs = REBASE(0x63F35D8);
	inline uintptr_t RakNetStaleSendQueueTelemetryHundredthsPercent = REBASE(0x6D08B08);
	inline uintptr_t RakNetStaleSendQueueTriggerMs = REBASE(0x63F35C8);
	inline uintptr_t RakNetStatsShortInterval = REBASE(0x63EDEDC);
	inline uintptr_t RakNetStoppedProduction = REBASE(0x6450B40);
}

namespace Signatures {
    inline auto Print = (uintptr_t(__fastcall*)(int, const char*, ...))Offsets::Print;
    inline auto RequestCode = (uintptr_t(__fastcall*)(uintptr_t, uintptr_t))Offsets::RequestCode;
    inline auto PushInstance = (uintptr_t * (__fastcall*)(lua_State*, uintptr_t))Offsets::PushInstance;
    inline auto PushInstance2 = (uintptr_t * (__fastcall*)(lua_State*, std::shared_ptr<uintptr_t*>))Offsets::PushInstance2;
    inline auto FireProximityPrompt = (uintptr_t * (__thiscall*)(uintptr_t))Offsets::FireProximityPrompt;
    inline auto FireMouseClick = (void(__fastcall*)(__int64 a1, float a2, __int64 a3))Offsets::FireMouseClick;
    inline auto FireRightMouseClick = (void(__fastcall*)(__int64 a1, float a2, __int64 a3))Offsets::FireRightMouseClick;
    inline auto FireMouseHoverEnter = (void(__fastcall*)(__int64 a1, __int64 a2))Offsets::FireMouseHoverEnter;
    inline auto FireMouseHoverLeave = (void(__fastcall*)(__int64 a1, __int64 a2))Offsets::FireMouseHoverLeave;
    inline auto FireTouchInterest = (void(__fastcall*)(uintptr_t, uintptr_t, uintptr_t, bool, bool))Offsets::FireTouchInterest;
    inline auto GetState = (uintptr_t(__fastcall*)(int64_t, uint64_t*, uint64_t*))Offsets::GetGlobalState;
    inline auto KTable = reinterpret_cast<uintptr_t*>(Offsets::KTable);
    inline auto GetProperty = (uintptr_t * (__thiscall*)(uintptr_t, uintptr_t*))Offsets::GetProperty;
    inline auto Impersonator = (void(__fastcall*)(void*, void*, const void*, uint64_t, uint64_t))Offsets::Impersonator;
    inline auto GetIdentityStruct = reinterpret_cast<void* (__fastcall*)(void*)>(Offsets::GetIdentityStruct);
    inline auto TaskDefer = (int(__fastcall*)(lua_State*))Offsets::TaskDefer;
    inline auto CastArgs = (uintptr_t(__fastcall*)(lua_State * L, int, void*, bool, int))Offsets::ReplicateSignal::CastArgs;
    inline auto CastInt = (void(__fastcall*)(void* L))Offsets::ReplicateSignal::VariantCastInt;
    inline auto CastInt64 = (void(__fastcall*)(void* L))Offsets::ReplicateSignal::VariantCastInt64;
    inline auto CastFloat = (void(__fastcall*)(void* L))Offsets::ReplicateSignal::VariantCastFloat;
    inline auto Luau_Execute = (void(__fastcall*)(lua_State*))Offsets::Luau_Execute;
    inline auto LuaD_Throw = (void(__fastcall*)(lua_State*, int))Offsets::LuaD_throw;
    inline auto LuaVMLoad = (uintptr_t(__fastcall*)(int64_t, std::string*, const char*, int))Offsets::LuaVMLoad;
}


