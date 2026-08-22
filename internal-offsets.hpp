namespace InternalFunctions {
    namespace Luau { 
    }

    namespace Engine {
        inline constexpr std::uintptr_t DecryptYaraRuleset = 0x33E5D20;
        inline constexpr std::uintptr_t TaskSchedulerConstructor = 0xD3E820;
        inline constexpr std::uintptr_t TaskSchedulerDumpJobs = 0xD41740;
        inline constexpr std::uintptr_t RenderJobConstructor = 0x855FB0;
        inline constexpr std::uintptr_t SurfaceControllerCreateRenderJob = 0x859BF0;
        inline constexpr std::uintptr_t TaskSchedulerAddJob = 0xD43C70;
        inline constexpr std::uintptr_t VisualEngineConstructor = 0x1434120;
        inline constexpr std::uintptr_t VisualEngineInitializeViewState = 0x2BC5400;
        inline constexpr std::uintptr_t VisualEngineUpdateView = 0x143A4B0;
        inline constexpr std::uintptr_t VisualEngineBuildView = 0x2BC5510;
        inline constexpr std::uintptr_t VisualEngineBuildProjection = 0x2BC5A40;
        inline constexpr std::uintptr_t VisualEngineFinalizeMatrices = 0x2BC72A0;
        inline constexpr std::uintptr_t ClassDescriptorRegistrar = 0x8F26D0;
        inline constexpr std::uintptr_t PropertyDescriptorRegistrar = 0x901CE0;
        inline constexpr std::uintptr_t InstanceGetAttributesStorage = 0x8CD620;
        inline constexpr std::uintptr_t PlayerMouseCreate = 0x1A30B30;
        inline constexpr std::uintptr_t MouseGetX = 0x190BFF0;
        inline constexpr std::uintptr_t MouseGetY = 0x190C170;
        inline constexpr std::uintptr_t MouseServiceConstructor = 0x18F0D30;
        inline constexpr std::uintptr_t MouseServiceCreate = 0x1F182F0;
        inline constexpr std::uintptr_t MouseServiceGetOrCreate = 0x11F7D30;
        inline constexpr std::uintptr_t CameraProjectPoint = 0x11F30F0;
        inline constexpr std::uintptr_t LightingCommitTime = 0x211ED50;
        inline constexpr std::uintptr_t LightingCompareTime = 0x2120CB0;
        inline constexpr std::uintptr_t FirePropertyChanged = 0x93D050;
        inline constexpr std::uintptr_t InstanceFindFirstAncestorImpl = 0x58BE580;
        inline constexpr std::uintptr_t PlayerConfigurerConstructor = 0x281BE70;
        inline constexpr std::uintptr_t PlayerConfigurerDestructorThunk = 0x281C350;
        inline constexpr std::uintptr_t PlayerConfigurerDestructor = 0x281C830;
        inline constexpr std::uintptr_t PlayerConfigurerCheckIdle = 0x28246E0;
        inline constexpr std::uintptr_t PlayerConfigurerDisconnect = 0x281CFD0;
        inline constexpr std::uintptr_t PlayerConfigurerGetGameLocale = 0x2824B80;
        inline constexpr std::uintptr_t PlayerConfigurerReportError = 0x281DD70;
        inline constexpr std::uintptr_t PlayerConfigurerHandleConnectionLost = 0x281FF40;
        inline constexpr std::uintptr_t PlayerConfigurerOnConnected = 0x2820D40;
        inline constexpr std::uintptr_t PlayerConfigurerOnReceivedGlobals = 0x28230E0;
        inline constexpr std::uintptr_t PlayerConfigurerOnGameLoaded = 0x2823400;
        inline constexpr std::uintptr_t PlayerConfigurerOnDefaultLoadingScreenRemoved = 0x2824230;
        inline constexpr std::uintptr_t PlayerConfigurerUpdateLeaveTelemetry = 0x281F2A0;
    }
  
    namespace Game {
        inline constexpr std::uintptr_t PrintIdentity = 0x23D5760;
        inline constexpr std::uintptr_t TaskDefer = 0x23B5980;
        inline constexpr std::uintptr_t FireTouchInterest = 0x3842D70;
        inline constexpr std::uintptr_t LookupProperty = 0x3149490;
        inline constexpr std::uintptr_t ScriptContextResume = 0x22BBA10;
        inline constexpr std::uintptr_t DataModelInitMessageBus = 0x329F720;
        inline constexpr std::uintptr_t PlayerConfigurer = 0x281A0B0;
        inline constexpr std::uintptr_t InstanceGetChildren = 0x8811F0;
        inline constexpr std::uintptr_t InstanceGetAttribute = 0x8CEAF0;
        inline constexpr std::uintptr_t InstanceGetAttributeChangedSignal = 0x8D5CB0;
        inline constexpr std::uintptr_t InstanceSetAttribute = 0x8CE7E0;
        inline constexpr std::uintptr_t InstanceFindFirstChild = 0x880EA0;
        inline constexpr std::uintptr_t InstanceFindFirstChildOfClass = 0x8C2A50;
        inline constexpr std::uintptr_t InstanceFindFirstChildWhichIsA = 0x880E50;
        inline constexpr std::uintptr_t InstanceFindFirstAncestor = 0x881380;
        inline constexpr std::uintptr_t DataModelGetService = 0xD0B340;
        inline constexpr std::uintptr_t PlayersGetPlayers = 0x114DEC0;
        inline constexpr std::uintptr_t PlayersGetPlayerFromCharacter = 0x1A5C040;
        inline constexpr std::uintptr_t PlayerGetMouse = 0x1A228F0;
        inline constexpr std::uintptr_t CameraWorldToScreenPoint = 0x11F3250;
        inline constexpr std::uintptr_t CameraWorldToViewportPoint = 0x11F3690;
        inline constexpr std::uintptr_t CameraScreenPointToRay = 0x11F3B40;
        inline constexpr std::uintptr_t CameraViewportPointToRay = 0x11F3BB0;
        inline constexpr std::uintptr_t HumanoidLoadAnimation = 0x3829820;
        inline constexpr std::uintptr_t AnimatorLoadAnimation = 0x384BE80;
        inline constexpr std::uintptr_t AnimationControllerLoadAnimation = 0x54A4260;
        inline constexpr std::uintptr_t HumanoidMoveTo = 0x381B370;
        inline constexpr std::uintptr_t HumanoidEquipTool = 0x3817610;
        inline constexpr std::uintptr_t HumanoidGetState = 0x3817260;
        inline constexpr std::uintptr_t HumanoidTakeDamage = 0x380E390;
        inline constexpr std::uintptr_t HumanoidUnequipTools = 0x38177B0;
        inline constexpr std::uintptr_t HumanoidChangeState = 0x38174C0;
        inline constexpr std::uintptr_t WorkspaceRaycast = 0x2500AA0;
        inline constexpr std::uintptr_t WorkspaceGetPartsInPart = 0x25002A0;
        inline constexpr std::uintptr_t WorkspaceBlockcast = 0x2501C60;
        inline constexpr std::uintptr_t WorkspaceGetPartBoundsInBox = 0x24FF800;
        inline constexpr std::uintptr_t WorkspaceShapecast = 0x2502430;
        inline constexpr std::uintptr_t WorkspaceSpherecast = 0x2501DB0;
        inline constexpr std::uintptr_t RemoteFunctionInvokeServer = 0x506A980;
        inline constexpr std::uintptr_t RemoteFunctionInvokeClient = 0x506ACA0;
        inline constexpr std::uintptr_t ProximityPromptInputHoldBegin = 0x4F12AB0;
        inline constexpr std::uintptr_t ProximityPromptInputHoldEnd = 0x4F12B90;
    } 
}
