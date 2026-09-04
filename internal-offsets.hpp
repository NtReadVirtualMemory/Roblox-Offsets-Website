namespace InternalFunctions {
    namespace Luau { 
    }

    namespace Engine {
        inline constexpr std::uintptr_t DecryptYaraRuleset = 0x4C5D570;
        inline constexpr std::uintptr_t LockMutex = 0x5540;
        inline constexpr std::uintptr_t ReleaseMutex = 0x4E30;
        inline constexpr std::uintptr_t LuaVM_Load = 0x406E600;
        inline constexpr std::uintptr_t TaskSchedulerConstructor = 0x2A9F980;
        inline constexpr std::uintptr_t TaskSchedulerDumpJobs = 0x2AA2730;
        inline constexpr std::uintptr_t RenderJobConstructor = 0x1608D80;
        inline constexpr std::uintptr_t SurfaceControllerCreateRenderJob = 0x160D050;
        inline constexpr std::uintptr_t TaskSchedulerAddJob = 0x2AA4B20;
        inline constexpr std::uintptr_t VisualEngineConstructor = 0x35C65D0;
        inline constexpr std::uintptr_t VisualEngineInitializeViewState = 0x4760B50;
        inline constexpr std::uintptr_t VisualEngineUpdateView = 0x35CC870;
        inline constexpr std::uintptr_t VisualEngineBuildView = 0x4760C60;
        inline constexpr std::uintptr_t VisualEngineBuildProjection = 0x4761190;
        inline constexpr std::uintptr_t VisualEngineFinalizeMatrices = 0x47629F0;
        inline constexpr std::uintptr_t ClassDescriptorRegistrar = 0x1CC0900;
        inline constexpr std::uintptr_t PropertyDescriptorRegistrar = 0x1CCB7E0;
        inline constexpr std::uintptr_t ClientReplicatorIsLegalSendEvent = 0x44D1700;
        inline constexpr std::uintptr_t FreeString = 0x7CEE40;
        inline constexpr std::uintptr_t FreeStringImplementation = 0x7D0AB0;
        inline constexpr std::uintptr_t Print = 0x1C8A050;
        inline constexpr std::uintptr_t GetTlsPointer = 0x39A0;
        inline constexpr std::uintptr_t InstanceGetAttributesStorage = 0x1CD9DD0;
        inline constexpr std::uintptr_t PlayerMouseCreate = 0xBF8DD0;
        inline constexpr std::uintptr_t MouseGetX = 0x3B03A40;
        inline constexpr std::uintptr_t MouseGetY = 0x3B03BC0;
        inline constexpr std::uintptr_t MouseServiceConstructor = 0x3AF3510;
        inline constexpr std::uintptr_t MouseServiceCreate = 0xB69FE0;
        inline constexpr std::uintptr_t MouseServiceGetOrCreate = 0xE7FD00;
        inline constexpr std::uintptr_t CameraProjectPoint = 0x3383980;
        inline constexpr std::uintptr_t RakPeerSend = 0x28B83A0;
        inline constexpr std::uintptr_t RakPeerReceive = 0x28B8730;
        inline constexpr std::uintptr_t RakPeerRunSendCycle = 0x28CD810;
        inline constexpr std::uintptr_t LightingCommitTime = 0xD7CDE0;
        inline constexpr std::uintptr_t LightingCompareTime = 0xD7EF40;
        inline constexpr std::uintptr_t FirePropertyChanged = 0x1CB37B0;
        inline constexpr std::uintptr_t InstanceFindFirstAncestorImpl = 0x1631020;
        inline constexpr std::uintptr_t PlayerConfigurerConstructor = 0x4436770;
        inline constexpr std::uintptr_t PlayerConfigurerDestructorThunk = 0x4436C50;
        inline constexpr std::uintptr_t PlayerConfigurerDestructor = 0x4437120;
        inline constexpr std::uintptr_t PlayerConfigurerCheckIdle = 0x443EFD0;
        inline constexpr std::uintptr_t CheckIdleAndFireSignal = 0x3CA1F70;
        inline constexpr std::uintptr_t SetLastInput = 0x3CA1BA0;
        inline constexpr std::uintptr_t PlayerConfigurerDisconnect = 0x44378C0;
        inline constexpr std::uintptr_t PlayerConfigurerGetGameLocale = 0x443F460;
        inline constexpr std::uintptr_t PlayerConfigurerReportError = 0x4438660;
        inline constexpr std::uintptr_t PlayerConfigurerHandleConnectionLost = 0x443A830;
        inline constexpr std::uintptr_t PlayerConfigurerOnConnected = 0x443B630;
        inline constexpr std::uintptr_t PlayerConfigurerOnReceivedGlobals = 0x443D9D0;
        inline constexpr std::uintptr_t PlayerConfigurerOnGameLoaded = 0x443DCF0;
        inline constexpr std::uintptr_t PlayerConfigurerOnDefaultLoadingScreenRemoved = 0x443EB20;
        inline constexpr std::uintptr_t PlayerConfigurerUpdateLeaveTelemetry = 0x4439B90;
        inline constexpr std::uintptr_t ScriptContextGetLuauSecurityFlags = 0x4078060;
    }
}
