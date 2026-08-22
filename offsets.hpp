namespace ExternalOffsets {

    namespace Engine {
        inline constexpr std::uintptr_t TaskSchedulerPointer = 0x88B64C8;
        inline constexpr std::uintptr_t PlayerConfigurerPointer = 0x86A8278;
    }

    struct Instance {
        inline static constexpr std::uintptr_t Archivable = 0xAA; // Bool
        inline static constexpr std::uintptr_t ArchivableMask = 0x8;
        inline static constexpr std::uintptr_t DefinesCapabilities = 0xAA; // Bool
        inline static constexpr std::uintptr_t DefinesCapabilitiesMask = 0x10;
        inline static constexpr std::uintptr_t Name = 0x70; // String
        inline static constexpr std::uintptr_t Ref = 0x68; // Instance
        inline static constexpr std::uintptr_t Sandboxed = 0xAA; // Bool
        inline static constexpr std::uintptr_t SandboxedMask = 0x10;
        inline static constexpr std::uintptr_t numExpectedDirectChildren = 0x88; // Int32
        inline static constexpr std::uintptr_t Self = 0x8; // Pointer
        inline static constexpr std::uintptr_t SelfControlBlock = 0x10; // Pointer
        inline static constexpr std::uintptr_t ClassDescriptor = 0xF8; // Pointer
        inline static constexpr std::uintptr_t Parent = 0x68; // Pointer
        inline static constexpr std::uintptr_t Children = 0x78; // Pointer
        inline static constexpr std::uintptr_t ChildrenControlBlock = 0x80; // Pointer
        inline static constexpr std::uintptr_t AttributeStorage = 0x40; // Pointer
    };

    struct Accoutrement : Instance {
        inline static constexpr std::uintptr_t AttachmentPoint = 0xB8; // CoordinateFrame
        inline static constexpr std::uintptr_t AttachmentRight = 0xB8; // Vector3
        inline static constexpr std::uintptr_t BackendAccoutrementState = 0xE8; // Int32
    };

    struct AccessoryDescription : Instance {
        inline static constexpr std::uintptr_t AssetId = 0xC0; // Int64
        inline static constexpr std::uintptr_t IsLayered = 0xF8; // Bool
        inline static constexpr std::uintptr_t Order = 0xF0; // Int32
        inline static constexpr std::uintptr_t Puffiness = 0xF4; // Float32
    };

    struct Model : Instance {
        inline static constexpr std::uintptr_t ModelMeshCFrame = 0x100; // CoordinateFrame
        inline static constexpr std::uintptr_t ModelMeshData = 0xE8; // SharedString
        inline static constexpr std::uintptr_t ModelMeshSize = 0x130; // Vector3
        inline static constexpr std::uintptr_t Scale = 0x144; // Float32
        inline static constexpr std::uintptr_t ScaleFactor = 0x144; // Float32
        inline static constexpr std::uintptr_t SlimHash = 0xF0; // SharedString
        inline static constexpr std::uintptr_t WorldPivotData = 0xF8; // OptionalCoordinateFrame
    };

    struct GuiBase2d : Instance {
        inline static constexpr std::uintptr_t IsNotOccluded = 0x135; // Bool
        inline static constexpr std::uintptr_t TotalGroupScale = 0x130; // Float32
    };

    struct LayerCollector : GuiBase2d {
        inline static constexpr std::uintptr_t Enabled = 0x4C4; // Bool
        inline static constexpr std::uintptr_t ResetOnSpawn = 0x4C5; // Bool
        inline static constexpr std::uintptr_t TabKeyboardNavigation = 0x4C6; // Bool
    };

    struct SurfaceGuiBase : LayerCollector {
        inline static constexpr std::uintptr_t Active = 0x754; // Bool
    };

    struct AdGui : SurfaceGuiBase {
        inline static constexpr std::uintptr_t EnableVideoAds = 0x874; // Bool
        inline static constexpr std::uintptr_t FallbackImage = 0x838; // TextureId
        inline static constexpr std::uintptr_t FallbackImageContent = 0x838; // Content
    };

    struct ControllerBase : Instance {
        inline static constexpr std::uintptr_t Active = 0xBC; // Bool
        inline static constexpr std::uintptr_t BalanceRigidityEnabled = 0xBD; // Bool
        inline static constexpr std::uintptr_t MoveSpeedFactor = 0xB8; // Float32
    };

    struct AirController : ControllerBase {
        inline static constexpr std::uintptr_t BalanceMaxTorque = 0xEC; // Float32
        inline static constexpr std::uintptr_t BalanceSpeed = 0xF0; // Float32
        inline static constexpr std::uintptr_t MaintainAngularMomentum = 0x100; // Bool
        inline static constexpr std::uintptr_t MaintainLinearMomentum = 0x101; // Bool
        inline static constexpr std::uintptr_t MoveMaxForce = 0xF4; // Float32
        inline static constexpr std::uintptr_t TurnMaxTorque = 0xF8; // Float32
        inline static constexpr std::uintptr_t TurnSpeedFactor = 0xFC; // Float32
    };

    struct Constraint : Instance {
        inline static constexpr std::uintptr_t Active = 0xB8; // Bool
        inline static constexpr std::uintptr_t Color = 0xF0; // BrickColor
        inline static constexpr std::uintptr_t Enabled = 0xB9; // Bool
        inline static constexpr std::uintptr_t Visible = 0xF4; // Bool
    };

    struct AlignOrientation : Constraint {
        inline static constexpr std::uintptr_t CFrame = 0x170; // CoordinateFrame
        inline static constexpr std::uintptr_t MaxAngularVelocity = 0x1A4; // Float32
        inline static constexpr std::uintptr_t MaxTorque = 0x1A8; // Float32
        inline static constexpr std::uintptr_t PrimaryAxis = 0x170; // Vector3
        inline static constexpr std::uintptr_t PrimaryAxisOnly = 0x1B4; // Bool
        inline static constexpr std::uintptr_t ReactionTorqueEnabled = 0x1B5; // Bool
        inline static constexpr std::uintptr_t Responsiveness = 0x1B0; // Float32
        inline static constexpr std::uintptr_t RigidityEnabled = 0x1B6; // Bool
    };

    struct AlignPosition : Constraint {
        inline static constexpr std::uintptr_t ApplyAtCenterOfMass = 0x1A0; // Bool
        inline static constexpr std::uintptr_t MaxForce = 0x190; // Float32
        inline static constexpr std::uintptr_t MaxVelocity = 0x194; // Float32
        inline static constexpr std::uintptr_t ReactionForceEnabled = 0x1A1; // Bool
        inline static constexpr std::uintptr_t Responsiveness = 0x19C; // Float32
        inline static constexpr std::uintptr_t RigidityEnabled = 0x1A2; // Bool
    };

    struct AnalyticsService : Instance {
        inline static constexpr std::uintptr_t ApiKey = 0xC8; // String
    };

    struct AngularVelocity : Constraint {
        inline static constexpr std::uintptr_t MaxTorque = 0x17C; // Float32
        inline static constexpr std::uintptr_t ReactionTorqueEnabled = 0x184; // Bool
    };

    struct Animation : Instance {
        inline static constexpr std::uintptr_t AnimationContent = 0xB0; // Content
    };

    struct AnimationClip : Instance {
        inline static constexpr std::uintptr_t Loop = 0xCC; // Bool
    };

    struct AnimationConstraint : Constraint {
        inline static constexpr std::uintptr_t AngularDamping = 0x170; // Float32
        inline static constexpr std::uintptr_t AngularStrength = 0x174; // Float32
        inline static constexpr std::uintptr_t EnableSkinning = 0x188; // Bool
        inline static constexpr std::uintptr_t IsKinematic = 0x189; // Bool
        inline static constexpr std::uintptr_t LinearDamping = 0x178; // Float32
        inline static constexpr std::uintptr_t LinearStrength = 0x17C; // Float32
        inline static constexpr std::uintptr_t MaxForce = 0x180; // Float32
        inline static constexpr std::uintptr_t MaxTorque = 0x184; // Float32
    };

    struct AnimationNodeDefinition : Instance {
        inline static constexpr std::uintptr_t InputPinData = 0xF0; // BinaryString
    };

    struct AnimationTrack : Instance {
        inline static constexpr std::uintptr_t Speed = 0xD4; // Float32
        inline static constexpr std::uintptr_t TimePosition = 0xD8; // Float32
        inline static constexpr std::uintptr_t WeightTarget = 0xE0; // Float32
    };

    struct Animator : Instance {
        inline static constexpr std::uintptr_t AnimationId0 = 0x2F0; // Int64
        inline static constexpr std::uintptr_t AnimationId1 = 0x2F8; // Int64
        inline static constexpr std::uintptr_t AnimationId10 = 0x300; // Int64
        inline static constexpr std::uintptr_t AnimationId11 = 0x308; // Int64
        inline static constexpr std::uintptr_t AnimationId12 = 0x310; // Int64
        inline static constexpr std::uintptr_t AnimationId13 = 0x318; // Int64
        inline static constexpr std::uintptr_t AnimationId14 = 0x320; // Int64
        inline static constexpr std::uintptr_t AnimationId15 = 0x328; // Int64
        inline static constexpr std::uintptr_t AnimationId2 = 0x330; // Int64
        inline static constexpr std::uintptr_t AnimationId3 = 0x338; // Int64
        inline static constexpr std::uintptr_t AnimationId4 = 0x340; // Int64
        inline static constexpr std::uintptr_t AnimationId5 = 0x348; // Int64
        inline static constexpr std::uintptr_t AnimationId6 = 0x350; // Int64
        inline static constexpr std::uintptr_t AnimationId7 = 0x358; // Int64
        inline static constexpr std::uintptr_t AnimationId8 = 0x360; // Int64
        inline static constexpr std::uintptr_t AnimationId9 = 0x368; // Int64
        inline static constexpr std::uintptr_t FacsReplicationData = 0xB8; // FacsReplicationData
        inline static constexpr std::uintptr_t PreferLodEnabled = 0x3E4; // Bool
        inline static constexpr std::uintptr_t RootMotion = 0x370; // CoordinateFrame
        inline static constexpr std::uintptr_t RootMotionWeight = 0x3A0; // Float32
    };

    struct GuiBase3d : Instance {
        inline static constexpr std::uintptr_t Transparency = 0xE4; // Float32
        inline static constexpr std::uintptr_t Visible = 0xE8; // Bool
    };

    struct ArcHandles : GuiBase3d {
        inline static constexpr std::uintptr_t MouseButton1DownConnectionCount = 0x124; // Int32
        inline static constexpr std::uintptr_t MouseButton1UpConnectionCount = 0x128; // Int32
        inline static constexpr std::uintptr_t MouseDragConnectionCount = 0x12C; // Int32
        inline static constexpr std::uintptr_t MouseEnterConnectionCount = 0x130; // Int32
        inline static constexpr std::uintptr_t MouseLeaveConnectionCount = 0x134; // Int32
    };

    struct AssetDeliveryProxy : Instance {
        inline static constexpr std::uintptr_t Interface = 0xC8; // String
        inline static constexpr std::uintptr_t StartServer = 0xEC; // Bool
    };

    struct AssetPatchSettings : Instance {
        inline static constexpr std::uintptr_t OutputPath = 0xD0; // String
        inline static constexpr std::uintptr_t PatchId = 0xF0; // String
    };

    struct AssetService : Instance {
        inline static constexpr std::uintptr_t AllowInsertFreeAssets = 0xC0; // Bool
    };

    struct SoundEffect : Instance {
        inline static constexpr std::uintptr_t Enabled = 0xBC; // Bool
        inline static constexpr std::uintptr_t Priority = 0xB8; // Int32
    };

    struct Atmosphere : Instance {
        inline static constexpr std::uintptr_t Color = 0xB8; // Color3
        inline static constexpr std::uintptr_t Decay = 0xC4; // Color3
        inline static constexpr std::uintptr_t Density = 0xD0; // Float32
        inline static constexpr std::uintptr_t Glare = 0xD4; // Float32
        inline static constexpr std::uintptr_t Haze = 0xD8; // Float32
        inline static constexpr std::uintptr_t Offset = 0xDC; // Float32
    };

    struct Attachment : Instance {
        inline static constexpr std::uintptr_t Orientation = 0xB8; // Vector3
        inline static constexpr std::uintptr_t Rotation = 0xB8; // Vector3
        inline static constexpr std::uintptr_t Visible = 0xDC; // Bool
    };

    struct AudioAnalyzer : Instance {
        inline static constexpr std::uintptr_t SpectrumEnabled = 0x134; // Bool
    };

    struct AudioChorus : Instance {
        inline static constexpr std::uintptr_t Bypass = 0x13C; // Bool
        inline static constexpr std::uintptr_t Depth = 0x130; // Float32
        inline static constexpr std::uintptr_t Mix = 0x134; // Float32
        inline static constexpr std::uintptr_t Rate = 0x138; // Float32
    };

    struct AudioCompressor : Instance {
        inline static constexpr std::uintptr_t Attack = 0x130; // Float32
        inline static constexpr std::uintptr_t Bypass = 0x144; // Bool
        inline static constexpr std::uintptr_t MakeupGain = 0x134; // Float32
        inline static constexpr std::uintptr_t Ratio = 0x138; // Float32
        inline static constexpr std::uintptr_t Release = 0x13C; // Float32
        inline static constexpr std::uintptr_t Threshold = 0x140; // Float32
    };

    struct AudioDeviceInput : Instance {
        inline static constexpr std::uintptr_t Active = 0x170; // Bool
        inline static constexpr std::uintptr_t EchoCancellation = 0x171; // Bool
        inline static constexpr std::uintptr_t GainControl = 0x172; // Bool
        inline static constexpr std::uintptr_t Muted = 0x173; // Bool
        inline static constexpr std::uintptr_t MutedByLocalUser = 0x174; // Bool
        inline static constexpr std::uintptr_t NoiseSuppression = 0x175; // Bool
        inline static constexpr std::uintptr_t Volume = 0x16C; // Float32
    };

    struct AudioDistortion : Instance {
        inline static constexpr std::uintptr_t Bypass = 0x134; // Bool
        inline static constexpr std::uintptr_t Level = 0x130; // Float32
    };

    struct AudioEcho : Instance {
        inline static constexpr std::uintptr_t Bypass = 0x144; // Bool
        inline static constexpr std::uintptr_t DelayTime = 0x130; // Float32
        inline static constexpr std::uintptr_t DryLevel = 0x134; // Float32
        inline static constexpr std::uintptr_t Feedback = 0x138; // Float32
        inline static constexpr std::uintptr_t RampTime = 0x13C; // Float32
        inline static constexpr std::uintptr_t WetLevel = 0x140; // Float32
    };

    struct AudioEmitter : Instance {
        inline static constexpr std::uintptr_t AcousticSimulationEnabled = 0x178; // Bool
        inline static constexpr std::uintptr_t AudioInteractionGroup = 0x148; // String
    };

    struct AudioEqualizer : Instance {
        inline static constexpr std::uintptr_t Bypass = 0x144; // Bool
        inline static constexpr std::uintptr_t HighGain = 0x138; // Float32
        inline static constexpr std::uintptr_t LowGain = 0x13C; // Float32
        inline static constexpr std::uintptr_t MidGain = 0x140; // Float32
    };

    struct AudioFader : Instance {
        inline static constexpr std::uintptr_t Bypass = 0x134; // Bool
        inline static constexpr std::uintptr_t Volume = 0x130; // Float32
    };

    struct AudioFilter : Instance {
        inline static constexpr std::uintptr_t Bypass = 0x140; // Bool
        inline static constexpr std::uintptr_t Frequency = 0x134; // Float32
        inline static constexpr std::uintptr_t Gain = 0x138; // Float32
        inline static constexpr std::uintptr_t Q = 0x13C; // Float32
    };

    struct AudioFlanger : Instance {
        inline static constexpr std::uintptr_t Bypass = 0x13C; // Bool
        inline static constexpr std::uintptr_t Depth = 0x130; // Float32
        inline static constexpr std::uintptr_t Mix = 0x134; // Float32
        inline static constexpr std::uintptr_t Rate = 0x138; // Float32
    };

    struct AudioGate : Instance {
        inline static constexpr std::uintptr_t Attack = 0x138; // Float32
        inline static constexpr std::uintptr_t Bypass = 0x140; // Bool
        inline static constexpr std::uintptr_t Release = 0x13C; // Float32
    };

    struct AudioLimiter : Instance {
        inline static constexpr std::uintptr_t Bypass = 0x138; // Bool
        inline static constexpr std::uintptr_t MaxLevel = 0x130; // Float32
        inline static constexpr std::uintptr_t Release = 0x134; // Float32
    };

    struct AudioListener : Instance {
        inline static constexpr std::uintptr_t AcousticSimulationEnabled = 0x16C; // Bool
        inline static constexpr std::uintptr_t AudioInteractionGroup = 0x148; // String
    };

    struct AudioPitchShifter : Instance {
        inline static constexpr std::uintptr_t Bypass = 0x138; // Bool
        inline static constexpr std::uintptr_t Pitch = 0x130; // Float32
    };

    struct AudioPlayer : Instance {
        inline static constexpr std::uintptr_t Asset = 0x138; // SoundId
        inline static constexpr std::uintptr_t AssetId = 0x138; // String
        inline static constexpr std::uintptr_t AudioContent = 0x138; // Content
        inline static constexpr std::uintptr_t AutoLoad = 0x168; // Bool
        inline static constexpr std::uintptr_t AutoPlay = 0x169; // Bool
        inline static constexpr std::uintptr_t IsPlaying = 0x16A; // Bool
        inline static constexpr std::uintptr_t Looping = 0x16B; // Bool
        inline static constexpr std::uintptr_t PlaybackSpeed = 0x140; // Float64
        inline static constexpr std::uintptr_t TimePosition = 0x148; // Float64
        inline static constexpr std::uintptr_t Volume = 0x164; // Float32
    };

    struct AudioRecorder : Instance {
        inline static constexpr std::uintptr_t IsRecording = 0x130; // Bool
    };

    struct AudioReverb : Instance {
        inline static constexpr std::uintptr_t Bypass = 0x160; // Bool
        inline static constexpr std::uintptr_t DecayRatio = 0x130; // Float32
        inline static constexpr std::uintptr_t DecayTime = 0x134; // Float32
        inline static constexpr std::uintptr_t Density = 0x138; // Float32
        inline static constexpr std::uintptr_t Diffusion = 0x13C; // Float32
        inline static constexpr std::uintptr_t DryLevel = 0x140; // Float32
        inline static constexpr std::uintptr_t EarlyDelayTime = 0x144; // Float32
        inline static constexpr std::uintptr_t HighCutFrequency = 0x148; // Float32
        inline static constexpr std::uintptr_t LateDelayTime = 0x14C; // Float32
        inline static constexpr std::uintptr_t LowShelfFrequency = 0x150; // Float32
        inline static constexpr std::uintptr_t LowShelfGain = 0x154; // Float32
        inline static constexpr std::uintptr_t ReferenceFrequency = 0x158; // Float32
        inline static constexpr std::uintptr_t WetLevel = 0x15C; // Float32
    };

    struct AudioSearchParams : Instance {
        inline static constexpr std::uintptr_t Album = 0xB8; // String
        inline static constexpr std::uintptr_t Artist = 0xD8; // String
        inline static constexpr std::uintptr_t MaxDuration = 0x15C; // Int32
        inline static constexpr std::uintptr_t MinDuration = 0x160; // Int32
        inline static constexpr std::uintptr_t SearchKeyword = 0xF8; // String
        inline static constexpr std::uintptr_t Tag = 0x118; // String
        inline static constexpr std::uintptr_t Title = 0x138; // String
    };

    struct AudioSpeechToText : Instance {
        inline static constexpr std::uintptr_t DictationEnabled = 0x150; // Bool
        inline static constexpr std::uintptr_t DisableVoiceDetection = 0x151; // Bool
        inline static constexpr std::uintptr_t EnableVolumeCheck = 0x152; // Bool
        inline static constexpr std::uintptr_t Enabled = 0x153; // Bool
        inline static constexpr std::uintptr_t Text = 0x130; // String
        inline static constexpr std::uintptr_t VoiceDetected = 0x154; // Bool
        inline static constexpr std::uintptr_t VoiceDetectedOverride = 0x155; // Bool
    };

    struct AudioTextToSpeech : Instance {
        inline static constexpr std::uintptr_t IsPlaying = 0x188; // Bool
        inline static constexpr std::uintptr_t Looping = 0x189; // Bool
        inline static constexpr std::uintptr_t Pitch = 0x178; // Float32
        inline static constexpr std::uintptr_t PlaybackSpeed = 0x17C; // Float32
        inline static constexpr std::uintptr_t Speed = 0x180; // Float32
        inline static constexpr std::uintptr_t Text = 0x130; // String
        inline static constexpr std::uintptr_t TimePosition = 0x170; // Float64
        inline static constexpr std::uintptr_t VoiceId = 0x150; // String
        inline static constexpr std::uintptr_t Volume = 0x184; // Float32
    };

    struct AudioTremolo : Instance {
        inline static constexpr std::uintptr_t Bypass = 0x148; // Bool
        inline static constexpr std::uintptr_t Depth = 0x130; // Float32
        inline static constexpr std::uintptr_t Duty = 0x134; // Float32
        inline static constexpr std::uintptr_t Frequency = 0x138; // Float32
        inline static constexpr std::uintptr_t Shape = 0x13C; // Float32
        inline static constexpr std::uintptr_t Skew = 0x140; // Float32
        inline static constexpr std::uintptr_t Square = 0x144; // Float32
    };

    struct AudioWindSynthesizer : Instance {
        inline static constexpr std::uintptr_t Enabled = 0x144; // Bool
        inline static constexpr std::uintptr_t Volume = 0x140; // Float32
    };

    struct LuaSourceContainer : Instance {
        inline static constexpr std::uintptr_t CachedRemoteSource = 0xB8; // ProtectedString
        inline static constexpr std::uintptr_t CachedRemoteSourceLoadState = 0xF0; // Int32
        inline static constexpr std::uintptr_t HasAssociatedDrafts = 0xF4; // Bool
        inline static constexpr std::uintptr_t IsDifferentFromFileSystem = 0xF5; // Bool
        inline static constexpr std::uintptr_t SandboxedSource = 0x120; // ProtectedString
        inline static constexpr std::uintptr_t ScriptGuid = 0xD0; // String
        inline static constexpr std::uintptr_t isPlayerScript = 0xF6; // Bool
    };

    struct AuroraScript : LuaSourceContainer {
        inline static constexpr std::uintptr_t EnableCulling = 0x168; // Bool
        inline static constexpr std::uintptr_t EnableLOD = 0x169; // Bool
        inline static constexpr std::uintptr_t LODCriticality = 0x160; // Int32
        inline static constexpr std::uintptr_t Priority = 0x164; // Int32
        inline static constexpr std::uintptr_t Source = 0x130; // ProtectedString
    };

    struct AuroraScriptObject : Instance {
        inline static constexpr std::uintptr_t FrameId = 0xD0; // Int32
        inline static constexpr std::uintptr_t LODLevel = 0xD4; // Int32
        inline static constexpr std::uintptr_t MaxFrequency = 0xD8; // Int32
        inline static constexpr std::uintptr_t PriorFrameInvoked = 0xDC; // Int32
    };

    struct AuroraService : Instance {
        inline static constexpr std::uintptr_t BufferFullInputCount = 0xE0; // Int32
        inline static constexpr std::uintptr_t HashRoundingPoint = 0xD0; // Float64
        inline static constexpr std::uintptr_t IgnoreRotation = 0xF4; // Bool
        inline static constexpr std::uintptr_t InputDropRate = 0xE4; // Float32
        inline static constexpr std::uintptr_t LockStepIdOffset = 0xF5; // Bool
        inline static constexpr std::uintptr_t OutOfOrderInputCount = 0xE8; // Int32
        inline static constexpr std::uintptr_t RCCHeartbeatFPS = 0xD8; // Float64
        inline static constexpr std::uintptr_t RollbackOffset = 0xEC; // Int32
        inline static constexpr std::uintptr_t TooOldInputCount = 0xF0; // Int32
    };

    struct AvatarAbilityRules : Instance {
        inline static constexpr std::uintptr_t EnableClimbing = 0xB4; // Bool
        inline static constexpr std::uintptr_t EnableCrouching = 0xB5; // Bool
        inline static constexpr std::uintptr_t EnableFallingDown = 0xB6; // Bool
        inline static constexpr std::uintptr_t EnableGettingUp = 0xB7; // Bool
        inline static constexpr std::uintptr_t EnableHolding = 0xB8; // Bool
        inline static constexpr std::uintptr_t EnableJumping = 0xB9; // Bool
        inline static constexpr std::uintptr_t EnableReaching = 0xBA; // Bool
        inline static constexpr std::uintptr_t EnableRunning = 0xBB; // Bool
        inline static constexpr std::uintptr_t EnableSitting = 0xBC; // Bool
        inline static constexpr std::uintptr_t EnableSprinting = 0xBD; // Bool
        inline static constexpr std::uintptr_t EnableStrafing = 0xBE; // Bool
        inline static constexpr std::uintptr_t EnableSwimming = 0xBF; // Bool
    };

    struct AvatarAccessoryRules : Instance {
        inline static constexpr std::uintptr_t CustomBackAccessoryEnabled = 0x108; // Bool
        inline static constexpr std::uintptr_t CustomBackAccessoryId = 0xB0; // Int64
        inline static constexpr std::uintptr_t CustomFaceAccessoryEnabled = 0x109; // Bool
        inline static constexpr std::uintptr_t CustomFaceAccessoryId = 0xB8; // Int64
        inline static constexpr std::uintptr_t CustomFrontAccessoryEnabled = 0x10A; // Bool
        inline static constexpr std::uintptr_t CustomFrontAccessoryId = 0xC0; // Int64
        inline static constexpr std::uintptr_t CustomHairAccessoryEnabled = 0x10B; // Bool
        inline static constexpr std::uintptr_t CustomHairAccessoryId = 0xC8; // Int64
        inline static constexpr std::uintptr_t CustomHeadAccessoryEnabled = 0x10C; // Bool
        inline static constexpr std::uintptr_t CustomHeadAccessoryId = 0xD0; // Int64
        inline static constexpr std::uintptr_t CustomNeckAccessoryEnabled = 0x10D; // Bool
        inline static constexpr std::uintptr_t CustomNeckAccessoryId = 0xD8; // Int64
        inline static constexpr std::uintptr_t CustomShoulderAccessoryEnabled = 0x10E; // Bool
        inline static constexpr std::uintptr_t CustomShoulderAccessoryId = 0xE0; // Int64
        inline static constexpr std::uintptr_t CustomWaistAccessoryEnabled = 0x10F; // Bool
        inline static constexpr std::uintptr_t CustomWaistAccessoryId = 0xE8; // Int64
        inline static constexpr std::uintptr_t EnableEmissives = 0x110; // Bool
        inline static constexpr std::uintptr_t EnableSound = 0x111; // Bool
        inline static constexpr std::uintptr_t EnableVFX = 0x112; // Bool
    };

    struct AvatarAnimationRules : Instance {
        inline static constexpr std::uintptr_t CustomClimbAnimationEnabled = 0x108; // Bool
        inline static constexpr std::uintptr_t CustomClimbAnimationId = 0xB0; // Int64
        inline static constexpr std::uintptr_t CustomFallAnimationEnabled = 0x109; // Bool
        inline static constexpr std::uintptr_t CustomFallAnimationId = 0xB8; // Int64
        inline static constexpr std::uintptr_t CustomIdleAlt1AnimationEnabled = 0x10A; // Bool
        inline static constexpr std::uintptr_t CustomIdleAlt1AnimationId = 0xC0; // Int64
        inline static constexpr std::uintptr_t CustomIdleAlt2AnimationEnabled = 0x10B; // Bool
        inline static constexpr std::uintptr_t CustomIdleAlt2AnimationId = 0xC8; // Int64
        inline static constexpr std::uintptr_t CustomIdleAnimationEnabled = 0x10C; // Bool
        inline static constexpr std::uintptr_t CustomIdleAnimationId = 0xD0; // Int64
        inline static constexpr std::uintptr_t CustomJumpAnimationEnabled = 0x10D; // Bool
        inline static constexpr std::uintptr_t CustomJumpAnimationId = 0xD8; // Int64
        inline static constexpr std::uintptr_t CustomRunAnimationEnabled = 0x10E; // Bool
        inline static constexpr std::uintptr_t CustomRunAnimationId = 0xE0; // Int64
        inline static constexpr std::uintptr_t CustomSwimAnimationEnabled = 0x10F; // Bool
        inline static constexpr std::uintptr_t CustomSwimAnimationId = 0xE8; // Int64
        inline static constexpr std::uintptr_t CustomSwimIdleAnimationEnabled = 0x110; // Bool
        inline static constexpr std::uintptr_t CustomSwimIdleAnimationId = 0xF0; // Int64
        inline static constexpr std::uintptr_t CustomWalkAnimationEnabled = 0x111; // Bool
        inline static constexpr std::uintptr_t CustomWalkAnimationId = 0xF8; // Int64
    };

    struct AvatarBodyRules : Instance {
        inline static constexpr std::uintptr_t CustomBodyBundleId = 0xB0; // Int64
        inline static constexpr std::uintptr_t CustomEyebrowEnabled = 0x148; // Bool
        inline static constexpr std::uintptr_t CustomEyebrowId = 0xB8; // Int64
        inline static constexpr std::uintptr_t CustomEyelashEnabled = 0x149; // Bool
        inline static constexpr std::uintptr_t CustomEyelashId = 0xC0; // Int64
        inline static constexpr std::uintptr_t CustomFaceEnabled = 0x14A; // Bool
        inline static constexpr std::uintptr_t CustomFaceId = 0xC8; // Int64
        inline static constexpr std::uintptr_t CustomHeadEnabled = 0x14B; // Bool
        inline static constexpr std::uintptr_t CustomHeadId = 0xD0; // Int64
        inline static constexpr std::uintptr_t CustomLeftArmEnabled = 0x14C; // Bool
        inline static constexpr std::uintptr_t CustomLeftArmId = 0xD8; // Int64
        inline static constexpr std::uintptr_t CustomLeftLegEnabled = 0x14D; // Bool
        inline static constexpr std::uintptr_t CustomLeftLegId = 0xE0; // Int64
        inline static constexpr std::uintptr_t CustomMoodEnabled = 0x14E; // Bool
        inline static constexpr std::uintptr_t CustomMoodId = 0xE8; // Int64
        inline static constexpr std::uintptr_t CustomRightArmEnabled = 0x14F; // Bool
        inline static constexpr std::uintptr_t CustomRightArmId = 0xF0; // Int64
        inline static constexpr std::uintptr_t CustomRightLegEnabled = 0x150; // Bool
        inline static constexpr std::uintptr_t CustomRightLegId = 0xF8; // Int64
        inline static constexpr std::uintptr_t CustomTorsoEnabled = 0x151; // Bool
        inline static constexpr std::uintptr_t CustomTorsoId = 0x100; // Int64
        inline static constexpr std::uintptr_t KeepPlayerHead = 0x152; // Bool
    };

    struct AvatarClothingRules : Instance {
        inline static constexpr std::uintptr_t CustomClassicPantsAccessoryEnabled = 0x124; // Bool
        inline static constexpr std::uintptr_t CustomClassicPantsAccessoryId = 0xB0; // Int64
        inline static constexpr std::uintptr_t CustomClassicShirtsAccessoryEnabled = 0x125; // Bool
        inline static constexpr std::uintptr_t CustomClassicShirtsAccessoryId = 0xB8; // Int64
        inline static constexpr std::uintptr_t CustomClassicTShirtsAccessoryEnabled = 0x126; // Bool
        inline static constexpr std::uintptr_t CustomClassicTShirtsAccessoryId = 0xC0; // Int64
        inline static constexpr std::uintptr_t CustomDressSkirtAccessoryEnabled = 0x127; // Bool
        inline static constexpr std::uintptr_t CustomDressSkirtAccessoryId = 0xC8; // Int64
        inline static constexpr std::uintptr_t CustomJacketAccessoryEnabled = 0x128; // Bool
        inline static constexpr std::uintptr_t CustomJacketAccessoryId = 0xD0; // Int64
        inline static constexpr std::uintptr_t CustomLeftShoesAccessoryEnabled = 0x129; // Bool
        inline static constexpr std::uintptr_t CustomLeftShoesAccessoryId = 0xD8; // Int64
        inline static constexpr std::uintptr_t CustomPantsAccessoryEnabled = 0x12A; // Bool
        inline static constexpr std::uintptr_t CustomPantsAccessoryId = 0xE0; // Int64
        inline static constexpr std::uintptr_t CustomRightShoesAccessoryEnabled = 0x12B; // Bool
        inline static constexpr std::uintptr_t CustomRightShoesAccessoryId = 0xE8; // Int64
        inline static constexpr std::uintptr_t CustomShirtAccessoryEnabled = 0x12C; // Bool
        inline static constexpr std::uintptr_t CustomShirtAccessoryId = 0xF0; // Int64
        inline static constexpr std::uintptr_t CustomShortsAccessoryEnabled = 0x12D; // Bool
        inline static constexpr std::uintptr_t CustomShortsAccessoryId = 0xF8; // Int64
        inline static constexpr std::uintptr_t CustomSweaterAccessoryEnabled = 0x12E; // Bool
        inline static constexpr std::uintptr_t CustomSweaterAccessoryId = 0x100; // Int64
        inline static constexpr std::uintptr_t CustomTShirtAccessoryEnabled = 0x12F; // Bool
        inline static constexpr std::uintptr_t CustomTShirtAccessoryId = 0x108; // Int64
    };

    struct AvatarSettings : Instance {
        inline static constexpr std::uintptr_t Loaded = 0xE0; // Bool
    };

    struct BackpackItem : Model {
        inline static constexpr std::uintptr_t TextureContent = 0x350; // Content
    };

    struct BallSocketConstraint : Constraint {
        inline static constexpr std::uintptr_t EnableSkinning = 0x188; // Bool
        inline static constexpr std::uintptr_t LimitsEnabled = 0x189; // Bool
        inline static constexpr std::uintptr_t MaxFrictionTorque = 0x170; // Float32
        inline static constexpr std::uintptr_t MaxFrictionTorqueXml = 0x170; // Float32
        inline static constexpr std::uintptr_t Radius = 0x174; // Float32
        inline static constexpr std::uintptr_t Restitution = 0x178; // Float32
        inline static constexpr std::uintptr_t TwistLimitsEnabled = 0x18A; // Bool
        inline static constexpr std::uintptr_t TwistLowerAngle = 0x17C; // Float32
        inline static constexpr std::uintptr_t TwistUpperAngle = 0x180; // Float32
        inline static constexpr std::uintptr_t UpperAngle = 0x184; // Float32
    };

    struct BaseCoreGuiConfiguration : Instance {
        inline static constexpr std::uintptr_t Enabled = 0xB0; // Bool
    };

    struct BasePart : Instance {
        inline static constexpr std::uintptr_t AudioCanCollide = 0x134; // Bool
        inline static constexpr std::uintptr_t BackParamA = 0xC8; // Float32
        inline static constexpr std::uintptr_t BackParamB = 0xCC; // Float32
        inline static constexpr std::uintptr_t BottomParamA = 0xD8; // Float32
        inline static constexpr std::uintptr_t BottomParamB = 0xDC; // Float32
        inline static constexpr std::uintptr_t BrickColor = 0x1A8; // BrickColor
        inline static constexpr std::uintptr_t CastShadow = 0x135; // Bool
        inline static constexpr std::uintptr_t Color = 0x1A8; // Color3
        inline static constexpr std::uintptr_t Color3uint8 = 0x1A8; // Color3uint8
        inline static constexpr std::uintptr_t FrontParamA = 0xE8; // Float32
        inline static constexpr std::uintptr_t FrontParamB = 0xEC; // Float32
        inline static constexpr std::uintptr_t LeftParamA = 0xF8; // Float32
        inline static constexpr std::uintptr_t LeftParamB = 0xFC; // Float32
        inline static constexpr std::uintptr_t LocalTransparencyModifier = 0x108; // Float32
        inline static constexpr std::uintptr_t Locked = 0x136; // Bool
        inline static constexpr std::uintptr_t Massless = 0x137; // Bool
        inline static constexpr std::uintptr_t Reflectance = 0x10C; // Float32
        inline static constexpr std::uintptr_t RightParamA = 0x110; // Float32
        inline static constexpr std::uintptr_t RightParamB = 0x114; // Float32
        inline static constexpr std::uintptr_t TopParamA = 0x120; // Float32
        inline static constexpr std::uintptr_t TopParamB = 0x124; // Float32
        inline static constexpr std::uintptr_t Transparency = 0x130; // Float32
        inline static constexpr std::uintptr_t brickColor = 0x1A8; // BrickColor
        inline static constexpr std::uintptr_t Primitive = 0x188; // Pointer
    };

    struct BaseScript : LuaSourceContainer {
        inline static constexpr std::uintptr_t Disabled = 0x134; // Bool
    };

    struct BaseWrap : Instance {
        inline static constexpr std::uintptr_t CageMeshContent = 0xB8; // Content
        inline static constexpr std::uintptr_t CageOrigin = 0x160; // CoordinateFrame
        inline static constexpr std::uintptr_t HSRContent = 0xE8; // Content
        inline static constexpr std::uintptr_t HSRData = 0x150; // SharedString
        inline static constexpr std::uintptr_t HSRMeshIdData = 0x158; // SharedString
        inline static constexpr std::uintptr_t ImportInProcess = 0x1C0; // Bool
        inline static constexpr std::uintptr_t ImportOrigin = 0x190; // CoordinateFrame
        inline static constexpr std::uintptr_t TemporaryCageMeshContent = 0x118; // Content
    };

    struct Beam : Instance {
        inline static constexpr std::uintptr_t Brightness = 0x180; // Float32
        inline static constexpr std::uintptr_t CurveSize0 = 0x184; // Float32
        inline static constexpr std::uintptr_t CurveSize1 = 0x188; // Float32
        inline static constexpr std::uintptr_t Enabled = 0x1B4; // Bool
        inline static constexpr std::uintptr_t FaceCamera = 0x1B5; // Bool
        inline static constexpr std::uintptr_t LightEmission = 0x18C; // Float32
        inline static constexpr std::uintptr_t LightInfluence = 0x190; // Float32
        inline static constexpr std::uintptr_t LocalTransparencyModifier = 0x194; // Float32
        inline static constexpr std::uintptr_t Segments = 0x198; // Int32
        inline static constexpr std::uintptr_t Texture = 0x130; // TextureId
        inline static constexpr std::uintptr_t TextureContent = 0x130; // Content
        inline static constexpr std::uintptr_t TextureLength = 0x19C; // Float32
        inline static constexpr std::uintptr_t TextureSpeed = 0x1A4; // Float32
        inline static constexpr std::uintptr_t Transparency = 0xB8; // NumberSequence
        inline static constexpr std::uintptr_t Width0 = 0x1A8; // Float32
        inline static constexpr std::uintptr_t Width1 = 0x1AC; // Float32
        inline static constexpr std::uintptr_t ZOffset = 0x1B0; // Float32
    };

    struct DataModelMesh : Instance {
        inline static constexpr std::uintptr_t Offset = 0xB8; // Vector3
        inline static constexpr std::uintptr_t Scale = 0xC4; // Vector3
        inline static constexpr std::uintptr_t VertexColor = 0xD0; // Vector3
    };

    struct BevelMesh : DataModelMesh {
        inline static constexpr std::uintptr_t Bevel = 0xE0; // Float32
        inline static constexpr std::uintptr_t Bulge = 0xE8; // Float32
        inline static constexpr std::uintptr_t Data = 0xE4; // Float32
    };

    struct BillboardGui : LayerCollector {
        inline static constexpr std::uintptr_t Active = 0x7C4; // Bool
        inline static constexpr std::uintptr_t AlwaysOnTop = 0x7C5; // Bool
        inline static constexpr std::uintptr_t Brightness = 0x7A8; // Float32
        inline static constexpr std::uintptr_t ClipsDescendants = 0x7C6; // Bool
        inline static constexpr std::uintptr_t CurrentDistance = 0x7AC; // Float32
        inline static constexpr std::uintptr_t DistanceLowerLimit = 0x7B0; // Float32
        inline static constexpr std::uintptr_t DistanceStep = 0x7B4; // Float32
        inline static constexpr std::uintptr_t DistanceUpperLimit = 0x7B8; // Float32
        inline static constexpr std::uintptr_t ExtentsOffset = 0x770; // Vector3
        inline static constexpr std::uintptr_t ExtentsOffsetWorldSpace = 0x77C; // Vector3
        inline static constexpr std::uintptr_t LightInfluence = 0x7BC; // Float32
        inline static constexpr std::uintptr_t MaxDistance = 0x7C0; // Float32
        inline static constexpr std::uintptr_t Size = 0x760; // UDim2
        inline static constexpr std::uintptr_t SizeOffset = 0x7A0; // Vector2
        inline static constexpr std::uintptr_t StudsOffset = 0x788; // Vector3
        inline static constexpr std::uintptr_t StudsOffsetWorldSpace = 0x794; // Vector3
    };

    struct BinaryStringValue : Instance {
        inline static constexpr std::uintptr_t Value = 0xB8; // BinaryString
    };

    struct PostEffect : Instance {
        inline static constexpr std::uintptr_t Enabled = 0xB0; // Bool
    };

    struct BloomEffect : PostEffect {
        inline static constexpr std::uintptr_t Intensity = 0xB8; // Float32
        inline static constexpr std::uintptr_t Size = 0xBC; // Float32
        inline static constexpr std::uintptr_t Threshold = 0xC0; // Float32
    };

    struct BlurEffect : PostEffect {
        inline static constexpr std::uintptr_t Size = 0xB8; // Float32
    };

    struct BodyAngularVelocity : Instance {
        inline static constexpr std::uintptr_t P = 0x2A0; // Float32
    };

    struct BodyColors : Instance {
        inline static constexpr std::uintptr_t HeadColor = 0xC0; // BrickColor
        inline static constexpr std::uintptr_t LeftArmColor = 0xD0; // BrickColor
        inline static constexpr std::uintptr_t LeftLegColor = 0xE0; // BrickColor
        inline static constexpr std::uintptr_t RightArmColor = 0xF0; // BrickColor
        inline static constexpr std::uintptr_t RightLegColor = 0x100; // BrickColor
        inline static constexpr std::uintptr_t TorsoColor = 0x110; // BrickColor
    };

    struct BodyGyro : Instance {
        inline static constexpr std::uintptr_t CFrame = 0x288; // CoordinateFrame
        inline static constexpr std::uintptr_t D = 0x2C4; // Float32
        inline static constexpr std::uintptr_t P = 0x2C8; // Float32
        inline static constexpr std::uintptr_t cframe = 0x288; // CoordinateFrame
    };

    struct BodyPartDescription : Instance {
        inline static constexpr std::uintptr_t AssetId = 0xE0; // Int64
    };

    struct BodyPosition : Instance {
        inline static constexpr std::uintptr_t D = 0x2A0; // Float32
        inline static constexpr std::uintptr_t P = 0x2A4; // Float32
    };

    struct BodyVelocity : Instance {
        inline static constexpr std::uintptr_t P = 0x2A0; // Float32
    };

    struct BoolValue : Instance {
        inline static constexpr std::uintptr_t Value = 0xB8; // Bool
    };

    struct HandleAdornment : GuiBase3d {
        inline static constexpr std::uintptr_t AlwaysOnTop = 0x15C; // Bool
        inline static constexpr std::uintptr_t CFrame = 0x118; // CoordinateFrame
    };

    struct BrickColorValue : Instance {
        inline static constexpr std::uintptr_t Value = 0xB8; // BrickColor
    };

    struct BubbleChatConfiguration : Instance {
        inline static constexpr std::uintptr_t AdorneeName = 0xB8; // String
        inline static constexpr std::uintptr_t BackgroundTransparency = 0xD8; // Float64
        inline static constexpr std::uintptr_t BubbleDuration = 0x114; // Float32
        inline static constexpr std::uintptr_t BubblesSpacing = 0x118; // Float32
        inline static constexpr std::uintptr_t Enabled = 0x12C; // Bool
        inline static constexpr std::uintptr_t FontFace = 0xE0; // FontInfo
        inline static constexpr std::uintptr_t MaxBubbles = 0x11C; // Float32
        inline static constexpr std::uintptr_t MaxDistance = 0x120; // Float32
        inline static constexpr std::uintptr_t MinimizeDistance = 0x124; // Float32
        inline static constexpr std::uintptr_t TailVisible = 0x12D; // Bool
        inline static constexpr std::uintptr_t TextSize = 0xE8; // Int64
        inline static constexpr std::uintptr_t VerticalStudsOffset = 0x128; // Float32
    };

    struct BubbleChatMessageProperties : Instance {
        inline static constexpr std::uintptr_t BackgroundTransparency = 0x110; // Float64
        inline static constexpr std::uintptr_t FontFace = 0x118; // FontInfo
        inline static constexpr std::uintptr_t TailVisible = 0x140; // Bool
        inline static constexpr std::uintptr_t TextSize = 0x120; // Int64
    };

    struct CFrameValue : Instance {
        inline static constexpr std::uintptr_t Value = 0xB8; // CoordinateFrame
    };

    struct Camera : Instance {
        inline static constexpr std::uintptr_t CFrame = 0xD8; // CoordinateFrame
        inline static constexpr std::uintptr_t CoordinateFrame = 0xD8; // CoordinateFrame
        inline static constexpr std::uintptr_t DiagonalFieldOfView = 0x13C; // Float32
        inline static constexpr std::uintptr_t FieldOfView = 0x140; // Float32
        inline static constexpr std::uintptr_t Focus = 0x108; // CoordinateFrame
        inline static constexpr std::uintptr_t HeadLocked = 0x154; // Bool
        inline static constexpr std::uintptr_t HeadScale = 0x148; // Float32
        inline static constexpr std::uintptr_t MaxAxisFieldOfView = 0x14C; // Float32
        inline static constexpr std::uintptr_t NearPlaneZ = 0x150; // Float32
        inline static constexpr std::uintptr_t VRTiltAndRollEnabled = 0x155; // Bool
        inline static constexpr std::uintptr_t ViewportSize = 0x290; // Vector2
        inline static constexpr std::uintptr_t focus = 0x108; // CoordinateFrame
        inline static constexpr std::uintptr_t ViewportDimensions = 0x28C; // Int16[2]
        inline static constexpr std::uintptr_t ViewportWidth = 0x28C; // Int16
        inline static constexpr std::uintptr_t ViewportHeight = 0x28E; // Int16
    };

    struct GuiObject : GuiBase2d {
        inline static constexpr std::uintptr_t DragBeginConnectionCount = 0x570; // Int32
        inline static constexpr std::uintptr_t DragStoppedConnectionCount = 0x574; // Int32
        inline static constexpr std::uintptr_t Draggable = 0x5AA; // Bool
        inline static constexpr std::uintptr_t GuiState = 0x578; // GuiState
        inline static constexpr std::uintptr_t MouseEnterConnectionCount = 0x584; // Int32
        inline static constexpr std::uintptr_t MouseLeaveConnectionCount = 0x588; // Int32
        inline static constexpr std::uintptr_t MouseMovedConnectionCount = 0x58C; // Int32
        inline static constexpr std::uintptr_t MouseWheelBackwardConnectionCount = 0x590; // Int32
        inline static constexpr std::uintptr_t MouseWheelForwardConnectionCount = 0x594; // Int32
    };

    struct CanvasGroup : GuiObject {
        inline static constexpr std::uintptr_t ResolutionScale = 0x988; // Float32
    };

    struct Capture {
        inline static constexpr std::uintptr_t CaptureTime = 0x88; // DateTime
        inline static constexpr std::uintptr_t CaptureType = 0x80; // CaptureType
    };

    struct CapturesViewConfiguration : BaseCoreGuiConfiguration {
        inline static constexpr std::uintptr_t Open = 0xB8; // Bool
    };

    struct ChannelSelectorSoundEffect : SoundEffect {
        inline static constexpr std::uintptr_t Channel = 0xF8; // Int32
    };

    struct ChannelTabsConfiguration : Instance {
        inline static constexpr std::uintptr_t BackgroundTransparency = 0xB8; // Float64
        inline static constexpr std::uintptr_t Enabled = 0x124; // Bool
        inline static constexpr std::uintptr_t FontFace = 0xC0; // FontInfo
        inline static constexpr std::uintptr_t TextSize = 0xC8; // Int64
        inline static constexpr std::uintptr_t TextStrokeTransparency = 0xD0; // Float64
    };

    struct CharacterMesh : Instance {
        inline static constexpr std::uintptr_t MeshContent = 0xE8; // Content
        inline static constexpr std::uintptr_t OverlayTextureContent = 0x118; // Content
    };

    struct Chat : Instance {
        inline static constexpr std::uintptr_t BubbleChatEnabled = 0x130; // Bool
        inline static constexpr std::uintptr_t IsAutoMigrated = 0x131; // Bool
        inline static constexpr std::uintptr_t LoadDefaultChat = 0x132; // Bool
    };

    struct ChatInputBarConfiguration : Instance {
        inline static constexpr std::uintptr_t AutocompleteEnabled = 0x13C; // Bool
        inline static constexpr std::uintptr_t BackgroundTransparency = 0xD8; // Float64
        inline static constexpr std::uintptr_t Enabled = 0x13D; // Bool
        inline static constexpr std::uintptr_t FontFace = 0xE0; // FontInfo
        inline static constexpr std::uintptr_t IsFocused = 0x13E; // Bool
        inline static constexpr std::uintptr_t IsFocusedWrite = 0x13E; // Bool
        inline static constexpr std::uintptr_t TextSize = 0xE8; // Int64
        inline static constexpr std::uintptr_t TextStrokeTransparency = 0xF0; // Float64
    };

    struct ChatWindowConfiguration : Instance {
        inline static constexpr std::uintptr_t BackgroundTransparency = 0xB8; // Float64
        inline static constexpr std::uintptr_t Enabled = 0x11C; // Bool
        inline static constexpr std::uintptr_t FontFace = 0xC0; // FontInfo
        inline static constexpr std::uintptr_t HeightScale = 0x10C; // Float32
        inline static constexpr std::uintptr_t TextSize = 0xC8; // Int64
        inline static constexpr std::uintptr_t TextStrokeTransparency = 0xD0; // Float64
        inline static constexpr std::uintptr_t WidthScale = 0x118; // Float32
    };

    struct ChatWindowMessageProperties : Instance {
        inline static constexpr std::uintptr_t FontFace = 0x120; // FontInfo
        inline static constexpr std::uintptr_t Ref = 0x110; // ChatWindowMessageProperties
        inline static constexpr std::uintptr_t TextSize = 0x148; // Int32
        inline static constexpr std::uintptr_t TextStrokeTransparency = 0x128; // Float64
    };

    struct ChorusSoundEffect : SoundEffect {
        inline static constexpr std::uintptr_t Depth = 0xF0; // Float32
        inline static constexpr std::uintptr_t Mix = 0xF4; // Float32
        inline static constexpr std::uintptr_t Rate = 0xF8; // Float32
    };

    struct ClickDetector : Instance {
        inline static constexpr std::uintptr_t CursorIconContent = 0xB8; // Content
        inline static constexpr std::uintptr_t MaxActivationDistance = 0xE8; // Float32
    };

    struct ClimbController : ControllerBase {
        inline static constexpr std::uintptr_t AccelerationTime = 0xE0; // Float32
        inline static constexpr std::uintptr_t BalanceMaxTorque = 0xE4; // Float32
        inline static constexpr std::uintptr_t BalanceSpeed = 0xE8; // Float32
        inline static constexpr std::uintptr_t MoveMaxForce = 0xEC; // Float32
    };

    struct Clothing : Instance {
        inline static constexpr std::uintptr_t Outfit1 = 0xC0; // TextureId
        inline static constexpr std::uintptr_t Outfit1Content = 0xC0; // Content
        inline static constexpr std::uintptr_t Outfit2 = 0xF0; // TextureId
        inline static constexpr std::uintptr_t Outfit2Content = 0xF0; // Content
    };

    struct LocalizationTable : Instance {
        inline static constexpr std::uintptr_t DevelopmentLanguage = 0xB8; // String
        inline static constexpr std::uintptr_t IsExemptFromUGCAnalytics = 0xE8; // Bool
        inline static constexpr std::uintptr_t SourceLocaleId = 0xB8; // String
    };

    struct Clouds : Instance {
        inline static constexpr std::uintptr_t Cover = 0xBC; // Float32
        inline static constexpr std::uintptr_t Density = 0xC0; // Float32
        inline static constexpr std::uintptr_t Enabled = 0xC4; // Bool
    };

    struct ColorCorrectionEffect : PostEffect {
        inline static constexpr std::uintptr_t Brightness = 0xC4; // Float32
        inline static constexpr std::uintptr_t Contrast = 0xC8; // Float32
        inline static constexpr std::uintptr_t Saturation = 0xCC; // Float32
    };

    struct CompressorSoundEffect : SoundEffect {
        inline static constexpr std::uintptr_t Attack = 0x100; // Float32
        inline static constexpr std::uintptr_t GainMakeup = 0x104; // Float32
        inline static constexpr std::uintptr_t Ratio = 0x108; // Float32
        inline static constexpr std::uintptr_t Release = 0x10C; // Float32
        inline static constexpr std::uintptr_t Threshold = 0x110; // Float32
    };

    struct ConeHandleAdornment : HandleAdornment {
        inline static constexpr std::uintptr_t Height = 0x1A8; // Float32
        inline static constexpr std::uintptr_t Hollow = 0x1B4; // Bool
        inline static constexpr std::uintptr_t Radius = 0x1AC; // Float32
    };

    struct ContentProvider : Instance {
        inline static constexpr std::uintptr_t BaseUrl = 0xD0; // String
    };

    struct ControllerManager : Instance {
        inline static constexpr std::uintptr_t BaseMoveSpeed = 0x234; // Float32
        inline static constexpr std::uintptr_t BaseTurnSpeed = 0x238; // Float32
        inline static constexpr std::uintptr_t FacingDirection = 0x210; // Vector3
        inline static constexpr std::uintptr_t MovingDirection = 0x21C; // Vector3
        inline static constexpr std::uintptr_t UpDirection = 0x228; // Vector3
    };

    struct ControllerPartSensor : Instance {
        inline static constexpr std::uintptr_t LadderSearchHeight = 0x280; // Float32
        inline static constexpr std::uintptr_t LadderSearchOffset = 0x284; // Float32
        inline static constexpr std::uintptr_t SearchDistance = 0x288; // Float32
    };

    struct CustomEvent : Instance {
        inline static constexpr std::uintptr_t PersistedCurrentValue = 0xB0; // Float32
    };

    struct CylinderHandleAdornment : HandleAdornment {
        inline static constexpr std::uintptr_t Angle = 0x1A8; // Float32
        inline static constexpr std::uintptr_t Height = 0x1AC; // Float32
        inline static constexpr std::uintptr_t InnerRadius = 0x1B0; // Float32
        inline static constexpr std::uintptr_t Radius = 0x1B4; // Float32
    };

    struct SlidingBallConstraint : Constraint {
        inline static constexpr std::uintptr_t LimitsEnabled = 0x1A0; // Bool
        inline static constexpr std::uintptr_t LinearResponsiveness = 0x174; // Float32
        inline static constexpr std::uintptr_t LowerLimit = 0x178; // Float32
        inline static constexpr std::uintptr_t MotorMaxAcceleration = 0x17C; // Float32
        inline static constexpr std::uintptr_t MotorMaxForce = 0x180; // Float32
        inline static constexpr std::uintptr_t Restitution = 0x184; // Float32
        inline static constexpr std::uintptr_t ServoMaxForce = 0x188; // Float32
        inline static constexpr std::uintptr_t Size = 0x18C; // Float32
        inline static constexpr std::uintptr_t SoftlockServoUponReachingTarget = 0x1A1; // Bool
        inline static constexpr std::uintptr_t Speed = 0x190; // Float32
        inline static constexpr std::uintptr_t TargetPosition = 0x194; // Float32
        inline static constexpr std::uintptr_t UpperLimit = 0x198; // Float32
        inline static constexpr std::uintptr_t Velocity = 0x19C; // Float32
    };

    struct CylindricalConstraint : SlidingBallConstraint {
        inline static constexpr std::uintptr_t AngularLimitsEnabled = 0x200; // Bool
        inline static constexpr std::uintptr_t AngularResponsiveness = 0x1D4; // Float32
        inline static constexpr std::uintptr_t AngularRestitution = 0x1D8; // Float32
        inline static constexpr std::uintptr_t AngularSpeed = 0x1DC; // Float32
        inline static constexpr std::uintptr_t AngularVelocity = 0x1E0; // Float32
        inline static constexpr std::uintptr_t InclinationAngle = 0x1E4; // Float32
        inline static constexpr std::uintptr_t LowerAngle = 0x1E8; // Float32
        inline static constexpr std::uintptr_t MotorMaxAngularAcceleration = 0x1EC; // Float32
        inline static constexpr std::uintptr_t MotorMaxTorque = 0x1F0; // Float32
        inline static constexpr std::uintptr_t RotationAxisVisible = 0x201; // Bool
        inline static constexpr std::uintptr_t ServoMaxTorque = 0x1F4; // Float32
        inline static constexpr std::uintptr_t SoftlockAngularServoUponReachingTarget = 0x202; // Bool
        inline static constexpr std::uintptr_t TargetAngle = 0x1F8; // Float32
        inline static constexpr std::uintptr_t UpperAngle = 0x1FC; // Float32
    };

    struct DataModel : Instance {
        inline static constexpr std::uintptr_t CreatorId = 0x348; // Int64
        inline static constexpr std::uintptr_t CreatorType = 0x368; // DataModelCreatorType
        inline static constexpr std::uintptr_t ForceR15 = 0x378; // Bool
        inline static constexpr std::uintptr_t GameId = 0x350; // Int64
        inline static constexpr std::uintptr_t GearGenreSetting = 0x8D4; // GearGenreSetting
        inline static constexpr std::uintptr_t Genre = 0x36C; // Genre
        inline static constexpr std::uintptr_t JobId = 0x2E8; // String
        inline static constexpr std::uintptr_t MatchmakingType = 0x370; // MatchmakingType
        inline static constexpr std::uintptr_t PlaceId = 0x358; // Int64
        inline static constexpr std::uintptr_t PlaceVersion = 0x374; // Int32
        inline static constexpr std::uintptr_t AmInParallelPhase = 0x4DD; // Bool
    };

    struct DataStoreGetOptions : Instance {
        inline static constexpr std::uintptr_t UseCache = 0xB0; // Bool
    };

    struct DataStoreOptions : Instance {
        inline static constexpr std::uintptr_t AllScopes = 0xB0; // Bool
    };

    struct DataStoreService : Instance {
        inline static constexpr std::uintptr_t AutomaticRetry = 0xC8; // Bool
        inline static constexpr std::uintptr_t LegacyNamingScheme = 0xC9; // Bool
    };

    struct Debris : Instance {
        inline static constexpr std::uintptr_t MaxItems = 0xC8; // Int32
    };

    struct DebuggerBreakpoint : Instance {
        inline static constexpr std::uintptr_t ContinueExecution = 0xBC; // Bool
        inline static constexpr std::uintptr_t IsEnabled = 0xBD; // Bool
        inline static constexpr std::uintptr_t Line = 0xB8; // Int32
        inline static constexpr std::uintptr_t isContextDependentBreakpoint = 0xBE; // Bool
        inline static constexpr std::uintptr_t line = 0xB8; // Int32
    };

    struct Decal : Instance {
        inline static constexpr std::uintptr_t AutoLocalize = 0x224; // Bool
        inline static constexpr std::uintptr_t ColorMapContent = 0x170; // Content
        inline static constexpr std::uintptr_t LocalTransparencyModifier = 0x20C; // Float32
        inline static constexpr std::uintptr_t MetalnessMapContent = 0xE0; // Content
        inline static constexpr std::uintptr_t NormalMapContent = 0x110; // Content
        inline static constexpr std::uintptr_t Rotation = 0x210; // Float32
        inline static constexpr std::uintptr_t RoughnessMapContent = 0x140; // Content
        inline static constexpr std::uintptr_t Shiny = 0x214; // Float32
        inline static constexpr std::uintptr_t Specular = 0x218; // Float32
        inline static constexpr std::uintptr_t TextureContent = 0x170; // Content
        inline static constexpr std::uintptr_t TexturePackContent = 0x1A0; // Content
        inline static constexpr std::uintptr_t TexturePackMetadata = 0x1D0; // String
        inline static constexpr std::uintptr_t Transparency = 0x21C; // Float32
        inline static constexpr std::uintptr_t ZIndex = 0x220; // Int32
    };

    struct DeferredAssetManagerService : Instance {
        inline static constexpr std::uintptr_t JoiningPlaceId = 0xC8; // Int64
        inline static constexpr std::uintptr_t JoiningUniverseId = 0xD0; // Int64
        inline static constexpr std::uintptr_t PregameLoadingScreenOnly = 0xD8; // Bool
    };

    struct DepthOfFieldEffect : PostEffect {
        inline static constexpr std::uintptr_t FarIntensity = 0xB8; // Float32
        inline static constexpr std::uintptr_t FocusDistance = 0xBC; // Float32
        inline static constexpr std::uintptr_t InFocusRadius = 0xC0; // Float32
        inline static constexpr std::uintptr_t NearIntensity = 0xC4; // Float32
    };

    struct Dialog : Instance {
        inline static constexpr std::uintptr_t ConversationDistance = 0x100; // Float32
        inline static constexpr std::uintptr_t GoodbyeChoiceActive = 0x110; // Bool
        inline static constexpr std::uintptr_t InUse = 0x111; // Bool
        inline static constexpr std::uintptr_t InitialPrompt = 0xD0; // String
        inline static constexpr std::uintptr_t TriggerDistance = 0x10C; // Float32
    };

    struct DialogChoice : Instance {
        inline static constexpr std::uintptr_t GoodbyeChoiceActive = 0x118; // Bool
        inline static constexpr std::uintptr_t GoodbyeDialog = 0xB8; // String
        inline static constexpr std::uintptr_t ResponseDialog = 0xD8; // String
        inline static constexpr std::uintptr_t UserDialog = 0xF8; // String
    };

    struct DigitsRigDescription : Instance {
        inline static constexpr std::uintptr_t Index1TposeAdjustment = 0x1A0; // CoordinateFrame
        inline static constexpr std::uintptr_t Index2TposeAdjustment = 0x1D0; // CoordinateFrame
        inline static constexpr std::uintptr_t Index3TposeAdjustment = 0x200; // CoordinateFrame
        inline static constexpr std::uintptr_t IndexSize = 0x4AC; // Float32
        inline static constexpr std::uintptr_t Middle1TposeAdjustment = 0x230; // CoordinateFrame
        inline static constexpr std::uintptr_t Middle2TposeAdjustment = 0x260; // CoordinateFrame
        inline static constexpr std::uintptr_t Middle3TposeAdjustment = 0x290; // CoordinateFrame
        inline static constexpr std::uintptr_t MiddleSize = 0x4B0; // Float32
        inline static constexpr std::uintptr_t Pinky1TposeAdjustment = 0x2C0; // CoordinateFrame
        inline static constexpr std::uintptr_t Pinky2TposeAdjustment = 0x2F0; // CoordinateFrame
        inline static constexpr std::uintptr_t Pinky3TposeAdjustment = 0x320; // CoordinateFrame
        inline static constexpr std::uintptr_t PinkySize = 0x4B4; // Float32
        inline static constexpr std::uintptr_t Ring1TposeAdjustment = 0x350; // CoordinateFrame
        inline static constexpr std::uintptr_t Ring2TposeAdjustment = 0x380; // CoordinateFrame
        inline static constexpr std::uintptr_t Ring3TposeAdjustment = 0x3B0; // CoordinateFrame
        inline static constexpr std::uintptr_t RingSize = 0x4B8; // Float32
        inline static constexpr std::uintptr_t Thumb1TposeAdjustment = 0x3E0; // CoordinateFrame
        inline static constexpr std::uintptr_t Thumb2TposeAdjustment = 0x410; // CoordinateFrame
        inline static constexpr std::uintptr_t Thumb3TposeAdjustment = 0x440; // CoordinateFrame
        inline static constexpr std::uintptr_t ThumbSize = 0x4C0; // Float32
    };

    struct DistortionSoundEffect : SoundEffect {
        inline static constexpr std::uintptr_t Level = 0xF0; // Float32
    };

    struct PluginGui : LayerCollector {
        inline static constexpr std::uintptr_t Title = 0x858; // String
    };

    struct DoubleConstrainedValue : Instance {
        inline static constexpr std::uintptr_t ConstrainedValue = 0xC8; // Float64
        inline static constexpr std::uintptr_t MaxValue = 0xB8; // Float64
        inline static constexpr std::uintptr_t MinValue = 0xC0; // Float64
        inline static constexpr std::uintptr_t Value = 0xC8; // Float64
        inline static constexpr std::uintptr_t value = 0xC8; // Float64
    };

    struct DragDetector : ClickDetector {
        inline static constexpr std::uintptr_t ActivatedCursorIconContent = 0x1B0; // Content
        inline static constexpr std::uintptr_t ApplyAtCenterOfMass = 0x2D0; // Bool
        inline static constexpr std::uintptr_t DragFrame = 0x200; // CoordinateFrame
        inline static constexpr std::uintptr_t Enabled = 0x2D1; // Bool
        inline static constexpr std::uintptr_t MaxDragAngle = 0x2A8; // Float32
        inline static constexpr std::uintptr_t MaxForce = 0x2AC; // Float32
        inline static constexpr std::uintptr_t MaxTorque = 0x2B0; // Float32
        inline static constexpr std::uintptr_t MinDragAngle = 0x2B4; // Float32
        inline static constexpr std::uintptr_t Orientation = 0x260; // Vector3
        inline static constexpr std::uintptr_t PhysicalDragIsInVR = 0x2D2; // Bool
        inline static constexpr std::uintptr_t PhysicalDragTargetFrame = 0x230; // CoordinateFrame
        inline static constexpr std::uintptr_t Responsiveness = 0x2C0; // Float32
        inline static constexpr std::uintptr_t RunLocally = 0x2D3; // Bool
        inline static constexpr std::uintptr_t TrackballRadialPullFactor = 0x2C4; // Float32
        inline static constexpr std::uintptr_t TrackballRollFactor = 0x2C8; // Float32
    };

    struct JointInstance : Instance {
        inline static constexpr std::uintptr_t Enabled = 0xB8; // Bool
    };

    struct EchoSoundEffect : SoundEffect {
        inline static constexpr std::uintptr_t Delay = 0xF0; // Float32
        inline static constexpr std::uintptr_t DryLevel = 0xF4; // Float32
        inline static constexpr std::uintptr_t Feedback = 0xF8; // Float32
        inline static constexpr std::uintptr_t WetLevel = 0xFC; // Float32
    };

    struct EqualizerSoundEffect : SoundEffect {
        inline static constexpr std::uintptr_t HighGain = 0xF0; // Float32
        inline static constexpr std::uintptr_t LowGain = 0xF4; // Float32
        inline static constexpr std::uintptr_t MidGain = 0xF8; // Float32
    };

    struct ExperienceInviteOptions : Instance {
        inline static constexpr std::uintptr_t InviteUser = 0x110; // Int64
        inline static constexpr std::uintptr_t LaunchData = 0xD0; // String
        inline static constexpr std::uintptr_t PromptMessage = 0xF0; // String
    };

    struct ExperienceStateCaptureService : Instance {
        inline static constexpr std::uintptr_t HiddenSelectionEnabled = 0xC4; // Bool
        inline static constexpr std::uintptr_t IsInBackground = 0xC5; // Bool
        inline static constexpr std::uintptr_t IsInCaptureMode = 0xC6; // Bool
    };

    struct ExperienceStateRecordingService : Instance {
        inline static constexpr std::uintptr_t IsServerDataModelRecorderActive = 0xC8; // Bool
    };

    struct Explosion : Instance {
        inline static constexpr std::uintptr_t BlastPressure = 0xFC; // Float32
        inline static constexpr std::uintptr_t BlastRadius = 0x100; // Float32
        inline static constexpr std::uintptr_t DestroyJointRadiusPercent = 0x104; // Float32
        inline static constexpr std::uintptr_t LocalTransparencyModifier = 0x10C; // Float32
        inline static constexpr std::uintptr_t TimeScale = 0x110; // Float32
        inline static constexpr std::uintptr_t Visible = 0x114; // Bool
    };

    struct FaceControls : Instance {
        inline static constexpr std::uintptr_t ChinRaiser = 0xE0; // Float32
        inline static constexpr std::uintptr_t ChinRaiserUpperLip = 0xE4; // Float32
        inline static constexpr std::uintptr_t Corrugator = 0xE8; // Float32
        inline static constexpr std::uintptr_t EyesLookDown = 0xEC; // Float32
        inline static constexpr std::uintptr_t EyesLookLeft = 0xF0; // Float32
        inline static constexpr std::uintptr_t EyesLookRight = 0xF4; // Float32
        inline static constexpr std::uintptr_t EyesLookUp = 0xF8; // Float32
        inline static constexpr std::uintptr_t FlatPucker = 0xFC; // Float32
        inline static constexpr std::uintptr_t Funneler = 0x100; // Float32
        inline static constexpr std::uintptr_t InternalOverrideFACSData = 0xB8; // BinaryString
        inline static constexpr std::uintptr_t JawDrop = 0x104; // Float32
        inline static constexpr std::uintptr_t JawLeft = 0x108; // Float32
        inline static constexpr std::uintptr_t JawRight = 0x10C; // Float32
        inline static constexpr std::uintptr_t LeftBrowLowerer = 0x110; // Float32
        inline static constexpr std::uintptr_t LeftCheekPuff = 0x114; // Float32
        inline static constexpr std::uintptr_t LeftCheekRaiser = 0x118; // Float32
        inline static constexpr std::uintptr_t LeftDimpler = 0x11C; // Float32
        inline static constexpr std::uintptr_t LeftEyeClosed = 0x120; // Float32
        inline static constexpr std::uintptr_t LeftEyeUpperLidRaiser = 0x124; // Float32
        inline static constexpr std::uintptr_t LeftInnerBrowRaiser = 0x128; // Float32
        inline static constexpr std::uintptr_t LeftLipCornerDown = 0x12C; // Float32
        inline static constexpr std::uintptr_t LeftLipCornerPuller = 0x130; // Float32
        inline static constexpr std::uintptr_t LeftLipStretcher = 0x134; // Float32
        inline static constexpr std::uintptr_t LeftLowerLipDepressor = 0x138; // Float32
        inline static constexpr std::uintptr_t LeftNoseWrinkler = 0x13C; // Float32
        inline static constexpr std::uintptr_t LeftOuterBrowRaiser = 0x140; // Float32
        inline static constexpr std::uintptr_t LeftUpperLipRaiser = 0x144; // Float32
        inline static constexpr std::uintptr_t LipPresser = 0x148; // Float32
        inline static constexpr std::uintptr_t LipsTogether = 0x14C; // Float32
        inline static constexpr std::uintptr_t LowerLipSuck = 0x150; // Float32
        inline static constexpr std::uintptr_t MouthLeft = 0x154; // Float32
        inline static constexpr std::uintptr_t MouthRight = 0x158; // Float32
        inline static constexpr std::uintptr_t Pucker = 0x15C; // Float32
        inline static constexpr std::uintptr_t RightBrowLowerer = 0x160; // Float32
        inline static constexpr std::uintptr_t RightCheekPuff = 0x164; // Float32
        inline static constexpr std::uintptr_t RightCheekRaiser = 0x168; // Float32
        inline static constexpr std::uintptr_t RightDimpler = 0x16C; // Float32
        inline static constexpr std::uintptr_t RightEyeClosed = 0x170; // Float32
        inline static constexpr std::uintptr_t RightEyeUpperLidRaiser = 0x174; // Float32
        inline static constexpr std::uintptr_t RightInnerBrowRaiser = 0x178; // Float32
        inline static constexpr std::uintptr_t RightLipCornerDown = 0x17C; // Float32
        inline static constexpr std::uintptr_t RightLipCornerPuller = 0x180; // Float32
        inline static constexpr std::uintptr_t RightLipStretcher = 0x184; // Float32
        inline static constexpr std::uintptr_t RightLowerLipDepressor = 0x188; // Float32
        inline static constexpr std::uintptr_t RightNoseWrinkler = 0x18C; // Float32
        inline static constexpr std::uintptr_t RightOuterBrowRaiser = 0x190; // Float32
        inline static constexpr std::uintptr_t RightUpperLipRaiser = 0x194; // Float32
        inline static constexpr std::uintptr_t TongueDown = 0x198; // Float32
        inline static constexpr std::uintptr_t TongueOut = 0x19C; // Float32
        inline static constexpr std::uintptr_t TongueUp = 0x1A0; // Float32
        inline static constexpr std::uintptr_t UpperLipSuck = 0x1A4; // Float32
    };

    struct FacialAnimationStreamingServiceV2 : Instance {
        inline static constexpr std::uintptr_t ServiceState = 0x120; // Int32
    };

    struct FileMesh : DataModelMesh {
        inline static constexpr std::uintptr_t MeshContent = 0xE8; // Content
        inline static constexpr std::uintptr_t MeshId = 0xE8; // MeshId
        inline static constexpr std::uintptr_t TextureContent = 0x118; // Content
        inline static constexpr std::uintptr_t TextureId = 0x118; // TextureId
    };

    struct Fire : Instance {
        inline static constexpr std::uintptr_t Enabled = 0xE0; // Bool
        inline static constexpr std::uintptr_t Heat = 0xD8; // Float32
        inline static constexpr std::uintptr_t LocalTransparencyModifier = 0xD0; // Float32
        inline static constexpr std::uintptr_t Size = 0xDC; // Float32
        inline static constexpr std::uintptr_t TimeScale = 0xD4; // Float32
        inline static constexpr std::uintptr_t heat_xml = 0xD8; // Float32
        inline static constexpr std::uintptr_t size = 0xDC; // Float32
        inline static constexpr std::uintptr_t size_xml = 0xDC; // Float32
    };

    struct Tool : BackpackItem {
        inline static constexpr std::uintptr_t CanBeDropped = 0x4B8; // Bool
        inline static constexpr std::uintptr_t Enabled = 0x4B9; // Bool
        inline static constexpr std::uintptr_t Grip = 0x488; // CoordinateFrame
        inline static constexpr std::uintptr_t GripRight = 0x488; // Vector3
        inline static constexpr std::uintptr_t ManualActivationOnly = 0x4BA; // Bool
        inline static constexpr std::uintptr_t RequiresHandle = 0x4BB; // Bool
        inline static constexpr std::uintptr_t ToolTip = 0x468; // String
    };

    struct Flag : Tool {
        inline static constexpr std::uintptr_t TeamColor = 0x5B8; // BrickColor
    };

    struct FlagStand : BasePart {
        inline static constexpr std::uintptr_t TeamColor = 0x1D8; // BrickColor
    };

    struct FlangeSoundEffect : SoundEffect {
        inline static constexpr std::uintptr_t Depth = 0xF0; // Float32
        inline static constexpr std::uintptr_t Mix = 0xF4; // Float32
        inline static constexpr std::uintptr_t Rate = 0xF8; // Float32
    };

    struct FloorWire : GuiBase3d {
        inline static constexpr std::uintptr_t CycleOffset = 0x148; // Float32
        inline static constexpr std::uintptr_t StudsBetweenTextures = 0x14C; // Float32
        inline static constexpr std::uintptr_t Texture = 0xF8; // TextureId
        inline static constexpr std::uintptr_t Velocity = 0x150; // Float32
        inline static constexpr std::uintptr_t WireRadius = 0x154; // Float32
    };

    struct ForceField : Instance {
        inline static constexpr std::uintptr_t Visible = 0xB8; // Bool
    };

    struct FunctionalTest : Instance {
        inline static constexpr std::uintptr_t AllowSleep = 0xD8; // Bool
        inline static constexpr std::uintptr_t HasMigratedSettingsToTestService = 0xD9; // Bool
        inline static constexpr std::uintptr_t Is30FpsThrottleEnabled = 0xDA; // Bool
        inline static constexpr std::uintptr_t PhysicsEnvironmentalThrottle = 0xDB; // Bool
        inline static constexpr std::uintptr_t Timeout = 0xD0; // Float64
    };

    struct GamepadService : Instance {
        inline static constexpr std::uintptr_t GamepadCursorEnabled = 0xC8; // Bool
    };

    struct GetTextBoundsParams : Instance {
        inline static constexpr std::uintptr_t Font = 0xD8; // FontInfo
        inline static constexpr std::uintptr_t RichText = 0xE8; // Bool
        inline static constexpr std::uintptr_t Size = 0xE0; // Float32
        inline static constexpr std::uintptr_t Text = 0xB8; // String
        inline static constexpr std::uintptr_t Width = 0xE4; // Float32
    };

    struct GroundController : ControllerBase {
        inline static constexpr std::uintptr_t AccelerationLean = 0xE0; // Float32
        inline static constexpr std::uintptr_t AccelerationTime = 0xE4; // Float32
        inline static constexpr std::uintptr_t BalanceMaxTorque = 0xE8; // Float32
        inline static constexpr std::uintptr_t BalanceSpeed = 0xEC; // Float32
        inline static constexpr std::uintptr_t DecelerationTime = 0xF0; // Float32
        inline static constexpr std::uintptr_t Friction = 0xF4; // Float32
        inline static constexpr std::uintptr_t FrictionWeight = 0xF8; // Float32
        inline static constexpr std::uintptr_t GroundOffset = 0xFC; // Float32
        inline static constexpr std::uintptr_t StandForce = 0x100; // Float32
        inline static constexpr std::uintptr_t StandSpeed = 0x104; // Float32
        inline static constexpr std::uintptr_t TurnSpeedFactor = 0x108; // Float32
    };

    struct GuiButton : GuiObject {
        inline static constexpr std::uintptr_t MouseButton1ClickConnectionCount = 0x9A8; // Int32
        inline static constexpr std::uintptr_t MouseButton1DownConnectionCount = 0x9AC; // Int32
        inline static constexpr std::uintptr_t MouseButton1UpConnectionCount = 0x9B0; // Int32
        inline static constexpr std::uintptr_t MouseButton2ClickConnectionCount = 0x9B4; // Int32
        inline static constexpr std::uintptr_t MouseButton2DownConnectionCount = 0x9B8; // Int32
        inline static constexpr std::uintptr_t MouseButton2UpConnectionCount = 0x9BC; // Int32
        inline static constexpr std::uintptr_t Selected = 0x9C6; // Bool
    };

    struct ScreenGui : LayerCollector {
        inline static constexpr std::uintptr_t ClipToDeviceSafeArea = 0x74C; // Bool
        inline static constexpr std::uintptr_t DisplayOrder = 0x740; // Int32
        inline static constexpr std::uintptr_t IgnoresTitleBarReservation = 0x74D; // Bool
        inline static constexpr std::uintptr_t OnTopOfCoreBlur = 0x74E; // Bool
    };

    struct GuiService : Instance {
        inline static constexpr std::uintptr_t GuiNavigationEnabled = 0x108; // Bool
        inline static constexpr std::uintptr_t MenuIsOpen = 0x109; // Bool
        inline static constexpr std::uintptr_t TouchControlsEnabled = 0x10A; // Bool
        inline static constexpr std::uintptr_t ViewportDisplaySize = 0x104; // DisplaySize
    };

    struct Handles : GuiBase3d {
        inline static constexpr std::uintptr_t MouseButton1DownConnectionCount = 0x124; // Int32
        inline static constexpr std::uintptr_t MouseButton1UpConnectionCount = 0x128; // Int32
        inline static constexpr std::uintptr_t MouseDragConnectionCount = 0x12C; // Int32
        inline static constexpr std::uintptr_t MouseEnterConnectionCount = 0x130; // Int32
        inline static constexpr std::uintptr_t MouseLeaveConnectionCount = 0x134; // Int32
    };

    struct HapticEffect : Instance {
        inline static constexpr std::uintptr_t Looped = 0xEC; // Bool
        inline static constexpr std::uintptr_t Radius = 0xE4; // Float32
        inline static constexpr std::uintptr_t WaveformData = 0xB8; // BinaryString
    };

    struct HiddenSurfaceRemovalAsset : Instance {
        inline static constexpr std::uintptr_t HSRData = 0xB0; // BinaryString
        inline static constexpr std::uintptr_t HSRMeshIdData = 0xD0; // BinaryString
    };

    struct Highlight : Instance {
        inline static constexpr std::uintptr_t Enabled = 0xF4; // Bool
        inline static constexpr std::uintptr_t FillTransparency = 0xE4; // Float32
        inline static constexpr std::uintptr_t LineThickness = 0xE8; // Int32
        inline static constexpr std::uintptr_t OutlineTransparency = 0xEC; // Float32
    };

    struct HingeConstraint : Constraint {
        inline static constexpr std::uintptr_t AngularResponsiveness = 0x174; // Float32
        inline static constexpr std::uintptr_t AngularSpeed = 0x178; // Float32
        inline static constexpr std::uintptr_t AngularVelocity = 0x17C; // Float32
        inline static constexpr std::uintptr_t LimitsEnabled = 0x1A0; // Bool
        inline static constexpr std::uintptr_t LowerAngle = 0x180; // Float32
        inline static constexpr std::uintptr_t MotorMaxAcceleration = 0x184; // Float32
        inline static constexpr std::uintptr_t MotorMaxTorque = 0x188; // Float32
        inline static constexpr std::uintptr_t Radius = 0x18C; // Float32
        inline static constexpr std::uintptr_t Restitution = 0x190; // Float32
        inline static constexpr std::uintptr_t ServoMaxTorque = 0x194; // Float32
        inline static constexpr std::uintptr_t SoftlockServoUponReachingTarget = 0x1A1; // Bool
        inline static constexpr std::uintptr_t TargetAngle = 0x198; // Float32
        inline static constexpr std::uintptr_t UpperAngle = 0x19C; // Float32
    };

    struct Message : Instance {
        inline static constexpr std::uintptr_t Text = 0xB8; // String
    };

    struct HopperBin : BackpackItem {
        inline static constexpr std::uintptr_t Active = 0x46C; // Bool
    };

    struct HttpService : Instance {
        inline static constexpr std::uintptr_t HttpEnabled = 0xC0; // Bool
    };

    struct Humanoid : Instance {
        inline static constexpr std::uintptr_t AutoJumpEnabled = 0x1D4; // Bool
        inline static constexpr std::uintptr_t AutoRotate = 0x1D5; // Bool
        inline static constexpr std::uintptr_t AutomaticScalingEnabled = 0x1D6; // Bool
        inline static constexpr std::uintptr_t BreakJointsOnDeath = 0x1D7; // Bool
        inline static constexpr std::uintptr_t CameraOffset = 0x128; // Vector3
        inline static constexpr std::uintptr_t DisplayName = 0xB8; // String
        inline static constexpr std::uintptr_t EvaluateStateMachine = 0x1D8; // Bool
        inline static constexpr std::uintptr_t FinishedState = 0x1D9; // Bool
        inline static constexpr std::uintptr_t HealthDisplayDistance = 0x188; // Float32
        inline static constexpr std::uintptr_t Health_XML = 0x190; // Float32
        inline static constexpr std::uintptr_t HipHeight = 0x194; // Float32
        inline static constexpr std::uintptr_t InternalDisplayName = 0xD8; // String
        inline static constexpr std::uintptr_t InternalHeadScale = 0x198; // Float32
        inline static constexpr std::uintptr_t InternalOriginalHipHeight = 0x19C; // Float32
        inline static constexpr std::uintptr_t Jump = 0x1DA; // Bool
        inline static constexpr std::uintptr_t JumpHeight = 0x1A0; // Float32
        inline static constexpr std::uintptr_t JumpPower = 0x1A4; // Float32
        inline static constexpr std::uintptr_t JumpReplicate = 0x1DA; // Bool
        inline static constexpr std::uintptr_t MaxHealth = 0x1A8; // Float32
        inline static constexpr std::uintptr_t MaxSlopeAngle = 0x1AC; // Float32
        inline static constexpr std::uintptr_t NameDisplayDistance = 0x1B0; // Float32
        inline static constexpr std::uintptr_t NoFloorTimerState = 0x1BC; // Float32
        inline static constexpr std::uintptr_t OverrideDefaultCollisions = 0x1DB; // Bool
        inline static constexpr std::uintptr_t PlatformStand = 0x1DC; // Bool
        inline static constexpr std::uintptr_t RequiresNeck = 0x1DD; // Bool
        inline static constexpr std::uintptr_t SeatPart = 0x108; // BasePart
        inline static constexpr std::uintptr_t Sit = 0x1DE; // Bool
        inline static constexpr std::uintptr_t Strafe = 0x1DF; // Bool
        inline static constexpr std::uintptr_t TargetPoint = 0x14C; // Vector3
        inline static constexpr std::uintptr_t TimerState = 0x1C8; // Float32
        inline static constexpr std::uintptr_t UseJumpPower = 0x1E0; // Bool
        inline static constexpr std::uintptr_t WalkAngleError = 0x1CC; // Float32
        inline static constexpr std::uintptr_t WalkSpeed = 0x1D0; // Float32
        inline static constexpr std::uintptr_t WalkToPoint = 0x164; // Vector3
        inline static constexpr std::uintptr_t maxHealth = 0x1A8; // Float32
    };

    struct HumanoidDescription : Instance {
        inline static constexpr std::uintptr_t AccessoryBlob = 0x168; // String
        inline static constexpr std::uintptr_t BodyTypeScale = 0x138; // Float32
        inline static constexpr std::uintptr_t ClimbAnimation = 0xD8; // Int64
        inline static constexpr std::uintptr_t DepthScale = 0x13C; // Float32
        inline static constexpr std::uintptr_t Face = 0xE0; // Int64
        inline static constexpr std::uintptr_t FallAnimation = 0xE8; // Int64
        inline static constexpr std::uintptr_t GraphicTShirt = 0xF0; // Int64
        inline static constexpr std::uintptr_t HeadScale = 0x140; // Float32
        inline static constexpr std::uintptr_t HeightScale = 0x144; // Float32
        inline static constexpr std::uintptr_t IdleAnimation = 0xF8; // Int64
        inline static constexpr std::uintptr_t JumpAnimation = 0x100; // Int64
        inline static constexpr std::uintptr_t MoodAnimation = 0x108; // Int64
        inline static constexpr std::uintptr_t NumberEmotesLoaded = 0x148; // Int32
        inline static constexpr std::uintptr_t Pants = 0x110; // Int64
        inline static constexpr std::uintptr_t ProportionScale = 0x14C; // Float32
        inline static constexpr std::uintptr_t ResetIncludesBodyParts = 0x154; // Bool
        inline static constexpr std::uintptr_t RunAnimation = 0x118; // Int64
        inline static constexpr std::uintptr_t Shirt = 0x120; // Int64
        inline static constexpr std::uintptr_t StaticFacialAnimation = 0x155; // Bool
        inline static constexpr std::uintptr_t SwimAnimation = 0x128; // Int64
        inline static constexpr std::uintptr_t UseAvatarSettings = 0x156; // Bool
        inline static constexpr std::uintptr_t WalkAnimation = 0x130; // Int64
        inline static constexpr std::uintptr_t WidthScale = 0x150; // Float32
    };

    struct HumanoidRigDescription : Instance {
        inline static constexpr std::uintptr_t ChestSize = 0x890; // Float32
        inline static constexpr std::uintptr_t ChestTposeAdjustment = 0x230; // CoordinateFrame
        inline static constexpr std::uintptr_t HeadBaseSize = 0x894; // Float32
        inline static constexpr std::uintptr_t HeadBaseTposeAdjustment = 0x260; // CoordinateFrame
        inline static constexpr std::uintptr_t LeftAnkleSize = 0x898; // Float32
        inline static constexpr std::uintptr_t LeftAnkleTposeAdjustment = 0x290; // CoordinateFrame
        inline static constexpr std::uintptr_t LeftClavicleSize = 0x89C; // Float32
        inline static constexpr std::uintptr_t LeftClavicleTposeAdjustment = 0x2C0; // CoordinateFrame
        inline static constexpr std::uintptr_t LeftElbowSize = 0x8A0; // Float32
        inline static constexpr std::uintptr_t LeftElbowTposeAdjustment = 0x2F0; // CoordinateFrame
        inline static constexpr std::uintptr_t LeftHipSize = 0x8A4; // Float32
        inline static constexpr std::uintptr_t LeftHipTposeAdjustment = 0x320; // CoordinateFrame
        inline static constexpr std::uintptr_t LeftKneeSize = 0x8A8; // Float32
        inline static constexpr std::uintptr_t LeftKneeTposeAdjustment = 0x350; // CoordinateFrame
        inline static constexpr std::uintptr_t LeftShoulderSize = 0x8AC; // Float32
        inline static constexpr std::uintptr_t LeftShoulderTposeAdjustment = 0x380; // CoordinateFrame
        inline static constexpr std::uintptr_t LeftToeBaseSize = 0x8B0; // Float32
        inline static constexpr std::uintptr_t LeftToeBaseTposeAdjustment = 0x3B0; // CoordinateFrame
        inline static constexpr std::uintptr_t LeftWristSize = 0x8B4; // Float32
        inline static constexpr std::uintptr_t LeftWristTposeAdjustment = 0x3E0; // CoordinateFrame
        inline static constexpr std::uintptr_t NeckSize = 0x8B8; // Float32
        inline static constexpr std::uintptr_t NeckTposeAdjustment = 0x410; // CoordinateFrame
        inline static constexpr std::uintptr_t OriginOffset = 0x440; // CoordinateFrame
        inline static constexpr std::uintptr_t RightAnkleSize = 0x8BC; // Float32
        inline static constexpr std::uintptr_t RightAnkleTposeAdjustment = 0x470; // CoordinateFrame
        inline static constexpr std::uintptr_t RightClavicleSize = 0x8C0; // Float32
        inline static constexpr std::uintptr_t RightClavicleTposeAdjustment = 0x4A0; // CoordinateFrame
        inline static constexpr std::uintptr_t RightElbowSize = 0x8C4; // Float32
        inline static constexpr std::uintptr_t RightElbowTposeAdjustment = 0x4D0; // CoordinateFrame
        inline static constexpr std::uintptr_t RightHipSize = 0x8C8; // Float32
        inline static constexpr std::uintptr_t RightHipTposeAdjustment = 0x500; // CoordinateFrame
        inline static constexpr std::uintptr_t RightKneeSize = 0x8CC; // Float32
        inline static constexpr std::uintptr_t RightKneeTposeAdjustment = 0x530; // CoordinateFrame
        inline static constexpr std::uintptr_t RightShoulderSize = 0x8D0; // Float32
        inline static constexpr std::uintptr_t RightShoulderTposeAdjustment = 0x560; // CoordinateFrame
        inline static constexpr std::uintptr_t RightToeBaseSize = 0x8D4; // Float32
        inline static constexpr std::uintptr_t RightToeBaseTposeAdjustment = 0x590; // CoordinateFrame
        inline static constexpr std::uintptr_t RightWristSize = 0x8D8; // Float32
        inline static constexpr std::uintptr_t RightWristTposeAdjustment = 0x5C0; // CoordinateFrame
        inline static constexpr std::uintptr_t RootSize = 0x8DC; // Float32
        inline static constexpr std::uintptr_t RootTposeAdjustment = 0x5F0; // CoordinateFrame
        inline static constexpr std::uintptr_t SpineSize = 0x8E0; // Float32
        inline static constexpr std::uintptr_t SpineTposeAdjustment = 0x620; // CoordinateFrame
        inline static constexpr std::uintptr_t WaistSize = 0x8E4; // Float32
        inline static constexpr std::uintptr_t WaistTposeAdjustment = 0x650; // CoordinateFrame
    };

    struct IKControl : Instance {
        inline static constexpr std::uintptr_t Enabled = 0x168; // Bool
        inline static constexpr std::uintptr_t EndEffectorOffset = 0xF8; // CoordinateFrame
        inline static constexpr std::uintptr_t Offset = 0x128; // CoordinateFrame
        inline static constexpr std::uintptr_t Priority = 0x158; // Int32
        inline static constexpr std::uintptr_t SmoothTime = 0x15C; // Float32
        inline static constexpr std::uintptr_t Weight = 0x164; // Float32
    };

    struct ImageHandleAdornment : HandleAdornment {
        inline static constexpr std::uintptr_t Image = 0x1A8; // TextureId
    };

    struct IncrementalPatchBuilder : Instance {
        inline static constexpr std::uintptr_t AddPathsToBundle = 0xC8; // Bool
        inline static constexpr std::uintptr_t BuildDebouncePeriod = 0x188; // Float64
        inline static constexpr std::uintptr_t HighCompression = 0xC9; // Bool
        inline static constexpr std::uintptr_t SerializePatch = 0xCA; // Bool
        inline static constexpr std::uintptr_t UseFileLevelCompressionInsteadOfChunk = 0xCB; // Bool
        inline static constexpr std::uintptr_t ZstdCompression = 0xCC; // Bool
    };

    struct InputAction : Instance {
        inline static constexpr std::uintptr_t Enabled = 0xEC; // Bool
    };

    struct InputBinding : Instance {
        inline static constexpr std::uintptr_t ClampMagnitudeToOne = 0x178; // Bool
        inline static constexpr std::uintptr_t DisplayImage = 0xB8; // Content
        inline static constexpr std::uintptr_t DisplayName = 0xE8; // String
        inline static constexpr std::uintptr_t PointerIndex = 0x150; // Int32
        inline static constexpr std::uintptr_t PressedThreshold = 0x154; // Float32
        inline static constexpr std::uintptr_t ResponseCurve = 0x160; // Float32
        inline static constexpr std::uintptr_t Scale = 0x168; // Float32
    };

    struct InputContext : Instance {
        inline static constexpr std::uintptr_t Enabled = 0xBC; // Bool
        inline static constexpr std::uintptr_t Priority = 0xB8; // Int32
        inline static constexpr std::uintptr_t Sink = 0xBD; // Bool
    };

    struct InsertService : Instance {
        inline static constexpr std::uintptr_t AllowInsertFreeModels = 0xC0; // Bool
    };

    struct IntConstrainedValue : Instance {
        inline static constexpr std::uintptr_t ConstrainedValue = 0xC8; // Int64
        inline static constexpr std::uintptr_t MaxValue = 0xB8; // Int64
        inline static constexpr std::uintptr_t MinValue = 0xC0; // Int64
        inline static constexpr std::uintptr_t Value = 0xC8; // Int64
        inline static constexpr std::uintptr_t value = 0xC8; // Int64
    };

    struct InternalSyncItem : Instance {
        inline static constexpr std::uintptr_t AutoSync = 0xE0; // Bool
        inline static constexpr std::uintptr_t Enabled = 0xE1; // Bool
    };

    struct TriangleMeshPart : BasePart {
        inline static constexpr std::uintptr_t AeroMeshData = 0x188; // SharedString
        inline static constexpr std::uintptr_t InertiaMigrated = 0x25C; // Bool
        inline static constexpr std::uintptr_t UnscaledVolume = 0x258; // Float32
    };

    struct PartOperation : TriangleMeshPart {
        inline static constexpr std::uintptr_t ChildData = 0x328; // BinaryString
        inline static constexpr std::uintptr_t ChildData2 = 0x388; // SharedString
        inline static constexpr std::uintptr_t ComponentIndex = 0x3A0; // Int32
        inline static constexpr std::uintptr_t Content = 0x2F8; // Content
        inline static constexpr std::uintptr_t MeshData = 0x360; // BinaryString
        inline static constexpr std::uintptr_t MeshData2 = 0x398; // SharedString
        inline static constexpr std::uintptr_t OffCentered = 0x3B0; // Bool
        inline static constexpr std::uintptr_t SmoothingAngle = 0x3A8; // Float32
        inline static constexpr std::uintptr_t TriangleCount = 0x3AC; // Int32
        inline static constexpr std::uintptr_t UsePartColor = 0x3B1; // Bool
    };

    struct Keyframe : Instance {
        inline static constexpr std::uintptr_t Time = 0xB8; // Float32
    };

    struct KeyframeMarker : Instance {
        inline static constexpr std::uintptr_t Value = 0xB8; // String
    };

    struct KeyframeSequence : AnimationClip {
        inline static constexpr std::uintptr_t AuthoredHipHeight = 0xE0; // Float32
    };

    struct Light : Instance {
        inline static constexpr std::uintptr_t Brightness = 0xCC; // Float32
        inline static constexpr std::uintptr_t Enabled = 0xD0; // Bool
        inline static constexpr std::uintptr_t Shadows = 0xD1; // Bool
    };

    struct Lighting : Instance {
        inline static constexpr std::uintptr_t Brightness = 0x118; // Float32
        inline static constexpr std::uintptr_t EnvironmentDiffuseScale = 0x11C; // Float32
        inline static constexpr std::uintptr_t EnvironmentSpecularScale = 0x120; // Float32
        inline static constexpr std::uintptr_t ExposureCompensation = 0x124; // Float32
        inline static constexpr std::uintptr_t FogEnd = 0x12C; // Float32
        inline static constexpr std::uintptr_t FogStart = 0x130; // Float32
        inline static constexpr std::uintptr_t GeographicLatitude = 0x134; // Float32
        inline static constexpr std::uintptr_t GlobalShadows = 0x144; // Bool
        inline static constexpr std::uintptr_t Outlines = 0x145; // Bool
        inline static constexpr std::uintptr_t PrioritizeLightingQuality = 0x146; // Bool
        inline static constexpr std::uintptr_t ShadowSoftness = 0x13C; // Float32
        inline static constexpr std::uintptr_t TimePropertyObject = 0xC0; // InternalObject
        inline static constexpr std::uintptr_t TimeMicroseconds = 0xC8; // Int64
    };

    struct LineForce : Constraint {
        inline static constexpr std::uintptr_t ApplyAtCenterOfMass = 0x178; // Bool
        inline static constexpr std::uintptr_t InverseSquareLaw = 0x179; // Bool
        inline static constexpr std::uintptr_t Magnitude = 0x170; // Float32
        inline static constexpr std::uintptr_t MaxForce = 0x174; // Float32
        inline static constexpr std::uintptr_t ReactionForceEnabled = 0x17A; // Bool
    };

    struct LineHandleAdornment : HandleAdornment {
        inline static constexpr std::uintptr_t Length = 0x1A8; // Float32
        inline static constexpr std::uintptr_t Thickness = 0x1AC; // Float32
    };

    struct LinearVelocity : Constraint {
        inline static constexpr std::uintptr_t ReactionForceEnabled = 0x174; // Bool
    };

    struct Script : BaseScript {
        inline static constexpr std::uintptr_t Source = 0x188; // ProtectedString
    };

    struct LocalizationService : Instance {
        inline static constexpr std::uintptr_t ForcePlayModeGameLocaleId = 0xC8; // String
        inline static constexpr std::uintptr_t ForcePlayModeRobloxLocaleId = 0xE8; // String
        inline static constexpr std::uintptr_t GameSourceLanguageId = 0x108; // String
        inline static constexpr std::uintptr_t RobloxForcePlayModeGameLocaleId = 0xC8; // String
        inline static constexpr std::uintptr_t RobloxForcePlayModeRobloxLocaleId = 0xE8; // String
        inline static constexpr std::uintptr_t RobloxLocaleId = 0x338; // String
        inline static constexpr std::uintptr_t ShouldUseCloudTable = 0x138; // Bool
        inline static constexpr std::uintptr_t SystemLocaleId = 0x3E8; // String
    };

    struct LodDataEntity : Instance {
        inline static constexpr std::uintptr_t EntityLodEnabled = 0x154; // Bool
        inline static constexpr std::uintptr_t EntityPosition = 0x108; // CoordinateFrame
        inline static constexpr std::uintptr_t EntityVisible = 0x155; // Bool
        inline static constexpr std::uintptr_t IsSlimEnabled = 0x156; // Bool
        inline static constexpr std::uintptr_t SlimReplicationTimestampSec = 0x100; // Float64
        inline static constexpr std::uintptr_t TranscoderFailureReason = 0xB8; // String
    };

    struct MakeupDescription : Instance {
        inline static constexpr std::uintptr_t AssetId = 0xC0; // Int64
        inline static constexpr std::uintptr_t Order = 0xCC; // Int32
    };

    struct MaterialService : Instance {
        inline static constexpr std::uintptr_t AsphaltName = 0xC8; // String
        inline static constexpr std::uintptr_t BasaltName = 0xE8; // String
        inline static constexpr std::uintptr_t BrickName = 0x108; // String
        inline static constexpr std::uintptr_t CardboardName = 0x128; // String
        inline static constexpr std::uintptr_t CarpetName = 0x148; // String
        inline static constexpr std::uintptr_t CeramicTilesName = 0x168; // String
        inline static constexpr std::uintptr_t ClayRoofTilesName = 0x188; // String
        inline static constexpr std::uintptr_t CobblestoneName = 0x1A8; // String
        inline static constexpr std::uintptr_t ConcreteName = 0x1C8; // String
        inline static constexpr std::uintptr_t CorrodedMetalName = 0x1E8; // String
        inline static constexpr std::uintptr_t CrackedLavaName = 0x208; // String
        inline static constexpr std::uintptr_t DiamondPlateName = 0x228; // String
        inline static constexpr std::uintptr_t FabricName = 0x248; // String
        inline static constexpr std::uintptr_t FoilName = 0x268; // String
        inline static constexpr std::uintptr_t GlacierName = 0x288; // String
        inline static constexpr std::uintptr_t GraniteName = 0x2A8; // String
        inline static constexpr std::uintptr_t GrassName = 0x2C8; // String
        inline static constexpr std::uintptr_t GroundName = 0x2E8; // String
        inline static constexpr std::uintptr_t IceName = 0x308; // String
        inline static constexpr std::uintptr_t LeafyGrassName = 0x328; // String
        inline static constexpr std::uintptr_t LimestoneName = 0x368; // String
        inline static constexpr std::uintptr_t MarbleName = 0x388; // String
        inline static constexpr std::uintptr_t MetalName = 0x3A8; // String
        inline static constexpr std::uintptr_t MudName = 0x3C8; // String
        inline static constexpr std::uintptr_t PavementName = 0x3E8; // String
        inline static constexpr std::uintptr_t PebbleName = 0x408; // String
        inline static constexpr std::uintptr_t PlasterName = 0x428; // String
        inline static constexpr std::uintptr_t PlasticName = 0x448; // String
        inline static constexpr std::uintptr_t RockName = 0x468; // String
        inline static constexpr std::uintptr_t RoofShinglesName = 0x488; // String
        inline static constexpr std::uintptr_t RubberName = 0x4A8; // String
        inline static constexpr std::uintptr_t SaltName = 0x4C8; // String
        inline static constexpr std::uintptr_t SandName = 0x4E8; // String
        inline static constexpr std::uintptr_t SandstoneName = 0x508; // String
        inline static constexpr std::uintptr_t SlateName = 0x528; // String
        inline static constexpr std::uintptr_t SmoothPlasticName = 0x548; // String
        inline static constexpr std::uintptr_t SnowName = 0x568; // String
        inline static constexpr std::uintptr_t Use2022Materials = 0x5D0; // Bool
        inline static constexpr std::uintptr_t Use2022MaterialsXml = 0x5D0; // Bool
        inline static constexpr std::uintptr_t WoodName = 0x588; // String
        inline static constexpr std::uintptr_t WoodPlanksName = 0x5A8; // String
    };

    struct MaterialVariant : Instance {
        inline static constexpr std::uintptr_t AvgMetalness = 0x204; // Int32
        inline static constexpr std::uintptr_t AvgRoughness = 0x208; // Int32
        inline static constexpr std::uintptr_t ColorMapContent = 0xB8; // Content
        inline static constexpr std::uintptr_t CustomPhysicalProperties = 0x1D8; // PhysicalProperties
        inline static constexpr std::uintptr_t EmissiveMaskContent = 0xE8; // Content
        inline static constexpr std::uintptr_t EmissiveStrength = 0x210; // Float32
        inline static constexpr std::uintptr_t MetalnessMapContent = 0x118; // Content
        inline static constexpr std::uintptr_t NormalMapContent = 0x148; // Content
        inline static constexpr std::uintptr_t RoughnessMapContent = 0x178; // Content
        inline static constexpr std::uintptr_t StudsPerTile = 0x218; // Float32
        inline static constexpr std::uintptr_t TexturePackContent = 0x1A8; // Content
    };

    struct MeshPart : TriangleMeshPart {
        inline static constexpr std::uintptr_t DoubleSided = 0x375; // Bool
        inline static constexpr std::uintptr_t HasJointOffset = 0x374; // Bool
        inline static constexpr std::uintptr_t HasSkinnedMesh = 0x376; // Bool
        inline static constexpr std::uintptr_t MeshContent = 0x2F8; // Content
        inline static constexpr std::uintptr_t TextureContent = 0x328; // Content
        inline static constexpr std::uintptr_t VertexCount = 0x370; // Int32
    };

    struct ModuleScript : LuaSourceContainer {
        inline static constexpr std::uintptr_t Confidential = 0x198; // Bool
        inline static constexpr std::uintptr_t Source = 0x130; // ProtectedString
        inline static constexpr std::uintptr_t UnrestrictedRequireAllowed = 0x168; // Bool
        inline static constexpr std::uintptr_t UnrestrictedRequireAllowedMask = 0x4;
    };

    struct Motor6D : JointInstance {
        inline static constexpr std::uintptr_t EnableSkinning = 0x1B0; // Bool
    };

    struct Mouse : Instance {
        inline static constexpr std::uintptr_t ViewSizeX = 0x26A; // Int32
        inline static constexpr std::uintptr_t ViewSizeY = 0x26A; // Int32
        inline static constexpr std::uintptr_t Owner = 0x150; // Pointer
        inline static constexpr std::uintptr_t OwnerControlBlock = 0x158; // Pointer
    };

    struct MouseService : Instance {
        inline static constexpr std::uintptr_t InputObject = 0x100; // Pointer
        inline static constexpr std::uintptr_t InputObjectControlBlock = 0x108; // Pointer
        inline static constexpr std::uintptr_t Size = 0x2A0; // EngineInternal
    };

    struct NoCollisionConstraint : Instance {
        inline static constexpr std::uintptr_t Enabled = 0xD8; // Bool
    };

    struct Noise : Instance {
        inline static constexpr std::uintptr_t Seed = 0xB4; // Int32
    };

    struct NotificationService : Instance {
        inline static constexpr std::uintptr_t IsConnected = 0xE0; // Bool
        inline static constexpr std::uintptr_t IsLuaChatEnabled = 0xE1; // Bool
        inline static constexpr std::uintptr_t IsLuaGameDetailsEnabled = 0xE2; // Bool
    };

    struct PoseBase : Instance {
        inline static constexpr std::uintptr_t Weight = 0xC0; // Float32
    };

    struct NumberPose : PoseBase {
        inline static constexpr std::uintptr_t Value = 0xD0; // Float64
    };

    struct NumberValue : Instance {
        inline static constexpr std::uintptr_t Value = 0xB8; // Float64
    };

    struct PackageLink : Instance {
        inline static constexpr std::uintptr_t AutoUpdate = 0x13C; // Bool
        inline static constexpr std::uintptr_t CanAutoUpdate = 0x13D; // Bool
        inline static constexpr std::uintptr_t DefaultName = 0xE8; // String
        inline static constexpr std::uintptr_t HasNewVersion = 0x13E; // Bool
        inline static constexpr std::uintptr_t ModifiedState = 0x138; // Int32
        inline static constexpr std::uintptr_t PackageContent = 0xB8; // Content
        inline static constexpr std::uintptr_t PackageContentSerialize = 0xB8; // Content
        inline static constexpr std::uintptr_t PackageGuid = 0x128; // Int64
        inline static constexpr std::uintptr_t SerializedDefaultAttributes = 0x108; // BinaryString
        inline static constexpr std::uintptr_t VersionIdSerialize = 0x130; // Int64
        inline static constexpr std::uintptr_t VersionNumber = 0x130; // Int64
    };

    struct Packages : Instance {
        inline static constexpr std::uintptr_t IsDehydrated = 0xC8; // Bool
        inline static constexpr std::uintptr_t ShellPackagesCount = 0xC0; // Int32
        inline static constexpr std::uintptr_t SkippedInstancesCount = 0xC4; // Int32
    };

    struct ParabolaAdornment : GuiBase3d {
        inline static constexpr std::uintptr_t A = 0x100; // Float32
        inline static constexpr std::uintptr_t B = 0x104; // Float32
        inline static constexpr std::uintptr_t C = 0x108; // Float32
        inline static constexpr std::uintptr_t Range = 0x10C; // Float32
        inline static constexpr std::uintptr_t Thickness = 0x110; // Float32
    };

    struct PartOperationAsset : Instance {
        inline static constexpr std::uintptr_t ChildData = 0xB0; // BinaryString
        inline static constexpr std::uintptr_t MeshData = 0xD0; // BinaryString
    };

    struct ParticleEmitter : Instance {
        inline static constexpr std::uintptr_t Acceleration = 0x1E0; // Vector3
        inline static constexpr std::uintptr_t Brightness = 0x21C; // Float32
        inline static constexpr std::uintptr_t Drag = 0x220; // Float32
        inline static constexpr std::uintptr_t Enabled = 0x268; // Bool
        inline static constexpr std::uintptr_t FlipbookBlendFrames = 0x269; // Bool
        inline static constexpr std::uintptr_t FlipbookFramerate = 0x1EC; // NumberRange
        inline static constexpr std::uintptr_t FlipbookSizeX = 0x230; // Int32
        inline static constexpr std::uintptr_t FlipbookSizeY = 0x234; // Int32
        inline static constexpr std::uintptr_t FlipbookStartRandom = 0x26A; // Bool
        inline static constexpr std::uintptr_t Lifetime = 0x1F4; // NumberRange
        inline static constexpr std::uintptr_t LightEmission = 0x238; // Float32
        inline static constexpr std::uintptr_t LightInfluence = 0x23C; // Float32
        inline static constexpr std::uintptr_t LocalTransparencyModifier = 0x240; // Float32
        inline static constexpr std::uintptr_t LockedToPart = 0x26B; // Bool
        inline static constexpr std::uintptr_t Rate = 0x248; // Float32
        inline static constexpr std::uintptr_t RotSpeed = 0x1FC; // NumberRange
        inline static constexpr std::uintptr_t Rotation = 0x204; // NumberRange
        inline static constexpr std::uintptr_t ShapePartial = 0x254; // Float32
        inline static constexpr std::uintptr_t Size = 0xB8; // NumberSequence
        inline static constexpr std::uintptr_t Speed = 0x20C; // NumberRange
        inline static constexpr std::uintptr_t Squash = 0xF8; // NumberSequence
        inline static constexpr std::uintptr_t Texture = 0x1B0; // TextureId
        inline static constexpr std::uintptr_t TextureContent = 0x1B0; // Content
        inline static constexpr std::uintptr_t TimeScale = 0x25C; // Float32
        inline static constexpr std::uintptr_t Transparency = 0x138; // NumberSequence
        inline static constexpr std::uintptr_t VelocityInheritance = 0x260; // Float32
        inline static constexpr std::uintptr_t VelocitySpread = 0x214; // Float32
        inline static constexpr std::uintptr_t WindAffectsDrag = 0x26C; // Bool
        inline static constexpr std::uintptr_t ZOffset = 0x264; // Float32
    };

    struct PatchMapping : Instance {
        inline static constexpr std::uintptr_t FlattenTree = 0xF0; // Bool
        inline static constexpr std::uintptr_t TargetPath = 0xD0; // String
    };

    struct Path2D : Instance {
        inline static constexpr std::uintptr_t SelectedControlPoint = 0xEC; // Int32
        inline static constexpr std::uintptr_t Transparency = 0xF4; // Float32
    };

    struct PathfindingLink : Instance {
        inline static constexpr std::uintptr_t IsBidirectional = 0xF8; // Bool
        inline static constexpr std::uintptr_t Label = 0xB8; // String
    };

    struct PathfindingModifier : Instance {
        inline static constexpr std::uintptr_t Label = 0xB8; // String
        inline static constexpr std::uintptr_t PassThrough = 0xD8; // Bool
    };

    struct PitchShiftSoundEffect : SoundEffect {
        inline static constexpr std::uintptr_t Octave = 0xF0; // Float32
    };

    struct Player : Instance {
        inline static constexpr std::uintptr_t AccountAge = 0x35C; // Int32
        inline static constexpr std::uintptr_t AccountAgeReplicate = 0x35C; // Int32
        inline static constexpr std::uintptr_t AppearanceDidLoad = 0x3C0; // Bool
        inline static constexpr std::uintptr_t AutoJumpEnabled = 0x3C1; // Bool
        inline static constexpr std::uintptr_t CameraFieldOfView = 0x364; // Float32
        inline static constexpr std::uintptr_t CameraFrustumRequested = 0x3C2; // Bool
        inline static constexpr std::uintptr_t CameraMaxZoomDistance = 0x368; // Float32
        inline static constexpr std::uintptr_t CameraMinZoomDistance = 0x36C; // Float32
        inline static constexpr std::uintptr_t CanLoadCharacterAppearance = 0x3C3; // Bool
        inline static constexpr std::uintptr_t CharacterAppearance = 0xD8; // String
        inline static constexpr std::uintptr_t CharacterAppearanceId = 0x300; // Int64
        inline static constexpr std::uintptr_t ChatAvailabilityStatus = 0xF8; // String
        inline static constexpr std::uintptr_t CloudEditCameraCoordinateFrame = 0x318; // CoordinateFrame
        inline static constexpr std::uintptr_t CloudEditPlayerActive = 0x3C4; // Bool
        inline static constexpr std::uintptr_t CountryRegionCodeReplicate = 0x118; // String
        inline static constexpr std::uintptr_t DataComplexityLimit = 0x378; // Int32
        inline static constexpr std::uintptr_t DataReady = 0x3C5; // Bool
        inline static constexpr std::uintptr_t DevEnableMouseLock = 0x3C6; // Bool
        inline static constexpr std::uintptr_t DisplayName = 0x138; // String
        inline static constexpr std::uintptr_t FollowUserId = 0x308; // Int64
        inline static constexpr std::uintptr_t FollowUserIdReplicated = 0x308; // Int64
        inline static constexpr std::uintptr_t GameplayPaused = 0x3C7; // Bool
        inline static constexpr std::uintptr_t HasRobloxSubscription = 0x3C8; // Bool
        inline static constexpr std::uintptr_t HasVerifiedBadge = 0x3C9; // Bool
        inline static constexpr std::uintptr_t HealthDisplayDistance = 0x394; // Float32
        inline static constexpr std::uintptr_t InputLatency = 0x398; // Int32
        inline static constexpr std::uintptr_t InternalCharacterAppearanceLoaded = 0x3CA; // Bool
        inline static constexpr std::uintptr_t LocaleId = 0x740; // String
        inline static constexpr std::uintptr_t MaximumSimulationRadius = 0x39C; // Float32
        inline static constexpr std::uintptr_t MembershipType = 0x3A0; // MembershipType
        inline static constexpr std::uintptr_t NameDisplayDistance = 0x3A4; // Float32
        inline static constexpr std::uintptr_t NeedRegionalFallback = 0x3CB; // Bool
        inline static constexpr std::uintptr_t Neutral = 0x3CC; // Bool
        inline static constexpr std::uintptr_t OsPlatform = 0x158; // String
        inline static constexpr std::uintptr_t PartyId = 0x178; // String
        inline static constexpr std::uintptr_t PlatformName = 0x198; // String
        inline static constexpr std::uintptr_t RawJoinData = 0x1B8; // BinaryString
        inline static constexpr std::uintptr_t SimulationRadius = 0x3A8; // Float32
        inline static constexpr std::uintptr_t StepIdOffset = 0x3AC; // Int32
        inline static constexpr std::uintptr_t TeamColor = 0x3B0; // BrickColor
        inline static constexpr std::uintptr_t Teleported = 0x3CD; // Bool
        inline static constexpr std::uintptr_t TeleportedIn = 0x3CE; // Bool
        inline static constexpr std::uintptr_t ThirdPartyTextChatRestrictionStatus = 0x3B4; // ChatRestrictionStatus
        inline static constexpr std::uintptr_t UnfilteredChat = 0x3CF; // Bool
        inline static constexpr std::uintptr_t VRDevice = 0x1D8; // String
        inline static constexpr std::uintptr_t VREnabled = 0x3D0; // Bool
        inline static constexpr std::uintptr_t VoiceChatVolume = 0x3BC; // Float32
        inline static constexpr std::uintptr_t Mouse = 0x11F0; // Pointer
        inline static constexpr std::uintptr_t MouseControlBlock = 0x11F8; // Pointer
    };

    struct PlayerEmulatorService : Instance {
        inline static constexpr std::uintptr_t CustomPoliciesEnabled = 0x12C; // Bool
        inline static constexpr std::uintptr_t EmulatedCountryCode = 0xC8; // String
        inline static constexpr std::uintptr_t EmulatedGameLocale = 0xE8; // String
        inline static constexpr std::uintptr_t PlayerEmulationEnabled = 0x12D; // Bool
        inline static constexpr std::uintptr_t PseudolocalizationEnabled = 0x12E; // Bool
        inline static constexpr std::uintptr_t SerializedEmulatedPolicyInfo = 0x108; // BinaryString
        inline static constexpr std::uintptr_t TextElongationFactor = 0x128; // Int32
    };

    struct PlayerGui : Instance {
        inline static constexpr std::uintptr_t CurrentScreenOrientation = 0x190; // ScreenOrientation
        inline static constexpr std::uintptr_t InputBindingMappingsRaw = 0x160; // BinaryString
    };

    struct PlayerListConfiguration : BaseCoreGuiConfiguration {
        inline static constexpr std::uintptr_t Open = 0xB8; // Bool
    };

    struct Players : Instance {
        inline static constexpr std::uintptr_t BanningEnabled = 0x14C; // Bool
        inline static constexpr std::uintptr_t CharacterAutoLoads = 0x14D; // Bool
        inline static constexpr std::uintptr_t MaxPlayers = 0x140; // Int32
        inline static constexpr std::uintptr_t PreferredPlayers = 0x144; // Int32
        inline static constexpr std::uintptr_t RespawnTime = 0x148; // Float32
        inline static constexpr std::uintptr_t ServerLogPrefix = 0xE0; // String
        inline static constexpr std::uintptr_t UseStrafingAnimations = 0x14E; // Bool
    };

    struct Plugin : Instance {
        inline static constexpr std::uintptr_t DisableUIDragDetectorDrags = 0xDC; // Bool
        inline static constexpr std::uintptr_t HostDataModelType = 0xD8; // StudioGameStateType
        inline static constexpr std::uintptr_t IsDebuggable = 0xDD; // Bool
        inline static constexpr std::uintptr_t UsesAssetInsertionDrag = 0xDE; // Bool
    };

    struct PluginAction : Instance {
        inline static constexpr std::uintptr_t AllowBinding = 0x158; // Bool
        inline static constexpr std::uintptr_t Checked = 0x130; // Bool
        inline static constexpr std::uintptr_t Enabled = 0x131; // Bool
        inline static constexpr std::uintptr_t StatusTip = 0x138; // String
        inline static constexpr std::uintptr_t Text = 0x110; // String
        inline static constexpr std::uintptr_t Visible = 0x132; // Bool
    };

    struct PluginMenu : Instance {
        inline static constexpr std::uintptr_t Title = 0x110; // String
        inline static constexpr std::uintptr_t Visible = 0x130; // Bool
    };

    struct PluginToolbarButton : Instance {
        inline static constexpr std::uintptr_t ClickableWhenViewportHidden = 0x128; // Bool
        inline static constexpr std::uintptr_t Enabled = 0x129; // Bool
        inline static constexpr std::uintptr_t Icon = 0xF8; // TextureId
        inline static constexpr std::uintptr_t IconContent = 0xF8; // Content
    };

    struct PointLight : Light {
        inline static constexpr std::uintptr_t Range = 0xD8; // Float32
    };

    struct Pose : PoseBase {
        inline static constexpr std::uintptr_t CFrame = 0xD0; // CoordinateFrame
    };

    struct ProceduralModel : Model {
        inline static constexpr std::uintptr_t Dirty = 0x384; // Bool
    };

    struct ProximityPrompt : Instance {
        inline static constexpr std::uintptr_t AutoLocalize = 0x134; // Bool
        inline static constexpr std::uintptr_t ClickablePrompt = 0x135; // Bool
        inline static constexpr std::uintptr_t Enabled = 0x136; // Bool
        inline static constexpr std::uintptr_t HoldDuration = 0x120; // Float32
        inline static constexpr std::uintptr_t MaxActivationDistance = 0x128; // Float32
        inline static constexpr std::uintptr_t MaxIndicatorDistance = 0x12C; // Float32
        inline static constexpr std::uintptr_t ObjectText = 0xD0; // String
        inline static constexpr std::uintptr_t RequiresLineOfSight = 0x137; // Bool
    };

    struct ProximityPromptService : Instance {
        inline static constexpr std::uintptr_t Enabled = 0xE8; // Bool
        inline static constexpr std::uintptr_t MaxIndicatorsVisible = 0xE0; // Int32
        inline static constexpr std::uintptr_t MaxPromptsVisible = 0xE4; // Int32
    };

    struct PyramidHandleAdornment : HandleAdornment {
        inline static constexpr std::uintptr_t Height = 0x1A8; // Float32
        inline static constexpr std::uintptr_t Sides = 0x1B0; // Int32
        inline static constexpr std::uintptr_t Size = 0x1B4; // Float32
    };

    struct RTAnimationTracker : Instance {
        inline static constexpr std::uintptr_t Active = 0x13C; // Bool
        inline static constexpr std::uintptr_t EnableFallbackAudioInput = 0x13D; // Bool
        inline static constexpr std::uintptr_t SessionName = 0x108; // String
    };

    struct RayValue : Instance {
        inline static constexpr std::uintptr_t Value = 0xB8; // Ray
    };

    struct RealtimeMedia : Instance {
        inline static constexpr std::uintptr_t AudioInputActive = 0x2A0; // Bool
        inline static constexpr std::uintptr_t ForwardInput = 0x2A1; // Bool
        inline static constexpr std::uintptr_t IsConnected = 0x2A2; // Bool
    };

    struct RenderingTest : Instance {
        inline static constexpr std::uintptr_t CFrame = 0x100; // CoordinateFrame
        inline static constexpr std::uintptr_t ComparisonDiffThreshold = 0x1E8; // Int32
        inline static constexpr std::uintptr_t ComparisonPsnrThreshold = 0x1EC; // Float32
        inline static constexpr std::uintptr_t Description = 0xB8; // String
        inline static constexpr std::uintptr_t Orientation = 0x100; // Vector3
        inline static constexpr std::uintptr_t PerfTest = 0x13C; // Bool
        inline static constexpr std::uintptr_t QualityAuto = 0x1E0; // Bool
        inline static constexpr std::uintptr_t QualityLevel = 0x1E4; // Int32
        inline static constexpr std::uintptr_t RenderingTestFrameCount = 0x134; // Int32
        inline static constexpr std::uintptr_t ShouldSkip = 0x13D; // Bool
        inline static constexpr std::uintptr_t Ticket = 0xD8; // String
        inline static constexpr std::uintptr_t Timeout = 0x138; // Int32
    };

    struct ReverbSoundEffect : SoundEffect {
        inline static constexpr std::uintptr_t DecayTime = 0xF0; // Float32
        inline static constexpr std::uintptr_t Density = 0xF4; // Float32
        inline static constexpr std::uintptr_t Diffusion = 0xF8; // Float32
        inline static constexpr std::uintptr_t DryLevel = 0xFC; // Float32
        inline static constexpr std::uintptr_t WetLevel = 0x100; // Float32
    };

    struct RigidConstraint : Constraint {
        inline static constexpr std::uintptr_t EnableSkinning = 0x168; // Bool
    };

    struct RocketPropulsion : Instance {
        inline static constexpr std::uintptr_t Active = 0x2D0; // Bool
        inline static constexpr std::uintptr_t CartoonFactor = 0x2B0; // Float32
        inline static constexpr std::uintptr_t MaxSpeed = 0x2B4; // Float32
        inline static constexpr std::uintptr_t MaxThrust = 0x2B8; // Float32
        inline static constexpr std::uintptr_t TargetRadius = 0x2BC; // Float32
        inline static constexpr std::uintptr_t ThrustD = 0x2C0; // Float32
        inline static constexpr std::uintptr_t ThrustP = 0x2C4; // Float32
        inline static constexpr std::uintptr_t TurnD = 0x2C8; // Float32
        inline static constexpr std::uintptr_t TurnP = 0x2CC; // Float32
    };

    struct RodConstraint : Constraint {
        inline static constexpr std::uintptr_t Length = 0x170; // Float32
        inline static constexpr std::uintptr_t LimitAngle0 = 0x174; // Float32
        inline static constexpr std::uintptr_t LimitAngle1 = 0x178; // Float32
        inline static constexpr std::uintptr_t LimitsEnabled = 0x180; // Bool
        inline static constexpr std::uintptr_t Thickness = 0x17C; // Float32
    };

    struct RolloutValidation : Instance {
        inline static constexpr std::uintptr_t AdditionalFluffOne = 0x1E8; // Int32
        inline static constexpr std::uintptr_t AdditionalFluffThree = 0x1EC; // Float32
        inline static constexpr std::uintptr_t AdditionalFluffTwo = 0x3A8; // Bool
        inline static constexpr std::uintptr_t CreationVersion = 0x1F0; // Int32
        inline static constexpr std::uintptr_t FirstBinaryExpectedValue = 0xB0; // String
        inline static constexpr std::uintptr_t FirstSharedExpectedValue = 0xF0; // String
        inline static constexpr std::uintptr_t GenerationStrategy = 0x1F4; // Int32
        inline static constexpr std::uintptr_t SecondBinaryExpectedValue = 0x110; // String
        inline static constexpr std::uintptr_t SecondSharedExpectedValue = 0x150; // String
        inline static constexpr std::uintptr_t ThirdBinaryExpectedValue = 0x170; // String
        inline static constexpr std::uintptr_t ThirdSharedExpectedValue = 0x1B0; // String
    };

    struct RopeConstraint : Constraint {
        inline static constexpr std::uintptr_t Length = 0x170; // Float32
        inline static constexpr std::uintptr_t Restitution = 0x174; // Float32
        inline static constexpr std::uintptr_t Thickness = 0x178; // Float32
        inline static constexpr std::uintptr_t WinchEnabled = 0x18C; // Bool
        inline static constexpr std::uintptr_t WinchForce = 0x17C; // Float32
        inline static constexpr std::uintptr_t WinchResponsiveness = 0x180; // Float32
        inline static constexpr std::uintptr_t WinchSpeed = 0x184; // Float32
        inline static constexpr std::uintptr_t WinchTarget = 0x188; // Float32
    };

    struct SafetyService : Instance {
        inline static constexpr std::uintptr_t IsCaptureModeForReport = 0xC0; // Bool
    };

    struct ScreenshotHud : Instance {
        inline static constexpr std::uintptr_t CameraButtonPosition = 0xE0; // UDim2
        inline static constexpr std::uintptr_t CloseButtonPosition = 0xF0; // UDim2
        inline static constexpr std::uintptr_t CloseWhenScreenshotTaken = 0x104; // Bool
        inline static constexpr std::uintptr_t ExperienceNameOverlayEnabled = 0x105; // Bool
        inline static constexpr std::uintptr_t HideCoreGuiForCaptures = 0x106; // Bool
        inline static constexpr std::uintptr_t HidePlayerGuiForCaptures = 0x107; // Bool
        inline static constexpr std::uintptr_t UsernameOverlayEnabled = 0x108; // Bool
        inline static constexpr std::uintptr_t Visible = 0x109; // Bool
    };

    struct ScriptContext : Instance {
        inline static constexpr std::uintptr_t ScriptsDisabled = 0xC8; // Bool
        inline static constexpr std::uintptr_t DataModel = 0x118; // Pointer
        inline static constexpr std::uintptr_t RequireBypass = 0x898; // Bool
    };

    struct ScriptDebugger : Instance {
        inline static constexpr std::uintptr_t CurrentLine = 0xC8; // Int32
        inline static constexpr std::uintptr_t IsDebugging = 0x230; // Bool
    };

    struct ScrollingFrame : GuiObject {
        inline static constexpr std::uintptr_t DraggingScrollBar = 0xA70; // DraggingScrollBar
        inline static constexpr std::uintptr_t ScrollRate = 0xA84; // Float32
        inline static constexpr std::uintptr_t SmoothScroll = 0xA95; // Bool
    };

    struct Seat : BasePart {
        inline static constexpr std::uintptr_t Disabled = 0x220; // Bool
    };

    struct Selection : Instance {
        inline static constexpr std::uintptr_t RenderMode = 0xC8; // RenderMode
        inline static constexpr std::uintptr_t ShowActiveInstanceHighlight = 0xCC; // Bool
    };

    struct SelectionBox : GuiBase3d {
        inline static constexpr std::uintptr_t LineThickness = 0x114; // Float32
        inline static constexpr std::uintptr_t StudioSelectionBox = 0x11C; // Bool
        inline static constexpr std::uintptr_t SurfaceTransparency = 0x118; // Float32
    };

    struct SelectionSphere : GuiBase3d {
        inline static constexpr std::uintptr_t SurfaceTransparency = 0x114; // Float32
    };

    struct SelfViewConfiguration : BaseCoreGuiConfiguration {
        inline static constexpr std::uintptr_t Open = 0xB8; // Bool
    };

    struct ServerScriptService : Instance {
        inline static constexpr std::uintptr_t LoadStringEnabled = 0xC8; // Bool
    };

    struct ShirtGraphic : Instance {
        inline static constexpr std::uintptr_t Graphic = 0xC0; // TextureId
        inline static constexpr std::uintptr_t TextureContent = 0xC0; // Content
    };

    struct SkateboardPlatform : BasePart {
        inline static constexpr std::uintptr_t Steer = 0x224; // Int32
        inline static constexpr std::uintptr_t StickyWheels = 0x22C; // Bool
        inline static constexpr std::uintptr_t Throttle = 0x228; // Int32
    };

    struct Skin : Instance {
        inline static constexpr std::uintptr_t SkinColor = 0xC0; // BrickColor
    };

    struct Sky : Instance {
        inline static constexpr std::uintptr_t CelestialBodiesShown = 0x250; // Bool
        inline static constexpr std::uintptr_t MoonAngularSize = 0x244; // Float32
        inline static constexpr std::uintptr_t MoonTextureContent = 0xB8; // Content
        inline static constexpr std::uintptr_t MoonTextureId = 0xB8; // TextureId
        inline static constexpr std::uintptr_t SkyboxBackContent = 0xE8; // Content
        inline static constexpr std::uintptr_t SkyboxBk = 0xE8; // TextureId
        inline static constexpr std::uintptr_t SkyboxDn = 0x118; // TextureId
        inline static constexpr std::uintptr_t SkyboxDownContent = 0x118; // Content
        inline static constexpr std::uintptr_t SkyboxFrontContent = 0x148; // Content
        inline static constexpr std::uintptr_t SkyboxFt = 0x148; // TextureId
        inline static constexpr std::uintptr_t SkyboxLeftContent = 0x178; // Content
        inline static constexpr std::uintptr_t SkyboxLf = 0x178; // TextureId
        inline static constexpr std::uintptr_t SkyboxRightContent = 0x1A8; // Content
        inline static constexpr std::uintptr_t SkyboxRt = 0x1A8; // TextureId
        inline static constexpr std::uintptr_t SkyboxUp = 0x1D8; // TextureId
        inline static constexpr std::uintptr_t SkyboxUpContent = 0x1D8; // Content
        inline static constexpr std::uintptr_t StarCount = 0x248; // Int32
        inline static constexpr std::uintptr_t SunAngularSize = 0x24C; // Float32
        inline static constexpr std::uintptr_t SunTextureContent = 0x208; // Content
        inline static constexpr std::uintptr_t SunTextureId = 0x208; // TextureId
    };

    struct SlimAnimationDataEntity : Instance {
        inline static constexpr std::uintptr_t EntityScale = 0x100; // Float64
        inline static constexpr std::uintptr_t Handle = 0x110; // Int32
        inline static constexpr std::uintptr_t IsSlimEnabled = 0x11C; // Bool
        inline static constexpr std::uintptr_t NumBones = 0x114; // Int32
        inline static constexpr std::uintptr_t RootIndex = 0x118; // Int32
        inline static constexpr std::uintptr_t SlimInstanceHashes = 0xD0; // BinaryString
        inline static constexpr std::uintptr_t SlimReplicationTimestampSec = 0x108; // Float64
    };

    struct Smoke : Instance {
        inline static constexpr std::uintptr_t Enabled = 0xD8; // Bool
        inline static constexpr std::uintptr_t LocalTransparencyModifier = 0xC4; // Float32
        inline static constexpr std::uintptr_t Opacity = 0xC8; // Float32
        inline static constexpr std::uintptr_t RiseVelocity = 0xCC; // Float32
        inline static constexpr std::uintptr_t Size = 0xD0; // Float32
        inline static constexpr std::uintptr_t TimeScale = 0xD4; // Float32
        inline static constexpr std::uintptr_t opacity_xml = 0xC8; // Float32
        inline static constexpr std::uintptr_t riseVelocity_xml = 0xCC; // Float32
        inline static constexpr std::uintptr_t size_xml = 0xD0; // Float32
    };

    struct Sound : Instance {
        inline static constexpr std::uintptr_t AcousticSimulationEnabled = 0x13C; // Bool
        inline static constexpr std::uintptr_t AudioContent = 0xB8; // Content
        inline static constexpr std::uintptr_t EmitterSize = 0x124; // Float32
        inline static constexpr std::uintptr_t IsPlaying = 0x140; // Bool
        inline static constexpr std::uintptr_t Looped = 0x13D; // Bool
        inline static constexpr std::uintptr_t MaxDistance = 0x120; // Float32
        inline static constexpr std::uintptr_t MinDistance = 0x124; // Float32
        inline static constexpr std::uintptr_t Pitch = 0x11C; // Float32
        inline static constexpr std::uintptr_t PlayOnRemove = 0x13E; // Bool
        inline static constexpr std::uintptr_t PlaybackRegionsEnabled = 0x13F; // Bool
        inline static constexpr std::uintptr_t PlaybackSpeed = 0x11C; // Float32
        inline static constexpr std::uintptr_t Playing = 0x140; // Bool
        inline static constexpr std::uintptr_t PlayingReplicator = 0x140; // Bool
        inline static constexpr std::uintptr_t RollOffMaxDistance = 0x120; // Float32
        inline static constexpr std::uintptr_t RollOffMinDistance = 0x124; // Float32
        inline static constexpr std::uintptr_t Volume = 0x130; // Float32
        inline static constexpr std::uintptr_t isPlaying = 0x140; // Bool
        inline static constexpr std::uintptr_t xmlRead_MaxDistance_3 = 0x120; // Float32
        inline static constexpr std::uintptr_t xmlRead_MinDistance_3 = 0x124; // Float32
    };

    struct SoundGroup : Instance {
        inline static constexpr std::uintptr_t Volume = 0xB8; // Float32
    };

    struct SoundService : Instance {
        inline static constexpr std::uintptr_t AcousticSimulationEnabled = 0x178; // Bool
        inline static constexpr std::uintptr_t DiffractionEnabled = 0x179; // Bool
        inline static constexpr std::uintptr_t DistanceFactor = 0x164; // Float32
        inline static constexpr std::uintptr_t DopplerScale = 0x168; // Float32
        inline static constexpr std::uintptr_t IsNewExpForAudioApiByDefault = 0x17A; // Bool
        inline static constexpr std::uintptr_t ListenerCFrame = 0x120; // CoordinateFrame
        inline static constexpr std::uintptr_t OcclusionEnabled = 0x17B; // Bool
        inline static constexpr std::uintptr_t RespectFilteringEnabled = 0x17C; // Bool
        inline static constexpr std::uintptr_t ReverbEnabled = 0x17D; // Bool
        inline static constexpr std::uintptr_t RolloffScale = 0x170; // Float32
    };

    struct Sparkles : Instance {
        inline static constexpr std::uintptr_t Color = 0xB8; // Color3
        inline static constexpr std::uintptr_t Enabled = 0xCC; // Bool
        inline static constexpr std::uintptr_t LocalTransparencyModifier = 0xC4; // Float32
        inline static constexpr std::uintptr_t TimeScale = 0xC8; // Float32
    };

    struct SpawnLocation : BasePart {
        inline static constexpr std::uintptr_t AllowTeamChangeOnTouch = 0x1E8; // Bool
        inline static constexpr std::uintptr_t Duration = 0x1E0; // Int32
        inline static constexpr std::uintptr_t Enabled = 0x1E9; // Bool
        inline static constexpr std::uintptr_t Neutral = 0x1EA; // Bool
        inline static constexpr std::uintptr_t TeamColor = 0x1E4; // BrickColor
    };

    struct SphereHandleAdornment : HandleAdornment {
        inline static constexpr std::uintptr_t Radius = 0x1A8; // Float32
    };

    struct SpotLight : Light {
        inline static constexpr std::uintptr_t Angle = 0xD8; // Float32
        inline static constexpr std::uintptr_t Range = 0xE0; // Float32
    };

    struct SpringConstraint : Constraint {
        inline static constexpr std::uintptr_t Coils = 0x170; // Float32
        inline static constexpr std::uintptr_t Damping = 0x174; // Float32
        inline static constexpr std::uintptr_t FreeLength = 0x178; // Float32
        inline static constexpr std::uintptr_t LimitsEnabled = 0x194; // Bool
        inline static constexpr std::uintptr_t MaxForce = 0x17C; // Float32
        inline static constexpr std::uintptr_t MaxLength = 0x180; // Float32
        inline static constexpr std::uintptr_t MinLength = 0x184; // Float32
        inline static constexpr std::uintptr_t Radius = 0x188; // Float32
        inline static constexpr std::uintptr_t Stiffness = 0x18C; // Float32
        inline static constexpr std::uintptr_t Thickness = 0x190; // Float32
    };

    struct StarterGui : Instance {
        inline static constexpr std::uintptr_t ProcessUserInput = 0x190; // Bool
        inline static constexpr std::uintptr_t ResetPlayerGuiOnSpawn = 0x191; // Bool
        inline static constexpr std::uintptr_t ShowDevelopmentGui = 0x192; // Bool
    };

    struct StarterPlayer : Instance {
        inline static constexpr std::uintptr_t AllowCustomAnimations = 0x11C; // Bool
        inline static constexpr std::uintptr_t AutoJumpEnabled = 0x11D; // Bool
        inline static constexpr std::uintptr_t CameraMaxZoomDistance = 0xCC; // Float32
        inline static constexpr std::uintptr_t CameraMinZoomDistance = 0xD0; // Float32
        inline static constexpr std::uintptr_t CharacterBreakJointsOnDeath = 0x11E; // Bool
        inline static constexpr std::uintptr_t CharacterJumpHeight = 0xD8; // Float32
        inline static constexpr std::uintptr_t CharacterJumpPower = 0xDC; // Float32
        inline static constexpr std::uintptr_t CharacterMaxSlopeAngle = 0xE0; // Float32
        inline static constexpr std::uintptr_t CharacterUseJumpPower = 0x11F; // Bool
        inline static constexpr std::uintptr_t CharacterWalkSpeed = 0xE4; // Float32
        inline static constexpr std::uintptr_t ClassicDeath = 0x120; // Bool
        inline static constexpr std::uintptr_t CreateDefaultPlayerModule = 0x121; // Bool
        inline static constexpr std::uintptr_t EnableMouseLockOption = 0x122; // Bool
        inline static constexpr std::uintptr_t HealthDisplayDistance = 0x108; // Float32
        inline static constexpr std::uintptr_t LoadCharacterAppearance = 0x123; // Bool
        inline static constexpr std::uintptr_t NameDisplayDistance = 0x114; // Float32
        inline static constexpr std::uintptr_t PlayerModuleStatus = 0x118; // Int32
        inline static constexpr std::uintptr_t UserEmotesEnabled = 0x124; // Bool
    };

    struct Stats : Instance {
        inline static constexpr std::uintptr_t FrameTime = 0x200; // Float32
        inline static constexpr std::uintptr_t RenderCPUFrameTime = 0x204; // Float32
        inline static constexpr std::uintptr_t RenderGPUFrameTime = 0x208; // Float32
        inline static constexpr std::uintptr_t SceneDrawcallCount = 0x210; // Int32
        inline static constexpr std::uintptr_t SceneTriangleCount = 0x20C; // Int32
        inline static constexpr std::uintptr_t ShadowsDrawcallCount = 0x228; // Int32
        inline static constexpr std::uintptr_t ShadowsTriangleCount = 0x224; // Int32
        inline static constexpr std::uintptr_t UI2DDrawcallCount = 0x218; // Int32
        inline static constexpr std::uintptr_t UI2DTriangleCount = 0x214; // Int32
        inline static constexpr std::uintptr_t UI3DDrawcallCount = 0x220; // Int32
        inline static constexpr std::uintptr_t UI3DTriangleCount = 0x21C; // Int32
    };

    struct StringValue : Instance {
        inline static constexpr std::uintptr_t Value = 0xB8; // String
    };

    struct StudioData : Instance {
        inline static constexpr std::uintptr_t EnableScriptCollabByDefaultOnLoad = 0xC8; // Bool
    };

    struct StyleDerive : Instance {
        inline static constexpr std::uintptr_t Index = 0xC8; // Int32
        inline static constexpr std::uintptr_t Priority = 0xCC; // Int32
    };

    struct StyleQuery : Instance {
        inline static constexpr std::uintptr_t IsActive = 0xB0; // Bool
    };

    struct StyleRule : Instance {
        inline static constexpr std::uintptr_t Index = 0x170; // Int32
        inline static constexpr std::uintptr_t Priority = 0x174; // Int32
        inline static constexpr std::uintptr_t Selector = 0x130; // String
        inline static constexpr std::uintptr_t SelectorError = 0x150; // String
    };

    struct SunRaysEffect : PostEffect {
        inline static constexpr std::uintptr_t Intensity = 0xB8; // Float32
        inline static constexpr std::uintptr_t Spread = 0xBC; // Float32
    };

    struct SurfaceAppearance : Instance {
        inline static constexpr std::uintptr_t ColorMapContent = 0xB8; // Content
        inline static constexpr std::uintptr_t EmissiveMaskContent = 0xE8; // Content
        inline static constexpr std::uintptr_t EmissiveStrength = 0x294; // Float32
        inline static constexpr std::uintptr_t MetalnessMapContent = 0x118; // Content
        inline static constexpr std::uintptr_t NormalMapContent = 0x148; // Content
        inline static constexpr std::uintptr_t RoughnessMapContent = 0x178; // Content
        inline static constexpr std::uintptr_t TexturePackContent = 0x1A8; // Content
    };

    struct SurfaceGui : SurfaceGuiBase {
        inline static constexpr std::uintptr_t AlwaysOnTop = 0x864; // Bool
        inline static constexpr std::uintptr_t Brightness = 0x840; // Float32
        inline static constexpr std::uintptr_t HorizontalCurvature = 0x844; // Float32
        inline static constexpr std::uintptr_t LightInfluence = 0x848; // Float32
        inline static constexpr std::uintptr_t MaxDistance = 0x84C; // Float32
        inline static constexpr std::uintptr_t PixelsPerStud = 0x850; // Float32
        inline static constexpr std::uintptr_t ToolPunchThroughDistance = 0x85C; // Float32
        inline static constexpr std::uintptr_t ZOffset = 0x860; // Float32
    };

    struct SurfaceLight : Light {
        inline static constexpr std::uintptr_t Angle = 0xD8; // Float32
        inline static constexpr std::uintptr_t Range = 0xE0; // Float32
    };

    struct SwimController : ControllerBase {
        inline static constexpr std::uintptr_t AccelerationTime = 0xE0; // Float32
        inline static constexpr std::uintptr_t PitchMaxTorque = 0xE4; // Float32
        inline static constexpr std::uintptr_t PitchSpeedFactor = 0xE8; // Float32
        inline static constexpr std::uintptr_t RollMaxTorque = 0xEC; // Float32
        inline static constexpr std::uintptr_t RollSpeedFactor = 0xF0; // Float32
    };

    struct TaskScheduler : Instance {
        inline static constexpr std::uintptr_t JobsBegin = 0xC8; // EngineInternal
        inline static constexpr std::uintptr_t JobsEnd = 0xD0; // EngineInternal
        inline static constexpr std::uintptr_t JobsCapacity = 0xD8; // EngineInternal
        inline static constexpr std::uintptr_t JobEntrySize = 0x10; // EngineInternal
        inline static constexpr std::uintptr_t Size = 0x1F8; // EngineInternal
        inline static constexpr std::uintptr_t Mutex = 0x90; // EngineInternal
        inline static constexpr std::uintptr_t ConditionVariable = 0xA0; // EngineInternal
        inline static constexpr std::uintptr_t MaxFPS = 0xB0; // EngineInternal
        inline static constexpr std::uintptr_t InFlightCondition = 0x118; // EngineInternal
        inline static constexpr std::uintptr_t CycleOverrideMutex = 0x188; // EngineInternal
        inline static constexpr std::uintptr_t CycleMutex = 0x190; // EngineInternal
        inline static constexpr std::uintptr_t CycleStartedCondition = 0x198; // EngineInternal
        inline static constexpr std::uintptr_t CycleResumedCondition = 0x1A0; // EngineInternal
        inline static constexpr std::uintptr_t RescheduleMutex = 0x1A8; // EngineInternal
    };

    struct Team : Instance {
        inline static constexpr std::uintptr_t AutoAssignable = 0xBC; // Bool
        inline static constexpr std::uintptr_t AutoColorCharacters = 0xBD; // Bool
        inline static constexpr std::uintptr_t ChildOrder = 0xB0; // Int32
        inline static constexpr std::uintptr_t Score = 0xB4; // Int32
        inline static constexpr std::uintptr_t TeamColor = 0xB8; // BrickColor
    };

    struct TeleportOptions : Instance {
        inline static constexpr std::uintptr_t ServerInstanceId = 0xD0; // String
        inline static constexpr std::uintptr_t ShouldReserveServer = 0xF0; // Bool
    };

    struct TeleportService : Instance {
        inline static constexpr std::uintptr_t CustomizedTeleportUI = 0xC8; // Bool
    };

    struct Terrain : BasePart {
        inline static constexpr std::uintptr_t Decoration = 0x200; // Bool
        inline static constexpr std::uintptr_t GrassLength = 0x1E8; // Float32
        inline static constexpr std::uintptr_t SmoothVoxelsUpgraded = 0x201; // Bool
        inline static constexpr std::uintptr_t WaterReflectance = 0x1F0; // Float32
        inline static constexpr std::uintptr_t WaterTransparency = 0x1F4; // Float32
        inline static constexpr std::uintptr_t WaterWaveSize = 0x1F8; // Float32
        inline static constexpr std::uintptr_t WaterWaveSpeed = 0x1FC; // Float32
    };

    struct TerrainDetail : Instance {
        inline static constexpr std::uintptr_t ColorMapContent = 0xB8; // Content
        inline static constexpr std::uintptr_t EmissiveMaskContent = 0xE8; // Content
        inline static constexpr std::uintptr_t EmissiveStrength = 0x1E4; // Float32
        inline static constexpr std::uintptr_t MetalnessMapContent = 0x118; // Content
        inline static constexpr std::uintptr_t NormalMapContent = 0x148; // Content
        inline static constexpr std::uintptr_t RoughnessMapContent = 0x178; // Content
        inline static constexpr std::uintptr_t StudsPerTile = 0x1F0; // Float32
        inline static constexpr std::uintptr_t TexturePackContent = 0x1A8; // Content
    };

    struct TerrainRegion : Instance {
        inline static constexpr std::uintptr_t SizeInCells = 0xB8; // Vector3
    };

    struct TestService : Instance {
        inline static constexpr std::uintptr_t AutoRuns = 0x108; // Bool
        inline static constexpr std::uintptr_t ErrorCount = 0xF8; // Int32
        inline static constexpr std::uintptr_t ExecuteWithStudioRun = 0x109; // Bool
        inline static constexpr std::uintptr_t Is30FpsThrottleEnabled = 0x10C; // Bool
        inline static constexpr std::uintptr_t IsPhysicsEnvironmentalThrottled = 0x10A; // Bool
        inline static constexpr std::uintptr_t IsSleepAllowed = 0x10B; // Bool
        inline static constexpr std::uintptr_t NumberOfPlayers = 0xFC; // Int32
        inline static constexpr std::uintptr_t SimulateSecondsLag = 0xE8; // Float64
        inline static constexpr std::uintptr_t TestCount = 0x100; // Int32
        inline static constexpr std::uintptr_t ThrottlePhysicsToRealtime = 0x10C; // Bool
        inline static constexpr std::uintptr_t Timeout = 0xF0; // Float64
        inline static constexpr std::uintptr_t WarnCount = 0x104; // Int32
    };

    struct TextBox : GuiObject {
        inline static constexpr std::uintptr_t Confidential = 0xF21; // Bool
        inline static constexpr std::uintptr_t ContentText = 0xDF0; // String
        inline static constexpr std::uintptr_t CursorPosition = 0xEE4; // Int32
        inline static constexpr std::uintptr_t HasFocus = 0xF22; // Bool
        inline static constexpr std::uintptr_t LocalizationMatchIdentifier = 0xE10; // String
        inline static constexpr std::uintptr_t LocalizationMatchedSourceText = 0xE30; // String
        inline static constexpr std::uintptr_t LocalizedPlaceholderText = 0xE50; // String
        inline static constexpr std::uintptr_t ManualFocusRelease = 0xF23; // Bool
        inline static constexpr std::uintptr_t OverlayNativeInput = 0xF25; // Bool
        inline static constexpr std::uintptr_t SelectionStart = 0xEFC; // Int32
        inline static constexpr std::uintptr_t ShouldEmitReturnEvents = 0xF27; // Bool
        inline static constexpr std::uintptr_t ShouldEmitTabEvents = 0xF28; // Bool
        inline static constexpr std::uintptr_t ShouldEmitUpAndDownArrowEvents = 0xF29; // Bool
    };

    struct TextButton : GuiButton {
        inline static constexpr std::uintptr_t Confidential = 0x116C; // Bool
        inline static constexpr std::uintptr_t ContentText = 0x1078; // String
        inline static constexpr std::uintptr_t LocalizationMatchIdentifier = 0x1098; // String
        inline static constexpr std::uintptr_t LocalizationMatchedSourceText = 0x10B8; // String
        inline static constexpr std::uintptr_t LocalizedText = 0x10D8; // String
    };

    struct TextChatCommand : Instance {
        inline static constexpr std::uintptr_t AutocompleteVisible = 0xF0; // Bool
        inline static constexpr std::uintptr_t Enabled = 0xF1; // Bool
        inline static constexpr std::uintptr_t SecondaryAlias = 0xD0; // String
    };

    struct TextChatMessage : Instance {
        inline static constexpr std::uintptr_t ChatActionType = 0xB8; // String
        inline static constexpr std::uintptr_t ForModeration = 0x2B8; // Bool
        inline static constexpr std::uintptr_t IsHiddenMessage = 0x2B9; // Bool
        inline static constexpr std::uintptr_t MessageId = 0xD8; // String
        inline static constexpr std::uintptr_t Metadata = 0xF8; // String
        inline static constexpr std::uintptr_t OriginalText = 0x118; // String
        inline static constexpr std::uintptr_t PrefixTextInternal = 0x158; // String
        inline static constexpr std::uintptr_t PresetChatVersion = 0x178; // String
        inline static constexpr std::uintptr_t PresetId = 0x198; // String
        inline static constexpr std::uintptr_t RewrittenText = 0x1B8; // String
        inline static constexpr std::uintptr_t RewrittenTranslation = 0x1D8; // String
        inline static constexpr std::uintptr_t TextInternal = 0x218; // String
        inline static constexpr std::uintptr_t Timestamp = 0x2C0; // DateTime
        inline static constexpr std::uintptr_t TranslationInternal = 0x258; // String
        inline static constexpr std::uintptr_t Verified = 0x2BA; // Bool
        inline static constexpr std::uintptr_t WasRewritten = 0x2BB; // Bool
    };

    struct TextChatService : Instance {
        inline static constexpr std::uintptr_t ChatTranslationToggleEnabled = 0xC0; // Bool
        inline static constexpr std::uintptr_t CreateDefaultCommands = 0x1F3; // Bool
        inline static constexpr std::uintptr_t CreateDefaultTextChannels = 0x1F4; // Bool
        inline static constexpr std::uintptr_t HasSeenDeprecationDialog = 0x1F5; // Bool
        inline static constexpr std::uintptr_t IsLegacyChatDisabled = 0x1F6; // Bool
    };

    struct TextGenerator : Instance {
        inline static constexpr std::uintptr_t Seed = 0xD0; // Int32
        inline static constexpr std::uintptr_t Temperature = 0xD4; // Float32
        inline static constexpr std::uintptr_t TopP = 0xD8; // Float32
    };

    struct TextLabel : GuiObject {
        inline static constexpr std::uintptr_t Confidential = 0xEEC; // Bool
        inline static constexpr std::uintptr_t ContentText = 0xDF8; // String
        inline static constexpr std::uintptr_t LocalizationMatchIdentifier = 0xE18; // String
        inline static constexpr std::uintptr_t LocalizationMatchedSourceText = 0xE38; // String
        inline static constexpr std::uintptr_t LocalizedText = 0xE58; // String
    };

    struct TextSource : Instance {
        inline static constexpr std::uintptr_t CanSend = 0xF8; // Bool
        inline static constexpr std::uintptr_t UserId = 0xF0; // Int64
        inline static constexpr std::uintptr_t UserIdReplicated = 0xF0; // Int64
        inline static constexpr std::uintptr_t Username = 0xD0; // String
    };

    struct Texture : Decal {
        inline static constexpr std::uintptr_t OffsetStudsU = 0x270; // Float32
        inline static constexpr std::uintptr_t OffsetStudsV = 0x274; // Float32
        inline static constexpr std::uintptr_t StudsPerTileU = 0x278; // Float32
        inline static constexpr std::uintptr_t StudsPerTileV = 0x27C; // Float32
    };

    struct TorsionSpringConstraint : Constraint {
        inline static constexpr std::uintptr_t Coils = 0x170; // Float32
        inline static constexpr std::uintptr_t Damping = 0x174; // Float32
        inline static constexpr std::uintptr_t LimitEnabled = 0x18C; // Bool
        inline static constexpr std::uintptr_t LimitsEnabled = 0x18C; // Bool
        inline static constexpr std::uintptr_t MaxAngle = 0x178; // Float32
        inline static constexpr std::uintptr_t MaxTorque = 0x17C; // Float32
        inline static constexpr std::uintptr_t Radius = 0x180; // Float32
        inline static constexpr std::uintptr_t Restitution = 0x184; // Float32
        inline static constexpr std::uintptr_t Stiffness = 0x188; // Float32
    };

    struct Trail : Instance {
        inline static constexpr std::uintptr_t Brightness = 0x1C0; // Float32
        inline static constexpr std::uintptr_t Enabled = 0x1E4; // Bool
        inline static constexpr std::uintptr_t FaceCamera = 0x1E5; // Bool
        inline static constexpr std::uintptr_t Lifetime = 0x1C4; // Float32
        inline static constexpr std::uintptr_t LightEmission = 0x1C8; // Float32
        inline static constexpr std::uintptr_t LightInfluence = 0x1CC; // Float32
        inline static constexpr std::uintptr_t LocalTransparencyModifier = 0x1D0; // Float32
        inline static constexpr std::uintptr_t MaxLength = 0x1D4; // Float32
        inline static constexpr std::uintptr_t MinLength = 0x1D8; // Float32
        inline static constexpr std::uintptr_t Texture = 0x170; // TextureId
        inline static constexpr std::uintptr_t TextureContent = 0x170; // Content
        inline static constexpr std::uintptr_t TextureLength = 0x1DC; // Float32
        inline static constexpr std::uintptr_t Transparency = 0xB8; // NumberSequence
        inline static constexpr std::uintptr_t WidthScale = 0xF8; // NumberSequence
    };

    struct TremoloSoundEffect : SoundEffect {
        inline static constexpr std::uintptr_t Depth = 0xF0; // Float32
        inline static constexpr std::uintptr_t Duty = 0xF4; // Float32
        inline static constexpr std::uintptr_t Frequency = 0xF8; // Float32
    };

    struct UIDragDetector : Instance {
        inline static constexpr std::uintptr_t ActivatedCursorIconContent = 0xD0; // Content
        inline static constexpr std::uintptr_t CursorIconContent = 0x100; // Content
        inline static constexpr std::uintptr_t DragRotation = 0x1B8; // Float32
        inline static constexpr std::uintptr_t DragUDim2 = 0x168; // UDim2
        inline static constexpr std::uintptr_t Enabled = 0x1D8; // Bool
        inline static constexpr std::uintptr_t MaxDragAngle = 0x1C4; // Float32
        inline static constexpr std::uintptr_t MaxDragTranslation = 0x178; // UDim2
        inline static constexpr std::uintptr_t MinDragAngle = 0x1C8; // Float32
        inline static constexpr std::uintptr_t MinDragTranslation = 0x188; // UDim2
        inline static constexpr std::uintptr_t SelectionModeDragSpeed = 0x198; // UDim2
        inline static constexpr std::uintptr_t SelectionModeRotateSpeed = 0x1D0; // Float32
    };

    struct UIGradient : Instance {
        inline static constexpr std::uintptr_t Color = 0x108; // ColorSequence
    };

    struct UITableLayout : Instance {
        inline static constexpr std::uintptr_t FillEmptySpaceColumns = 0x174; // Bool
        inline static constexpr std::uintptr_t FillEmptySpaceRows = 0x175; // Bool
        inline static constexpr std::uintptr_t Padding = 0x160; // UDim2
    };

    struct UniversalConstraint : Constraint {
        inline static constexpr std::uintptr_t LimitsEnabled = 0x17C; // Bool
        inline static constexpr std::uintptr_t MaxAngle = 0x170; // Float32
        inline static constexpr std::uintptr_t Radius = 0x174; // Float32
        inline static constexpr std::uintptr_t Restitution = 0x178; // Float32
    };

    struct UserGameSettings : Instance {
        inline static constexpr std::uintptr_t ChatTranslationToggleEnabled = 0xC0; // Bool
    };

    struct UserInputService : Instance {
        inline static constexpr std::uintptr_t LegacyInputEventsEnabled = 0xF0; // Bool
        inline static constexpr std::uintptr_t PreferredInput = 0xE8; // PreferredInput
        inline static constexpr std::uintptr_t TouchScreenEnabled = 0xF3; // Bool
    };

    struct VRService : Instance {
        inline static constexpr std::uintptr_t AvatarGestures = 0x130; // Bool
        inline static constexpr std::uintptr_t DidPointerHit = 0x131; // Bool
        inline static constexpr std::uintptr_t FadeOutViewOnCollision = 0x132; // Bool
        inline static constexpr std::uintptr_t PointerHitCFrame = 0xE8; // CoordinateFrame
        inline static constexpr std::uintptr_t QuestASWState = 0x133; // Bool
        inline static constexpr std::uintptr_t QuestDisplayRefreshRate = 0x128; // Float32
        inline static constexpr std::uintptr_t VRDeviceAvailable = 0x134; // Bool
        inline static constexpr std::uintptr_t VRDeviceName = 0xC8; // String
        inline static constexpr std::uintptr_t VREnabled = 0x135; // Bool
        inline static constexpr std::uintptr_t VRSessionState = 0x12C; // VRSessionState
    };

    struct VectorForce : Constraint {
        inline static constexpr std::uintptr_t ApplyAtCenterOfMass = 0x180; // Bool
    };

    struct VehicleSeat : BasePart {
        inline static constexpr std::uintptr_t Disabled = 0x218; // Bool
        inline static constexpr std::uintptr_t HeadsUpDisplay = 0x23C; // Bool
        inline static constexpr std::uintptr_t MaxSpeed = 0x228; // Float32
        inline static constexpr std::uintptr_t SteerFloat = 0x22C; // Float32
        inline static constexpr std::uintptr_t ThrottleFloat = 0x230; // Float32
        inline static constexpr std::uintptr_t Torque = 0x234; // Float32
        inline static constexpr std::uintptr_t TurnSpeed = 0x238; // Float32
    };

    struct VersionControlService : Instance {
        inline static constexpr std::uintptr_t ScriptCollabEnabled = 0x118; // Bool
        inline static constexpr std::uintptr_t ScriptCollabVersionHistoryEnabled = 0x119; // Bool
    };

    struct VideoCaptureService : Instance {
        inline static constexpr std::uintptr_t CameraID = 0xC8; // String
    };

    struct VideoFrame : GuiObject {
        inline static constexpr std::uintptr_t Looped = 0x9F8; // Bool
        inline static constexpr std::uintptr_t Playing = 0x9F9; // Bool
        inline static constexpr std::uintptr_t PlayingReplicating = 0x9F9; // Bool
        inline static constexpr std::uintptr_t RollOffMaxDistance = 0x9E8; // Float32
        inline static constexpr std::uintptr_t RollOffMinDistance = 0x9EC; // Float32
        inline static constexpr std::uintptr_t TimePosition = 0x9D8; // Float64
        inline static constexpr std::uintptr_t TimePositionReplicating = 0x9D8; // Float64
        inline static constexpr std::uintptr_t VideoContent = 0x980; // Content
        inline static constexpr std::uintptr_t Volume = 0x9F4; // Float32
    };

    struct VideoPlayer : Instance {
        inline static constexpr std::uintptr_t AutoLoadInStudio = 0x179; // Bool
        inline static constexpr std::uintptr_t AutoPlayInStudio = 0x17A; // Bool
        inline static constexpr std::uintptr_t IsPlaying = 0x17B; // Bool
        inline static constexpr std::uintptr_t Looping = 0x17C; // Bool
        inline static constexpr std::uintptr_t PlaybackSpeed = 0x170; // Float32
        inline static constexpr std::uintptr_t PlayingReplicating = 0x178; // Bool
        inline static constexpr std::uintptr_t TimePosition = 0x160; // Float64
        inline static constexpr std::uintptr_t VideoContent = 0x130; // Content
        inline static constexpr std::uintptr_t Volume = 0x174; // Float32
    };

    struct ViewportFrame : GuiObject {
        inline static constexpr std::uintptr_t CameraCFrame = 0x990; // CoordinateFrame
        inline static constexpr std::uintptr_t CameraFieldOfView = 0x9F0; // Float32
        inline static constexpr std::uintptr_t IsMirrored = 0x9F8; // Bool
    };

    struct VirtualInputManager : Instance {
        inline static constexpr std::uintptr_t AdditionalLuaState = 0x150; // String
    };

    struct VisualizationMode : Instance {
        inline static constexpr std::uintptr_t Enabled = 0xF0; // Bool
        inline static constexpr std::uintptr_t ToolTip = 0xD0; // String
    };

    struct VisualizationModeCategory : Instance {
        inline static constexpr std::uintptr_t Enabled = 0xD0; // Bool
    };

    struct VoiceChatService : Instance {
        inline static constexpr std::uintptr_t EnableDefaultVoice = 0x204; // Bool
        inline static constexpr std::uintptr_t UseNewAudioApi = 0x205; // Bool
        inline static constexpr std::uintptr_t UseNewControlPaths = 0x206; // Bool
        inline static constexpr std::uintptr_t UseNewJoinFlow = 0x207; // Bool
        inline static constexpr std::uintptr_t UseStreamSwitching = 0x208; // Bool
        inline static constexpr std::uintptr_t VoiceChatEnabledForPlaceOnRcc = 0x209; // Bool
        inline static constexpr std::uintptr_t VoiceChatEnabledForUniverseOnRcc = 0x20A; // Bool
    };

    struct Weld : JointInstance {
        inline static constexpr std::uintptr_t EnableSkinning = 0x188; // Bool
    };

    struct WeldConstraint : Instance {
        inline static constexpr std::uintptr_t Enabled = 0xD8; // Bool
    };

    struct Wire : Instance {
        inline static constexpr std::uintptr_t SourceName = 0xB8; // String
        inline static constexpr std::uintptr_t TargetName = 0xD8; // String
    };

    struct WireframeHandleAdornment : HandleAdornment {
        inline static constexpr std::uintptr_t Thickness = 0x1B4; // Float32
    };

    struct Workspace : Model {
        inline static constexpr std::uintptr_t AirTurbulenceIntensity = 0x4C0; // Float32
        inline static constexpr std::uintptr_t AllowThirdPartySales = 0x554; // Bool
        inline static constexpr std::uintptr_t DistributedGameTime = 0x4B8; // Float64
        inline static constexpr std::uintptr_t FallHeightEnabled = 0x555; // Bool
        inline static constexpr std::uintptr_t StreamingMinRadius = 0x538; // Int32
        inline static constexpr std::uintptr_t StreamingTargetRadius = 0x53C; // Int32
        inline static constexpr std::uintptr_t TerrainWeldsFixed = 0x3F8; // Bool
        inline static constexpr std::uintptr_t ThrottleLevel = 0x540; // Int32
        inline static constexpr std::uintptr_t WatermarkHash = 0x468; // String
    };

    struct WorldModel : Model {
        inline static constexpr std::uintptr_t UseWorkspaceCollisionGroups = 0x460; // Bool
    };

    struct WrapLayer : BaseWrap {
        inline static constexpr std::uintptr_t BindOffset = 0x300; // CoordinateFrame
        inline static constexpr std::uintptr_t Color = 0x360; // Color3
        inline static constexpr std::uintptr_t Enabled = 0x398; // Bool
        inline static constexpr std::uintptr_t Order = 0x38C; // Int32
        inline static constexpr std::uintptr_t Puffiness = 0x390; // Float32
        inline static constexpr std::uintptr_t ReferenceMeshContent = 0x2A0; // Content
        inline static constexpr std::uintptr_t ReferenceOrigin = 0x330; // CoordinateFrame
        inline static constexpr std::uintptr_t ShrinkFactor = 0x394; // Float32
        inline static constexpr std::uintptr_t TemporaryReferenceMeshContent = 0x2D0; // Content
    };

    struct WrapTarget : BaseWrap {
        inline static constexpr std::uintptr_t Color = 0x2A0; // Color3
        inline static constexpr std::uintptr_t Stiffness = 0x2B0; // Float32
    };

    struct WrapTextureTransfer : Instance {
        inline static constexpr std::uintptr_t ReferenceCageMeshContent = 0xB0; // Content
        inline static constexpr std::uintptr_t UVMaxBound = 0xE0; // Vector2
        inline static constexpr std::uintptr_t UVMinBound = 0xE8; // Vector2
    };
}
