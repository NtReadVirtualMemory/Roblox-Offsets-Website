namespace InternalFunctions {
    namespace Luau {
    }

    namespace Engine {
        inline constexpr std::uintptr_t TaskSchedulerPointer = 0x8F026A8;
        inline constexpr std::uintptr_t IdentityPointer = 0x86D8748;
        inline constexpr std::uintptr_t IdentityPtr = 0x86D8748;
        inline constexpr std::uintptr_t GameLdrPerformanceCheck = 0x86D8748;
        inline constexpr std::uintptr_t MessageSignalPointer = 0x86CCF28;
        inline constexpr std::uintptr_t OFFSET_MESSAGE_SIGNAL_PTR = 0x86CCF28;
        inline constexpr std::uintptr_t WaitScriptSlotVftable = 0x70CFDA0;
        inline constexpr std::uintptr_t FunctionScriptSlotImpl0Vftable = 0x70D00D8;
        inline constexpr std::uintptr_t FunctionScriptSlotImpl1Vftable = 0x70CFFD8;
        inline constexpr std::uintptr_t MessageSlotImplVftable = 0x70CFF50;
        inline constexpr std::uintptr_t AuroraMessageSlotVftable = 0x70D8398;
        inline constexpr std::uintptr_t CollectionMessageSlotVftable = 0x7042720;
        inline constexpr std::uintptr_t PrintOnHideSlotVftable = 0x70C7210;
        inline constexpr std::uintptr_t WaitingHybridScriptsJobVFT = 0x70D9140;
        inline constexpr std::uintptr_t FFlagStringVftable = 0x7102D30;
        inline constexpr std::uintptr_t FFLAG_STR = 0x7102D30;
        inline constexpr std::uintptr_t FFlagValueVftable = 0x7102F60;
        inline constexpr std::uintptr_t FFLAG_VALUE = 0x7102F60;
        inline constexpr std::uintptr_t FFlagBoolVftable = 0x7102C18;
        inline constexpr std::uintptr_t FFLAG_BOOL = 0x7102C18;
        inline constexpr std::uintptr_t FFlagBoolStringVftable = 0x7103078;
        inline constexpr std::uintptr_t FFLAG_BOOL_STR = 0x7103078;
        inline constexpr std::uintptr_t FFlagIntVftable = 0x7102B00;
        inline constexpr std::uintptr_t FFLAG_INT = 0x7102B00;
        inline constexpr std::uintptr_t FFlagFIntVftable = 0x71029E8;
        inline constexpr std::uintptr_t FFLAG_FINT = 0x71029E8;
        inline constexpr std::uintptr_t RakPeerVftable = 0x6FFB0C8;
        inline constexpr std::uintptr_t RakPeerInterfaceVftable = 0x6FFB4F8;
        inline constexpr std::uintptr_t NetworkClientVftable = 0x70F9608;
        inline constexpr std::uintptr_t DataModelArbiter = 0x8F59810;
        inline constexpr std::uintptr_t PlayerConfigurerVftable = 0x70F3AD8;
        inline constexpr std::uintptr_t PlayerConfigurerPointer = 0x8E48500;
        inline constexpr std::uintptr_t PlayerConfigurerControlBlock = 0x8E48508;
        inline constexpr std::uintptr_t PartyPlayerInactivityTimeoutInSeconds = 0x8196148;
        // Failed: FFlagDataBank
        // Failed: DataBank
        inline constexpr std::uintptr_t MessageBusPointer = 0x8E277B8;
        // Failed: LuauSecurityCheckFalse
        // Failed: ReportTamperedLuauLoad
    }

    namespace Game {
        inline constexpr std::uintptr_t WeakObjectRefPush = 0x42240D0;
        inline constexpr std::uintptr_t PrintIdentity = 0x43078E0;
        inline constexpr std::uintptr_t FireLeftMouseClick = 0x3C7E520;
        inline constexpr std::uintptr_t FireRightMouseClick = 0x3C7E6C0;
        inline constexpr std::uintptr_t FireMouseHoverEnter = 0x3C7FB10;
        inline constexpr std::uintptr_t FireMouseHoverLeave = 0x3C7FCB0;
        inline constexpr std::uintptr_t TaskDefer = 0x43C38D0;
        inline constexpr std::uintptr_t DisconnectConnection = 0x4A9E0B0;
        inline constexpr std::uintptr_t FireProximityPrompt = 0x312C010;
        inline constexpr std::uintptr_t FireTouchInterest = 0x155E790;
        inline constexpr std::uintptr_t FireTouchInterestFromTouchPair = 0x18C1030;
        inline constexpr std::uintptr_t ScriptContextResume = 0x43004B0;
        inline constexpr std::uintptr_t GetValues = 0x41C68B0;
        inline constexpr std::uintptr_t LookupProperty = 0x1D44010;
        inline constexpr std::uintptr_t InstanceIndex = 0x4247EF0;
        inline constexpr std::uintptr_t DataModelInitMessageBus = 0x4D85710;
        inline constexpr std::uintptr_t PushInstance = 0x4246E90;
        inline constexpr std::uintptr_t InstanceResultMarshaller = 0x41FE450;
        inline constexpr std::uintptr_t PlayerConfigurer = 0x46D0C50;
        inline constexpr std::uintptr_t InstanceGetChildren = 0xF2DD30;
        inline constexpr std::uintptr_t InstanceGetAttribute = 0x1D5BBD0;
        // Failed: InstanceGetAttributes
        inline constexpr std::uintptr_t InstanceGetAttributeChangedSignal = 0x1D5F160;
        inline constexpr std::uintptr_t InstanceSetAttribute = 0x1D5BB50;
        inline constexpr std::uintptr_t InstanceGetPropertyChangedSignal = 0x4C10E70;
        inline constexpr std::uintptr_t InstanceGetTags = 0x3248E70;
        inline constexpr std::uintptr_t InstanceHasTag = 0x324A750;
        inline constexpr std::uintptr_t InstanceAddTag = 0x32475F0;
        inline constexpr std::uintptr_t InstanceRemoveTag = 0x3248400;
        inline constexpr std::uintptr_t InstanceFindFirstChild = 0x1545B50;
        inline constexpr std::uintptr_t InstanceFindFirstChildOfClass = 0x1D521E0;
        inline constexpr std::uintptr_t InstanceFindFirstChildWhichIsA = 0x1545B00;
        inline constexpr std::uintptr_t InstanceFindFirstAncestor = 0x1545E40;
        inline constexpr std::uintptr_t DataModelGetService = 0x290B610;
        // Failed: PlayersGetPlayers
        inline constexpr std::uintptr_t PlayersGetPlayerFromCharacter = 0x3E2B900;
        inline constexpr std::uintptr_t PlayerGetMouse = 0x3E5DE00;
        inline constexpr std::uintptr_t CameraWorldToScreenPoint = 0x3482700;
        inline constexpr std::uintptr_t CameraWorldToViewportPoint = 0x3482940;
        inline constexpr std::uintptr_t CameraScreenPointToRay = 0x3482C00;
        inline constexpr std::uintptr_t CameraViewportPointToRay = 0x3482C70;
        inline constexpr std::uintptr_t HumanoidLoadAnimation = 0x18A3810;
        inline constexpr std::uintptr_t AnimatorLoadAnimation = 0x1811E10;
        inline constexpr std::uintptr_t AnimationControllerLoadAnimation = 0x18564A0;
        inline constexpr std::uintptr_t HumanoidMoveTo = 0x1895310;
        inline constexpr std::uintptr_t HumanoidEquipTool = 0x1891EF0;
        inline constexpr std::uintptr_t HumanoidGetState = 0x1891B40;
        inline constexpr std::uintptr_t HumanoidTakeDamage = 0x1888ED0;
        inline constexpr std::uintptr_t HumanoidUnequipTools = 0x1892090;
        inline constexpr std::uintptr_t HumanoidChangeState = 0x1891D90;
        inline constexpr std::uintptr_t WorkspaceRaycast = 0xD96A60;
        inline constexpr std::uintptr_t WorkspaceGetPartsInPart = 0xD96530;
        inline constexpr std::uintptr_t WorkspaceBlockcast = 0xD980D0;
        inline constexpr std::uintptr_t WorkspaceGetPartBoundsInBox = 0xD959F0;
        inline constexpr std::uintptr_t WorkspaceShapecast = 0xD98800;
        inline constexpr std::uintptr_t WorkspaceSpherecast = 0xD98220;
        inline constexpr std::uintptr_t RemoteFunctionInvokeServer = 0x35B1B60;
        inline constexpr std::uintptr_t RemoteFunctionInvokeClient = 0x35B1EB0;
        inline constexpr std::uintptr_t ProximityPromptInputHoldBegin = 0x312C490;
        inline constexpr std::uintptr_t ProximityPromptInputHoldEnd = 0x312C570;
        // Failed: GetGlobalState
        inline constexpr std::uintptr_t ScriptRunContextSetter = 0x100CCA0;
    }
}
