namespace ExternalOffsets {

        namespace Engine {
            inline constexpr std::uintptr_t TaskSchedulerPointer = 0x8F026A8;
            inline constexpr std::uintptr_t PlayerConfigurerPointer = 0x8E48500;
        }

        struct Instance {
            inline static constexpr std::uintptr_t Archivable = 0x92; // Bool
            inline static constexpr std::uintptr_t ArchivableMask = 0x8;
            inline static constexpr std::uintptr_t DefinesCapabilities = 0x92; // Bool
            inline static constexpr std::uintptr_t DefinesCapabilitiesMask = 0x10;
            inline static constexpr std::uintptr_t Name = 0x68; // String
            inline static constexpr std::uintptr_t Ref = 0x60; // Instance
            inline static constexpr std::uintptr_t Sandboxed = 0x92; // Bool
            inline static constexpr std::uintptr_t SandboxedMask = 0x10;
            inline static constexpr std::uintptr_t archivable = 0x92; // Bool
            inline static constexpr std::uintptr_t archivableMask = 0x8;
            inline static constexpr std::uintptr_t numExpectedDirectChildren = 0x80; // Int32
            inline static constexpr std::uintptr_t ClassDescriptorMember = 0x30; // EngineInternal
            inline static constexpr std::uintptr_t Signature = 0x50; // EngineInternal
            inline static constexpr std::uintptr_t PropertyType = 0x8; // EngineInternal
            inline static constexpr std::uintptr_t Self = 0x8; // Pointer
            inline static constexpr std::uintptr_t SelfControlBlock = 0x10; // Pointer
            inline static constexpr std::uintptr_t ClassDescriptor = 0x18; // Pointer
            inline static constexpr std::uintptr_t Parent = 0x60; // Pointer
            inline static constexpr std::uintptr_t Children = 0x70; // Pointer
            inline static constexpr std::uintptr_t ChildrenControlBlock = 0x78; // Pointer
        };
        
        struct Accoutrement : Instance {
            inline static constexpr std::uintptr_t AttachmentPoint = 0xA0; // CoordinateFrame
            inline static constexpr std::uintptr_t AttachmentPos = 0xC4; // Vector3
            inline static constexpr std::uintptr_t AttachmentRight = 0xA0; // Vector3
            inline static constexpr std::uintptr_t BackendAccoutrementState = 0xD0; // Int32
        };
        
        struct Accessory : Accoutrement {
        };
        
        struct AccessoryDescription : Instance {
            inline static constexpr std::uintptr_t AssetId = 0xA8; // Int64
            inline static constexpr std::uintptr_t IsLayered = 0xE0; // Bool
            inline static constexpr std::uintptr_t Order = 0xD8; // Int32
            inline static constexpr std::uintptr_t Position = 0xB0; // Vector3
            inline static constexpr std::uintptr_t Puffiness = 0xDC; // Float32
            inline static constexpr std::uintptr_t Rotation = 0xBC; // Vector3
            inline static constexpr std::uintptr_t Scale = 0xC8; // Vector3
        };
        
        struct AccountService : Instance {
        };
        
        struct AchievementService : Instance {
        };
        
        struct PVInstance : Instance {
        };
        
        struct Model : PVInstance {
            inline static constexpr std::uintptr_t ModelMeshCFrame = 0xE8; // CoordinateFrame
            inline static constexpr std::uintptr_t ModelMeshData = 0xD0; // SharedString
            inline static constexpr std::uintptr_t ModelMeshSize = 0x118; // Vector3
            inline static constexpr std::uintptr_t Scale = 0x12C; // Float32
            inline static constexpr std::uintptr_t ScaleFactor = 0x12C; // Float32
            inline static constexpr std::uintptr_t SlimHash = 0xD8; // SharedString
            inline static constexpr std::uintptr_t WorldPivotData = 0xE0; // OptionalCoordinateFrame
        };
        
        struct Actor : Model {
        };
        
        struct GuiBase : Instance {
        };
        
        struct GuiBase2d : GuiBase {
            inline static constexpr std::uintptr_t AbsoluteRotation = 0xD0; // Float32
            inline static constexpr std::uintptr_t IsNotOccluded = 0x11D; // Bool
            inline static constexpr std::uintptr_t TotalGroupScale = 0x118; // Float32
        };
        
        struct LayerCollector : GuiBase2d {
            inline static constexpr std::uintptr_t Enabled = 0x4AC; // Bool
            inline static constexpr std::uintptr_t ResetOnSpawn = 0x4AD; // Bool
            inline static constexpr std::uintptr_t TabKeyboardNavigation = 0x4AE; // Bool
        };
        
        struct SurfaceGuiBase : LayerCollector {
            inline static constexpr std::uintptr_t Active = 0x744; // Bool
        };
        
        struct AdGui : SurfaceGuiBase {
            inline static constexpr std::uintptr_t EnableVideoAds = 0x864; // Bool
            inline static constexpr std::uintptr_t FallbackImageContent = 0x828; // Content
        };
        
        struct AdPlacement : Instance {
            inline static constexpr std::uintptr_t PlacementId = 0x118; // Int64
            inline static constexpr std::uintptr_t RewardId = 0xC8; // String
            inline static constexpr std::uintptr_t RewardName = 0xE8; // String
            inline static constexpr std::uintptr_t Visible = 0x124; // Bool
        };
        
        struct AdPortal : Instance {
        };
        
        struct AdService : Instance {
        };
        
        struct AdvancedDragger : Instance {
        };
        
        struct ControllerBase : Instance {
            inline static constexpr std::uintptr_t Active = 0xA4; // Bool
            inline static constexpr std::uintptr_t BalanceRigidityEnabled = 0xA5; // Bool
            inline static constexpr std::uintptr_t MoveSpeedFactor = 0xA0; // Float32
        };
        
        struct AirController : ControllerBase {
            inline static constexpr std::uintptr_t BalanceMaxTorque = 0xD4; // Float32
            inline static constexpr std::uintptr_t BalanceSpeed = 0xD8; // Float32
            inline static constexpr std::uintptr_t LinearImpulse = 0xC8; // Vector3
            inline static constexpr std::uintptr_t MaintainAngularMomentum = 0xE8; // Bool
            inline static constexpr std::uintptr_t MaintainLinearMomentum = 0xE9; // Bool
            inline static constexpr std::uintptr_t MoveMaxForce = 0xDC; // Float32
            inline static constexpr std::uintptr_t TurnMaxTorque = 0xE0; // Float32
            inline static constexpr std::uintptr_t TurnSpeedFactor = 0xE4; // Float32
        };
        
        struct Constraint : Instance {
            inline static constexpr std::uintptr_t Color = 0xD8; // BrickColor
            inline static constexpr std::uintptr_t Enabled = 0xA1; // Bool
            inline static constexpr std::uintptr_t Visible = 0xDC; // Bool
        };
        
        struct AlignOrientation : Constraint {
            inline static constexpr std::uintptr_t CFrame = 0x158; // CoordinateFrame
            inline static constexpr std::uintptr_t LookAtPosition = 0x17C; // Vector3
            inline static constexpr std::uintptr_t MaxAngularVelocity = 0x18C; // Float32
            inline static constexpr std::uintptr_t MaxTorque = 0x190; // Float32
            inline static constexpr std::uintptr_t PrimaryAxis = 0x158; // Vector3
            inline static constexpr std::uintptr_t PrimaryAxisOnly = 0x19C; // Bool
            inline static constexpr std::uintptr_t ReactionTorqueEnabled = 0x19D; // Bool
            inline static constexpr std::uintptr_t Responsiveness = 0x198; // Float32
            inline static constexpr std::uintptr_t RigidityEnabled = 0x19E; // Bool
        };
        
        struct AlignPosition : Constraint {
            inline static constexpr std::uintptr_t ApplyAtCenterOfMass = 0x188; // Bool
            inline static constexpr std::uintptr_t MaxAxesForce = 0x158; // Vector3
            inline static constexpr std::uintptr_t MaxForce = 0x178; // Float32
            inline static constexpr std::uintptr_t MaxVelocity = 0x17C; // Float32
            inline static constexpr std::uintptr_t Position = 0x164; // Vector3
            inline static constexpr std::uintptr_t ReactionForceEnabled = 0x189; // Bool
            inline static constexpr std::uintptr_t Responsiveness = 0x184; // Float32
            inline static constexpr std::uintptr_t RigidityEnabled = 0x18A; // Bool
        };
        
        struct AnalyticsService : Instance {
            inline static constexpr std::uintptr_t ApiKey = 0xB0; // String
        };
        
        struct AngularVelocity : Constraint {
            inline static constexpr std::uintptr_t Value = 0x158; // Vector3
            inline static constexpr std::uintptr_t MaxTorque = 0x164; // Float32
            inline static constexpr std::uintptr_t ReactionTorqueEnabled = 0x16C; // Bool
        };
        
        struct AnimatedImageService : Instance {
        };
        
        struct Animation : Instance {
            inline static constexpr std::uintptr_t AnimationContent = 0x98; // Content
        };
        
        struct AnimationClip : Instance {
            inline static constexpr std::uintptr_t Loop = 0xB4; // Bool
        };
        
        struct AnimationClipProvider : Instance {
        };
        
        struct AnimationConstraint : Constraint {
            inline static constexpr std::uintptr_t AngularDamping = 0x158; // Float32
            inline static constexpr std::uintptr_t AngularStrength = 0x15C; // Float32
            inline static constexpr std::uintptr_t EnableSkinning = 0x170; // Bool
            inline static constexpr std::uintptr_t IsKinematic = 0x171; // Bool
            inline static constexpr std::uintptr_t LinearDamping = 0x160; // Float32
            inline static constexpr std::uintptr_t LinearStrength = 0x164; // Float32
            inline static constexpr std::uintptr_t MaxForce = 0x168; // Float32
            inline static constexpr std::uintptr_t MaxTorque = 0x16C; // Float32
        };
        
        struct AnimationController : Instance {
        };
        
        struct AnimationFromVideoCreatorService : Instance {
        };
        
        struct AnimationGraphDefinition : AnimationClip {
        };
        
        struct AnimationNodeDefinition : Instance {
        };
        
        struct AnimationPlayer : Instance {
            inline static constexpr std::uintptr_t AutoPlay = 0x110; // Bool
            inline static constexpr std::uintptr_t CurrentFrame = 0x108; // Int32
            inline static constexpr std::uintptr_t Enabled = 0x111; // Bool
            inline static constexpr std::uintptr_t IsPlaying = 0x112; // Bool
            inline static constexpr std::uintptr_t Loop = 0x113; // Bool
            inline static constexpr std::uintptr_t Speed = 0x10C; // Float32
            inline static constexpr std::uintptr_t TimePosition = 0x100; // Float64
            inline static constexpr std::uintptr_t Track = 0xE0; // String
        };
        
        struct AnimationRigData : Instance {
        };
        
        struct AnimationStreamTrack : Instance {
        };
        
        struct AnimationTrack : Instance {
            inline static constexpr std::uintptr_t Speed = 0xBC; // Float32
            inline static constexpr std::uintptr_t TimePosition = 0xC0; // Float32
            inline static constexpr std::uintptr_t WeightTarget = 0xC8; // Float32
        };
        
        struct AnimationValueNodeDefinition : Instance {
        };
        
        struct AnimationValueOutputDefinition : Instance {
        };
        
        struct Animator : Instance {
            inline static constexpr std::uintptr_t AnimationId0 = 0x2D8; // Int64
            inline static constexpr std::uintptr_t AnimationId1 = 0x2E0; // Int64
            inline static constexpr std::uintptr_t AnimationId10 = 0x2E8; // Int64
            inline static constexpr std::uintptr_t AnimationId11 = 0x2F0; // Int64
            inline static constexpr std::uintptr_t AnimationId12 = 0x2F8; // Int64
            inline static constexpr std::uintptr_t AnimationId13 = 0x300; // Int64
            inline static constexpr std::uintptr_t AnimationId14 = 0x308; // Int64
            inline static constexpr std::uintptr_t AnimationId15 = 0x310; // Int64
            inline static constexpr std::uintptr_t AnimationId2 = 0x318; // Int64
            inline static constexpr std::uintptr_t AnimationId3 = 0x320; // Int64
            inline static constexpr std::uintptr_t AnimationId4 = 0x328; // Int64
            inline static constexpr std::uintptr_t AnimationId5 = 0x330; // Int64
            inline static constexpr std::uintptr_t AnimationId6 = 0x338; // Int64
            inline static constexpr std::uintptr_t AnimationId7 = 0x340; // Int64
            inline static constexpr std::uintptr_t AnimationId8 = 0x348; // Int64
            inline static constexpr std::uintptr_t AnimationId9 = 0x350; // Int64
            inline static constexpr std::uintptr_t FacsReplicationData = 0xA0; // FacsReplicationData
            inline static constexpr std::uintptr_t PreferLodEnabled = 0x3CC; // Bool
            inline static constexpr std::uintptr_t RootMotion = 0x358; // CoordinateFrame
            inline static constexpr std::uintptr_t RootMotionWeight = 0x388; // Float32
        };
        
        struct AppAgeSignalsService : Instance {
        };
        
        struct AppLifecycleObserverService : Instance {
        };
        
        struct AppRatingPromptService : Instance {
        };
        
        struct LocalStorageService : Instance {
        };
        
        struct AppStorageService : LocalStorageService {
        };
        
        struct AppUpdateService : Instance {
        };
        
        struct GuiBase3d : GuiBase {
            inline static constexpr std::uintptr_t Color3 = 0xC0; // Color3
            inline static constexpr std::uintptr_t Transparency = 0xCC; // Float32
            inline static constexpr std::uintptr_t Visible = 0xD0; // Bool
        };
        
        struct PartAdornment : GuiBase3d {
        };
        
        struct HandlesBase : PartAdornment {
        };
        
        struct ArcHandles : HandlesBase {
            inline static constexpr std::uintptr_t MouseButton1DownConnectionCount = 0x10C; // Int32
            inline static constexpr std::uintptr_t MouseButton1UpConnectionCount = 0x110; // Int32
            inline static constexpr std::uintptr_t MouseDragConnectionCount = 0x114; // Int32
            inline static constexpr std::uintptr_t MouseEnterConnectionCount = 0x118; // Int32
            inline static constexpr std::uintptr_t MouseLeaveConnectionCount = 0x11C; // Int32
        };
        
        struct AssetCounterService : Instance {
        };
        
        struct AssetDeliveryProxy : Instance {
            inline static constexpr std::uintptr_t Interface = 0xB0; // String
            inline static constexpr std::uintptr_t StartServer = 0xD4; // Bool
        };
        
        struct AssetPatchSettings : Instance {
            inline static constexpr std::uintptr_t OutputPath = 0xB8; // String
            inline static constexpr std::uintptr_t PatchId = 0xD8; // String
        };
        
        struct AssetQualityService : Instance {
        };
        
        struct AssetService : Instance {
            inline static constexpr std::uintptr_t AllowInsertFreeAssets = 0xA8; // Bool
        };
        
        struct SoundEffect : Instance {
            inline static constexpr std::uintptr_t Enabled = 0xA4; // Bool
            inline static constexpr std::uintptr_t Priority = 0xA0; // Int32
        };
        
        struct CustomSoundEffect : SoundEffect {
        };
        
        struct AssetSoundEffect : CustomSoundEffect {
        };
        
        struct Atmosphere : Instance {
            inline static constexpr std::uintptr_t Color = 0xA0; // Color3
            inline static constexpr std::uintptr_t Decay = 0xAC; // Color3
            inline static constexpr std::uintptr_t Density = 0xB8; // Float32
            inline static constexpr std::uintptr_t Glare = 0xBC; // Float32
            inline static constexpr std::uintptr_t Haze = 0xC0; // Float32
            inline static constexpr std::uintptr_t Offset = 0xC4; // Float32
        };
        
        struct SensorBase : Instance {
        };
        
        struct AtmosphereSensor : SensorBase {
        };
        
        struct Attachment : Instance {
            inline static constexpr std::uintptr_t Axis = 0xA0; // Vector3
            inline static constexpr std::uintptr_t Orientation = 0xA0; // Vector3
            inline static constexpr std::uintptr_t Position = 0xAC; // Vector3
            inline static constexpr std::uintptr_t Rotation = 0xA0; // Vector3
            inline static constexpr std::uintptr_t SecondaryAxis = 0xB8; // Vector3
            inline static constexpr std::uintptr_t Visible = 0xC4; // Bool
            inline static constexpr std::uintptr_t WorldPosition = 0xB0; // Vector3
        };
        
        struct AudioAnalyzer : Instance {
            inline static constexpr std::uintptr_t SpectrumEnabled = 0x124; // Bool
        };
        
        struct AudioChannelMixer : Instance {
        };
        
        struct AudioChannelSplitter : Instance {
        };
        
        struct AudioChorus : Instance {
            inline static constexpr std::uintptr_t Bypass = 0x12C; // Bool
            inline static constexpr std::uintptr_t Depth = 0x120; // Float32
            inline static constexpr std::uintptr_t Mix = 0x124; // Float32
            inline static constexpr std::uintptr_t Rate = 0x128; // Float32
        };
        
        struct AudioCompressor : Instance {
            inline static constexpr std::uintptr_t Attack = 0x120; // Float32
            inline static constexpr std::uintptr_t Bypass = 0x134; // Bool
            inline static constexpr std::uintptr_t MakeupGain = 0x124; // Float32
            inline static constexpr std::uintptr_t Ratio = 0x128; // Float32
            inline static constexpr std::uintptr_t Release = 0x12C; // Float32
            inline static constexpr std::uintptr_t Threshold = 0x130; // Float32
        };
        
        struct AudioDeviceInput : Instance {
            inline static constexpr std::uintptr_t Active = 0x160; // Bool
            inline static constexpr std::uintptr_t DictationEnabled = 0x161; // Bool
            inline static constexpr std::uintptr_t EchoCancellation = 0x162; // Bool
            inline static constexpr std::uintptr_t GainControl = 0x163; // Bool
            inline static constexpr std::uintptr_t Muted = 0x164; // Bool
            inline static constexpr std::uintptr_t MutedByLocalUser = 0x165; // Bool
            inline static constexpr std::uintptr_t NoiseSuppression = 0x166; // Bool
            inline static constexpr std::uintptr_t Volume = 0x15C; // Float32
        };
        
        struct AudioDeviceOutput : Instance {
        };
        
        struct AudioDistortion : Instance {
            inline static constexpr std::uintptr_t Bypass = 0x124; // Bool
            inline static constexpr std::uintptr_t Level = 0x120; // Float32
        };
        
        struct AudioEcho : Instance {
            inline static constexpr std::uintptr_t Bypass = 0x134; // Bool
            inline static constexpr std::uintptr_t DelayTime = 0x120; // Float32
            inline static constexpr std::uintptr_t DryLevel = 0x124; // Float32
            inline static constexpr std::uintptr_t Feedback = 0x128; // Float32
            inline static constexpr std::uintptr_t RampTime = 0x12C; // Float32
            inline static constexpr std::uintptr_t WetLevel = 0x130; // Float32
        };
        
        struct AudioEmitter : Instance {
            inline static constexpr std::uintptr_t AcousticSimulationEnabled = 0x168; // Bool
            inline static constexpr std::uintptr_t AudioInteractionGroup = 0x138; // String
            inline static constexpr std::uintptr_t DistanceAttenuationBounds = 0x148; // NumberRange
        };
        
        struct AudioEqualizer : Instance {
            inline static constexpr std::uintptr_t Bypass = 0x134; // Bool
            inline static constexpr std::uintptr_t HighGain = 0x128; // Float32
            inline static constexpr std::uintptr_t LowGain = 0x12C; // Float32
            inline static constexpr std::uintptr_t MidGain = 0x130; // Float32
            inline static constexpr std::uintptr_t MidRange = 0x120; // NumberRange
        };
        
        struct AudioFader : Instance {
            inline static constexpr std::uintptr_t Bypass = 0x124; // Bool
            inline static constexpr std::uintptr_t Volume = 0x120; // Float32
        };
        
        struct AudioFilter : Instance {
            inline static constexpr std::uintptr_t Bypass = 0x130; // Bool
            inline static constexpr std::uintptr_t Frequency = 0x124; // Float32
            inline static constexpr std::uintptr_t Gain = 0x128; // Float32
            inline static constexpr std::uintptr_t Q = 0x12C; // Float32
        };
        
        struct AudioFlanger : Instance {
            inline static constexpr std::uintptr_t Bypass = 0x12C; // Bool
            inline static constexpr std::uintptr_t Depth = 0x120; // Float32
            inline static constexpr std::uintptr_t Mix = 0x124; // Float32
            inline static constexpr std::uintptr_t Rate = 0x128; // Float32
        };
        
        struct AudioFocusService : Instance {
        };
        
        struct AudioGate : Instance {
            inline static constexpr std::uintptr_t Attack = 0x128; // Float32
            inline static constexpr std::uintptr_t Bypass = 0x130; // Bool
            inline static constexpr std::uintptr_t Release = 0x12C; // Float32
            inline static constexpr std::uintptr_t Threshold = 0x120; // NumberRange
        };
        
        struct AudioLimiter : Instance {
            inline static constexpr std::uintptr_t Bypass = 0x128; // Bool
            inline static constexpr std::uintptr_t MaxLevel = 0x120; // Float32
            inline static constexpr std::uintptr_t Release = 0x124; // Float32
        };
        
        struct AudioListener : Instance {
            inline static constexpr std::uintptr_t AcousticSimulationEnabled = 0x15C; // Bool
            inline static constexpr std::uintptr_t AudioInteractionGroup = 0x138; // String
        };
        
        struct Pages : Instance {
        };
        
        struct AudioPages : Pages {
        };
        
        struct AudioPitchShifter : Instance {
            inline static constexpr std::uintptr_t Bypass = 0x128; // Bool
            inline static constexpr std::uintptr_t Pitch = 0x120; // Float32
        };
        
        struct AudioPlayer : Instance {
            inline static constexpr std::uintptr_t Asset = 0x128; // ContentId
            inline static constexpr std::uintptr_t AssetId = 0x128; // String
            inline static constexpr std::uintptr_t AudioContent = 0x128; // Content
            inline static constexpr std::uintptr_t AutoLoad = 0x158; // Bool
            inline static constexpr std::uintptr_t AutoPlay = 0x159; // Bool
            inline static constexpr std::uintptr_t IsPlaying = 0x15A; // Bool
            inline static constexpr std::uintptr_t LoopRegion = 0x140; // NumberRange
            inline static constexpr std::uintptr_t Looping = 0x15B; // Bool
            inline static constexpr std::uintptr_t PlaybackRegion = 0x148; // NumberRange
            inline static constexpr std::uintptr_t PlaybackSpeed = 0x130; // Float64
            inline static constexpr std::uintptr_t TimePosition = 0x138; // Float64
            inline static constexpr std::uintptr_t Volume = 0x154; // Float32
        };
        
        struct AudioRecorder : Instance {
            inline static constexpr std::uintptr_t IsRecording = 0x120; // Bool
        };
        
        struct AudioReverb : Instance {
            inline static constexpr std::uintptr_t Bypass = 0x150; // Bool
            inline static constexpr std::uintptr_t DecayRatio = 0x120; // Float32
            inline static constexpr std::uintptr_t DecayTime = 0x124; // Float32
            inline static constexpr std::uintptr_t Density = 0x128; // Float32
            inline static constexpr std::uintptr_t Diffusion = 0x12C; // Float32
            inline static constexpr std::uintptr_t DryLevel = 0x130; // Float32
            inline static constexpr std::uintptr_t EarlyDelayTime = 0x134; // Float32
            inline static constexpr std::uintptr_t HighCutFrequency = 0x138; // Float32
            inline static constexpr std::uintptr_t LateDelayTime = 0x13C; // Float32
            inline static constexpr std::uintptr_t LowShelfFrequency = 0x140; // Float32
            inline static constexpr std::uintptr_t LowShelfGain = 0x144; // Float32
            inline static constexpr std::uintptr_t ReferenceFrequency = 0x148; // Float32
            inline static constexpr std::uintptr_t WetLevel = 0x14C; // Float32
        };
        
        struct AudioSearchParams : Instance {
            inline static constexpr std::uintptr_t Album = 0xA0; // String
            inline static constexpr std::uintptr_t Artist = 0xC0; // String
            inline static constexpr std::uintptr_t MaxDuration = 0x144; // Int32
            inline static constexpr std::uintptr_t MaxPageSize = 0x148; // Int32
            inline static constexpr std::uintptr_t MinDuration = 0x14C; // Int32
            inline static constexpr std::uintptr_t SearchKeyword = 0xE0; // String
            inline static constexpr std::uintptr_t Tag = 0x100; // String
            inline static constexpr std::uintptr_t Title = 0x120; // String
        };
        
        struct AudioSpeechToText : Instance {
            inline static constexpr std::uintptr_t DictationEnabled = 0x180; // Bool
            inline static constexpr std::uintptr_t DisableVoiceDetection = 0x181; // Bool
            inline static constexpr std::uintptr_t EnableVolumeCheck = 0x182; // Bool
            inline static constexpr std::uintptr_t Enabled = 0x183; // Bool
            inline static constexpr std::uintptr_t Locale = 0x120; // String
            inline static constexpr std::uintptr_t Text = 0x140; // String
            inline static constexpr std::uintptr_t UsageType = 0x160; // String
            inline static constexpr std::uintptr_t VoiceDetected = 0x184; // Bool
            inline static constexpr std::uintptr_t VoiceDetectedOverride = 0x185; // Bool
        };
        
        struct AudioTextToSpeech : Instance {
            inline static constexpr std::uintptr_t AutoLocalize = 0x178; // Bool
            inline static constexpr std::uintptr_t IsPlaying = 0x179; // Bool
            inline static constexpr std::uintptr_t Looping = 0x17A; // Bool
            inline static constexpr std::uintptr_t Pitch = 0x168; // Float32
            inline static constexpr std::uintptr_t PlaybackSpeed = 0x16C; // Float32
            inline static constexpr std::uintptr_t Speed = 0x170; // Float32
            inline static constexpr std::uintptr_t Text = 0x120; // String
            inline static constexpr std::uintptr_t TimePosition = 0x160; // Float64
            inline static constexpr std::uintptr_t VoiceId = 0x140; // String
            inline static constexpr std::uintptr_t Volume = 0x174; // Float32
        };
        
        struct AudioTremolo : Instance {
            inline static constexpr std::uintptr_t Bypass = 0x138; // Bool
            inline static constexpr std::uintptr_t Depth = 0x120; // Float32
            inline static constexpr std::uintptr_t Duty = 0x124; // Float32
            inline static constexpr std::uintptr_t Frequency = 0x128; // Float32
            inline static constexpr std::uintptr_t Shape = 0x12C; // Float32
            inline static constexpr std::uintptr_t Skew = 0x130; // Float32
            inline static constexpr std::uintptr_t Square = 0x134; // Float32
        };
        
        struct AudioWindSynthesizer : Instance {
            inline static constexpr std::uintptr_t Enabled = 0x134; // Bool
            inline static constexpr std::uintptr_t Volume = 0x130; // Float32
        };
        
        struct LuaSourceContainer : Instance {
            inline static constexpr std::uintptr_t CachedRemoteSource = 0xA0; // ProtectedString
            inline static constexpr std::uintptr_t CachedRemoteSourceLoadState = 0xD8; // Int32
            inline static constexpr std::uintptr_t HasAssociatedDrafts = 0xDC; // Bool
            inline static constexpr std::uintptr_t IsDifferentFromFileSystem = 0xDD; // Bool
            inline static constexpr std::uintptr_t SandboxedSource = 0xE0; // ProtectedString
            inline static constexpr std::uintptr_t ScriptGuid = 0xB8; // String
            inline static constexpr std::uintptr_t isPlayerScript = 0xDE; // Bool
        };
        
        struct AuroraScript : LuaSourceContainer {
            inline static constexpr std::uintptr_t EnableCulling = 0x128; // Bool
            inline static constexpr std::uintptr_t EnableLOD = 0x129; // Bool
            inline static constexpr std::uintptr_t LODCriticality = 0x120; // Int32
            inline static constexpr std::uintptr_t Priority = 0x124; // Int32
        };
        
        struct AuroraScriptObject : Instance {
            inline static constexpr std::uintptr_t FrameId = 0xB8; // Int32
            inline static constexpr std::uintptr_t LODLevel = 0xBC; // Int32
            inline static constexpr std::uintptr_t MaxFrequency = 0xC0; // Int32
            inline static constexpr std::uintptr_t PriorFrameInvoked = 0xC4; // Int32
        };
        
        struct AuroraScriptService : Instance {
        };
        
        struct AuroraService : Instance {
            inline static constexpr std::uintptr_t BufferFullInputCount = 0xC8; // Int32
            inline static constexpr std::uintptr_t HashRoundingPoint = 0xB8; // Float64
            inline static constexpr std::uintptr_t IgnoreRotation = 0xDC; // Bool
            inline static constexpr std::uintptr_t InputDropRate = 0xCC; // Float32
            inline static constexpr std::uintptr_t LockStepIdOffset = 0xDD; // Bool
            inline static constexpr std::uintptr_t OutOfOrderInputCount = 0xD0; // Int32
            inline static constexpr std::uintptr_t RCCHeartbeatFPS = 0xC0; // Float64
            inline static constexpr std::uintptr_t RollbackOffset = 0xD4; // Int32
            inline static constexpr std::uintptr_t TooOldInputCount = 0xD8; // Int32
        };
        
        struct AvatarAbilityRules : Instance {
            inline static constexpr std::uintptr_t EnableClimbing = 0x9C; // Bool
            inline static constexpr std::uintptr_t EnableCrouching = 0x9D; // Bool
            inline static constexpr std::uintptr_t EnableFallingDown = 0x9E; // Bool
            inline static constexpr std::uintptr_t EnableGettingUp = 0x9F; // Bool
            inline static constexpr std::uintptr_t EnableHolding = 0xA0; // Bool
            inline static constexpr std::uintptr_t EnableJumping = 0xA1; // Bool
            inline static constexpr std::uintptr_t EnableReaching = 0xA2; // Bool
            inline static constexpr std::uintptr_t EnableRunning = 0xA3; // Bool
            inline static constexpr std::uintptr_t EnableSitting = 0xA4; // Bool
            inline static constexpr std::uintptr_t EnableSprinting = 0xA5; // Bool
            inline static constexpr std::uintptr_t EnableSwimming = 0xA6; // Bool
            inline static constexpr std::uintptr_t EnableTurning = 0xA7; // Bool
        };
        
        struct AvatarAccessoryRules : Instance {
            inline static constexpr std::uintptr_t BackAccessoryOverride = 0x98; // Int64
            inline static constexpr std::uintptr_t CustomBackAccessoryEnabled = 0x130; // Bool
            inline static constexpr std::uintptr_t CustomBackAccessoryId = 0xA0; // Int64
            inline static constexpr std::uintptr_t CustomFaceAccessoryEnabled = 0x131; // Bool
            inline static constexpr std::uintptr_t CustomFaceAccessoryId = 0xA8; // Int64
            inline static constexpr std::uintptr_t CustomFrontAccessoryEnabled = 0x132; // Bool
            inline static constexpr std::uintptr_t CustomFrontAccessoryId = 0xB0; // Int64
            inline static constexpr std::uintptr_t CustomHairAccessoryEnabled = 0x133; // Bool
            inline static constexpr std::uintptr_t CustomHairAccessoryId = 0xB8; // Int64
            inline static constexpr std::uintptr_t CustomHeadAccessoryEnabled = 0x134; // Bool
            inline static constexpr std::uintptr_t CustomHeadAccessoryId = 0xC0; // Int64
            inline static constexpr std::uintptr_t CustomNeckAccessoryEnabled = 0x135; // Bool
            inline static constexpr std::uintptr_t CustomNeckAccessoryId = 0xC8; // Int64
            inline static constexpr std::uintptr_t CustomShoulderAccessoryEnabled = 0x136; // Bool
            inline static constexpr std::uintptr_t CustomShoulderAccessoryId = 0xD0; // Int64
            inline static constexpr std::uintptr_t CustomWaistAccessoryEnabled = 0x137; // Bool
            inline static constexpr std::uintptr_t CustomWaistAccessoryId = 0xD8; // Int64
            inline static constexpr std::uintptr_t EnableEmissives = 0x138; // Bool
            inline static constexpr std::uintptr_t EnableSound = 0x139; // Bool
            inline static constexpr std::uintptr_t EnableVFX = 0x13A; // Bool
            inline static constexpr std::uintptr_t FaceAccessoryOverride = 0xE0; // Int64
            inline static constexpr std::uintptr_t FrontAccessoryOverride = 0xE8; // Int64
            inline static constexpr std::uintptr_t HairAccessoryOverride = 0xF0; // Int64
            inline static constexpr std::uintptr_t HeadAccessoryOverride = 0xF8; // Int64
            inline static constexpr std::uintptr_t LimitBounds = 0x118; // Vector3
            inline static constexpr std::uintptr_t NeckAccessoryOverride = 0x100; // Int64
            inline static constexpr std::uintptr_t ShoulderAccessoryOverride = 0x108; // Int64
            inline static constexpr std::uintptr_t WaistAccessoryOverride = 0x110; // Int64
        };
        
        struct AvatarAnimationRules : Instance {
            inline static constexpr std::uintptr_t ClimbAnimationOverride = 0x98; // Int64
            inline static constexpr std::uintptr_t CustomClimbAnimationEnabled = 0x140; // Bool
            inline static constexpr std::uintptr_t CustomClimbAnimationId = 0xA0; // Int64
            inline static constexpr std::uintptr_t CustomFallAnimationEnabled = 0x141; // Bool
            inline static constexpr std::uintptr_t CustomFallAnimationId = 0xA8; // Int64
            inline static constexpr std::uintptr_t CustomIdleAlt1AnimationEnabled = 0x142; // Bool
            inline static constexpr std::uintptr_t CustomIdleAlt1AnimationId = 0xB0; // Int64
            inline static constexpr std::uintptr_t CustomIdleAlt2AnimationEnabled = 0x143; // Bool
            inline static constexpr std::uintptr_t CustomIdleAlt2AnimationId = 0xB8; // Int64
            inline static constexpr std::uintptr_t CustomIdleAnimationEnabled = 0x144; // Bool
            inline static constexpr std::uintptr_t CustomIdleAnimationId = 0xC0; // Int64
            inline static constexpr std::uintptr_t CustomJumpAnimationEnabled = 0x145; // Bool
            inline static constexpr std::uintptr_t CustomJumpAnimationId = 0xC8; // Int64
            inline static constexpr std::uintptr_t CustomRunAnimationEnabled = 0x146; // Bool
            inline static constexpr std::uintptr_t CustomRunAnimationId = 0xD0; // Int64
            inline static constexpr std::uintptr_t CustomSwimAnimationEnabled = 0x147; // Bool
            inline static constexpr std::uintptr_t CustomSwimAnimationId = 0xD8; // Int64
            inline static constexpr std::uintptr_t CustomSwimIdleAnimationEnabled = 0x148; // Bool
            inline static constexpr std::uintptr_t CustomSwimIdleAnimationId = 0xE0; // Int64
            inline static constexpr std::uintptr_t CustomWalkAnimationEnabled = 0x149; // Bool
            inline static constexpr std::uintptr_t CustomWalkAnimationId = 0xE8; // Int64
            inline static constexpr std::uintptr_t FallAnimationOverride = 0xF0; // Int64
            inline static constexpr std::uintptr_t IdleAltAnimationOverride = 0xF8; // Int64
            inline static constexpr std::uintptr_t IdleAnimationOverride = 0x100; // Int64
            inline static constexpr std::uintptr_t JumpAnimationOverride = 0x108; // Int64
            inline static constexpr std::uintptr_t MoodAnimationOverride = 0x110; // Int64
            inline static constexpr std::uintptr_t RunAnimationOverride = 0x118; // Int64
            inline static constexpr std::uintptr_t SwimAnimationOverride = 0x120; // Int64
            inline static constexpr std::uintptr_t SwimIdleAnimationOverride = 0x128; // Int64
            inline static constexpr std::uintptr_t WalkAnimationOverride = 0x130; // Int64
        };
        
        struct AvatarBodyRules : Instance {
            inline static constexpr std::uintptr_t CustomBodyBundleId = 0x98; // Int64
            inline static constexpr std::uintptr_t CustomBodyTypeScale = 0x120; // NumberRange
            inline static constexpr std::uintptr_t CustomBuildBodyType = 0x120; // NumberRange
            inline static constexpr std::uintptr_t CustomBuildHead = 0x128; // NumberRange
            inline static constexpr std::uintptr_t CustomBuildHeight = 0x130; // NumberRange
            inline static constexpr std::uintptr_t CustomBuildProportions = 0x138; // NumberRange
            inline static constexpr std::uintptr_t CustomBuildWidth = 0x140; // NumberRange
            inline static constexpr std::uintptr_t CustomEyebrowEnabled = 0x164; // Bool
            inline static constexpr std::uintptr_t CustomEyebrowId = 0xA0; // Int64
            inline static constexpr std::uintptr_t CustomEyelashEnabled = 0x165; // Bool
            inline static constexpr std::uintptr_t CustomEyelashId = 0xA8; // Int64
            inline static constexpr std::uintptr_t CustomFaceEnabled = 0x166; // Bool
            inline static constexpr std::uintptr_t CustomFaceId = 0xB0; // Int64
            inline static constexpr std::uintptr_t CustomHeadEnabled = 0x167; // Bool
            inline static constexpr std::uintptr_t CustomHeadId = 0xB8; // Int64
            inline static constexpr std::uintptr_t CustomHeadScale = 0x128; // NumberRange
            inline static constexpr std::uintptr_t CustomHeight = 0x148; // NumberRange
            inline static constexpr std::uintptr_t CustomHeightScale = 0x130; // NumberRange
            inline static constexpr std::uintptr_t CustomLeftArmEnabled = 0x168; // Bool
            inline static constexpr std::uintptr_t CustomLeftArmId = 0xC0; // Int64
            inline static constexpr std::uintptr_t CustomLeftLegEnabled = 0x169; // Bool
            inline static constexpr std::uintptr_t CustomLeftLegId = 0xC8; // Int64
            inline static constexpr std::uintptr_t CustomMoodEnabled = 0x16A; // Bool
            inline static constexpr std::uintptr_t CustomMoodId = 0xD0; // Int64
            inline static constexpr std::uintptr_t CustomProportionsScale = 0x138; // NumberRange
            inline static constexpr std::uintptr_t CustomRightArmEnabled = 0x16B; // Bool
            inline static constexpr std::uintptr_t CustomRightArmId = 0xD8; // Int64
            inline static constexpr std::uintptr_t CustomRightLegEnabled = 0x16C; // Bool
            inline static constexpr std::uintptr_t CustomRightLegId = 0xE0; // Int64
            inline static constexpr std::uintptr_t CustomTorsoEnabled = 0x16D; // Bool
            inline static constexpr std::uintptr_t CustomTorsoId = 0xE8; // Int64
            inline static constexpr std::uintptr_t CustomWidthScale = 0x140; // NumberRange
            inline static constexpr std::uintptr_t CustomWorldHeight = 0x148; // NumberRange
            inline static constexpr std::uintptr_t HeadOverride = 0xF0; // Int64
            inline static constexpr std::uintptr_t KeepPlayerHead = 0x16E; // Bool
            inline static constexpr std::uintptr_t LeftArmOverride = 0xF8; // Int64
            inline static constexpr std::uintptr_t LeftLegOverride = 0x100; // Int64
            inline static constexpr std::uintptr_t RightArmOverride = 0x108; // Int64
            inline static constexpr std::uintptr_t RightLegOverride = 0x110; // Int64
            inline static constexpr std::uintptr_t TorsoOverride = 0x118; // Int64
        };
        
        struct AvatarChatService : Instance {
        };
        
        struct AvatarClothingRules : Instance {
            inline static constexpr std::uintptr_t ClassicPantsAccessoryOverride = 0x98; // Int64
            inline static constexpr std::uintptr_t ClassicShirtsAccessoryOverride = 0xA0; // Int64
            inline static constexpr std::uintptr_t ClassicTShirtsAccessoryOverride = 0xA8; // Int64
            inline static constexpr std::uintptr_t CustomClassicPantsAccessoryEnabled = 0x16C; // Bool
            inline static constexpr std::uintptr_t CustomClassicPantsAccessoryId = 0xB0; // Int64
            inline static constexpr std::uintptr_t CustomClassicShirtsAccessoryEnabled = 0x16D; // Bool
            inline static constexpr std::uintptr_t CustomClassicShirtsAccessoryId = 0xB8; // Int64
            inline static constexpr std::uintptr_t CustomClassicTShirtsAccessoryEnabled = 0x16E; // Bool
            inline static constexpr std::uintptr_t CustomClassicTShirtsAccessoryId = 0xC0; // Int64
            inline static constexpr std::uintptr_t CustomDressSkirtAccessoryEnabled = 0x16F; // Bool
            inline static constexpr std::uintptr_t CustomDressSkirtAccessoryId = 0xC8; // Int64
            inline static constexpr std::uintptr_t CustomJacketAccessoryEnabled = 0x170; // Bool
            inline static constexpr std::uintptr_t CustomJacketAccessoryId = 0xD0; // Int64
            inline static constexpr std::uintptr_t CustomLeftShoesAccessoryEnabled = 0x171; // Bool
            inline static constexpr std::uintptr_t CustomLeftShoesAccessoryId = 0xD8; // Int64
            inline static constexpr std::uintptr_t CustomPantsAccessoryEnabled = 0x172; // Bool
            inline static constexpr std::uintptr_t CustomPantsAccessoryId = 0xE0; // Int64
            inline static constexpr std::uintptr_t CustomRightShoesAccessoryEnabled = 0x173; // Bool
            inline static constexpr std::uintptr_t CustomRightShoesAccessoryId = 0xE8; // Int64
            inline static constexpr std::uintptr_t CustomShirtAccessoryEnabled = 0x174; // Bool
            inline static constexpr std::uintptr_t CustomShirtAccessoryId = 0xF0; // Int64
            inline static constexpr std::uintptr_t CustomShortsAccessoryEnabled = 0x175; // Bool
            inline static constexpr std::uintptr_t CustomShortsAccessoryId = 0xF8; // Int64
            inline static constexpr std::uintptr_t CustomSweaterAccessoryEnabled = 0x176; // Bool
            inline static constexpr std::uintptr_t CustomSweaterAccessoryId = 0x100; // Int64
            inline static constexpr std::uintptr_t CustomTShirtAccessoryEnabled = 0x177; // Bool
            inline static constexpr std::uintptr_t CustomTShirtAccessoryId = 0x108; // Int64
            inline static constexpr std::uintptr_t DressSkirtAccessoryOverride = 0x110; // Int64
            inline static constexpr std::uintptr_t JacketAccessoryOverride = 0x118; // Int64
            inline static constexpr std::uintptr_t LeftShoesAccessoryOverride = 0x120; // Int64
            inline static constexpr std::uintptr_t LimitBounds = 0x158; // Vector3
            inline static constexpr std::uintptr_t PantsAccessoryOverride = 0x128; // Int64
            inline static constexpr std::uintptr_t RightShoesAccessoryOverride = 0x130; // Int64
            inline static constexpr std::uintptr_t ShirtAccessoryOverride = 0x138; // Int64
            inline static constexpr std::uintptr_t ShortsAccessoryOverride = 0x140; // Int64
            inline static constexpr std::uintptr_t SweaterAccessoryOverride = 0x148; // Int64
            inline static constexpr std::uintptr_t TShirtAccessoryOverride = 0x150; // Int64
        };
        
        struct AvatarCollisionRules : Instance {
            inline static constexpr std::uintptr_t SingleColliderSize = 0x98; // Vector3
        };
        
        struct AvatarCreationService : Instance {
        };
        
        struct AvatarEditorService : Instance {
        };
        
        struct AvatarRules : Instance {
        };
        
        struct AvatarSettings : Instance {
            inline static constexpr std::uintptr_t Loaded = 0xCC; // Bool
            inline static constexpr std::uintptr_t RulesSchemaVersion = 0xC8; // Int32
        };
        
        struct BackendReplicatedStorage : Instance {
        };
        
        struct BackendServerScriptService : Instance {
        };
        
        struct BackendServerStorage : Instance {
        };
        
        struct Backpack : Instance {
        };
        
        struct BackpackItem : Model {
            inline static constexpr std::uintptr_t TextureContent = 0x338; // Content
        };
        
        struct BadgeService : Instance {
        };
        
        struct BallSocketConstraint : Constraint {
            inline static constexpr std::uintptr_t EnableSkinning = 0x170; // Bool
            inline static constexpr std::uintptr_t LimitsEnabled = 0x171; // Bool
            inline static constexpr std::uintptr_t MaxFrictionTorque = 0x158; // Float32
            inline static constexpr std::uintptr_t MaxFrictionTorqueXml = 0x158; // Float32
            inline static constexpr std::uintptr_t Radius = 0x15C; // Float32
            inline static constexpr std::uintptr_t Restitution = 0x160; // Float32
            inline static constexpr std::uintptr_t TwistLimitsEnabled = 0x172; // Bool
            inline static constexpr std::uintptr_t TwistLowerAngle = 0x164; // Float32
            inline static constexpr std::uintptr_t TwistUpperAngle = 0x168; // Float32
            inline static constexpr std::uintptr_t UpperAngle = 0x16C; // Float32
        };
        
        struct BanHistoryPages : Pages {
        };
        
        struct BaseCoreGuiConfiguration : Instance {
            inline static constexpr std::uintptr_t Enabled = 0x98; // Bool
        };
        
        struct BasePart : PVInstance {
            inline static constexpr std::uintptr_t AudioCanCollide = 0x11F; // Bool
            inline static constexpr std::uintptr_t BackParamA = 0xB0; // Float32
            inline static constexpr std::uintptr_t BackParamB = 0xB4; // Float32
            inline static constexpr std::uintptr_t BottomParamA = 0xC0; // Float32
            inline static constexpr std::uintptr_t BottomParamB = 0xC4; // Float32
            inline static constexpr std::uintptr_t BrickColor = 0x11C; // BrickColor
            inline static constexpr std::uintptr_t CastShadow = 0x120; // Bool
            inline static constexpr std::uintptr_t Color3uint8 = 0x11C; // Color3uint8
            inline static constexpr std::uintptr_t FrontParamA = 0xD0; // Float32
            inline static constexpr std::uintptr_t FrontParamB = 0xD4; // Float32
            inline static constexpr std::uintptr_t LeftParamA = 0xE0; // Float32
            inline static constexpr std::uintptr_t LeftParamB = 0xE4; // Float32
            inline static constexpr std::uintptr_t LocalTransparencyModifier = 0xF0; // Float32
            inline static constexpr std::uintptr_t Locked = 0x121; // Bool
            inline static constexpr std::uintptr_t Massless = 0x122; // Bool
            inline static constexpr std::uintptr_t Reflectance = 0xF4; // Float32
            inline static constexpr std::uintptr_t RightParamA = 0xF8; // Float32
            inline static constexpr std::uintptr_t RightParamB = 0xFC; // Float32
            inline static constexpr std::uintptr_t TopParamA = 0x108; // Float32
            inline static constexpr std::uintptr_t TopParamB = 0x10C; // Float32
            inline static constexpr std::uintptr_t Transparency = 0x118; // Float32
            inline static constexpr std::uintptr_t brickColor = 0x11C; // BrickColor
            inline static constexpr std::uintptr_t Primitive = 0x178; // Pointer
        };
        
        struct BasePlayerGui : Instance {
        };
        
        struct BaseRemoteEvent : Instance {
        };
        
        struct BaseScript : LuaSourceContainer {
            inline static constexpr std::uintptr_t Disabled = 0x11C; // Bool
            inline static constexpr std::uintptr_t LinkedSource = 0xF0; // ContentId
        };
        
        struct BaseWrap : Instance {
            inline static constexpr std::uintptr_t CageMeshContent = 0xA0; // Content
            inline static constexpr std::uintptr_t CageMeshId = 0xA0; // ContentId
            inline static constexpr std::uintptr_t CageOrigin = 0x148; // CoordinateFrame
            inline static constexpr std::uintptr_t HSRContent = 0xD0; // Content
            inline static constexpr std::uintptr_t HSRData = 0x138; // SharedString
            inline static constexpr std::uintptr_t HSRMeshIdData = 0x140; // SharedString
            inline static constexpr std::uintptr_t ImportInProcess = 0x1A8; // Bool
            inline static constexpr std::uintptr_t ImportOrigin = 0x178; // CoordinateFrame
            inline static constexpr std::uintptr_t TemporaryCageMeshContent = 0x100; // Content
        };
        
        struct Beam : Instance {
            inline static constexpr std::uintptr_t Brightness = 0x168; // Float32
            inline static constexpr std::uintptr_t CurveSize0 = 0x16C; // Float32
            inline static constexpr std::uintptr_t CurveSize1 = 0x170; // Float32
            inline static constexpr std::uintptr_t Enabled = 0x19C; // Bool
            inline static constexpr std::uintptr_t FaceCamera = 0x19D; // Bool
            inline static constexpr std::uintptr_t LightEmission = 0x174; // Float32
            inline static constexpr std::uintptr_t LightInfluence = 0x178; // Float32
            inline static constexpr std::uintptr_t LocalTransparencyModifier = 0x17C; // Float32
            inline static constexpr std::uintptr_t Segments = 0x180; // Int32
            inline static constexpr std::uintptr_t TextureContent = 0x118; // Content
            inline static constexpr std::uintptr_t TextureLength = 0x184; // Float32
            inline static constexpr std::uintptr_t TextureSpeed = 0x18C; // Float32
            inline static constexpr std::uintptr_t Transparency = 0xA0; // NumberSequence
            inline static constexpr std::uintptr_t Width0 = 0x190; // Float32
            inline static constexpr std::uintptr_t Width1 = 0x194; // Float32
            inline static constexpr std::uintptr_t ZOffset = 0x198; // Float32
        };
        
        struct DataModelMesh : Instance {
            inline static constexpr std::uintptr_t Offset = 0xA0; // Vector3
            inline static constexpr std::uintptr_t Scale = 0xAC; // Vector3
            inline static constexpr std::uintptr_t VertexColor = 0xB8; // Vector3
        };
        
        struct BevelMesh : DataModelMesh {
            inline static constexpr std::uintptr_t Bevel = 0xC8; // Float32
            inline static constexpr std::uintptr_t Bulge = 0xD0; // Float32
        };
        
        struct BillboardGui : LayerCollector {
            inline static constexpr std::uintptr_t Active = 0x7B4; // Bool
            inline static constexpr std::uintptr_t AlwaysOnTop = 0x7B5; // Bool
            inline static constexpr std::uintptr_t Brightness = 0x798; // Float32
            inline static constexpr std::uintptr_t ClipsDescendants = 0x7B6; // Bool
            inline static constexpr std::uintptr_t CurrentDistance = 0x79C; // Float32
            inline static constexpr std::uintptr_t DistanceLowerLimit = 0x7A0; // Float32
            inline static constexpr std::uintptr_t DistanceStep = 0x7A4; // Float32
            inline static constexpr std::uintptr_t DistanceUpperLimit = 0x7A8; // Float32
            inline static constexpr std::uintptr_t ExtentsOffset = 0x760; // Vector3
            inline static constexpr std::uintptr_t ExtentsOffsetWorldSpace = 0x76C; // Vector3
            inline static constexpr std::uintptr_t LightInfluence = 0x7AC; // Float32
            inline static constexpr std::uintptr_t MaxDistance = 0x7B0; // Float32
            inline static constexpr std::uintptr_t Size = 0x750; // UDim2
            inline static constexpr std::uintptr_t SizeOffset = 0x790; // Vector2
            inline static constexpr std::uintptr_t StudsOffset = 0x778; // Vector3
            inline static constexpr std::uintptr_t StudsOffsetWorldSpace = 0x784; // Vector3
        };
        
        struct ValueBase : Instance {
        };
        
        struct BinaryStringValue : ValueBase {
            inline static constexpr std::uintptr_t Value = 0xA0; // BinaryString
        };
        
        struct BindableEvent : Instance {
        };
        
        struct BindableFunction : Instance {
        };
        
        struct BlockMesh : BevelMesh {
        };
        
        struct PostEffect : Instance {
            inline static constexpr std::uintptr_t Enabled = 0x98; // Bool
        };
        
        struct BloomEffect : PostEffect {
            inline static constexpr std::uintptr_t Intensity = 0xA0; // Float32
            inline static constexpr std::uintptr_t Size = 0xA4; // Float32
            inline static constexpr std::uintptr_t Threshold = 0xA8; // Float32
        };
        
        struct BlurEffect : PostEffect {
            inline static constexpr std::uintptr_t Size = 0xA0; // Float32
        };
        
        struct BodyMover : Instance {
        };
        
        struct BodyAngularVelocity : BodyMover {
            inline static constexpr std::uintptr_t AngularVelocity = 0x270; // Vector3
            inline static constexpr std::uintptr_t MaxTorque = 0x27C; // Vector3
            inline static constexpr std::uintptr_t P = 0x288; // Float32
            inline static constexpr std::uintptr_t angularvelocity = 0x270; // Vector3
            inline static constexpr std::uintptr_t maxTorque = 0x27C; // Vector3
        };
        
        struct CharacterAppearance : Instance {
        };
        
        struct BodyColors : CharacterAppearance {
            inline static constexpr std::uintptr_t HeadColor = 0xA8; // BrickColor
            inline static constexpr std::uintptr_t HeadColor3 = 0xAC; // Color3
            inline static constexpr std::uintptr_t LeftArmColor = 0xB8; // BrickColor
            inline static constexpr std::uintptr_t LeftArmColor3 = 0xBC; // Color3
            inline static constexpr std::uintptr_t LeftLegColor = 0xC8; // BrickColor
            inline static constexpr std::uintptr_t LeftLegColor3 = 0xCC; // Color3
            inline static constexpr std::uintptr_t RightArmColor = 0xD8; // BrickColor
            inline static constexpr std::uintptr_t RightArmColor3 = 0xDC; // Color3
            inline static constexpr std::uintptr_t RightLegColor = 0xE8; // BrickColor
            inline static constexpr std::uintptr_t RightLegColor3 = 0xEC; // Color3
            inline static constexpr std::uintptr_t TorsoColor = 0xF8; // BrickColor
            inline static constexpr std::uintptr_t TorsoColor3 = 0xFC; // Color3
        };
        
        struct BodyForce : BodyMover {
            inline static constexpr std::uintptr_t Force = 0x268; // Vector3
            inline static constexpr std::uintptr_t force = 0x268; // Vector3
        };
        
        struct BodyGyro : BodyMover {
            inline static constexpr std::uintptr_t CFrame = 0x270; // CoordinateFrame
            inline static constexpr std::uintptr_t D = 0x2AC; // Float32
            inline static constexpr std::uintptr_t MaxTorque = 0x2A0; // Vector3
            inline static constexpr std::uintptr_t P = 0x2B0; // Float32
            inline static constexpr std::uintptr_t cframe = 0x270; // CoordinateFrame
            inline static constexpr std::uintptr_t maxTorque = 0x2A0; // Vector3
        };
        
        struct BodyPartDescription : Instance {
            inline static constexpr std::uintptr_t AssetId = 0xC8; // Int64
            inline static constexpr std::uintptr_t Color = 0xD0; // Color3
        };
        
        struct BodyPosition : BodyMover {
            inline static constexpr std::uintptr_t D = 0x288; // Float32
            inline static constexpr std::uintptr_t MaxForce = 0x270; // Vector3
            inline static constexpr std::uintptr_t P = 0x28C; // Float32
            inline static constexpr std::uintptr_t Position = 0x27C; // Vector3
            inline static constexpr std::uintptr_t maxForce = 0x270; // Vector3
            inline static constexpr std::uintptr_t position = 0x27C; // Vector3
        };
        
        struct BodyThrust : BodyMover {
            inline static constexpr std::uintptr_t Force = 0x268; // Vector3
            inline static constexpr std::uintptr_t Location = 0x274; // Vector3
            inline static constexpr std::uintptr_t force = 0x268; // Vector3
            inline static constexpr std::uintptr_t location = 0x274; // Vector3
        };
        
        struct BodyVelocity : BodyMover {
            inline static constexpr std::uintptr_t MaxForce = 0x270; // Vector3
            inline static constexpr std::uintptr_t P = 0x288; // Float32
            inline static constexpr std::uintptr_t Velocity = 0x27C; // Vector3
            inline static constexpr std::uintptr_t maxForce = 0x270; // Vector3
            inline static constexpr std::uintptr_t velocity = 0x27C; // Vector3
        };
        
        struct Bone : Attachment {
        };
        
        struct BoolValue : ValueBase {
            inline static constexpr std::uintptr_t Value = 0xA0; // Bool
        };
        
        struct PVAdornment : GuiBase3d {
        };
        
        struct HandleAdornment : PVAdornment {
            inline static constexpr std::uintptr_t AlwaysOnTop = 0x144; // Bool
            inline static constexpr std::uintptr_t CFrame = 0x100; // CoordinateFrame
            inline static constexpr std::uintptr_t SizeRelativeOffset = 0x130; // Vector3
        };
        
        struct BoxHandleAdornment : HandleAdornment {
            inline static constexpr std::uintptr_t DoubleSided = 0x1A0; // Bool
            inline static constexpr std::uintptr_t Size = 0x190; // Vector3
        };
        
        struct BrickColorValue : ValueBase {
            inline static constexpr std::uintptr_t Value = 0xA0; // BrickColor
        };
        
        struct BrowserService : Instance {
        };
        
        struct TextChatConfigurations : Instance {
        };
        
        struct BubbleChatConfiguration : TextChatConfigurations {
            inline static constexpr std::uintptr_t AdorneeName = 0xA0; // String
            inline static constexpr std::uintptr_t BackgroundColor3 = 0xD8; // Color3
            inline static constexpr std::uintptr_t BackgroundTransparency = 0xC0; // Float64
            inline static constexpr std::uintptr_t BubbleDuration = 0xFC; // Float32
            inline static constexpr std::uintptr_t BubblesSpacing = 0x100; // Float32
            inline static constexpr std::uintptr_t Enabled = 0x114; // Bool
            inline static constexpr std::uintptr_t FontFace = 0xC8; // Font
            inline static constexpr std::uintptr_t LocalPlayerStudsOffset = 0xE4; // Vector3
            inline static constexpr std::uintptr_t MaxBubbles = 0x104; // Float32
            inline static constexpr std::uintptr_t MaxDistance = 0x108; // Float32
            inline static constexpr std::uintptr_t MinimizeDistance = 0x10C; // Float32
            inline static constexpr std::uintptr_t TailVisible = 0x115; // Bool
            inline static constexpr std::uintptr_t TextColor3 = 0xF0; // Color3
            inline static constexpr std::uintptr_t TextSize = 0xD0; // Int64
            inline static constexpr std::uintptr_t VerticalStudsOffset = 0x110; // Float32
        };
        
        struct TextChatMessageProperties : Instance {
        };
        
        struct BubbleChatMessageProperties : TextChatMessageProperties {
            inline static constexpr std::uintptr_t BackgroundColor3 = 0x110; // Color3
            inline static constexpr std::uintptr_t BackgroundTransparency = 0xF8; // Float64
            inline static constexpr std::uintptr_t FontFace = 0x100; // Font
            inline static constexpr std::uintptr_t TailVisible = 0x128; // Bool
            inline static constexpr std::uintptr_t TextColor3 = 0x11C; // Color3
            inline static constexpr std::uintptr_t TextSize = 0x108; // Int64
        };
        
        struct BugReporterService : Instance {
        };
        
        struct BuoyancySensor : SensorBase {
            inline static constexpr std::uintptr_t FullySubmerged = 0x228; // Bool
            inline static constexpr std::uintptr_t TouchingSurface = 0x229; // Bool
        };
        
        struct CFrameValue : ValueBase {
            inline static constexpr std::uintptr_t Value = 0xA0; // CoordinateFrame
        };
        
        struct FlyweightService : Instance {
        };
        
        struct CSGDictionaryService : FlyweightService {
        };
        
        struct CacheableContentProvider : Instance {
        };
        
        struct CallingService : Instance {
        };
        
        struct Camera : PVInstance {
            inline static constexpr std::uintptr_t CFrame = 0xC0; // CoordinateFrame
            inline static constexpr std::uintptr_t CoordinateFrame = 0xC0; // CoordinateFrame
            inline static constexpr std::uintptr_t DiagonalFieldOfView = 0x124; // Float32
            inline static constexpr std::uintptr_t FieldOfView = 0x128; // Float32
            inline static constexpr std::uintptr_t Focus = 0xF0; // CoordinateFrame
            inline static constexpr std::uintptr_t HeadLocked = 0x14C; // Bool
            inline static constexpr std::uintptr_t HeadScale = 0x130; // Float32
            inline static constexpr std::uintptr_t MaxAxisFieldOfView = 0x134; // Float32
            inline static constexpr std::uintptr_t NearPlaneZ = 0x138; // Float32
            inline static constexpr std::uintptr_t OrthographicSize = 0x140; // Float32
            inline static constexpr std::uintptr_t VRTiltAndRollEnabled = 0x14D; // Bool
            inline static constexpr std::uintptr_t ViewStretch = 0x148; // Float32
            inline static constexpr std::uintptr_t ViewportSize = 0x288; // Vector2
            inline static constexpr std::uintptr_t focus = 0xF0; // CoordinateFrame
            inline static constexpr std::uintptr_t ViewportDimensions = 0x284; // Int16[2]
            inline static constexpr std::uintptr_t ViewportWidth = 0x284; // Int16
            inline static constexpr std::uintptr_t ViewportHeight = 0x286; // Int16
        };
        
        struct GuiObject : GuiBase2d {
            inline static constexpr std::uintptr_t DragBeginConnectionCount = 0x558; // Int32
            inline static constexpr std::uintptr_t DragStoppedConnectionCount = 0x55C; // Int32
            inline static constexpr std::uintptr_t Draggable = 0x592; // Bool
            inline static constexpr std::uintptr_t GuiState = 0x560; // GuiState
            inline static constexpr std::uintptr_t Interactable = 0x593; // Bool
            inline static constexpr std::uintptr_t MouseEnterConnectionCount = 0x568; // Int32
            inline static constexpr std::uintptr_t MouseLeaveConnectionCount = 0x56C; // Int32
            inline static constexpr std::uintptr_t MouseMovedConnectionCount = 0x570; // Int32
            inline static constexpr std::uintptr_t MouseWheelBackwardConnectionCount = 0x574; // Int32
            inline static constexpr std::uintptr_t MouseWheelForwardConnectionCount = 0x578; // Int32
            inline static constexpr std::uintptr_t Position = 0x4F8; // UDim2
            inline static constexpr std::uintptr_t Rotation = 0x57C; // Float32
            inline static constexpr std::uintptr_t SelectionRect2D = 0x508; // Rect2D
            inline static constexpr std::uintptr_t Size = 0x518; // UDim2
        };
        
        struct CanvasGroup : GuiObject {
            inline static constexpr std::uintptr_t ResolutionScale = 0x9D8; // Float32
        };
        
        struct Capture {
            inline static constexpr std::uintptr_t CaptureType = 0x78; // CaptureType
        };
        
        struct CaptureService : Instance {
        };
        
        struct CapturesPages : Pages {
        };
        
        struct CapturesViewConfiguration : BaseCoreGuiConfiguration {
            inline static constexpr std::uintptr_t Open = 0xA0; // Bool
        };
        
        struct CatalogPages : Pages {
        };
        
        struct ChangeHistoryService : Instance {
        };
        
        struct ChannelSelectorSoundEffect : CustomSoundEffect {
            inline static constexpr std::uintptr_t Channel = 0xE8; // Int32
        };
        
        struct ChannelTabsConfiguration : TextChatConfigurations {
            inline static constexpr std::uintptr_t AbsolutePosition = 0xFC; // Vector2
            inline static constexpr std::uintptr_t AbsoluteSize = 0x104; // Vector2
            inline static constexpr std::uintptr_t BackgroundColor3 = 0xC0; // Color3
            inline static constexpr std::uintptr_t BackgroundTransparency = 0xA0; // Float64
            inline static constexpr std::uintptr_t Enabled = 0x10C; // Bool
            inline static constexpr std::uintptr_t FontFace = 0xA8; // Font
            inline static constexpr std::uintptr_t HoverBackgroundColor3 = 0xCC; // Color3
            inline static constexpr std::uintptr_t SelectedTabTextColor3 = 0xD8; // Color3
            inline static constexpr std::uintptr_t TextColor3 = 0xE4; // Color3
            inline static constexpr std::uintptr_t TextSize = 0xB0; // Int64
            inline static constexpr std::uintptr_t TextStrokeColor3 = 0xF0; // Color3
            inline static constexpr std::uintptr_t TextStrokeTransparency = 0xB8; // Float64
        };
        
        struct CharacterMesh : CharacterAppearance {
            inline static constexpr std::uintptr_t MeshContent = 0xD0; // Content
            inline static constexpr std::uintptr_t OverlayTextureContent = 0x100; // Content
        };
        
        struct Chat : Instance {
            inline static constexpr std::uintptr_t BubbleChatEnabled = 0x118; // Bool
            inline static constexpr std::uintptr_t IsAutoMigrated = 0x119; // Bool
            inline static constexpr std::uintptr_t LoadDefaultChat = 0x11A; // Bool
        };
        
        struct ChatInputBarConfiguration : TextChatConfigurations {
            inline static constexpr std::uintptr_t AbsolutePosition = 0x110; // Vector2
            inline static constexpr std::uintptr_t AbsolutePositionWrite = 0x110; // Vector2
            inline static constexpr std::uintptr_t AbsoluteSize = 0x118; // Vector2
            inline static constexpr std::uintptr_t AbsoluteSizeWrite = 0x118; // Vector2
            inline static constexpr std::uintptr_t AutocompleteEnabled = 0x124; // Bool
            inline static constexpr std::uintptr_t BackgroundColor3 = 0xE0; // Color3
            inline static constexpr std::uintptr_t BackgroundTransparency = 0xC0; // Float64
            inline static constexpr std::uintptr_t Enabled = 0x125; // Bool
            inline static constexpr std::uintptr_t FontFace = 0xC8; // Font
            inline static constexpr std::uintptr_t IsFocused = 0x126; // Bool
            inline static constexpr std::uintptr_t IsFocusedWrite = 0x126; // Bool
            inline static constexpr std::uintptr_t PlaceholderColor3 = 0xEC; // Color3
            inline static constexpr std::uintptr_t TextColor3 = 0xF8; // Color3
            inline static constexpr std::uintptr_t TextSize = 0xD0; // Int64
            inline static constexpr std::uintptr_t TextStrokeColor3 = 0x104; // Color3
            inline static constexpr std::uintptr_t TextStrokeTransparency = 0xD8; // Float64
        };
        
        struct ChatWindowConfiguration : TextChatConfigurations {
            inline static constexpr std::uintptr_t AbsolutePosition = 0xE4; // Vector2
            inline static constexpr std::uintptr_t AbsolutePositionWrite = 0xE4; // Vector2
            inline static constexpr std::uintptr_t AbsoluteSize = 0xEC; // Vector2
            inline static constexpr std::uintptr_t AbsoluteSizeWrite = 0xEC; // Vector2
            inline static constexpr std::uintptr_t BackgroundColor3 = 0xC0; // Color3
            inline static constexpr std::uintptr_t BackgroundTransparency = 0xA0; // Float64
            inline static constexpr std::uintptr_t Enabled = 0x108; // Bool
            inline static constexpr std::uintptr_t FontFace = 0xA8; // Font
            inline static constexpr std::uintptr_t HeightScale = 0xF4; // Float32
            inline static constexpr std::uintptr_t TextColor3 = 0xCC; // Color3
            inline static constexpr std::uintptr_t TextSize = 0xB0; // Int64
            inline static constexpr std::uintptr_t TextStrokeColor3 = 0xD8; // Color3
            inline static constexpr std::uintptr_t TextStrokeTransparency = 0xB8; // Float64
            inline static constexpr std::uintptr_t WidthScale = 0x104; // Float32
        };
        
        struct ChatWindowMessageProperties : TextChatMessageProperties {
            inline static constexpr std::uintptr_t FontFace = 0x108; // Font
            inline static constexpr std::uintptr_t Ref = 0xF8; // ChatWindowMessageProperties
            inline static constexpr std::uintptr_t TextColor3 = 0x118; // Color3
            inline static constexpr std::uintptr_t TextSize = 0x130; // Int32
            inline static constexpr std::uintptr_t TextStrokeColor3 = 0x124; // Color3
            inline static constexpr std::uintptr_t TextStrokeTransparency = 0x110; // Float64
        };
        
        struct ChorusSoundEffect : SoundEffect {
            inline static constexpr std::uintptr_t Depth = 0xE0; // Float32
            inline static constexpr std::uintptr_t Mix = 0xE4; // Float32
            inline static constexpr std::uintptr_t Rate = 0xE8; // Float32
        };
        
        struct ClickDetector : Instance {
            inline static constexpr std::uintptr_t CursorIcon = 0xA0; // ContentId
            inline static constexpr std::uintptr_t CursorIconContent = 0xA0; // Content
            inline static constexpr std::uintptr_t MaxActivationDistance = 0xD0; // Float32
        };
        
        struct NetworkReplicator : Instance {
        };
        
        struct ClientReplicator : NetworkReplicator {
        };
        
        struct ClientStorageService : Instance {
        };
        
        struct ClimbController : ControllerBase {
            inline static constexpr std::uintptr_t AccelerationTime = 0xC8; // Float32
            inline static constexpr std::uintptr_t BalanceMaxTorque = 0xCC; // Float32
            inline static constexpr std::uintptr_t BalanceSpeed = 0xD0; // Float32
            inline static constexpr std::uintptr_t MoveMaxForce = 0xD4; // Float32
        };
        
        struct Clothing : CharacterAppearance {
            inline static constexpr std::uintptr_t Color3 = 0x108; // Color3
            inline static constexpr std::uintptr_t Outfit1Content = 0xA8; // Content
            inline static constexpr std::uintptr_t Outfit2Content = 0xD8; // Content
        };
        
        struct CloudClientService : Instance {
        };
        
        struct LocalizationTable : Instance {
            inline static constexpr std::uintptr_t DevelopmentLanguage = 0xA0; // String
            inline static constexpr std::uintptr_t IsExemptFromUGCAnalytics = 0xD0; // Bool
            inline static constexpr std::uintptr_t SourceLocaleId = 0xA0; // String
        };
        
        struct CloudLocalizationTable : LocalizationTable {
        };
        
        struct Clouds : Instance {
            inline static constexpr std::uintptr_t Cover = 0xA4; // Float32
            inline static constexpr std::uintptr_t Density = 0xA8; // Float32
            inline static constexpr std::uintptr_t Enabled = 0xAC; // Bool
        };
        
        struct ClusterPacketCache : Instance {
        };
        
        struct CollectionService : Instance {
        };
        
        struct Color3Value : ValueBase {
            inline static constexpr std::uintptr_t Value = 0xA0; // Color3
        };
        
        struct ColorCorrectionEffect : PostEffect {
            inline static constexpr std::uintptr_t Brightness = 0xAC; // Float32
            inline static constexpr std::uintptr_t Contrast = 0xB0; // Float32
            inline static constexpr std::uintptr_t Saturation = 0xB4; // Float32
            inline static constexpr std::uintptr_t TintColor = 0xA0; // Color3
        };
        
        struct ColorGradingEffect : PostEffect {
        };
        
        struct CommerceService : Instance {
        };
        
        struct CompositeValueCurve : Instance {
        };
        
        struct CompressorSoundEffect : SoundEffect {
            inline static constexpr std::uintptr_t Attack = 0xF0; // Float32
            inline static constexpr std::uintptr_t GainMakeup = 0xF4; // Float32
            inline static constexpr std::uintptr_t Ratio = 0xF8; // Float32
            inline static constexpr std::uintptr_t Release = 0xFC; // Float32
            inline static constexpr std::uintptr_t Threshold = 0x100; // Float32
        };
        
        struct ConeHandleAdornment : HandleAdornment {
            inline static constexpr std::uintptr_t DoubleSided = 0x19C; // Bool
            inline static constexpr std::uintptr_t Height = 0x190; // Float32
            inline static constexpr std::uintptr_t Hollow = 0x19D; // Bool
            inline static constexpr std::uintptr_t Radius = 0x194; // Float32
        };
        
        struct ConfigService : Instance {
        };
        
        struct Configuration : Instance {
        };
        
        struct ConfigureServerService : Instance {
        };
        
        struct ConnectivityService : Instance {
        };
        
        struct ContentProvider : Instance {
            inline static constexpr std::uintptr_t BaseUrl = 0xB8; // String
        };
        
        struct ContextActionService : Instance {
        };
        
        struct ControlState : Instance {
        };
        
        struct Controller : Instance {
        };
        
        struct ControllerManager : Instance {
            inline static constexpr std::uintptr_t BaseMoveSpeed = 0x21C; // Float32
            inline static constexpr std::uintptr_t BaseTurnSpeed = 0x220; // Float32
            inline static constexpr std::uintptr_t FacingDirection = 0x1F8; // Vector3
            inline static constexpr std::uintptr_t MovingDirection = 0x204; // Vector3
            inline static constexpr std::uintptr_t UpDirection = 0x210; // Vector3
        };
        
        struct ControllerSensor : SensorBase {
        };
        
        struct ControllerPartSensor : ControllerSensor {
            inline static constexpr std::uintptr_t HitFrame = 0x238; // CoordinateFrame
            inline static constexpr std::uintptr_t HitNormal = 0x268; // Vector3
            inline static constexpr std::uintptr_t LadderSearchHeight = 0x274; // Float32
            inline static constexpr std::uintptr_t LadderSearchOffset = 0x278; // Float32
            inline static constexpr std::uintptr_t SearchDistance = 0x27C; // Float32
        };
        
        struct ControllerService : Instance {
        };
        
        struct CookiesService : Instance {
        };
        
        struct CoreGui : BasePlayerGui {
        };
        
        struct CoreGuiConfiguration : Instance {
        };
        
        struct CorePackages : Instance {
        };
        
        struct CoreScript : BaseScript {
        };
        
        struct CoreScriptSyncService : Instance {
        };
        
        struct CornerWedgePart : BasePart {
        };
        
        struct CreatorStoreService : Instance {
        };
        
        struct CurveAnimation : AnimationClip {
        };
        
        struct CustomEvent : Instance {
            inline static constexpr std::uintptr_t PersistedCurrentValue = 0x98; // Float32
        };
        
        struct CustomEventReceiver : Instance {
        };
        
        struct CustomLog : Instance {
        };
        
        struct CylinderHandleAdornment : HandleAdornment {
            inline static constexpr std::uintptr_t Angle = 0x190; // Float32
            inline static constexpr std::uintptr_t DoubleSided = 0x1A4; // Bool
            inline static constexpr std::uintptr_t Height = 0x194; // Float32
            inline static constexpr std::uintptr_t InnerRadius = 0x198; // Float32
            inline static constexpr std::uintptr_t Radius = 0x19C; // Float32
        };
        
        struct CylinderMesh : BevelMesh {
        };
        
        struct SlidingBallConstraint : Constraint {
            inline static constexpr std::uintptr_t LimitsEnabled = 0x188; // Bool
            inline static constexpr std::uintptr_t LinearResponsiveness = 0x15C; // Float32
            inline static constexpr std::uintptr_t LowerLimit = 0x160; // Float32
            inline static constexpr std::uintptr_t MotorMaxAcceleration = 0x164; // Float32
            inline static constexpr std::uintptr_t MotorMaxForce = 0x168; // Float32
            inline static constexpr std::uintptr_t Restitution = 0x16C; // Float32
            inline static constexpr std::uintptr_t ServoMaxForce = 0x170; // Float32
            inline static constexpr std::uintptr_t Size = 0x174; // Float32
            inline static constexpr std::uintptr_t SoftlockServoUponReachingTarget = 0x189; // Bool
            inline static constexpr std::uintptr_t Speed = 0x178; // Float32
            inline static constexpr std::uintptr_t TargetPosition = 0x17C; // Float32
            inline static constexpr std::uintptr_t UpperLimit = 0x180; // Float32
            inline static constexpr std::uintptr_t Velocity = 0x184; // Float32
        };
        
        struct CylindricalConstraint : SlidingBallConstraint {
            inline static constexpr std::uintptr_t AngularLimitsEnabled = 0x1E8; // Bool
            inline static constexpr std::uintptr_t AngularResponsiveness = 0x1BC; // Float32
            inline static constexpr std::uintptr_t AngularRestitution = 0x1C0; // Float32
            inline static constexpr std::uintptr_t AngularSpeed = 0x1C4; // Float32
            inline static constexpr std::uintptr_t AngularVelocity = 0x1C8; // Float32
            inline static constexpr std::uintptr_t InclinationAngle = 0x1CC; // Float32
            inline static constexpr std::uintptr_t LowerAngle = 0x1D0; // Float32
            inline static constexpr std::uintptr_t MotorMaxAngularAcceleration = 0x1D4; // Float32
            inline static constexpr std::uintptr_t MotorMaxTorque = 0x1D8; // Float32
            inline static constexpr std::uintptr_t RotationAxisVisible = 0x1E9; // Bool
            inline static constexpr std::uintptr_t ServoMaxTorque = 0x1DC; // Float32
            inline static constexpr std::uintptr_t SoftlockAngularServoUponReachingTarget = 0x1EA; // Bool
            inline static constexpr std::uintptr_t TargetAngle = 0x1E0; // Float32
            inline static constexpr std::uintptr_t UpperAngle = 0x1E4; // Float32
        };
        
        struct ServiceProvider : Instance {
        };
        
        struct DataModel : ServiceProvider {
            inline static constexpr std::uintptr_t CreatorId = 0x360; // Int64
            inline static constexpr std::uintptr_t CreatorType = 0x380; // DataModelCreatorType
            inline static constexpr std::uintptr_t Environment = 0x2D8; // String
            inline static constexpr std::uintptr_t ForceR15 = 0x390; // Bool
            inline static constexpr std::uintptr_t GameId = 0x368; // Int64
            inline static constexpr std::uintptr_t GearGenreSetting = 0x8BC; // GearGenreSetting
            inline static constexpr std::uintptr_t Genre = 0x384; // Genre
            inline static constexpr std::uintptr_t JobId = 0x2F8; // String
            inline static constexpr std::uintptr_t MatchmakingType = 0x388; // MatchmakingType
            inline static constexpr std::uintptr_t PlaceId = 0x370; // Int64
            inline static constexpr std::uintptr_t PlaceVersion = 0x38C; // Int32
            inline static constexpr std::uintptr_t ArbiterToDataModel = 0x1F8; // EngineInternal
            inline static constexpr std::uintptr_t AmInParallelPhase = 0x53D; // Bool
        };
        
        struct DataModelSession : Instance {
        };
        
        struct GlobalDataStore : Instance {
        };
        
        struct DataStore : GlobalDataStore {
        };
        
        struct DataStoreGetOptions : Instance {
            inline static constexpr std::uintptr_t UseCache = 0x98; // Bool
        };
        
        struct DataStoreIncrementOptions : Instance {
        };
        
        struct DataStoreInfo : Instance {
        };
        
        struct DataStoreKey : Instance {
        };
        
        struct DataStoreKeyInfo : Instance {
        };
        
        struct DataStoreKeyPages : Pages {
        };
        
        struct DataStoreListingPages : Pages {
        };
        
        struct DataStoreObjectVersionInfo : Instance {
        };
        
        struct DataStoreOptions : Instance {
            inline static constexpr std::uintptr_t AllScopes = 0x98; // Bool
        };
        
        struct DataStorePages : Pages {
        };
        
        struct DataStoreService : Instance {
            inline static constexpr std::uintptr_t AutomaticRetry = 0xB0; // Bool
            inline static constexpr std::uintptr_t LegacyNamingScheme = 0xB1; // Bool
        };
        
        struct DataStoreSetOptions : Instance {
        };
        
        struct DataStoreVersionPages : Pages {
        };
        
        struct Debris : Instance {
            inline static constexpr std::uintptr_t MaxItems = 0xB0; // Int32
        };
        
        struct DebugSettings : Instance {
        };
        
        struct DebuggerBreakpoint : Instance {
            inline static constexpr std::uintptr_t Condition = 0xA8; // String
            inline static constexpr std::uintptr_t ContinueExecution = 0xA4; // Bool
            inline static constexpr std::uintptr_t IsEnabled = 0xA5; // Bool
            inline static constexpr std::uintptr_t Line = 0xA0; // Int32
            inline static constexpr std::uintptr_t isContextDependentBreakpoint = 0xA6; // Bool
            inline static constexpr std::uintptr_t line = 0xA0; // Int32
        };
        
        struct DebuggerManager : Instance {
        };
        
        struct DebuggerWatch : Instance {
            inline static constexpr std::uintptr_t Expression = 0xC0; // String
        };
        
        struct FaceInstance : Instance {
        };
        
        struct Decal : FaceInstance {
            inline static constexpr std::uintptr_t AutoLocalize = 0x280; // Bool
            inline static constexpr std::uintptr_t Color3 = 0x238; // Color3
            inline static constexpr std::uintptr_t EmissiveMaskContent = 0xC8; // Content
            inline static constexpr std::uintptr_t EmissiveStrength = 0x260; // Float32
            inline static constexpr std::uintptr_t EmissiveTint = 0x244; // Color3
            inline static constexpr std::uintptr_t LocalTransparencyModifier = 0x264; // Float32
            inline static constexpr std::uintptr_t LocalizedTextureContent = 0xF8; // Content
            inline static constexpr std::uintptr_t MetalnessMapContent = 0x128; // Content
            inline static constexpr std::uintptr_t NormalMapContent = 0x158; // Content
            inline static constexpr std::uintptr_t Rotation = 0x26C; // Float32
            inline static constexpr std::uintptr_t RoughnessMapContent = 0x188; // Content
            inline static constexpr std::uintptr_t Shiny = 0x270; // Float32
            inline static constexpr std::uintptr_t Specular = 0x274; // Float32
            inline static constexpr std::uintptr_t TextureContent = 0x1B8; // Content
            inline static constexpr std::uintptr_t TexturePackContent = 0x1E8; // Content
            inline static constexpr std::uintptr_t TexturePackMetadata = 0x218; // String
            inline static constexpr std::uintptr_t Transparency = 0x278; // Float32
            inline static constexpr std::uintptr_t UVOffset = 0x250; // Vector2
            inline static constexpr std::uintptr_t UVScale = 0x258; // Vector2
            inline static constexpr std::uintptr_t ZIndex = 0x27C; // Int32
        };
        
        struct DeferredAssetManagerService : Instance {
            inline static constexpr std::uintptr_t JoiningPlaceId = 0xB0; // Int64
            inline static constexpr std::uintptr_t JoiningUniverseId = 0xB8; // Int64
            inline static constexpr std::uintptr_t PregameLoadingScreenOnly = 0xC0; // Bool
        };
        
        struct DepthOfFieldEffect : PostEffect {
            inline static constexpr std::uintptr_t FarIntensity = 0xA0; // Float32
            inline static constexpr std::uintptr_t FocusDistance = 0xA4; // Float32
            inline static constexpr std::uintptr_t InFocusRadius = 0xA8; // Float32
            inline static constexpr std::uintptr_t NearIntensity = 0xAC; // Float32
        };
        
        struct DesignFoundationsService : Instance {
        };
        
        struct DeviceDisplayService : Instance {
        };
        
        struct DeviceIdService : Instance {
        };
        
        struct Dialog : Instance {
            inline static constexpr std::uintptr_t ConversationDistance = 0xE8; // Float32
            inline static constexpr std::uintptr_t GoodbyeChoiceActive = 0xF8; // Bool
            inline static constexpr std::uintptr_t InUse = 0xF9; // Bool
            inline static constexpr std::uintptr_t InitialPrompt = 0xB8; // String
            inline static constexpr std::uintptr_t TriggerDistance = 0xF4; // Float32
            inline static constexpr std::uintptr_t TriggerOffset = 0xD8; // Vector3
        };
        
        struct DialogChoice : Instance {
            inline static constexpr std::uintptr_t GoodbyeChoiceActive = 0x100; // Bool
            inline static constexpr std::uintptr_t GoodbyeDialog = 0xA0; // String
            inline static constexpr std::uintptr_t ResponseDialog = 0xC0; // String
            inline static constexpr std::uintptr_t UserDialog = 0xE0; // String
        };
        
        struct DigitsRigDescription : Instance {
            inline static constexpr std::uintptr_t Index1TposeAdjustment = 0x188; // CoordinateFrame
            inline static constexpr std::uintptr_t Index2TposeAdjustment = 0x1B8; // CoordinateFrame
            inline static constexpr std::uintptr_t Index3TposeAdjustment = 0x1E8; // CoordinateFrame
            inline static constexpr std::uintptr_t IndexRange = 0x458; // Vector3
            inline static constexpr std::uintptr_t IndexSize = 0x494; // Float32
            inline static constexpr std::uintptr_t Middle1TposeAdjustment = 0x218; // CoordinateFrame
            inline static constexpr std::uintptr_t Middle2TposeAdjustment = 0x248; // CoordinateFrame
            inline static constexpr std::uintptr_t Middle3TposeAdjustment = 0x278; // CoordinateFrame
            inline static constexpr std::uintptr_t MiddleRange = 0x464; // Vector3
            inline static constexpr std::uintptr_t MiddleSize = 0x498; // Float32
            inline static constexpr std::uintptr_t Pinky1TposeAdjustment = 0x2A8; // CoordinateFrame
            inline static constexpr std::uintptr_t Pinky2TposeAdjustment = 0x2D8; // CoordinateFrame
            inline static constexpr std::uintptr_t Pinky3TposeAdjustment = 0x308; // CoordinateFrame
            inline static constexpr std::uintptr_t PinkyRange = 0x470; // Vector3
            inline static constexpr std::uintptr_t PinkySize = 0x49C; // Float32
            inline static constexpr std::uintptr_t Ring1TposeAdjustment = 0x338; // CoordinateFrame
            inline static constexpr std::uintptr_t Ring2TposeAdjustment = 0x368; // CoordinateFrame
            inline static constexpr std::uintptr_t Ring3TposeAdjustment = 0x398; // CoordinateFrame
            inline static constexpr std::uintptr_t RingRange = 0x47C; // Vector3
            inline static constexpr std::uintptr_t RingSize = 0x4A0; // Float32
            inline static constexpr std::uintptr_t Thumb1TposeAdjustment = 0x3C8; // CoordinateFrame
            inline static constexpr std::uintptr_t Thumb2TposeAdjustment = 0x3F8; // CoordinateFrame
            inline static constexpr std::uintptr_t Thumb3TposeAdjustment = 0x428; // CoordinateFrame
            inline static constexpr std::uintptr_t ThumbRange = 0x488; // Vector3
            inline static constexpr std::uintptr_t ThumbSize = 0x4A8; // Float32
        };
        
        struct DisplayWakeLock : Instance {
        };
        
        struct DistortionSoundEffect : SoundEffect {
            inline static constexpr std::uintptr_t Level = 0xE0; // Float32
        };
        
        struct PluginGui : LayerCollector {
            inline static constexpr std::uintptr_t Title = 0x850; // String
        };
        
        struct DockWidgetPluginGui : PluginGui {
        };
        
        struct DoubleConstrainedValue : ValueBase {
            inline static constexpr std::uintptr_t ConstrainedValue = 0xB0; // Float64
            inline static constexpr std::uintptr_t MaxValue = 0xA0; // Float64
            inline static constexpr std::uintptr_t MinValue = 0xA8; // Float64
            inline static constexpr std::uintptr_t Value = 0xB0; // Float64
            inline static constexpr std::uintptr_t value = 0xB0; // Float64
        };
        
        struct DragDetector : ClickDetector {
            inline static constexpr std::uintptr_t ActivatedCursorIcon = 0x198; // ContentId
            inline static constexpr std::uintptr_t ActivatedCursorIconContent = 0x198; // Content
            inline static constexpr std::uintptr_t ApplyAtCenterOfMass = 0x2B8; // Bool
            inline static constexpr std::uintptr_t Axis = 0x248; // Vector3
            inline static constexpr std::uintptr_t DragFrame = 0x1E8; // CoordinateFrame
            inline static constexpr std::uintptr_t Enabled = 0x2B9; // Bool
            inline static constexpr std::uintptr_t MaxDragAngle = 0x290; // Float32
            inline static constexpr std::uintptr_t MaxDragTranslation = 0x254; // Vector3
            inline static constexpr std::uintptr_t MaxForce = 0x294; // Float32
            inline static constexpr std::uintptr_t MaxTorque = 0x298; // Float32
            inline static constexpr std::uintptr_t MinDragAngle = 0x29C; // Float32
            inline static constexpr std::uintptr_t MinDragTranslation = 0x260; // Vector3
            inline static constexpr std::uintptr_t Orientation = 0x278; // Vector3
            inline static constexpr std::uintptr_t PhysicalDragHitPoint = 0x26C; // Vector3
            inline static constexpr std::uintptr_t PhysicalDragIsInVR = 0x2BA; // Bool
            inline static constexpr std::uintptr_t PhysicalDragTargetFrame = 0x218; // CoordinateFrame
            inline static constexpr std::uintptr_t Responsiveness = 0x2A8; // Float32
            inline static constexpr std::uintptr_t RunLocally = 0x2BB; // Bool
            inline static constexpr std::uintptr_t SecondaryAxis = 0x278; // Vector3
            inline static constexpr std::uintptr_t TrackballRadialPullFactor = 0x2AC; // Float32
            inline static constexpr std::uintptr_t TrackballRollFactor = 0x2B0; // Float32
        };
        
        struct Dragger : Instance {
        };
        
        struct JointInstance : Instance {
            inline static constexpr std::uintptr_t Enabled = 0xA0; // Bool
        };
        
        struct DynamicRotate : JointInstance {
        };
        
        struct EchoSoundEffect : SoundEffect {
            inline static constexpr std::uintptr_t Delay = 0xE0; // Float32
            inline static constexpr std::uintptr_t DryLevel = 0xE4; // Float32
            inline static constexpr std::uintptr_t Feedback = 0xE8; // Float32
            inline static constexpr std::uintptr_t WetLevel = 0xEC; // Float32
        };
        
        struct EditableService : Instance {
        };
        
        struct EncodingService : Instance {
        };
        
        struct EqualizerSoundEffect : SoundEffect {
            inline static constexpr std::uintptr_t HighGain = 0xE0; // Float32
            inline static constexpr std::uintptr_t LowGain = 0xE4; // Float32
            inline static constexpr std::uintptr_t MidGain = 0xE8; // Float32
        };
        
        struct EulerRotationCurve : Instance {
        };
        
        struct EventIngestService : Instance {
        };
        
        struct ExampleV2Service : Instance {
        };
        
        struct ExperienceAuthService : Instance {
        };
        
        struct ExperienceInviteOptions : Instance {
            inline static constexpr std::uintptr_t InviteUser = 0xF8; // Int64
            inline static constexpr std::uintptr_t LaunchData = 0xB8; // String
            inline static constexpr std::uintptr_t PromptMessage = 0xD8; // String
        };
        
        struct ExperienceNotificationService : Instance {
        };
        
        struct ExperienceService : Instance {
        };
        
        struct ExperienceStateCaptureService : Instance {
            inline static constexpr std::uintptr_t HiddenSelectionEnabled = 0xAC; // Bool
            inline static constexpr std::uintptr_t IsInBackground = 0xAD; // Bool
            inline static constexpr std::uintptr_t IsInCaptureMode = 0xAE; // Bool
        };
        
        struct ExperienceStateRecordingService : Instance {
            inline static constexpr std::uintptr_t IsServerDataModelRecorderActive = 0xB0; // Bool
        };
        
        struct Explosion : Instance {
            inline static constexpr std::uintptr_t BlastPressure = 0xE4; // Float32
            inline static constexpr std::uintptr_t BlastRadius = 0xE8; // Float32
            inline static constexpr std::uintptr_t DestroyJointRadiusPercent = 0xEC; // Float32
            inline static constexpr std::uintptr_t LocalTransparencyModifier = 0xF4; // Float32
            inline static constexpr std::uintptr_t TimeScale = 0xF8; // Float32
            inline static constexpr std::uintptr_t Visible = 0xFC; // Bool
        };
        
        struct ExternalIdentityService : Instance {
        };
        
        struct FaceAnimatorService : Instance {
        };
        
        struct FaceControls : Instance {
            inline static constexpr std::uintptr_t ChinRaiser = 0xC8; // Float32
            inline static constexpr std::uintptr_t ChinRaiserUpperLip = 0xCC; // Float32
            inline static constexpr std::uintptr_t Corrugator = 0xD0; // Float32
            inline static constexpr std::uintptr_t EyesLookDown = 0xD4; // Float32
            inline static constexpr std::uintptr_t EyesLookLeft = 0xD8; // Float32
            inline static constexpr std::uintptr_t EyesLookRight = 0xDC; // Float32
            inline static constexpr std::uintptr_t EyesLookUp = 0xE0; // Float32
            inline static constexpr std::uintptr_t FlatPucker = 0xE4; // Float32
            inline static constexpr std::uintptr_t Funneler = 0xE8; // Float32
            inline static constexpr std::uintptr_t InternalOverrideFACSData = 0xA0; // BinaryString
            inline static constexpr std::uintptr_t JawDrop = 0xEC; // Float32
            inline static constexpr std::uintptr_t JawLeft = 0xF0; // Float32
            inline static constexpr std::uintptr_t JawRight = 0xF4; // Float32
            inline static constexpr std::uintptr_t LeftBrowLowerer = 0xF8; // Float32
            inline static constexpr std::uintptr_t LeftCheekPuff = 0xFC; // Float32
            inline static constexpr std::uintptr_t LeftCheekRaiser = 0x100; // Float32
            inline static constexpr std::uintptr_t LeftDimpler = 0x104; // Float32
            inline static constexpr std::uintptr_t LeftEyeClosed = 0x108; // Float32
            inline static constexpr std::uintptr_t LeftEyeUpperLidRaiser = 0x10C; // Float32
            inline static constexpr std::uintptr_t LeftInnerBrowRaiser = 0x110; // Float32
            inline static constexpr std::uintptr_t LeftLipCornerDown = 0x114; // Float32
            inline static constexpr std::uintptr_t LeftLipCornerPuller = 0x118; // Float32
            inline static constexpr std::uintptr_t LeftLipStretcher = 0x11C; // Float32
            inline static constexpr std::uintptr_t LeftLowerLipDepressor = 0x120; // Float32
            inline static constexpr std::uintptr_t LeftNoseWrinkler = 0x124; // Float32
            inline static constexpr std::uintptr_t LeftOuterBrowRaiser = 0x128; // Float32
            inline static constexpr std::uintptr_t LeftUpperLipRaiser = 0x12C; // Float32
            inline static constexpr std::uintptr_t LipPresser = 0x130; // Float32
            inline static constexpr std::uintptr_t LipsTogether = 0x134; // Float32
            inline static constexpr std::uintptr_t LowerLipSuck = 0x138; // Float32
            inline static constexpr std::uintptr_t MouthLeft = 0x13C; // Float32
            inline static constexpr std::uintptr_t MouthRight = 0x140; // Float32
            inline static constexpr std::uintptr_t Pucker = 0x144; // Float32
            inline static constexpr std::uintptr_t RightBrowLowerer = 0x148; // Float32
            inline static constexpr std::uintptr_t RightCheekPuff = 0x14C; // Float32
            inline static constexpr std::uintptr_t RightCheekRaiser = 0x150; // Float32
            inline static constexpr std::uintptr_t RightDimpler = 0x154; // Float32
            inline static constexpr std::uintptr_t RightEyeClosed = 0x158; // Float32
            inline static constexpr std::uintptr_t RightEyeUpperLidRaiser = 0x15C; // Float32
            inline static constexpr std::uintptr_t RightInnerBrowRaiser = 0x160; // Float32
            inline static constexpr std::uintptr_t RightLipCornerDown = 0x164; // Float32
            inline static constexpr std::uintptr_t RightLipCornerPuller = 0x168; // Float32
            inline static constexpr std::uintptr_t RightLipStretcher = 0x16C; // Float32
            inline static constexpr std::uintptr_t RightLowerLipDepressor = 0x170; // Float32
            inline static constexpr std::uintptr_t RightNoseWrinkler = 0x174; // Float32
            inline static constexpr std::uintptr_t RightOuterBrowRaiser = 0x178; // Float32
            inline static constexpr std::uintptr_t RightUpperLipRaiser = 0x17C; // Float32
            inline static constexpr std::uintptr_t TongueDown = 0x180; // Float32
            inline static constexpr std::uintptr_t TongueOut = 0x184; // Float32
            inline static constexpr std::uintptr_t TongueUp = 0x188; // Float32
            inline static constexpr std::uintptr_t UpperLipSuck = 0x18C; // Float32
        };
        
        struct FacialAgeEstimationService : Instance {
        };
        
        struct FacialAnimationStreamingServiceStats : Instance {
        };
        
        struct FacialAnimationStreamingServiceV2 : Instance {
            inline static constexpr std::uintptr_t ServiceState = 0x108; // Int32
        };
        
        struct FacialAnimationStreamingSubsessionStats : Instance {
        };
        
        struct Feature : Instance {
        };
        
        struct FeatureMatchingTable : Instance {
            inline static constexpr std::uintptr_t Data = 0xC0; // SharedString
            inline static constexpr std::uintptr_t SchemaName = 0xA0; // String
        };
        
        struct FeatureRestrictionManager : Instance {
        };
        
        struct FileManagerService : Instance {
        };
        
        struct FileMesh : DataModelMesh {
            inline static constexpr std::uintptr_t MeshContent = 0xD0; // Content
            inline static constexpr std::uintptr_t TextureContent = 0x100; // Content
        };
        
        struct Fire : Instance {
            inline static constexpr std::uintptr_t Color = 0xA0; // Color3
            inline static constexpr std::uintptr_t Enabled = 0xC8; // Bool
            inline static constexpr std::uintptr_t Heat = 0xC0; // Float32
            inline static constexpr std::uintptr_t LocalTransparencyModifier = 0xB8; // Float32
            inline static constexpr std::uintptr_t SecondaryColor = 0xAC; // Color3
            inline static constexpr std::uintptr_t Size = 0xC4; // Float32
            inline static constexpr std::uintptr_t TimeScale = 0xBC; // Float32
            inline static constexpr std::uintptr_t heat_xml = 0xC0; // Float32
            inline static constexpr std::uintptr_t size = 0xC4; // Float32
            inline static constexpr std::uintptr_t size_xml = 0xC4; // Float32
        };
        
        struct Tool : BackpackItem {
            inline static constexpr std::uintptr_t CanBeDropped = 0x4A0; // Bool
            inline static constexpr std::uintptr_t Enabled = 0x4A1; // Bool
            inline static constexpr std::uintptr_t Grip = 0x470; // CoordinateFrame
            inline static constexpr std::uintptr_t GripPos = 0x494; // Vector3
            inline static constexpr std::uintptr_t GripRight = 0x470; // Vector3
            inline static constexpr std::uintptr_t ManualActivationOnly = 0x4A2; // Bool
            inline static constexpr std::uintptr_t RequiresHandle = 0x4A3; // Bool
            inline static constexpr std::uintptr_t ToolTip = 0x450; // String
        };
        
        struct Flag : Tool {
            inline static constexpr std::uintptr_t TeamColor = 0x5A0; // BrickColor
        };
        
        struct FormFactorPart : BasePart {
        };
        
        struct Part : FormFactorPart {
        };
        
        struct FlagStand : Part {
            inline static constexpr std::uintptr_t TeamColor = 0x1C8; // BrickColor
        };
        
        struct FlagStandService : Instance {
        };
        
        struct FlangeSoundEffect : SoundEffect {
            inline static constexpr std::uintptr_t Depth = 0xE0; // Float32
            inline static constexpr std::uintptr_t Mix = 0xE4; // Float32
            inline static constexpr std::uintptr_t Rate = 0xE8; // Float32
        };
        
        struct FloatCurve : Instance {
        };
        
        struct FloorWire : GuiBase3d {
            inline static constexpr std::uintptr_t CycleOffset = 0x130; // Float32
            inline static constexpr std::uintptr_t StudsBetweenTextures = 0x134; // Float32
            inline static constexpr std::uintptr_t TextureSize = 0x128; // Vector2
            inline static constexpr std::uintptr_t Velocity = 0x138; // Float32
            inline static constexpr std::uintptr_t WireRadius = 0x13C; // Float32
        };
        
        struct FluidForceSensor : SensorBase {
        };
        
        struct Folder : Instance {
        };
        
        struct ForceField : Instance {
            inline static constexpr std::uintptr_t Visible = 0xA0; // Bool
        };
        
        struct Frame : GuiObject {
        };
        
        struct FriendPages : Pages {
        };
        
        struct FriendService : Instance {
        };
        
        struct FriendsCallingInstance : Instance {
        };
        
        struct FriendsCallingParticipant : Instance {
        };
        
        struct FriendsCallingService : Instance {
        };
        
        struct FunctionalTest : Instance {
            inline static constexpr std::uintptr_t AllowSleep = 0xC0; // Bool
            inline static constexpr std::uintptr_t HasMigratedSettingsToTestService = 0xC1; // Bool
            inline static constexpr std::uintptr_t Is30FpsThrottleEnabled = 0xC2; // Bool
            inline static constexpr std::uintptr_t PhysicsEnvironmentalThrottle = 0xC3; // Bool
            inline static constexpr std::uintptr_t Timeout = 0xB8; // Float64
        };
        
        struct GamePassService : Instance {
        };
        
        struct GameSettings : Instance {
        };
        
        struct GamepadService : Instance {
            inline static constexpr std::uintptr_t GamepadCursorEnabled = 0xB0; // Bool
        };
        
        struct GeneratedFolder : Folder {
        };
        
        struct GenerationService : Instance {
        };
        
        struct GenericChallengeService : Instance {
        };
        
        struct GenericSettings : ServiceProvider {
        };
        
        struct Geometry : Instance {
        };
        
        struct GeometryService : Instance {
        };
        
        struct GetTextBoundsParams : Instance {
            inline static constexpr std::uintptr_t Font = 0xC0; // Font
            inline static constexpr std::uintptr_t RichText = 0xD0; // Bool
            inline static constexpr std::uintptr_t Size = 0xC8; // Float32
            inline static constexpr std::uintptr_t Text = 0xA0; // String
            inline static constexpr std::uintptr_t Width = 0xCC; // Float32
        };
        
        struct GlobalSettings : GenericSettings {
        };
        
        struct Glue : JointInstance {
            inline static constexpr std::uintptr_t F0 = 0x170; // Vector3
            inline static constexpr std::uintptr_t F1 = 0x17C; // Vector3
            inline static constexpr std::uintptr_t F2 = 0x188; // Vector3
            inline static constexpr std::uintptr_t F3 = 0x194; // Vector3
        };
        
        struct GongService : Instance {
        };
        
        struct GroundController : ControllerBase {
            inline static constexpr std::uintptr_t AccelerationLean = 0xC8; // Float32
            inline static constexpr std::uintptr_t AccelerationTime = 0xCC; // Float32
            inline static constexpr std::uintptr_t BalanceMaxTorque = 0xD0; // Float32
            inline static constexpr std::uintptr_t BalanceSpeed = 0xD4; // Float32
            inline static constexpr std::uintptr_t DecelerationTime = 0xD8; // Float32
            inline static constexpr std::uintptr_t Friction = 0xDC; // Float32
            inline static constexpr std::uintptr_t FrictionWeight = 0xE0; // Float32
            inline static constexpr std::uintptr_t GroundOffset = 0xE4; // Float32
            inline static constexpr std::uintptr_t StandForce = 0xE8; // Float32
            inline static constexpr std::uintptr_t StandSpeed = 0xEC; // Float32
            inline static constexpr std::uintptr_t TurnSpeedFactor = 0xF0; // Float32
        };
        
        struct GroupService : Instance {
        };
        
        struct GuiButton : GuiObject {
            inline static constexpr std::uintptr_t AutoButtonColor = 0xA14; // Bool
            inline static constexpr std::uintptr_t MouseButton1ClickConnectionCount = 0x9F8; // Int32
            inline static constexpr std::uintptr_t MouseButton1DownConnectionCount = 0x9FC; // Int32
            inline static constexpr std::uintptr_t MouseButton1UpConnectionCount = 0xA00; // Int32
            inline static constexpr std::uintptr_t MouseButton2ClickConnectionCount = 0xA04; // Int32
            inline static constexpr std::uintptr_t MouseButton2DownConnectionCount = 0xA08; // Int32
            inline static constexpr std::uintptr_t MouseButton2UpConnectionCount = 0xA0C; // Int32
            inline static constexpr std::uintptr_t Selected = 0xA16; // Bool
        };
        
        struct GuiLabel : GuiObject {
        };
        
        struct ScreenGui : LayerCollector {
            inline static constexpr std::uintptr_t ClipToDeviceSafeArea = 0x73C; // Bool
            inline static constexpr std::uintptr_t DisplayOrder = 0x730; // Int32
            inline static constexpr std::uintptr_t IgnoresTitleBarReservation = 0x73D; // Bool
            inline static constexpr std::uintptr_t OnTopOfCoreBlur = 0x73E; // Bool
        };
        
        struct GuiMain : ScreenGui {
        };
        
        struct GuiService : Instance {
            inline static constexpr std::uintptr_t CoreUISafeAreaInsetBottomRight = 0x100; // Vector2
            inline static constexpr std::uintptr_t CoreUISafeAreaInsetTopLeft = 0x108; // Vector2
            inline static constexpr std::uintptr_t FullscreenViewport = 0xD0; // Rect2D
            inline static constexpr std::uintptr_t GuiNavigationEnabled = 0x134; // Bool
            inline static constexpr std::uintptr_t HardwareSafeAreaInsetBottomRight = 0x110; // Vector2
            inline static constexpr std::uintptr_t HardwareSafeAreaInsetTopLeft = 0x118; // Vector2
            inline static constexpr std::uintptr_t MenuIsOpen = 0x135; // Bool
            inline static constexpr std::uintptr_t ScreenContextRawScreenScale = 0x12C; // Float32
            inline static constexpr std::uintptr_t ScreenContextTopbarInset = 0xE0; // Rect2D
            inline static constexpr std::uintptr_t TopbarInset = 0x485; // Rect2D
            inline static constexpr std::uintptr_t TouchControlsEnabled = 0x136; // Bool
            inline static constexpr std::uintptr_t ViewportDisplaySize = 0x130; // DisplaySize
            inline static constexpr std::uintptr_t ViewportSizeInMM = 0x120; // Vector2
        };
        
        struct GuidRegistryService : Instance {
        };
        
        struct HSRDataContentProvider : CacheableContentProvider {
        };
        
        struct Handles : HandlesBase {
            inline static constexpr std::uintptr_t MouseButton1DownConnectionCount = 0x10C; // Int32
            inline static constexpr std::uintptr_t MouseButton1UpConnectionCount = 0x110; // Int32
            inline static constexpr std::uintptr_t MouseDragConnectionCount = 0x114; // Int32
            inline static constexpr std::uintptr_t MouseEnterConnectionCount = 0x118; // Int32
            inline static constexpr std::uintptr_t MouseLeaveConnectionCount = 0x11C; // Int32
        };
        
        struct HapticEffect : Instance {
            inline static constexpr std::uintptr_t Looped = 0xD4; // Bool
            inline static constexpr std::uintptr_t Position = 0xC0; // Vector3
            inline static constexpr std::uintptr_t Radius = 0xCC; // Float32
            inline static constexpr std::uintptr_t WaveformData = 0xA0; // BinaryString
        };
        
        struct HapticService : Instance {
        };
        
        struct HarmonyService : Instance {
        };
        
        struct Hat : Accoutrement {
        };
        
        struct HeapProfilerService : Instance {
        };
        
        struct HeatmapQueryService : Instance {
        };
        
        struct HeatmapService : Instance {
        };
        
        struct HeightmapImporterService : Instance {
        };
        
        struct HiddenPlayerService : Instance {
        };
        
        struct HiddenSurfaceRemovalAsset : Instance {
            inline static constexpr std::uintptr_t HSRData = 0x98; // BinaryString
            inline static constexpr std::uintptr_t HSRMeshIdData = 0xB8; // BinaryString
        };
        
        struct Highlight : Instance {
            inline static constexpr std::uintptr_t Enabled = 0xDC; // Bool
            inline static constexpr std::uintptr_t FillColor = 0xB0; // Color3
            inline static constexpr std::uintptr_t FillTransparency = 0xCC; // Float32
            inline static constexpr std::uintptr_t LineThickness = 0xD0; // Int32
            inline static constexpr std::uintptr_t OutlineColor = 0xBC; // Color3
            inline static constexpr std::uintptr_t OutlineTransparency = 0xD4; // Float32
        };
        
        struct HingeConstraint : Constraint {
            inline static constexpr std::uintptr_t AngularResponsiveness = 0x15C; // Float32
            inline static constexpr std::uintptr_t AngularSpeed = 0x160; // Float32
            inline static constexpr std::uintptr_t AngularVelocity = 0x164; // Float32
            inline static constexpr std::uintptr_t LimitsEnabled = 0x188; // Bool
            inline static constexpr std::uintptr_t LowerAngle = 0x168; // Float32
            inline static constexpr std::uintptr_t MotorMaxAcceleration = 0x16C; // Float32
            inline static constexpr std::uintptr_t MotorMaxTorque = 0x170; // Float32
            inline static constexpr std::uintptr_t Radius = 0x174; // Float32
            inline static constexpr std::uintptr_t Restitution = 0x178; // Float32
            inline static constexpr std::uintptr_t ServoMaxTorque = 0x17C; // Float32
            inline static constexpr std::uintptr_t SoftlockServoUponReachingTarget = 0x189; // Bool
            inline static constexpr std::uintptr_t TargetAngle = 0x180; // Float32
            inline static constexpr std::uintptr_t UpperAngle = 0x184; // Float32
        };
        
        struct Message : Instance {
            inline static constexpr std::uintptr_t Text = 0xA0; // String
        };
        
        struct Hint : Message {
        };
        
        struct Hole : Feature {
        };
        
        struct Hopper : Instance {
        };
        
        struct HopperBin : BackpackItem {
            inline static constexpr std::uintptr_t Active = 0x454; // Bool
        };
        
        struct HttpRbxApiService : Instance {
        };
        
        struct HttpRequest : Instance {
        };
        
        struct HttpService : Instance {
            inline static constexpr std::uintptr_t HttpEnabled = 0xA8; // Bool
        };
        
        struct Humanoid : Instance {
            inline static constexpr std::uintptr_t AutoJumpEnabled = 0x1C8; // Bool
            inline static constexpr std::uintptr_t AutoRotate = 0x1C9; // Bool
            inline static constexpr std::uintptr_t AutomaticScalingEnabled = 0x1CA; // Bool
            inline static constexpr std::uintptr_t BreakJointsOnDeath = 0x1CB; // Bool
            inline static constexpr std::uintptr_t CameraMaxDistance = 0x164; // Float32
            inline static constexpr std::uintptr_t CameraMinDistance = 0x168; // Float32
            inline static constexpr std::uintptr_t CameraOffset = 0x110; // Vector3
            inline static constexpr std::uintptr_t DisplayName = 0xA0; // String
            inline static constexpr std::uintptr_t EvaluateStateMachine = 0x1CC; // Bool
            inline static constexpr std::uintptr_t FinishedState = 0x1CD; // Bool
            inline static constexpr std::uintptr_t HealthDisplayDistance = 0x17C; // Float32
            inline static constexpr std::uintptr_t Health_XML = 0x184; // Float32
            inline static constexpr std::uintptr_t HipHeight = 0x188; // Float32
            inline static constexpr std::uintptr_t InternalAvatarRulesRootPartSize = 0x11C; // Vector3
            inline static constexpr std::uintptr_t InternalAvatarRulesRootPartSizeScalesWithBody = 0x1CE; // Bool
            inline static constexpr std::uintptr_t InternalBodyScale = 0x128; // Vector3
            inline static constexpr std::uintptr_t InternalDisplayName = 0xC0; // String
            inline static constexpr std::uintptr_t InternalHeadScale = 0x18C; // Float32
            inline static constexpr std::uintptr_t InternalOriginalHipHeight = 0x190; // Float32
            inline static constexpr std::uintptr_t Jump = 0x1CF; // Bool
            inline static constexpr std::uintptr_t JumpHeight = 0x194; // Float32
            inline static constexpr std::uintptr_t JumpPower = 0x198; // Float32
            inline static constexpr std::uintptr_t JumpReplicate = 0x1CF; // Bool
            inline static constexpr std::uintptr_t MaxHealth = 0x19C; // Float32
            inline static constexpr std::uintptr_t MaxSlopeAngle = 0x1A0; // Float32
            inline static constexpr std::uintptr_t MoveDirection = 0x134; // Vector3
            inline static constexpr std::uintptr_t MoveDirectionInternal = 0x134; // Vector3
            inline static constexpr std::uintptr_t NameDisplayDistance = 0x1A4; // Float32
            inline static constexpr std::uintptr_t NoFloorTimerState = 0x1B0; // Float32
            inline static constexpr std::uintptr_t OverrideDefaultCollisions = 0x1D0; // Bool
            inline static constexpr std::uintptr_t PlatformStand = 0x1D1; // Bool
            inline static constexpr std::uintptr_t RequiresNeck = 0x1D2; // Bool
            inline static constexpr std::uintptr_t Sit = 0x1D3; // Bool
            inline static constexpr std::uintptr_t Strafe = 0x1D4; // Bool
            inline static constexpr std::uintptr_t TargetPoint = 0x140; // Vector3
            inline static constexpr std::uintptr_t TimerState = 0x1BC; // Float32
            inline static constexpr std::uintptr_t UseJumpPower = 0x1D5; // Bool
            inline static constexpr std::uintptr_t WalkAngleError = 0x1C0; // Float32
            inline static constexpr std::uintptr_t WalkDirection = 0x14C; // Vector3
            inline static constexpr std::uintptr_t WalkSpeed = 0x1C4; // Float32
            inline static constexpr std::uintptr_t WalkToPoint = 0x158; // Vector3
            inline static constexpr std::uintptr_t maxHealth = 0x19C; // Float32
            inline static constexpr std::uintptr_t Health = 0x184; // Float32
        };
        
        struct HumanoidController : Controller {
        };
        
        struct HumanoidDescription : Instance {
            inline static constexpr std::uintptr_t AccessoryBlob = 0x150; // String
            inline static constexpr std::uintptr_t BodyTypeScale = 0x120; // Float32
            inline static constexpr std::uintptr_t ClimbAnimation = 0xC0; // Int64
            inline static constexpr std::uintptr_t DepthScale = 0x124; // Float32
            inline static constexpr std::uintptr_t Face = 0xC8; // Int64
            inline static constexpr std::uintptr_t FallAnimation = 0xD0; // Int64
            inline static constexpr std::uintptr_t GraphicTShirt = 0xD8; // Int64
            inline static constexpr std::uintptr_t HeadScale = 0x128; // Float32
            inline static constexpr std::uintptr_t HeightScale = 0x12C; // Float32
            inline static constexpr std::uintptr_t IdleAnimation = 0xE0; // Int64
            inline static constexpr std::uintptr_t JumpAnimation = 0xE8; // Int64
            inline static constexpr std::uintptr_t MoodAnimation = 0xF0; // Int64
            inline static constexpr std::uintptr_t NumberEmotesLoaded = 0x130; // Int32
            inline static constexpr std::uintptr_t Pants = 0xF8; // Int64
            inline static constexpr std::uintptr_t ProportionScale = 0x134; // Float32
            inline static constexpr std::uintptr_t ResetIncludesBodyParts = 0x13C; // Bool
            inline static constexpr std::uintptr_t RunAnimation = 0x100; // Int64
            inline static constexpr std::uintptr_t Shirt = 0x108; // Int64
            inline static constexpr std::uintptr_t StaticFacialAnimation = 0x13D; // Bool
            inline static constexpr std::uintptr_t SwimAnimation = 0x110; // Int64
            inline static constexpr std::uintptr_t UseAvatarSettings = 0x13E; // Bool
            inline static constexpr std::uintptr_t WalkAnimation = 0x118; // Int64
            inline static constexpr std::uintptr_t WidthScale = 0x138; // Float32
        };
        
        struct HumanoidRigDescription : Instance {
            inline static constexpr std::uintptr_t ChestRangeMax = 0x668; // Vector3
            inline static constexpr std::uintptr_t ChestRangeMin = 0x674; // Vector3
            inline static constexpr std::uintptr_t ChestSize = 0x878; // Float32
            inline static constexpr std::uintptr_t ChestTposeAdjustment = 0x218; // CoordinateFrame
            inline static constexpr std::uintptr_t HeadBaseRangeMax = 0x680; // Vector3
            inline static constexpr std::uintptr_t HeadBaseRangeMin = 0x68C; // Vector3
            inline static constexpr std::uintptr_t HeadBaseSize = 0x87C; // Float32
            inline static constexpr std::uintptr_t HeadBaseTposeAdjustment = 0x248; // CoordinateFrame
            inline static constexpr std::uintptr_t LeftAnkleRangeMax = 0x698; // Vector3
            inline static constexpr std::uintptr_t LeftAnkleRangeMin = 0x6A4; // Vector3
            inline static constexpr std::uintptr_t LeftAnkleSize = 0x880; // Float32
            inline static constexpr std::uintptr_t LeftAnkleTposeAdjustment = 0x278; // CoordinateFrame
            inline static constexpr std::uintptr_t LeftClavicleRangeMax = 0x6B0; // Vector3
            inline static constexpr std::uintptr_t LeftClavicleRangeMin = 0x6BC; // Vector3
            inline static constexpr std::uintptr_t LeftClavicleSize = 0x884; // Float32
            inline static constexpr std::uintptr_t LeftClavicleTposeAdjustment = 0x2A8; // CoordinateFrame
            inline static constexpr std::uintptr_t LeftElbowRangeMax = 0x6C8; // Vector3
            inline static constexpr std::uintptr_t LeftElbowRangeMin = 0x6D4; // Vector3
            inline static constexpr std::uintptr_t LeftElbowSize = 0x888; // Float32
            inline static constexpr std::uintptr_t LeftElbowTposeAdjustment = 0x2D8; // CoordinateFrame
            inline static constexpr std::uintptr_t LeftHipRangeMax = 0x6E0; // Vector3
            inline static constexpr std::uintptr_t LeftHipRangeMin = 0x6EC; // Vector3
            inline static constexpr std::uintptr_t LeftHipSize = 0x88C; // Float32
            inline static constexpr std::uintptr_t LeftHipTposeAdjustment = 0x308; // CoordinateFrame
            inline static constexpr std::uintptr_t LeftKneeRangeMax = 0x6F8; // Vector3
            inline static constexpr std::uintptr_t LeftKneeRangeMin = 0x704; // Vector3
            inline static constexpr std::uintptr_t LeftKneeSize = 0x890; // Float32
            inline static constexpr std::uintptr_t LeftKneeTposeAdjustment = 0x338; // CoordinateFrame
            inline static constexpr std::uintptr_t LeftShoulderRangeMax = 0x710; // Vector3
            inline static constexpr std::uintptr_t LeftShoulderRangeMin = 0x71C; // Vector3
            inline static constexpr std::uintptr_t LeftShoulderSize = 0x894; // Float32
            inline static constexpr std::uintptr_t LeftShoulderTposeAdjustment = 0x368; // CoordinateFrame
            inline static constexpr std::uintptr_t LeftToeBaseRangeMax = 0x728; // Vector3
            inline static constexpr std::uintptr_t LeftToeBaseRangeMin = 0x734; // Vector3
            inline static constexpr std::uintptr_t LeftToeBaseSize = 0x898; // Float32
            inline static constexpr std::uintptr_t LeftToeBaseTposeAdjustment = 0x398; // CoordinateFrame
            inline static constexpr std::uintptr_t LeftWristRangeMax = 0x740; // Vector3
            inline static constexpr std::uintptr_t LeftWristRangeMin = 0x74C; // Vector3
            inline static constexpr std::uintptr_t LeftWristSize = 0x89C; // Float32
            inline static constexpr std::uintptr_t LeftWristTposeAdjustment = 0x3C8; // CoordinateFrame
            inline static constexpr std::uintptr_t NeckRangeMax = 0x758; // Vector3
            inline static constexpr std::uintptr_t NeckRangeMin = 0x764; // Vector3
            inline static constexpr std::uintptr_t NeckSize = 0x8A0; // Float32
            inline static constexpr std::uintptr_t NeckTposeAdjustment = 0x3F8; // CoordinateFrame
            inline static constexpr std::uintptr_t OriginOffset = 0x428; // CoordinateFrame
            inline static constexpr std::uintptr_t RightAnkleRangeMax = 0x770; // Vector3
            inline static constexpr std::uintptr_t RightAnkleRangeMin = 0x77C; // Vector3
            inline static constexpr std::uintptr_t RightAnkleSize = 0x8A4; // Float32
            inline static constexpr std::uintptr_t RightAnkleTposeAdjustment = 0x458; // CoordinateFrame
            inline static constexpr std::uintptr_t RightClavicleRangeMax = 0x788; // Vector3
            inline static constexpr std::uintptr_t RightClavicleRangeMin = 0x794; // Vector3
            inline static constexpr std::uintptr_t RightClavicleSize = 0x8A8; // Float32
            inline static constexpr std::uintptr_t RightClavicleTposeAdjustment = 0x488; // CoordinateFrame
            inline static constexpr std::uintptr_t RightElbowRangeMax = 0x7A0; // Vector3
            inline static constexpr std::uintptr_t RightElbowRangeMin = 0x7AC; // Vector3
            inline static constexpr std::uintptr_t RightElbowSize = 0x8AC; // Float32
            inline static constexpr std::uintptr_t RightElbowTposeAdjustment = 0x4B8; // CoordinateFrame
            inline static constexpr std::uintptr_t RightHipRangeMax = 0x7B8; // Vector3
            inline static constexpr std::uintptr_t RightHipRangeMin = 0x7C4; // Vector3
            inline static constexpr std::uintptr_t RightHipSize = 0x8B0; // Float32
            inline static constexpr std::uintptr_t RightHipTposeAdjustment = 0x4E8; // CoordinateFrame
            inline static constexpr std::uintptr_t RightKneeRangeMax = 0x7D0; // Vector3
            inline static constexpr std::uintptr_t RightKneeRangeMin = 0x7DC; // Vector3
            inline static constexpr std::uintptr_t RightKneeSize = 0x8B4; // Float32
            inline static constexpr std::uintptr_t RightKneeTposeAdjustment = 0x518; // CoordinateFrame
            inline static constexpr std::uintptr_t RightShoulderRangeMax = 0x7E8; // Vector3
            inline static constexpr std::uintptr_t RightShoulderRangeMin = 0x7F4; // Vector3
            inline static constexpr std::uintptr_t RightShoulderSize = 0x8B8; // Float32
            inline static constexpr std::uintptr_t RightShoulderTposeAdjustment = 0x548; // CoordinateFrame
            inline static constexpr std::uintptr_t RightToeBaseRangeMax = 0x800; // Vector3
            inline static constexpr std::uintptr_t RightToeBaseRangeMin = 0x80C; // Vector3
            inline static constexpr std::uintptr_t RightToeBaseSize = 0x8BC; // Float32
            inline static constexpr std::uintptr_t RightToeBaseTposeAdjustment = 0x578; // CoordinateFrame
            inline static constexpr std::uintptr_t RightWristRangeMax = 0x818; // Vector3
            inline static constexpr std::uintptr_t RightWristRangeMin = 0x824; // Vector3
            inline static constexpr std::uintptr_t RightWristSize = 0x8C0; // Float32
            inline static constexpr std::uintptr_t RightWristTposeAdjustment = 0x5A8; // CoordinateFrame
            inline static constexpr std::uintptr_t RootRangeMax = 0x830; // Vector3
            inline static constexpr std::uintptr_t RootRangeMin = 0x83C; // Vector3
            inline static constexpr std::uintptr_t RootSize = 0x8C4; // Float32
            inline static constexpr std::uintptr_t RootTposeAdjustment = 0x5D8; // CoordinateFrame
            inline static constexpr std::uintptr_t SpineRangeMax = 0x848; // Vector3
            inline static constexpr std::uintptr_t SpineRangeMin = 0x854; // Vector3
            inline static constexpr std::uintptr_t SpineSize = 0x8C8; // Float32
            inline static constexpr std::uintptr_t SpineTposeAdjustment = 0x608; // CoordinateFrame
            inline static constexpr std::uintptr_t WaistRangeMax = 0x860; // Vector3
            inline static constexpr std::uintptr_t WaistRangeMin = 0x86C; // Vector3
            inline static constexpr std::uintptr_t WaistSize = 0x8CC; // Float32
            inline static constexpr std::uintptr_t WaistTposeAdjustment = 0x638; // CoordinateFrame
        };
        
        struct IKControl : Instance {
            inline static constexpr std::uintptr_t Enabled = 0x150; // Bool
            inline static constexpr std::uintptr_t EndEffectorOffset = 0xE0; // CoordinateFrame
            inline static constexpr std::uintptr_t Offset = 0x110; // CoordinateFrame
            inline static constexpr std::uintptr_t Priority = 0x140; // Int32
            inline static constexpr std::uintptr_t SmoothTime = 0x144; // Float32
            inline static constexpr std::uintptr_t Weight = 0x14C; // Float32
        };
        
        struct ILegacyStudioBridge : Instance {
        };
        
        struct IXPService : Instance {
        };
        
        struct ImageButton : GuiButton {
            inline static constexpr std::uintptr_t ContentImageSize = 0xE04; // Vector2
            inline static constexpr std::uintptr_t HoverImageContent = 0xD18; // Content
            inline static constexpr std::uintptr_t ImageContent = 0xD48; // Content
            inline static constexpr std::uintptr_t LocalizedImageContent = 0xD78; // Content
        };
        
        struct ImageHandleAdornment : HandleAdornment {
            inline static constexpr std::uintptr_t DoubleSided = 0x1C8; // Bool
            inline static constexpr std::uintptr_t Size = 0x1C0; // Vector2
        };
        
        struct ImageLabel : GuiLabel {
            inline static constexpr std::uintptr_t ContentImageSize = 0xB24; // Vector2
            inline static constexpr std::uintptr_t ImageContent = 0xA98; // Content
            inline static constexpr std::uintptr_t LocalizedImageContent = 0xAC8; // Content
        };
        
        struct ImageScreenCaptureService : Instance {
        };
        
        struct IncrementalPatchBuilder : Instance {
            inline static constexpr std::uintptr_t AddPathsToBundle = 0xB0; // Bool
            inline static constexpr std::uintptr_t BuildDebouncePeriod = 0x170; // Float64
            inline static constexpr std::uintptr_t HighCompression = 0xB1; // Bool
            inline static constexpr std::uintptr_t SerializePatch = 0xB2; // Bool
            inline static constexpr std::uintptr_t UseFileLevelCompressionInsteadOfChunk = 0xB3; // Bool
            inline static constexpr std::uintptr_t ZstdCompression = 0xB4; // Bool
        };
        
        struct InputAction : Instance {
            inline static constexpr std::uintptr_t DisplayName = 0xA0; // String
            inline static constexpr std::uintptr_t Enabled = 0xF4; // Bool
        };
        
        struct InputActionLabel : GuiObject {
            inline static constexpr std::uintptr_t ResolvedText = 0xA00; // String
        };
        
        struct InputBinding : Instance {
            inline static constexpr std::uintptr_t ClampMagnitudeToOne = 0x168; // Bool
            inline static constexpr std::uintptr_t Deadzone = 0x11C; // NumberRange
            inline static constexpr std::uintptr_t DisplayImage = 0xA0; // Content
            inline static constexpr std::uintptr_t DisplayName = 0xD0; // String
            inline static constexpr std::uintptr_t PointerIndex = 0x140; // Int32
            inline static constexpr std::uintptr_t PressedThreshold = 0x144; // Float32
            inline static constexpr std::uintptr_t ResponseCurve = 0x150; // Float32
            inline static constexpr std::uintptr_t Scale = 0x158; // Float32
            inline static constexpr std::uintptr_t Vector2Scale = 0x124; // Vector2
            inline static constexpr std::uintptr_t Vector3Scale = 0x110; // Vector3
        };
        
        struct InputContext : Instance {
            inline static constexpr std::uintptr_t Enabled = 0xA4; // Bool
            inline static constexpr std::uintptr_t Priority = 0xA0; // Int32
            inline static constexpr std::uintptr_t Sink = 0xA5; // Bool
        };
        
        struct InputObject : Instance {
            inline static constexpr std::uintptr_t Delta = 0xA0; // Vector3
        };
        
        struct InputReplayService : Instance {
        };
        
        struct InsertService : Instance {
            inline static constexpr std::uintptr_t AllowInsertFreeModels = 0xA8; // Bool
        };
        
        struct InstanceAdornment : GuiBase3d {
        };
        
        struct InstanceExtensionsService : Instance {
        };
        
        struct InstanceRegistryService : Instance {
        };
        
        struct IntConstrainedValue : ValueBase {
            inline static constexpr std::uintptr_t ConstrainedValue = 0xB0; // Int64
            inline static constexpr std::uintptr_t MaxValue = 0xA0; // Int64
            inline static constexpr std::uintptr_t MinValue = 0xA8; // Int64
            inline static constexpr std::uintptr_t Value = 0xB0; // Int64
            inline static constexpr std::uintptr_t value = 0xB0; // Int64
        };
        
        struct IntValue : ValueBase {
        };
        
        struct IntentService : Instance {
        };
        
        struct InternalMessagingService : Instance {
        };
        
        struct InternalMessagingServiceVerifier : Instance {
        };
        
        struct InternalSyncItem : Instance {
            inline static constexpr std::uintptr_t AutoSync = 0xC8; // Bool
            inline static constexpr std::uintptr_t Enabled = 0xC9; // Bool
        };
        
        struct InternalSyncService : Instance {
        };
        
        struct TriangleMeshPart : BasePart {
            inline static constexpr std::uintptr_t AeroMeshData = 0x178; // SharedString
            inline static constexpr std::uintptr_t InertiaMigrated = 0x248; // Bool
            inline static constexpr std::uintptr_t MeshSize = 0x210; // Vector3
            inline static constexpr std::uintptr_t PCDRequestId = 0x240; // Int32
            inline static constexpr std::uintptr_t UnscaledCofm = 0x21C; // Vector3
            inline static constexpr std::uintptr_t UnscaledVolInertiaDiags = 0x228; // Vector3
            inline static constexpr std::uintptr_t UnscaledVolInertiaOffDiags = 0x234; // Vector3
            inline static constexpr std::uintptr_t UnscaledVolume = 0x244; // Float32
        };
        
        struct PartOperation : TriangleMeshPart {
            inline static constexpr std::uintptr_t ChildData = 0x318; // BinaryString
            inline static constexpr std::uintptr_t ChildData2 = 0x378; // SharedString
            inline static constexpr std::uintptr_t ComponentIndex = 0x390; // Int32
            inline static constexpr std::uintptr_t Content = 0x2E8; // Content
            inline static constexpr std::uintptr_t MeshData = 0x350; // BinaryString
            inline static constexpr std::uintptr_t MeshData2 = 0x388; // SharedString
            inline static constexpr std::uintptr_t OffCentered = 0x3A4; // Bool
            inline static constexpr std::uintptr_t SmoothingAngle = 0x39C; // Float32
            inline static constexpr std::uintptr_t TriangleCount = 0x3A0; // Int32
            inline static constexpr std::uintptr_t UsePartColor = 0x3A5; // Bool
        };
        
        struct IntersectOperation : PartOperation {
        };
        
        struct InventoryPages : Pages {
        };
        
        struct JointsService : Instance {
        };
        
        struct KeyboardService : Instance {
        };
        
        struct Keyframe : Instance {
            inline static constexpr std::uintptr_t Time = 0xA0; // Float32
        };
        
        struct KeyframeMarker : Instance {
            inline static constexpr std::uintptr_t Value = 0xA0; // String
        };
        
        struct KeyframeSequence : AnimationClip {
            inline static constexpr std::uintptr_t AuthoredHipHeight = 0xC8; // Float32
        };
        
        struct KeyframeSequenceProvider : Instance {
        };
        
        struct Light : Instance {
            inline static constexpr std::uintptr_t Brightness = 0xB4; // Float32
            inline static constexpr std::uintptr_t Color = 0xA8; // Color3
            inline static constexpr std::uintptr_t Enabled = 0xB8; // Bool
            inline static constexpr std::uintptr_t Shadows = 0xB9; // Bool
        };
        
        struct Lighting : Instance {
            inline static constexpr std::uintptr_t Ambient = 0xB8; // Color3
            inline static constexpr std::uintptr_t Brightness = 0x100; // Float32
            inline static constexpr std::uintptr_t ColorShift_Bottom = 0xC4; // Color3
            inline static constexpr std::uintptr_t ColorShift_Top = 0xD0; // Color3
            inline static constexpr std::uintptr_t EnvironmentDiffuseScale = 0x104; // Float32
            inline static constexpr std::uintptr_t EnvironmentSpecularScale = 0x108; // Float32
            inline static constexpr std::uintptr_t ExposureCompensation = 0x10C; // Float32
            inline static constexpr std::uintptr_t FogColor = 0xDC; // Color3
            inline static constexpr std::uintptr_t FogEnd = 0x114; // Float32
            inline static constexpr std::uintptr_t FogStart = 0x118; // Float32
            inline static constexpr std::uintptr_t GeographicLatitude = 0x11C; // Float32
            inline static constexpr std::uintptr_t GlobalShadows = 0x12C; // Bool
            inline static constexpr std::uintptr_t OutdoorAmbient = 0xE8; // Color3
            inline static constexpr std::uintptr_t Outlines = 0x12D; // Bool
            inline static constexpr std::uintptr_t PrioritizeLightingQuality = 0x12E; // Bool
            inline static constexpr std::uintptr_t ShadowColor = 0xF4; // Color3
            inline static constexpr std::uintptr_t ShadowSoftness = 0x124; // Float32
            inline static constexpr std::uintptr_t TimePropertyObject = 0xA8; // InternalObject
            inline static constexpr std::uintptr_t TimeMicroseconds = 0xB0; // Int64
        };
        
        struct LineForce : Constraint {
            inline static constexpr std::uintptr_t ApplyAtCenterOfMass = 0x160; // Bool
            inline static constexpr std::uintptr_t InverseSquareLaw = 0x161; // Bool
            inline static constexpr std::uintptr_t Magnitude = 0x158; // Float32
            inline static constexpr std::uintptr_t MaxForce = 0x15C; // Float32
            inline static constexpr std::uintptr_t ReactionForceEnabled = 0x162; // Bool
        };
        
        struct LineHandleAdornment : HandleAdornment {
            inline static constexpr std::uintptr_t Length = 0x190; // Float32
            inline static constexpr std::uintptr_t Thickness = 0x194; // Float32
        };
        
        struct LinearVelocity : Constraint {
            inline static constexpr std::uintptr_t LineDirection = 0x180; // Vector3
            inline static constexpr std::uintptr_t MaxAxesForce = 0x220; // Vector3
            inline static constexpr std::uintptr_t MaxPlanarAxesForce = 0x1B0; // Vector2
            inline static constexpr std::uintptr_t PrimaryTangentAxis = 0x1E8; // Vector3
            inline static constexpr std::uintptr_t ReactionForceEnabled = 0x15C; // Bool
            inline static constexpr std::uintptr_t SecondaryTangentAxis = 0x1F4; // Vector3
            inline static constexpr std::uintptr_t VectorVelocity = 0x22C; // Vector3
        };
        
        struct LinkingService : Instance {
        };
        
        struct Script : BaseScript {
            inline static constexpr std::uintptr_t Source = 0x170; // ProtectedString
        };
        
        struct LocalScript : Script {
        };
        
        struct LocalizationService : Instance {
            inline static constexpr std::uintptr_t ForcePlayModeGameLocaleId = 0xB0; // String
            inline static constexpr std::uintptr_t ForcePlayModeRobloxLocaleId = 0xD0; // String
            inline static constexpr std::uintptr_t GameSourceLanguageId = 0xF0; // String
            inline static constexpr std::uintptr_t IsImageCaptureEnabled = 0x120; // Bool
            inline static constexpr std::uintptr_t RobloxForcePlayModeGameLocaleId = 0xB0; // String
            inline static constexpr std::uintptr_t RobloxForcePlayModeRobloxLocaleId = 0xD0; // String
            inline static constexpr std::uintptr_t RobloxLocaleId = 0x298; // String
            inline static constexpr std::uintptr_t ShouldUseCloudTable = 0x121; // Bool
            inline static constexpr std::uintptr_t ShouldUseImageLocalizationTable = 0x122; // Bool
            inline static constexpr std::uintptr_t SystemLocaleId = 0x348; // String
        };
        
        struct LodDataEntity : Instance {
            inline static constexpr std::uintptr_t EntityLodEnabled = 0x13C; // Bool
            inline static constexpr std::uintptr_t EntityModelSize = 0x120; // Vector3
            inline static constexpr std::uintptr_t EntityPosition = 0xF0; // CoordinateFrame
            inline static constexpr std::uintptr_t EntityScale = 0x12C; // Vector3
            inline static constexpr std::uintptr_t EntityVisible = 0x13D; // Bool
            inline static constexpr std::uintptr_t IsSlimEnabled = 0x13E; // Bool
            inline static constexpr std::uintptr_t SlimReplicationTimestampSec = 0xE8; // Float64
            inline static constexpr std::uintptr_t TranscoderFailureReason = 0xA0; // String
        };
        
        struct LodDataService : Instance {
        };
        
        struct LogReporterService : Instance {
        };
        
        struct LogService : Instance {
        };
        
        struct LoginService : Instance {
        };
        
        struct LuaSettings : Instance {
        };
        
        struct LuaWebService : Instance {
        };
        
        struct LuauExpressionService : Instance {
        };
        
        struct MLModelDeliveryService : Instance {
        };
        
        struct MLService : Instance {
        };
        
        struct MakeupDescription : Instance {
            inline static constexpr std::uintptr_t AssetId = 0xA8; // Int64
            inline static constexpr std::uintptr_t Order = 0xB4; // Int32
        };
        
        struct ManualSurfaceJointInstance : JointInstance {
        };
        
        struct ManualGlue : ManualSurfaceJointInstance {
        };
        
        struct ManualWeld : ManualSurfaceJointInstance {
        };
        
        struct MarkerCurve : Instance {
        };
        
        struct MarketplaceService : Instance {
        };
        
        struct MatchmakingService : Instance {
        };
        
        struct MaterialService : Instance {
            inline static constexpr std::uintptr_t AsphaltName = 0xB0; // String
            inline static constexpr std::uintptr_t BasaltName = 0xD0; // String
            inline static constexpr std::uintptr_t BrickName = 0xF0; // String
            inline static constexpr std::uintptr_t CardboardName = 0x110; // String
            inline static constexpr std::uintptr_t CarpetName = 0x130; // String
            inline static constexpr std::uintptr_t CeramicTilesName = 0x150; // String
            inline static constexpr std::uintptr_t ClayRoofTilesName = 0x170; // String
            inline static constexpr std::uintptr_t CobblestoneName = 0x190; // String
            inline static constexpr std::uintptr_t ConcreteName = 0x1B0; // String
            inline static constexpr std::uintptr_t CorrodedMetalName = 0x1D0; // String
            inline static constexpr std::uintptr_t CrackedLavaName = 0x1F0; // String
            inline static constexpr std::uintptr_t DiamondPlateName = 0x210; // String
            inline static constexpr std::uintptr_t FabricName = 0x230; // String
            inline static constexpr std::uintptr_t FoilName = 0x250; // String
            inline static constexpr std::uintptr_t GlacierName = 0x270; // String
            inline static constexpr std::uintptr_t GraniteName = 0x290; // String
            inline static constexpr std::uintptr_t GrassName = 0x2B0; // String
            inline static constexpr std::uintptr_t GroundName = 0x2D0; // String
            inline static constexpr std::uintptr_t IceName = 0x2F0; // String
            inline static constexpr std::uintptr_t LeafyGrassName = 0x310; // String
            inline static constexpr std::uintptr_t LeatherName = 0x330; // String
            inline static constexpr std::uintptr_t LimestoneName = 0x350; // String
            inline static constexpr std::uintptr_t MarbleName = 0x370; // String
            inline static constexpr std::uintptr_t MetalName = 0x390; // String
            inline static constexpr std::uintptr_t MudName = 0x3B0; // String
            inline static constexpr std::uintptr_t PavementName = 0x3D0; // String
            inline static constexpr std::uintptr_t PebbleName = 0x3F0; // String
            inline static constexpr std::uintptr_t PlasterName = 0x410; // String
            inline static constexpr std::uintptr_t PlasticName = 0x430; // String
            inline static constexpr std::uintptr_t RockName = 0x450; // String
            inline static constexpr std::uintptr_t RoofShinglesName = 0x470; // String
            inline static constexpr std::uintptr_t RubberName = 0x490; // String
            inline static constexpr std::uintptr_t SaltName = 0x4B0; // String
            inline static constexpr std::uintptr_t SandName = 0x4D0; // String
            inline static constexpr std::uintptr_t SandstoneName = 0x4F0; // String
            inline static constexpr std::uintptr_t SlateName = 0x510; // String
            inline static constexpr std::uintptr_t SmoothPlasticName = 0x530; // String
            inline static constexpr std::uintptr_t SnowName = 0x550; // String
            inline static constexpr std::uintptr_t Use2022Materials = 0x5B8; // Bool
            inline static constexpr std::uintptr_t Use2022MaterialsXml = 0x5B8; // Bool
            inline static constexpr std::uintptr_t WoodName = 0x570; // String
            inline static constexpr std::uintptr_t WoodPlanksName = 0x590; // String
        };
        
        struct MaterialVariant : Instance {
            inline static constexpr std::uintptr_t AvgMetalness = 0x1EC; // Int32
            inline static constexpr std::uintptr_t AvgRoughness = 0x1F0; // Int32
            inline static constexpr std::uintptr_t ColorMapContent = 0xA0; // Content
            inline static constexpr std::uintptr_t CustomPhysicalProperties = 0x1C0; // PhysicalProperties
            inline static constexpr std::uintptr_t EmissiveMaskContent = 0xD0; // Content
            inline static constexpr std::uintptr_t EmissiveStrength = 0x1F8; // Float32
            inline static constexpr std::uintptr_t EmissiveTint = 0x1DC; // Color3
            inline static constexpr std::uintptr_t MetalnessMapContent = 0x100; // Content
            inline static constexpr std::uintptr_t NormalMapContent = 0x130; // Content
            inline static constexpr std::uintptr_t RoughnessMapContent = 0x160; // Content
            inline static constexpr std::uintptr_t StudsPerTile = 0x200; // Float32
            inline static constexpr std::uintptr_t TexturePackContent = 0x190; // Content
        };
        
        struct MemStorageConnection : Instance {
        };
        
        struct MemStorageService : Instance {
        };
        
        struct MemoryStoreDistributedCounter : Instance {
        };
        
        struct MemoryStoreHashMap : Instance {
        };
        
        struct MemoryStoreHashMapPages : Pages {
        };
        
        struct MemoryStoreQueue : Instance {
        };
        
        struct MemoryStoreService : Instance {
        };
        
        struct MemoryStoreSortedMap : Instance {
        };
        
        struct MeshContentProvider : CacheableContentProvider {
        };
        
        struct MeshPart : TriangleMeshPart {
            inline static constexpr std::uintptr_t DoubleSided = 0x364; // Bool
            inline static constexpr std::uintptr_t HasJointOffset = 0x365; // Bool
            inline static constexpr std::uintptr_t HasSkinnedMesh = 0x366; // Bool
            inline static constexpr std::uintptr_t JointOffset = 0x350; // Vector3
            inline static constexpr std::uintptr_t MeshContent = 0x2E8; // Content
            inline static constexpr std::uintptr_t MeshID = 0x2E8; // ContentId
            inline static constexpr std::uintptr_t MeshId = 0x2E8; // ContentId
            inline static constexpr std::uintptr_t TextureContent = 0x318; // Content
            inline static constexpr std::uintptr_t TextureID = 0x318; // ContentId
            inline static constexpr std::uintptr_t VertexCount = 0x360; // Int32
        };
        
        struct MessageBusConnection : Instance {
        };
        
        struct MessageBusService : Instance {
        };
        
        struct MessagingService : Instance {
        };
        
        struct MicroProfilerService : Instance {
        };
        
        struct ModerationService : Instance {
        };
        
        struct ModuleScript : LuaSourceContainer {
            inline static constexpr std::uintptr_t Confidential = 0x180; // Bool
            inline static constexpr std::uintptr_t LinkedSource = 0xF0; // ContentId
            inline static constexpr std::uintptr_t Source = 0x118; // ProtectedString
            inline static constexpr std::uintptr_t UnrestrictedRequireAllowed = 0x150; // Bool
            inline static constexpr std::uintptr_t UnrestrictedRequireAllowedMask = 0x4;
        };
        
        struct MomentsService : Instance {
        };
        
        struct Motor : JointInstance {
        };
        
        struct Motor6D : Motor {
            inline static constexpr std::uintptr_t EnableSkinning = 0x198; // Bool
        };
        
        struct MotorFeature : Feature {
        };
        
        struct Mouse : Instance {
            inline static constexpr std::uintptr_t ViewSizeX = 0x252; // Int32
            inline static constexpr std::uintptr_t ViewSizeY = 0x252; // Int32
            inline static constexpr std::uintptr_t Owner = 0x138; // Pointer
            inline static constexpr std::uintptr_t OwnerControlBlock = 0x140; // Pointer
        };
        
        struct MouseService : Instance {
            inline static constexpr std::uintptr_t InputObject = 0xE8; // Pointer
            inline static constexpr std::uintptr_t InputObjectControlBlock = 0xF0; // Pointer
            inline static constexpr std::uintptr_t Size = 0x288; // EngineInternal
        };
        
        struct MultipleDocumentInterfaceInstance : Instance {
        };
        
        struct NegateOperation : PartOperation {
        };
        
        struct NetworkPeer : Instance {
            inline static constexpr std::uintptr_t ConcurrentRakPeer = 0x108; // Pointer
            inline static constexpr std::uintptr_t ConcurrentRakPeerControlBlock = 0x110; // Pointer
        };
        
        struct NetworkClient : NetworkPeer {
        };
        
        struct NetworkMarker : Instance {
        };
        
        struct NetworkServer : NetworkPeer {
        };
        
        struct NetworkSettings : Instance {
        };
        
        struct NoCollisionConstraint : Instance {
            inline static constexpr std::uintptr_t Enabled = 0xC0; // Bool
        };
        
        struct Noise : Instance {
            inline static constexpr std::uintptr_t Seed = 0x9C; // Int32
        };
        
        struct NonReplicatedCSGDictionaryService : FlyweightService {
        };
        
        struct NotificationService : Instance {
            inline static constexpr std::uintptr_t IsConnected = 0xC8; // Bool
            inline static constexpr std::uintptr_t IsLuaChatEnabled = 0xC9; // Bool
            inline static constexpr std::uintptr_t IsLuaGameDetailsEnabled = 0xCA; // Bool
        };
        
        struct PoseBase : Instance {
            inline static constexpr std::uintptr_t Weight = 0xA8; // Float32
        };
        
        struct NumberPose : PoseBase {
            inline static constexpr std::uintptr_t Value = 0xB8; // Float64
        };
        
        struct NumberValue : ValueBase {
            inline static constexpr std::uintptr_t Value = 0xA0; // Float64
        };
        
        struct ObjectValue : ValueBase {
        };
        
        struct OmniRecommendationsService : Instance {
        };
        
        struct OpenCloudApiV1 : Instance {
        };
        
        struct OpenCloudService : Instance {
        };
        
        struct OperationGraph : Instance {
        };
        
        struct OrderedDataStore : GlobalDataStore {
        };
        
        struct OutfitPages : Pages {
        };
        
        struct PackageLink : Instance {
            inline static constexpr std::uintptr_t AutoUpdate = 0x124; // Bool
            inline static constexpr std::uintptr_t CanAutoUpdate = 0x125; // Bool
            inline static constexpr std::uintptr_t DefaultName = 0xD0; // String
            inline static constexpr std::uintptr_t HasNewVersion = 0x126; // Bool
            inline static constexpr std::uintptr_t ModifiedState = 0x120; // Int32
            inline static constexpr std::uintptr_t PackageContent = 0xA0; // Content
            inline static constexpr std::uintptr_t PackageContentSerialize = 0xA0; // Content
            inline static constexpr std::uintptr_t PackageGuid = 0x110; // Int64
            inline static constexpr std::uintptr_t SerializedDefaultAttributes = 0xF0; // BinaryString
            inline static constexpr std::uintptr_t VersionIdSerialize = 0x118; // Int64
            inline static constexpr std::uintptr_t VersionNumber = 0x118; // Int64
        };
        
        struct PackageService : Instance {
        };
        
        struct Packages : Instance {
            inline static constexpr std::uintptr_t IsDehydrated = 0xB0; // Bool
            inline static constexpr std::uintptr_t OverridesRecalculated = 0xB1; // Bool
            inline static constexpr std::uintptr_t ShellPackagesCount = 0xA8; // Int32
            inline static constexpr std::uintptr_t SkippedInstancesCount = 0xAC; // Int32
        };
        
        struct Pants : Clothing {
        };
        
        struct ParabolaAdornment : PVAdornment {
            inline static constexpr std::uintptr_t A = 0xE8; // Float32
            inline static constexpr std::uintptr_t B = 0xEC; // Float32
            inline static constexpr std::uintptr_t C = 0xF0; // Float32
            inline static constexpr std::uintptr_t Range = 0xF4; // Float32
            inline static constexpr std::uintptr_t Thickness = 0xF8; // Float32
        };
        
        struct PartOperationAsset : Instance {
            inline static constexpr std::uintptr_t ChildData = 0x98; // BinaryString
            inline static constexpr std::uintptr_t MeshData = 0xB8; // BinaryString
        };
        
        struct ParticleEmitter : Instance {
            inline static constexpr std::uintptr_t Acceleration = 0x1C8; // Vector3
            inline static constexpr std::uintptr_t Brightness = 0x204; // Float32
            inline static constexpr std::uintptr_t Drag = 0x208; // Float32
            inline static constexpr std::uintptr_t Enabled = 0x250; // Bool
            inline static constexpr std::uintptr_t FlipbookBlendFrames = 0x251; // Bool
            inline static constexpr std::uintptr_t FlipbookFramerate = 0x1D4; // NumberRange
            inline static constexpr std::uintptr_t FlipbookSizeX = 0x218; // Int32
            inline static constexpr std::uintptr_t FlipbookSizeY = 0x21C; // Int32
            inline static constexpr std::uintptr_t FlipbookStartRandom = 0x252; // Bool
            inline static constexpr std::uintptr_t Lifetime = 0x1DC; // NumberRange
            inline static constexpr std::uintptr_t LightEmission = 0x220; // Float32
            inline static constexpr std::uintptr_t LightInfluence = 0x224; // Float32
            inline static constexpr std::uintptr_t LocalTransparencyModifier = 0x228; // Float32
            inline static constexpr std::uintptr_t LockedToPart = 0x253; // Bool
            inline static constexpr std::uintptr_t Rate = 0x230; // Float32
            inline static constexpr std::uintptr_t RotSpeed = 0x1E4; // NumberRange
            inline static constexpr std::uintptr_t Rotation = 0x1EC; // NumberRange
            inline static constexpr std::uintptr_t ShapePartial = 0x23C; // Float32
            inline static constexpr std::uintptr_t Size = 0xA0; // NumberSequence
            inline static constexpr std::uintptr_t Speed = 0x1F4; // NumberRange
            inline static constexpr std::uintptr_t SpreadAngle = 0x1FC; // Vector2
            inline static constexpr std::uintptr_t Squash = 0xE0; // NumberSequence
            inline static constexpr std::uintptr_t TextureContent = 0x198; // Content
            inline static constexpr std::uintptr_t TimeScale = 0x244; // Float32
            inline static constexpr std::uintptr_t Transparency = 0x120; // NumberSequence
            inline static constexpr std::uintptr_t VelocityInheritance = 0x248; // Float32
            inline static constexpr std::uintptr_t VelocitySpread = 0x1FC; // Float32
            inline static constexpr std::uintptr_t WindAffectsDrag = 0x254; // Bool
            inline static constexpr std::uintptr_t ZOffset = 0x24C; // Float32
        };
        
        struct ParticleEmitter2D : Instance {
            inline static constexpr std::uintptr_t Acceleration = 0x1E8; // Vector2
            inline static constexpr std::uintptr_t Blend = 0x228; // Float32
            inline static constexpr std::uintptr_t Brightness = 0x22C; // Float32
            inline static constexpr std::uintptr_t Drag = 0x230; // Float32
            inline static constexpr std::uintptr_t EmissionAngle = 0x234; // Float32
            inline static constexpr std::uintptr_t EmissionOffset = 0x1F0; // Vector2
            inline static constexpr std::uintptr_t EmissionSpread = 0x1F8; // Vector2
            inline static constexpr std::uintptr_t Enabled = 0x260; // Bool
            inline static constexpr std::uintptr_t FlipbookBlendFrames = 0x261; // Bool
            inline static constexpr std::uintptr_t FlipbookFramerate = 0x200; // NumberRange
            inline static constexpr std::uintptr_t FlipbookSizeX = 0x244; // Int32
            inline static constexpr std::uintptr_t FlipbookSizeY = 0x248; // Int32
            inline static constexpr std::uintptr_t FlipbookStartRandom = 0x262; // Bool
            inline static constexpr std::uintptr_t Lifetime = 0x208; // NumberRange
            inline static constexpr std::uintptr_t LightEmission = 0x24C; // Float32
            inline static constexpr std::uintptr_t LockedToParent = 0x263; // Bool
            inline static constexpr std::uintptr_t Rate = 0x250; // Float32
            inline static constexpr std::uintptr_t RotSpeed = 0x210; // NumberRange
            inline static constexpr std::uintptr_t Rotation = 0x218; // NumberRange
            inline static constexpr std::uintptr_t Speed = 0x220; // NumberRange
            inline static constexpr std::uintptr_t SpreadAngle = 0x254; // Float32
            inline static constexpr std::uintptr_t Squash = 0xE0; // NumberSequence
            inline static constexpr std::uintptr_t TextureContent = 0x198; // Content
            inline static constexpr std::uintptr_t TimeScale = 0x258; // Float32
            inline static constexpr std::uintptr_t Transparency = 0x120; // NumberSequence
            inline static constexpr std::uintptr_t ZIndex = 0x25C; // Int32
        };
        
        struct PartyEmulatorService : Instance {
        };
        
        struct PatchMapping : Instance {
            inline static constexpr std::uintptr_t FlattenTree = 0xD8; // Bool
            inline static constexpr std::uintptr_t TargetPath = 0xB8; // String
        };
        
        struct Path : Instance {
        };
        
        struct Path2D : GuiBase {
            inline static constexpr std::uintptr_t SelectedControlPoint = 0xD4; // Int32
            inline static constexpr std::uintptr_t Transparency = 0xDC; // Float32
        };
        
        struct Path3D : Instance {
        };
        
        struct PathfindingLink : Instance {
            inline static constexpr std::uintptr_t IsBidirectional = 0xE0; // Bool
            inline static constexpr std::uintptr_t Label = 0xA0; // String
        };
        
        struct PathfindingModifier : Instance {
            inline static constexpr std::uintptr_t Label = 0xA0; // String
            inline static constexpr std::uintptr_t PassThrough = 0xC0; // Bool
        };
        
        struct PathfindingService : Instance {
        };
        
        struct PerformanceControlService : Instance {
        };
        
        struct PermissionsService : Instance {
        };
        
        struct PhysicsActivitySensor : SensorBase {
            inline static constexpr std::uintptr_t Active = 0x238; // Bool
            inline static constexpr std::uintptr_t Position = 0x220; // Vector3
            inline static constexpr std::uintptr_t Size = 0x22C; // Vector3
        };
        
        struct PhysicsService : Instance {
        };
        
        struct PhysicsSettings : Instance {
        };
        
        struct PinShortcutService : Instance {
        };
        
        struct PitchShiftSoundEffect : SoundEffect {
            inline static constexpr std::uintptr_t Octave = 0xE0; // Float32
        };
        
        struct PlaceAssetIdsService : Instance {
        };
        
        struct PlaceStatsService : Instance {
        };
        
        struct PlaneConstraint : Constraint {
        };
        
        struct Plane : PlaneConstraint {
        };
        
        struct Platform : Part {
        };
        
        struct PlatformCloudStorageService : Instance {
        };
        
        struct PlatformFriendsService : Instance {
        };
        
        struct PlatformLibraries : Instance {
        };
        
        struct Player : Instance {
            inline static constexpr std::uintptr_t AccountAge = 0x354; // Int32
            inline static constexpr std::uintptr_t AccountAgeReplicate = 0x354; // Int32
            inline static constexpr std::uintptr_t AppearanceDidLoad = 0x3B8; // Bool
            inline static constexpr std::uintptr_t AutoJumpEnabled = 0x3B9; // Bool
            inline static constexpr std::uintptr_t CameraFieldOfView = 0x35C; // Float32
            inline static constexpr std::uintptr_t CameraFrustumRequested = 0x3BA; // Bool
            inline static constexpr std::uintptr_t CameraMaxZoomDistance = 0x360; // Float32
            inline static constexpr std::uintptr_t CameraMinZoomDistance = 0x364; // Float32
            inline static constexpr std::uintptr_t CameraViewportSize = 0x34C; // Vector2
            inline static constexpr std::uintptr_t CanLoadCharacterAppearance = 0x3BB; // Bool
            inline static constexpr std::uintptr_t CharacterAppearance = 0xC0; // String
            inline static constexpr std::uintptr_t CharacterAppearanceId = 0x2F8; // Int64
            inline static constexpr std::uintptr_t ChararacterRegionId = 0x340; // Vector3
            inline static constexpr std::uintptr_t ChatAvailabilityStatus = 0xE0; // String
            inline static constexpr std::uintptr_t CloudEditCameraCoordinateFrame = 0x310; // CoordinateFrame
            inline static constexpr std::uintptr_t CloudEditPlayerActive = 0x3BC; // Bool
            inline static constexpr std::uintptr_t CountryRegionCodeReplicate = 0x100; // String
            inline static constexpr std::uintptr_t DataComplexityLimit = 0x370; // Int32
            inline static constexpr std::uintptr_t DataReady = 0x3BD; // Bool
            inline static constexpr std::uintptr_t DevEnableMouseLock = 0x3BE; // Bool
            inline static constexpr std::uintptr_t DisplayName = 0x120; // String
            inline static constexpr std::uintptr_t FollowUserId = 0x300; // Int64
            inline static constexpr std::uintptr_t FollowUserIdReplicated = 0x300; // Int64
            inline static constexpr std::uintptr_t GameplayPaused = 0x3BF; // Bool
            inline static constexpr std::uintptr_t HasRobloxSubscription = 0x3C0; // Bool
            inline static constexpr std::uintptr_t HasVerifiedBadge = 0x3C1; // Bool
            inline static constexpr std::uintptr_t HealthDisplayDistance = 0x38C; // Float32
            inline static constexpr std::uintptr_t InputLatency = 0x390; // Int32
            inline static constexpr std::uintptr_t InternalCharacterAppearanceLoaded = 0x3C2; // Bool
            inline static constexpr std::uintptr_t LocaleId = 0x750; // String
            inline static constexpr std::uintptr_t MaximumSimulationRadius = 0x394; // Float32
            inline static constexpr std::uintptr_t MembershipType = 0x398; // MembershipType
            inline static constexpr std::uintptr_t NameDisplayDistance = 0x39C; // Float32
            inline static constexpr std::uintptr_t NeedRegionalFallback = 0x3C3; // Bool
            inline static constexpr std::uintptr_t Neutral = 0x3C4; // Bool
            inline static constexpr std::uintptr_t OsPlatform = 0x140; // String
            inline static constexpr std::uintptr_t PartyId = 0x160; // String
            inline static constexpr std::uintptr_t PlatformName = 0x180; // String
            inline static constexpr std::uintptr_t RawJoinData = 0x1A0; // BinaryString
            inline static constexpr std::uintptr_t SimulationRadius = 0x3A0; // Float32
            inline static constexpr std::uintptr_t StepIdOffset = 0x3A4; // Int32
            inline static constexpr std::uintptr_t TeamColor = 0x3A8; // BrickColor
            inline static constexpr std::uintptr_t Teleported = 0x3C5; // Bool
            inline static constexpr std::uintptr_t TeleportedIn = 0x3C6; // Bool
            inline static constexpr std::uintptr_t ThirdPartyTextChatRestrictionStatus = 0x3AC; // ChatRestrictionStatus
            inline static constexpr std::uintptr_t UnfilteredChat = 0x3C7; // Bool
            inline static constexpr std::uintptr_t VRDevice = 0x1C0; // String
            inline static constexpr std::uintptr_t VREnabled = 0x3C8; // Bool
            inline static constexpr std::uintptr_t VoiceChatVolume = 0x3B4; // Float32
            inline static constexpr std::uintptr_t Mouse = 0x1210; // Pointer
            inline static constexpr std::uintptr_t MouseControlBlock = 0x1218; // Pointer
        };
        
        struct PlayerData : Instance {
        };
        
        struct PlayerDataRecord : Instance {
        };
        
        struct PlayerDataRecordConfig : Instance {
        };
        
        struct PlayerDataService : Instance {
        };
        
        struct PlayerEmulatorService : Instance {
            inline static constexpr std::uintptr_t CustomPoliciesEnabled = 0x114; // Bool
            inline static constexpr std::uintptr_t EmulatedCountryCode = 0xB0; // String
            inline static constexpr std::uintptr_t EmulatedGameLocale = 0xD0; // String
            inline static constexpr std::uintptr_t PlayerEmulationEnabled = 0x115; // Bool
            inline static constexpr std::uintptr_t PseudolocalizationEnabled = 0x116; // Bool
            inline static constexpr std::uintptr_t SerializedEmulatedPolicyInfo = 0xF0; // BinaryString
            inline static constexpr std::uintptr_t TextElongationFactor = 0x110; // Int32
        };
        
        struct PlayerGui : BasePlayerGui {
            inline static constexpr std::uintptr_t CurrentScreenOrientation = 0x178; // ScreenOrientation
            inline static constexpr std::uintptr_t InputBindingMappingsRaw = 0x148; // BinaryString
        };
        
        struct PlayerHydrationService : Instance {
        };
        
        struct PlayerListConfiguration : BaseCoreGuiConfiguration {
            inline static constexpr std::uintptr_t Open = 0xA0; // Bool
        };
        
        struct PlayerMouse : Mouse {
        };
        
        struct PlayerScripts : Instance {
        };
        
        struct PlayerViewService : Instance {
        };
        
        struct Players : Instance {
            inline static constexpr std::uintptr_t BanningEnabled = 0x134; // Bool
            inline static constexpr std::uintptr_t CharacterAutoLoads = 0x135; // Bool
            inline static constexpr std::uintptr_t MaxPlayers = 0x128; // Int32
            inline static constexpr std::uintptr_t MaxPlayersInternal = 0x128; // Int32
            inline static constexpr std::uintptr_t PreferredPlayers = 0x12C; // Int32
            inline static constexpr std::uintptr_t PreferredPlayersInternal = 0x12C; // Int32
            inline static constexpr std::uintptr_t RespawnTime = 0x130; // Float32
            inline static constexpr std::uintptr_t ServerLogPrefix = 0xC8; // String
            inline static constexpr std::uintptr_t UseStrafingAnimations = 0x136; // Bool
        };
        
        struct Plugin : Instance {
            inline static constexpr std::uintptr_t DisableUIDragDetectorDrags = 0xC4; // Bool
            inline static constexpr std::uintptr_t HostDataModelType = 0xC0; // StudioGameStateType
            inline static constexpr std::uintptr_t IsDebuggable = 0xC5; // Bool
            inline static constexpr std::uintptr_t UsesAssetInsertionDrag = 0xC6; // Bool
        };
        
        struct PluginAction : Instance {
            inline static constexpr std::uintptr_t AllowBinding = 0x140; // Bool
            inline static constexpr std::uintptr_t Checked = 0x118; // Bool
            inline static constexpr std::uintptr_t Enabled = 0x119; // Bool
            inline static constexpr std::uintptr_t StatusTip = 0x120; // String
            inline static constexpr std::uintptr_t Text = 0xF8; // String
            inline static constexpr std::uintptr_t Visible = 0x11A; // Bool
        };
        
        struct PluginCapabilities : Instance {
        };
        
        struct PluginDebugService : Instance {
        };
        
        struct PluginDragEvent : Instance {
        };
        
        struct PluginGuiService : Instance {
        };
        
        struct PluginManager : Instance {
        };
        
        struct PluginManagerInterface : Instance {
        };
        
        struct PluginMenu : Instance {
            inline static constexpr std::uintptr_t Title = 0xF8; // String
            inline static constexpr std::uintptr_t Visible = 0x118; // Bool
        };
        
        struct PluginMouse : Mouse {
        };
        
        struct PluginToolbar : Instance {
        };
        
        struct PluginToolbarButton : Instance {
            inline static constexpr std::uintptr_t ClickableWhenViewportHidden = 0x110; // Bool
            inline static constexpr std::uintptr_t Enabled = 0x111; // Bool
            inline static constexpr std::uintptr_t IconContent = 0xE0; // Content
        };
        
        struct PointLight : Light {
            inline static constexpr std::uintptr_t Range = 0xC0; // Float32
        };
        
        struct PointsService : Instance {
        };
        
        struct PolicyService : Instance {
        };
        
        struct PopLatencyService : Instance {
        };
        
        struct Pose : PoseBase {
            inline static constexpr std::uintptr_t CFrame = 0xB8; // CoordinateFrame
        };
        
        struct Preloaded : Instance {
        };
        
        struct PrismaticConstraint : SlidingBallConstraint {
        };
        
        struct ProceduralBehaviorSchedulerService : Instance {
        };
        
        struct ProceduralModel : Model {
            inline static constexpr std::uintptr_t Dirty = 0x36C; // Bool
            inline static constexpr std::uintptr_t Size = 0x360; // Vector3
        };
        
        struct ProcessInstancePhysicsService : Instance {
        };
        
        struct ProjectService : Instance {
        };
        
        struct ProximityPrompt : Instance {
            inline static constexpr std::uintptr_t AutoLocalize = 0x11C; // Bool
            inline static constexpr std::uintptr_t ClickablePrompt = 0x11D; // Bool
            inline static constexpr std::uintptr_t Enabled = 0x11E; // Bool
            inline static constexpr std::uintptr_t HoldDuration = 0x108; // Float32
            inline static constexpr std::uintptr_t MaxActivationDistance = 0x110; // Float32
            inline static constexpr std::uintptr_t MaxIndicatorDistance = 0x114; // Float32
            inline static constexpr std::uintptr_t ObjectText = 0xB8; // String
            inline static constexpr std::uintptr_t RequiresLineOfSight = 0x11F; // Bool
            inline static constexpr std::uintptr_t UIOffset = 0xF8; // Vector2
        };
        
        struct ProximityPromptService : Instance {
            inline static constexpr std::uintptr_t Enabled = 0xD0; // Bool
            inline static constexpr std::uintptr_t MaxIndicatorsVisible = 0xC8; // Int32
            inline static constexpr std::uintptr_t MaxPromptsVisible = 0xCC; // Int32
        };
        
        struct PublishService : Instance {
        };
        
        struct PyramidHandleAdornment : HandleAdornment {
            inline static constexpr std::uintptr_t DoubleSided = 0x1A0; // Bool
            inline static constexpr std::uintptr_t Height = 0x190; // Float32
            inline static constexpr std::uintptr_t Sides = 0x198; // Int32
            inline static constexpr std::uintptr_t Size = 0x19C; // Float32
        };
        
        struct QWidgetPluginGui : PluginGui {
        };
        
        struct QueueService : Instance {
        };
        
        struct RTAnimationTracker : Instance {
            inline static constexpr std::uintptr_t Active = 0x124; // Bool
            inline static constexpr std::uintptr_t EnableFallbackAudioInput = 0x125; // Bool
            inline static constexpr std::uintptr_t SessionName = 0xF0; // String
        };
        
        struct RayValue : ValueBase {
            inline static constexpr std::uintptr_t Value = 0xA0; // Ray
        };
        
        struct RbxAnalyticsService : Instance {
        };
        
        struct RealtimeMedia : Instance {
            inline static constexpr std::uintptr_t AudioInputActive = 0x2A0; // Bool
            inline static constexpr std::uintptr_t ForwardInput = 0x2A1; // Bool
            inline static constexpr std::uintptr_t IsConnected = 0x2A2; // Bool
            inline static constexpr std::uintptr_t IsConnectionWeak = 0x2A3; // Bool
        };
        
        struct RecommendationPages : Pages {
        };
        
        struct RecommendationService : Instance {
        };
        
        struct ReflectionService : Instance {
        };
        
        struct RelativeGui : GuiObject {
        };
        
        struct RemoteDebuggerServer : Instance {
        };
        
        struct RemoteEvent : BaseRemoteEvent {
        };
        
        struct RemoteFunction : Instance {
        };
        
        struct RenderSettings : Instance {
        };
        
        struct RenderingTest : Instance {
            inline static constexpr std::uintptr_t CFrame = 0xE8; // CoordinateFrame
            inline static constexpr std::uintptr_t ComparisonDiffThreshold = 0x1D0; // Int32
            inline static constexpr std::uintptr_t ComparisonPsnrThreshold = 0x1D4; // Float32
            inline static constexpr std::uintptr_t Description = 0xA0; // String
            inline static constexpr std::uintptr_t Orientation = 0xE8; // Vector3
            inline static constexpr std::uintptr_t PerfTest = 0x124; // Bool
            inline static constexpr std::uintptr_t QualityAuto = 0x1C8; // Bool
            inline static constexpr std::uintptr_t RenderingTestFrameCount = 0x11C; // Int32
            inline static constexpr std::uintptr_t ShouldSkip = 0x125; // Bool
            inline static constexpr std::uintptr_t Ticket = 0xC0; // String
            inline static constexpr std::uintptr_t Timeout = 0x120; // Int32
        };
        
        struct ReplicatedFirst : Instance {
        };
        
        struct ReplicatedStorage : Instance {
        };
        
        struct RequestOrchestratorService : Instance {
        };
        
        struct ReverbSoundEffect : SoundEffect {
            inline static constexpr std::uintptr_t DecayTime = 0xE0; // Float32
            inline static constexpr std::uintptr_t Density = 0xE4; // Float32
            inline static constexpr std::uintptr_t Diffusion = 0xE8; // Float32
            inline static constexpr std::uintptr_t DryLevel = 0xEC; // Float32
            inline static constexpr std::uintptr_t WetLevel = 0xF0; // Float32
        };
        
        struct RigidConstraint : Constraint {
            inline static constexpr std::uintptr_t EnableSkinning = 0x150; // Bool
        };
        
        struct RobloxPluginGuiService : Instance {
        };
        
        struct RobloxReplicatedStorage : Instance {
        };
        
        struct RobloxSerializableInstance : Instance {
        };
        
        struct RobloxServerStorage : Instance {
        };
        
        struct RocketPropulsion : BodyMover {
            inline static constexpr std::uintptr_t Active = 0x2B8; // Bool
            inline static constexpr std::uintptr_t CartoonFactor = 0x298; // Float32
            inline static constexpr std::uintptr_t MaxSpeed = 0x29C; // Float32
            inline static constexpr std::uintptr_t MaxThrust = 0x2A0; // Float32
            inline static constexpr std::uintptr_t MaxTorque = 0x280; // Vector3
            inline static constexpr std::uintptr_t TargetOffset = 0x28C; // Vector3
            inline static constexpr std::uintptr_t TargetRadius = 0x2A4; // Float32
            inline static constexpr std::uintptr_t ThrustD = 0x2A8; // Float32
            inline static constexpr std::uintptr_t ThrustP = 0x2AC; // Float32
            inline static constexpr std::uintptr_t TurnD = 0x2B0; // Float32
            inline static constexpr std::uintptr_t TurnP = 0x2B4; // Float32
        };
        
        struct RodConstraint : Constraint {
            inline static constexpr std::uintptr_t Length = 0x158; // Float32
            inline static constexpr std::uintptr_t LimitAngle0 = 0x15C; // Float32
            inline static constexpr std::uintptr_t LimitAngle1 = 0x160; // Float32
            inline static constexpr std::uintptr_t LimitsEnabled = 0x168; // Bool
            inline static constexpr std::uintptr_t Thickness = 0x164; // Float32
        };
        
        struct RolloutValidation : Instance {
            inline static constexpr std::uintptr_t AdditionalFluffOne = 0x1D0; // Int32
            inline static constexpr std::uintptr_t AdditionalFluffThree = 0x1D4; // Float32
            inline static constexpr std::uintptr_t AdditionalFluffTwo = 0x390; // Bool
            inline static constexpr std::uintptr_t CreationVersion = 0x1D8; // Int32
            inline static constexpr std::uintptr_t FirstBinaryExpectedValue = 0x98; // String
            inline static constexpr std::uintptr_t FirstSharedExpectedValue = 0xD8; // String
            inline static constexpr std::uintptr_t GenerationStrategy = 0x1DC; // Int32
            inline static constexpr std::uintptr_t SecondBinaryExpectedValue = 0xF8; // String
            inline static constexpr std::uintptr_t SecondSharedExpectedValue = 0x138; // String
            inline static constexpr std::uintptr_t ThirdBinaryExpectedValue = 0x158; // String
            inline static constexpr std::uintptr_t ThirdSharedExpectedValue = 0x198; // String
        };
        
        struct RolloutValidationService : Instance {
        };
        
        struct RomarkRbxAnalyticsService : Instance {
        };
        
        struct RomarkService : Instance {
        };
        
        struct RopeConstraint : Constraint {
            inline static constexpr std::uintptr_t Length = 0x158; // Float32
            inline static constexpr std::uintptr_t Restitution = 0x15C; // Float32
            inline static constexpr std::uintptr_t Thickness = 0x160; // Float32
            inline static constexpr std::uintptr_t WinchEnabled = 0x174; // Bool
            inline static constexpr std::uintptr_t WinchForce = 0x164; // Float32
            inline static constexpr std::uintptr_t WinchResponsiveness = 0x168; // Float32
            inline static constexpr std::uintptr_t WinchSpeed = 0x16C; // Float32
            inline static constexpr std::uintptr_t WinchTarget = 0x170; // Float32
        };
        
        struct Rotate : JointInstance {
        };
        
        struct RotateP : DynamicRotate {
        };
        
        struct RotateV : DynamicRotate {
        };
        
        struct RotationCurve : Instance {
        };
        
        struct RtMessagingService : Instance {
        };
        
        struct RunService : Instance {
        };
        
        struct StatsItem : Instance {
        };
        
        struct RunningAverageItemDouble : StatsItem {
        };
        
        struct RunningAverageItemInt : StatsItem {
        };
        
        struct RunningAverageTimeIntervalItem : StatsItem {
        };
        
        struct RuntimeContentService : Instance {
        };
        
        struct RuntimeScriptService : Instance {
        };
        
        struct SafetyService : Instance {
            inline static constexpr std::uintptr_t IsCaptureModeForReport = 0xA8; // Bool
        };
        
        struct SceneAnalysisService : Instance {
        };
        
        struct ScreenshotCapture : Capture {
        };
        
        struct ScreenshotHud : Instance {
            inline static constexpr std::uintptr_t CameraButtonPosition = 0xC8; // UDim2
            inline static constexpr std::uintptr_t CloseButtonPosition = 0xD8; // UDim2
            inline static constexpr std::uintptr_t CloseWhenScreenshotTaken = 0xEC; // Bool
            inline static constexpr std::uintptr_t ExperienceNameOverlayEnabled = 0xED; // Bool
            inline static constexpr std::uintptr_t HideCoreGuiForCaptures = 0xEE; // Bool
            inline static constexpr std::uintptr_t HidePlayerGuiForCaptures = 0xEF; // Bool
            inline static constexpr std::uintptr_t UsernameOverlayEnabled = 0xF0; // Bool
            inline static constexpr std::uintptr_t Visible = 0xF1; // Bool
        };
        
        struct ScriptBuilder : Instance {
        };
        
        struct ScriptContext : Instance {
            inline static constexpr std::uintptr_t ScriptsDisabled = 0xB0; // Bool
            inline static constexpr std::uintptr_t FacetResume = 0x958; // EngineInternal
            inline static constexpr std::uintptr_t DataModel = 0x100; // Pointer
            inline static constexpr std::uintptr_t RequireBypass = 0x988; // Bool
            inline static constexpr std::uintptr_t LoadedModules = 0x9A8; // EngineInternal
            inline static constexpr std::uintptr_t SteppedList = 0x110; // EngineInternal
        };
        
        struct ScriptDebugger : Instance {
            inline static constexpr std::uintptr_t CurrentLine = 0xB0; // Int32
            inline static constexpr std::uintptr_t IsDebugging = 0x218; // Bool
        };
        
        struct ScriptDebuggerService : Instance {
        };
        
        struct ScriptProfilerService : Instance {
        };
        
        struct ScriptRegistrationService : Instance {
        };
        
        struct ScriptRuntime : Instance {
        };
        
        struct ScriptService : Instance {
        };
        
        struct ScrollingFrame : GuiObject {
            inline static constexpr std::uintptr_t BottomImageContent = 0x9D0; // Content
            inline static constexpr std::uintptr_t CanvasPosition = 0xAA4; // Vector2
            inline static constexpr std::uintptr_t DraggingScrollBar = 0xAC0; // DraggingScrollBar
            inline static constexpr std::uintptr_t HorizontalBarRect = 0xA70; // Rect2D
            inline static constexpr std::uintptr_t MaxCanvasPosition = 0xAAC; // Vector2
            inline static constexpr std::uintptr_t MidImageContent = 0xA00; // Content
            inline static constexpr std::uintptr_t ScrollRate = 0xAD4; // Float32
            inline static constexpr std::uintptr_t ScrollVelocity = 0xAB4; // Vector2
            inline static constexpr std::uintptr_t SmoothScroll = 0xAE5; // Bool
            inline static constexpr std::uintptr_t TopImageContent = 0xA30; // Content
            inline static constexpr std::uintptr_t VerticalBarRect = 0xA80; // Rect2D
        };
        
        struct Seat : Part {
            inline static constexpr std::uintptr_t Disabled = 0x220; // Bool
        };
        
        struct Selection : Instance {
            inline static constexpr std::uintptr_t RenderMode = 0xB0; // RenderMode
            inline static constexpr std::uintptr_t ShowActiveInstanceHighlight = 0xB4; // Bool
        };
        
        struct SelectionBox : InstanceAdornment {
            inline static constexpr std::uintptr_t LineThickness = 0xFC; // Float32
            inline static constexpr std::uintptr_t StudioSelectionBox = 0x104; // Bool
            inline static constexpr std::uintptr_t SurfaceColor3 = 0xF0; // Color3
            inline static constexpr std::uintptr_t SurfaceTransparency = 0x100; // Float32
        };
        
        struct SelectionLasso : GuiBase3d {
        };
        
        struct SelectionPartLasso : SelectionLasso {
        };
        
        struct SelectionPointLasso : SelectionLasso {
            inline static constexpr std::uintptr_t Point = 0xF0; // Vector3
        };
        
        struct SelectionSphere : PVAdornment {
            inline static constexpr std::uintptr_t SurfaceColor3 = 0xF0; // Color3
            inline static constexpr std::uintptr_t SurfaceTransparency = 0xFC; // Float32
        };
        
        struct SelfViewConfiguration : BaseCoreGuiConfiguration {
            inline static constexpr std::uintptr_t Open = 0xA0; // Bool
        };
        
        struct SerializationService : Instance {
        };
        
        struct ServerReplicator : NetworkReplicator {
        };
        
        struct ServerScriptService : Instance {
            inline static constexpr std::uintptr_t LoadStringEnabled = 0xB0; // Bool
        };
        
        struct ServerStorage : Instance {
        };
        
        struct SessionCheckService : Instance {
        };
        
        struct SessionService : Instance {
        };
        
        struct SharedTableRegistry : Instance {
        };
        
        struct Shirt : Clothing {
        };
        
        struct ShirtGraphic : CharacterAppearance {
            inline static constexpr std::uintptr_t Color3 = 0xD8; // Color3
            inline static constexpr std::uintptr_t TextureContent = 0xA8; // Content
        };
        
        struct SkateboardController : Controller {
        };
        
        struct SkateboardPlatform : Part {
            inline static constexpr std::uintptr_t Steer = 0x214; // Int32
            inline static constexpr std::uintptr_t StickyWheels = 0x21C; // Bool
            inline static constexpr std::uintptr_t Throttle = 0x218; // Int32
        };
        
        struct Skin : CharacterAppearance {
            inline static constexpr std::uintptr_t SkinColor = 0xA8; // BrickColor
        };
        
        struct Sky : Instance {
            inline static constexpr std::uintptr_t CelestialBodiesShown = 0x238; // Bool
            inline static constexpr std::uintptr_t MoonAngularSize = 0x22C; // Float32
            inline static constexpr std::uintptr_t MoonTextureContent = 0xA0; // Content
            inline static constexpr std::uintptr_t SkyboxBackContent = 0xD0; // Content
            inline static constexpr std::uintptr_t SkyboxDownContent = 0x100; // Content
            inline static constexpr std::uintptr_t SkyboxFrontContent = 0x130; // Content
            inline static constexpr std::uintptr_t SkyboxLeftContent = 0x160; // Content
            inline static constexpr std::uintptr_t SkyboxOrientation = 0x220; // Vector3
            inline static constexpr std::uintptr_t SkyboxRightContent = 0x190; // Content
            inline static constexpr std::uintptr_t SkyboxUpContent = 0x1C0; // Content
            inline static constexpr std::uintptr_t StarCount = 0x230; // Int32
            inline static constexpr std::uintptr_t SunAngularSize = 0x234; // Float32
            inline static constexpr std::uintptr_t SunTextureContent = 0x1F0; // Content
        };
        
        struct SlimAnimationDataEntity : Instance {
            inline static constexpr std::uintptr_t EntityScale = 0xE8; // Float64
            inline static constexpr std::uintptr_t Handle = 0xF8; // Int32
            inline static constexpr std::uintptr_t IsSlimEnabled = 0x104; // Bool
            inline static constexpr std::uintptr_t NumBones = 0xFC; // Int32
            inline static constexpr std::uintptr_t RootIndex = 0x100; // Int32
            inline static constexpr std::uintptr_t SlimInstanceHashes = 0xB8; // BinaryString
            inline static constexpr std::uintptr_t SlimReplicationTimestampSec = 0xF0; // Float64
        };
        
        struct SlimAnimationReplicationService : Instance {
        };
        
        struct SlimContentProvider : CacheableContentProvider {
        };
        
        struct SlimDebugSettings : Instance {
        };
        
        struct SlimReplicationService : Instance {
        };
        
        struct SlimService : Instance {
        };
        
        struct Smoke : Instance {
            inline static constexpr std::uintptr_t Color = 0xA0; // Color3
            inline static constexpr std::uintptr_t Enabled = 0xC0; // Bool
            inline static constexpr std::uintptr_t LocalTransparencyModifier = 0xAC; // Float32
            inline static constexpr std::uintptr_t Opacity = 0xB0; // Float32
            inline static constexpr std::uintptr_t RiseVelocity = 0xB4; // Float32
            inline static constexpr std::uintptr_t Size = 0xB8; // Float32
            inline static constexpr std::uintptr_t TimeScale = 0xBC; // Float32
            inline static constexpr std::uintptr_t opacity_xml = 0xB0; // Float32
            inline static constexpr std::uintptr_t riseVelocity_xml = 0xB4; // Float32
            inline static constexpr std::uintptr_t size_xml = 0xB8; // Float32
        };
        
        struct SmoothVoxelsUpgraderService : Instance {
        };
        
        struct Snap : JointInstance {
        };
        
        struct SocialService : Instance {
        };
        
        struct SolidModelContentProvider : CacheableContentProvider {
        };
        
        struct Sound : Instance {
            inline static constexpr std::uintptr_t AcousticSimulationEnabled = 0x124; // Bool
            inline static constexpr std::uintptr_t AudioContent = 0xA0; // Content
            inline static constexpr std::uintptr_t EmitterSize = 0x10C; // Float32
            inline static constexpr std::uintptr_t IsPlaying = 0x128; // Bool
            inline static constexpr std::uintptr_t LoopRegion = 0xE0; // NumberRange
            inline static constexpr std::uintptr_t Looped = 0x125; // Bool
            inline static constexpr std::uintptr_t MaxDistance = 0x108; // Float32
            inline static constexpr std::uintptr_t MinDistance = 0x10C; // Float32
            inline static constexpr std::uintptr_t Pitch = 0x104; // Float32
            inline static constexpr std::uintptr_t PlayOnRemove = 0x126; // Bool
            inline static constexpr std::uintptr_t PlaybackRegion = 0xE8; // NumberRange
            inline static constexpr std::uintptr_t PlaybackRegionsEnabled = 0x127; // Bool
            inline static constexpr std::uintptr_t PlaybackSpeed = 0x104; // Float32
            inline static constexpr std::uintptr_t Playing = 0x128; // Bool
            inline static constexpr std::uintptr_t PlayingReplicator = 0x128; // Bool
            inline static constexpr std::uintptr_t RollOffMaxDistance = 0x108; // Float32
            inline static constexpr std::uintptr_t RollOffMinDistance = 0x10C; // Float32
            inline static constexpr std::uintptr_t Volume = 0x118; // Float32
            inline static constexpr std::uintptr_t isPlaying = 0x128; // Bool
            inline static constexpr std::uintptr_t xmlRead_MaxDistance_3 = 0x108; // Float32
            inline static constexpr std::uintptr_t xmlRead_MinDistance_3 = 0x10C; // Float32
        };
        
        struct SoundGroup : Instance {
            inline static constexpr std::uintptr_t Volume = 0xA0; // Float32
        };
        
        struct SoundService : Instance {
            inline static constexpr std::uintptr_t AcousticSimulationEnabled = 0x160; // Bool
            inline static constexpr std::uintptr_t DiffractionEnabled = 0x161; // Bool
            inline static constexpr std::uintptr_t DistanceFactor = 0x14C; // Float32
            inline static constexpr std::uintptr_t DopplerScale = 0x150; // Float32
            inline static constexpr std::uintptr_t IsNewExpForAudioApiByDefault = 0x162; // Bool
            inline static constexpr std::uintptr_t ListenerCFrame = 0x108; // CoordinateFrame
            inline static constexpr std::uintptr_t OcclusionEnabled = 0x163; // Bool
            inline static constexpr std::uintptr_t RespectFilteringEnabled = 0x164; // Bool
            inline static constexpr std::uintptr_t ReverbEnabled = 0x165; // Bool
            inline static constexpr std::uintptr_t RolloffScale = 0x158; // Float32
        };
        
        struct SoundShimService : Instance {
        };
        
        struct Sparkles : Instance {
            inline static constexpr std::uintptr_t Color = 0xA0; // Color3
            inline static constexpr std::uintptr_t Enabled = 0xB4; // Bool
            inline static constexpr std::uintptr_t LocalTransparencyModifier = 0xAC; // Float32
            inline static constexpr std::uintptr_t SparkleColor = 0xA0; // Color3
            inline static constexpr std::uintptr_t TimeScale = 0xB0; // Float32
        };
        
        struct SpawnLocation : Part {
            inline static constexpr std::uintptr_t AllowTeamChangeOnTouch = 0x1D8; // Bool
            inline static constexpr std::uintptr_t Duration = 0x1D0; // Int32
            inline static constexpr std::uintptr_t Enabled = 0x1D9; // Bool
            inline static constexpr std::uintptr_t Neutral = 0x1DA; // Bool
            inline static constexpr std::uintptr_t TeamColor = 0x1D4; // BrickColor
        };
        
        struct SpawnerService : Instance {
        };
        
        struct SpecialMesh : FileMesh {
        };
        
        struct SphereHandleAdornment : HandleAdornment {
            inline static constexpr std::uintptr_t DoubleSided = 0x198; // Bool
            inline static constexpr std::uintptr_t Radius = 0x190; // Float32
        };
        
        struct SpotLight : Light {
            inline static constexpr std::uintptr_t Angle = 0xC0; // Float32
            inline static constexpr std::uintptr_t Range = 0xC8; // Float32
        };
        
        struct SpringConstraint : Constraint {
            inline static constexpr std::uintptr_t Coils = 0x158; // Float32
            inline static constexpr std::uintptr_t Damping = 0x15C; // Float32
            inline static constexpr std::uintptr_t FreeLength = 0x160; // Float32
            inline static constexpr std::uintptr_t LimitsEnabled = 0x17C; // Bool
            inline static constexpr std::uintptr_t MaxForce = 0x164; // Float32
            inline static constexpr std::uintptr_t MaxLength = 0x168; // Float32
            inline static constexpr std::uintptr_t MinLength = 0x16C; // Float32
            inline static constexpr std::uintptr_t Radius = 0x170; // Float32
            inline static constexpr std::uintptr_t Stiffness = 0x174; // Float32
            inline static constexpr std::uintptr_t Thickness = 0x178; // Float32
        };
        
        struct StandalonePluginScripts : Instance {
        };
        
        struct StandardPages : Pages {
        };
        
        struct StandardQueue : Instance {
        };
        
        struct StarterPlayerScripts : Instance {
        };
        
        struct StarterCharacterScripts : StarterPlayerScripts {
        };
        
        struct StarterGear : Instance {
        };
        
        struct StarterGui : BasePlayerGui {
            inline static constexpr std::uintptr_t ProcessUserInput = 0x178; // Bool
            inline static constexpr std::uintptr_t ResetPlayerGuiOnSpawn = 0x179; // Bool
            inline static constexpr std::uintptr_t ShowDevelopmentGui = 0x17A; // Bool
        };
        
        struct StarterPack : Instance {
        };
        
        struct StarterPlayer : Instance {
            inline static constexpr std::uintptr_t AllowCustomAnimations = 0x118; // Bool
            inline static constexpr std::uintptr_t AutoJumpEnabled = 0x119; // Bool
            inline static constexpr std::uintptr_t CameraMaxZoomDistance = 0xC4; // Float32
            inline static constexpr std::uintptr_t CameraMinZoomDistance = 0xC8; // Float32
            inline static constexpr std::uintptr_t CharacterBreakJointsOnDeath = 0x11A; // Bool
            inline static constexpr std::uintptr_t CharacterJumpHeight = 0xD0; // Float32
            inline static constexpr std::uintptr_t CharacterJumpPower = 0xD4; // Float32
            inline static constexpr std::uintptr_t CharacterMaxSlopeAngle = 0xD8; // Float32
            inline static constexpr std::uintptr_t CharacterUseJumpPower = 0x11B; // Bool
            inline static constexpr std::uintptr_t CharacterWalkSpeed = 0xDC; // Float32
            inline static constexpr std::uintptr_t ClassicDeath = 0x11C; // Bool
            inline static constexpr std::uintptr_t CreateDefaultPlayerModule = 0x11D; // Bool
            inline static constexpr std::uintptr_t EnableMouseLockOption = 0x11E; // Bool
            inline static constexpr std::uintptr_t HealthDisplayDistance = 0x100; // Float32
            inline static constexpr std::uintptr_t LoadCharacterAppearance = 0x11F; // Bool
            inline static constexpr std::uintptr_t NameDisplayDistance = 0x10C; // Float32
            inline static constexpr std::uintptr_t PlayerModuleStatus = 0x110; // Int32
            inline static constexpr std::uintptr_t UserEmotesEnabled = 0x120; // Bool
        };
        
        struct StartupMessageService : Instance {
        };
        
        struct StateMachineDefinition : Instance {
        };
        
        struct StateMachineTransitionDefinition : Instance {
            inline static constexpr std::uintptr_t Priority = 0xD8; // Int32
        };
        
        struct Stats : Instance {
            inline static constexpr std::uintptr_t FrameTime = 0x1E8; // Float32
            inline static constexpr std::uintptr_t RenderCPUFrameTime = 0x1EC; // Float32
            inline static constexpr std::uintptr_t RenderGPUFrameTime = 0x1F0; // Float32
            inline static constexpr std::uintptr_t SceneDrawcallCount = 0x1F8; // Int32
            inline static constexpr std::uintptr_t SceneTriangleCount = 0x1F4; // Int32
            inline static constexpr std::uintptr_t ShadowsDrawcallCount = 0x210; // Int32
            inline static constexpr std::uintptr_t ShadowsTriangleCount = 0x20C; // Int32
            inline static constexpr std::uintptr_t UI2DDrawcallCount = 0x200; // Int32
            inline static constexpr std::uintptr_t UI2DTriangleCount = 0x1FC; // Int32
            inline static constexpr std::uintptr_t UI3DDrawcallCount = 0x208; // Int32
            inline static constexpr std::uintptr_t UI3DTriangleCount = 0x204; // Int32
        };
        
        struct Status : Model {
        };
        
        struct StopWatchReporter : Instance {
        };
        
        struct StringValue : ValueBase {
            inline static constexpr std::uintptr_t Value = 0xA0; // String
        };
        
        struct StudioData : Instance {
            inline static constexpr std::uintptr_t EnableScriptCollabByDefaultOnLoad = 0xB0; // Bool
        };
        
        struct StyleBase : Instance {
        };
        
        struct StyleDerive : Instance {
            inline static constexpr std::uintptr_t Index = 0xB0; // Int32
            inline static constexpr std::uintptr_t Priority = 0xB4; // Int32
        };
        
        struct StyleLink : Instance {
        };
        
        struct StyleQuery : Instance {
            inline static constexpr std::uintptr_t IsActive = 0x98; // Bool
        };
        
        struct StyleRule : StyleBase {
            inline static constexpr std::uintptr_t Index = 0x158; // Int32
            inline static constexpr std::uintptr_t Priority = 0x15C; // Int32
            inline static constexpr std::uintptr_t Selector = 0x118; // String
            inline static constexpr std::uintptr_t SelectorError = 0x138; // String
        };
        
        struct StyleSheet : StyleBase {
        };
        
        struct StylingService : Instance {
        };
        
        struct SunRaysEffect : PostEffect {
            inline static constexpr std::uintptr_t Intensity = 0xA0; // Float32
            inline static constexpr std::uintptr_t Spread = 0xA4; // Float32
        };
        
        struct SurfaceAppearance : Instance {
            inline static constexpr std::uintptr_t Color = 0x1C0; // Color3
            inline static constexpr std::uintptr_t ColorMapContent = 0xA0; // Content
            inline static constexpr std::uintptr_t EmissiveMaskContent = 0xD0; // Content
            inline static constexpr std::uintptr_t EmissiveStrength = 0x1DC; // Float32
            inline static constexpr std::uintptr_t EmissiveTint = 0x1CC; // Color3
            inline static constexpr std::uintptr_t MetalnessMapContent = 0x100; // Content
            inline static constexpr std::uintptr_t NormalMapContent = 0x130; // Content
            inline static constexpr std::uintptr_t RoughnessMapContent = 0x160; // Content
            inline static constexpr std::uintptr_t SurfaceSlot = 0x1E4; // Int32
            inline static constexpr std::uintptr_t TexturePackContent = 0x190; // Content
        };
        
        struct SurfaceGui : SurfaceGuiBase {
            inline static constexpr std::uintptr_t AlwaysOnTop = 0x854; // Bool
            inline static constexpr std::uintptr_t Brightness = 0x830; // Float32
            inline static constexpr std::uintptr_t CanvasSize = 0x828; // Vector2
            inline static constexpr std::uintptr_t HorizontalCurvature = 0x834; // Float32
            inline static constexpr std::uintptr_t LightInfluence = 0x838; // Float32
            inline static constexpr std::uintptr_t MaxDistance = 0x83C; // Float32
            inline static constexpr std::uintptr_t PixelsPerStud = 0x840; // Float32
            inline static constexpr std::uintptr_t ToolPunchThroughDistance = 0x84C; // Float32
            inline static constexpr std::uintptr_t ZOffset = 0x850; // Float32
        };
        
        struct SurfaceLight : Light {
            inline static constexpr std::uintptr_t Angle = 0xC0; // Float32
            inline static constexpr std::uintptr_t Range = 0xC8; // Float32
        };
        
        struct SurfaceSelection : PartAdornment {
        };
        
        struct SwimController : ControllerBase {
            inline static constexpr std::uintptr_t AccelerationTime = 0xC8; // Float32
            inline static constexpr std::uintptr_t PitchMaxTorque = 0xCC; // Float32
            inline static constexpr std::uintptr_t PitchSpeedFactor = 0xD0; // Float32
            inline static constexpr std::uintptr_t RollMaxTorque = 0xD4; // Float32
            inline static constexpr std::uintptr_t RollSpeedFactor = 0xD8; // Float32
        };
        
        struct SystemThemeService : Instance {
        };
        
        struct TaskScheduler : Instance {
            inline static constexpr std::uintptr_t JobsBegin = 0xC8; // EngineInternal
            inline static constexpr std::uintptr_t JobsEnd = 0xD0; // EngineInternal
            inline static constexpr std::uintptr_t JobsCapacity = 0xD8; // EngineInternal
            inline static constexpr std::uintptr_t JobEntrySize = 0x10; // EngineInternal
            inline static constexpr std::uintptr_t Size = 0x200; // EngineInternal
            inline static constexpr std::uintptr_t Mutex = 0x90; // EngineInternal
            inline static constexpr std::uintptr_t FrameInterval = 0xB0; // EngineInternal
            inline static constexpr std::uintptr_t MaxFPS = 0xB0; // EngineInternal
        };
        
        struct Team : Instance {
            inline static constexpr std::uintptr_t AutoAssignable = 0xA4; // Bool
            inline static constexpr std::uintptr_t AutoColorCharacters = 0xA5; // Bool
            inline static constexpr std::uintptr_t ChildOrder = 0x98; // Int32
            inline static constexpr std::uintptr_t Score = 0x9C; // Int32
            inline static constexpr std::uintptr_t TeamColor = 0xA0; // BrickColor
        };
        
        struct TeamCreateData : Instance {
        };
        
        struct Teams : Instance {
        };
        
        struct TelemetryService : Instance {
        };
        
        struct TeleportAsyncResult : Instance {
        };
        
        struct TeleportOptions : Instance {
            inline static constexpr std::uintptr_t ReservedServerId = 0xB8; // String
            inline static constexpr std::uintptr_t ServerInstanceId = 0xD8; // String
            inline static constexpr std::uintptr_t ShouldReserveServer = 0x118; // Bool
            inline static constexpr std::uintptr_t VipServerId = 0xF8; // String
        };
        
        struct TeleportService : Instance {
            inline static constexpr std::uintptr_t CustomizedTeleportUI = 0xB0; // Bool
        };
        
        struct TemporaryCageMeshProvider : Instance {
        };
        
        struct Terrain : BasePart {
            inline static constexpr std::uintptr_t Decoration = 0x1F0; // Bool
            inline static constexpr std::uintptr_t ExpandedTerrainResolved = 0x1F1; // Bool
            inline static constexpr std::uintptr_t GrassLength = 0x1D8; // Float32
            inline static constexpr std::uintptr_t SmoothVoxelsUpgraded = 0x1F2; // Bool
            inline static constexpr std::uintptr_t WaterColor = 0x1C8; // Color3
            inline static constexpr std::uintptr_t WaterReflectance = 0x1E0; // Float32
            inline static constexpr std::uintptr_t WaterTransparency = 0x1E4; // Float32
            inline static constexpr std::uintptr_t WaterWaveSize = 0x1E8; // Float32
            inline static constexpr std::uintptr_t WaterWaveSpeed = 0x1EC; // Float32
        };
        
        struct TerrainDetail : Instance {
            inline static constexpr std::uintptr_t ColorMapContent = 0xA0; // Content
            inline static constexpr std::uintptr_t EmissiveMaskContent = 0xD0; // Content
            inline static constexpr std::uintptr_t EmissiveStrength = 0x1CC; // Float32
            inline static constexpr std::uintptr_t EmissiveTint = 0x1C0; // Color3
            inline static constexpr std::uintptr_t MetalnessMapContent = 0x100; // Content
            inline static constexpr std::uintptr_t NormalMapContent = 0x130; // Content
            inline static constexpr std::uintptr_t RoughnessMapContent = 0x160; // Content
            inline static constexpr std::uintptr_t StudsPerTile = 0x1D8; // Float32
            inline static constexpr std::uintptr_t TexturePackContent = 0x190; // Content
        };
        
        struct TerrainRegion : Instance {
            inline static constexpr std::uintptr_t SizeInCells = 0xA0; // Vector3
        };
        
        struct TestCoordinatorService : Instance {
        };
        
        struct TestService : Instance {
            inline static constexpr std::uintptr_t AutoRuns = 0xF8; // Bool
            inline static constexpr std::uintptr_t ErrorCount = 0xE8; // Int32
            inline static constexpr std::uintptr_t ExecuteWithStudioRun = 0xF9; // Bool
            inline static constexpr std::uintptr_t Is30FpsThrottleEnabled = 0xFC; // Bool
            inline static constexpr std::uintptr_t IsPhysicsEnvironmentalThrottled = 0xFA; // Bool
            inline static constexpr std::uintptr_t IsSleepAllowed = 0xFB; // Bool
            inline static constexpr std::uintptr_t NumberOfPlayers = 0xEC; // Int32
            inline static constexpr std::uintptr_t SimulateSecondsLag = 0xD8; // Float64
            inline static constexpr std::uintptr_t TestCount = 0xF0; // Int32
            inline static constexpr std::uintptr_t ThrottlePhysicsToRealtime = 0xFC; // Bool
            inline static constexpr std::uintptr_t Timeout = 0xE0; // Float64
            inline static constexpr std::uintptr_t WarnCount = 0xF4; // Int32
        };
        
        struct TextBox : GuiObject {
            inline static constexpr std::uintptr_t Confidential = 0xF59; // Bool
            inline static constexpr std::uintptr_t ContentText = 0xE30; // String
            inline static constexpr std::uintptr_t HasFocus = 0xF5A; // Bool
            inline static constexpr std::uintptr_t LocalizationMatchIdentifier = 0xE50; // String
            inline static constexpr std::uintptr_t LocalizationMatchedSourceText = 0xE70; // String
            inline static constexpr std::uintptr_t LocalizedPlaceholderText = 0xE90; // String
            inline static constexpr std::uintptr_t ManualFocusRelease = 0xF5B; // Bool
            inline static constexpr std::uintptr_t OverlayNativeInput = 0xF5D; // Bool
            inline static constexpr std::uintptr_t ShouldEmitReturnEvents = 0xF5F; // Bool
            inline static constexpr std::uintptr_t ShouldEmitTabEvents = 0xF60; // Bool
            inline static constexpr std::uintptr_t ShouldEmitUpAndDownArrowEvents = 0xF61; // Bool
        };
        
        struct TextBoxService : Instance {
        };
        
        struct TextButton : GuiButton {
            inline static constexpr std::uintptr_t Confidential = 0x11A4; // Bool
            inline static constexpr std::uintptr_t ContentText = 0x10B8; // String
            inline static constexpr std::uintptr_t LocalizationMatchIdentifier = 0x10D8; // String
            inline static constexpr std::uintptr_t LocalizationMatchedSourceText = 0x10F8; // String
            inline static constexpr std::uintptr_t LocalizedText = 0x1118; // String
        };
        
        struct TextChannel : Instance {
            inline static constexpr std::uintptr_t AddPlayersOnJoin = 0xA8; // Bool
            inline static constexpr std::uintptr_t IsDefaultTextChannel = 0xA9; // Bool
        };
        
        struct TextChannelWindow : GuiObject {
            inline static constexpr std::uintptr_t FontFace = 0x9D8; // Font
            inline static constexpr std::uintptr_t IsRendering = 0x9E0; // Bool
            inline static constexpr std::uintptr_t UseDefaultFont = 0x9E1; // Bool
        };
        
        struct TextChatCommand : Instance {
            inline static constexpr std::uintptr_t AutocompleteVisible = 0xD8; // Bool
            inline static constexpr std::uintptr_t Enabled = 0xD9; // Bool
            inline static constexpr std::uintptr_t SecondaryAlias = 0xB8; // String
        };
        
        struct TextChatMessage : Instance {
            inline static constexpr std::uintptr_t ChatActionType = 0xA0; // String
            inline static constexpr std::uintptr_t ForModeration = 0x2B4; // Bool
            inline static constexpr std::uintptr_t IsHiddenMessage = 0x2B5; // Bool
            inline static constexpr std::uintptr_t IsHistorical = 0x2B6; // Bool
            inline static constexpr std::uintptr_t MessageId = 0xC0; // String
            inline static constexpr std::uintptr_t Metadata = 0xE0; // String
            inline static constexpr std::uintptr_t OriginalText = 0x100; // String
            inline static constexpr std::uintptr_t PrefixTextInternal = 0x140; // String
            inline static constexpr std::uintptr_t PresetChatVersion = 0x160; // String
            inline static constexpr std::uintptr_t PresetId = 0x180; // String
            inline static constexpr std::uintptr_t RewrittenText = 0x1A0; // String
            inline static constexpr std::uintptr_t RewrittenTranslation = 0x1C0; // String
            inline static constexpr std::uintptr_t TextInternal = 0x200; // String
            inline static constexpr std::uintptr_t TranslationInternal = 0x240; // String
            inline static constexpr std::uintptr_t Verified = 0x2B7; // Bool
            inline static constexpr std::uintptr_t WasRewritten = 0x2B8; // Bool
        };
        
        struct TextChatService : Instance {
            inline static constexpr std::uintptr_t ChatTranslationToggleEnabled = 0xA8; // Bool
            inline static constexpr std::uintptr_t CreateDefaultCommands = 0x1EB; // Bool
            inline static constexpr std::uintptr_t CreateDefaultTextChannels = 0x1EC; // Bool
            inline static constexpr std::uintptr_t HasSeenDeprecationDialog = 0x1ED; // Bool
            inline static constexpr std::uintptr_t IsLegacyChatDisabled = 0x1EE; // Bool
        };
        
        struct TextDocument : Instance {
        };
        
        struct TextFilterResult : Instance {
        };
        
        struct TextFilterTranslatedResult : Instance {
        };
        
        struct TextGenerator : Instance {
            inline static constexpr std::uintptr_t Seed = 0xB8; // Int32
            inline static constexpr std::uintptr_t Temperature = 0xBC; // Float32
            inline static constexpr std::uintptr_t TopP = 0xC0; // Float32
        };
        
        struct TextLabel : GuiLabel {
            inline static constexpr std::uintptr_t Confidential = 0xF24; // Bool
            inline static constexpr std::uintptr_t ContentText = 0xE38; // String
            inline static constexpr std::uintptr_t LocalizationMatchIdentifier = 0xE58; // String
            inline static constexpr std::uintptr_t LocalizationMatchedSourceText = 0xE78; // String
            inline static constexpr std::uintptr_t LocalizedText = 0xE98; // String
        };
        
        struct TextService : Instance {
        };
        
        struct TextSource : Instance {
            inline static constexpr std::uintptr_t CanSend = 0xE0; // Bool
            inline static constexpr std::uintptr_t UserId = 0xD8; // Int64
            inline static constexpr std::uintptr_t UserIdReplicated = 0xD8; // Int64
            inline static constexpr std::uintptr_t Username = 0xB8; // String
        };
        
        struct Texture : Decal {
            inline static constexpr std::uintptr_t OffsetStudsU = 0x2D0; // Float32
            inline static constexpr std::uintptr_t OffsetStudsV = 0x2D4; // Float32
            inline static constexpr std::uintptr_t StudsPerTileU = 0x2D8; // Float32
            inline static constexpr std::uintptr_t StudsPerTileV = 0x2DC; // Float32
        };
        
        struct ThirdPartyUserService : Instance {
        };
        
        struct TimerService : Instance {
        };
        
        struct Torque : Constraint {
            inline static constexpr std::uintptr_t Value = 0x158; // Vector3
        };
        
        struct TorsionSpringConstraint : Constraint {
            inline static constexpr std::uintptr_t Coils = 0x158; // Float32
            inline static constexpr std::uintptr_t Damping = 0x15C; // Float32
            inline static constexpr std::uintptr_t LimitEnabled = 0x174; // Bool
            inline static constexpr std::uintptr_t LimitsEnabled = 0x174; // Bool
            inline static constexpr std::uintptr_t MaxAngle = 0x160; // Float32
            inline static constexpr std::uintptr_t MaxTorque = 0x164; // Float32
            inline static constexpr std::uintptr_t Radius = 0x168; // Float32
            inline static constexpr std::uintptr_t Restitution = 0x16C; // Float32
            inline static constexpr std::uintptr_t Stiffness = 0x170; // Float32
        };
        
        struct TotalCountTimeIntervalItem : StatsItem {
        };
        
        struct TouchInputService : Instance {
        };
        
        struct TouchTransmitter : Instance {
        };
        
        struct TraceRouteService : Instance {
        };
        
        struct TracerService : Instance {
        };
        
        struct TrackerLodController : Instance {
        };
        
        struct TrackerStreamAnimation : Instance {
        };
        
        struct Trail : Instance {
            inline static constexpr std::uintptr_t Brightness = 0x1A8; // Float32
            inline static constexpr std::uintptr_t Enabled = 0x1CC; // Bool
            inline static constexpr std::uintptr_t FaceCamera = 0x1CD; // Bool
            inline static constexpr std::uintptr_t Lifetime = 0x1AC; // Float32
            inline static constexpr std::uintptr_t LightEmission = 0x1B0; // Float32
            inline static constexpr std::uintptr_t LightInfluence = 0x1B4; // Float32
            inline static constexpr std::uintptr_t LocalTransparencyModifier = 0x1B8; // Float32
            inline static constexpr std::uintptr_t MaxLength = 0x1BC; // Float32
            inline static constexpr std::uintptr_t MinLength = 0x1C0; // Float32
            inline static constexpr std::uintptr_t TextureContent = 0x158; // Content
            inline static constexpr std::uintptr_t TextureLength = 0x1C4; // Float32
            inline static constexpr std::uintptr_t Transparency = 0xA0; // NumberSequence
            inline static constexpr std::uintptr_t WidthScale = 0xE0; // NumberSequence
        };
        
        struct Translator : Instance {
        };
        
        struct TremoloSoundEffect : SoundEffect {
            inline static constexpr std::uintptr_t Depth = 0xE0; // Float32
            inline static constexpr std::uintptr_t Duty = 0xE4; // Float32
            inline static constexpr std::uintptr_t Frequency = 0xE8; // Float32
        };
        
        struct TrussPart : BasePart {
        };
        
        struct TweenBase : Instance {
        };
        
        struct Tween : TweenBase {
        };
        
        struct TweenService : Instance {
        };
        
        struct UGCAvatarService : Instance {
        };
        
        struct UGCValidationService : Instance {
        };
        
        struct UIBase : Instance {
        };
        
        struct UIComponent : UIBase {
        };
        
        struct UIConstraint : UIComponent {
        };
        
        struct UIAspectRatioConstraint : UIConstraint {
        };
        
        struct UIBlur : UIComponent {
        };
        
        struct UICorner : UIComponent {
        };
        
        struct UIDragDetector : UIComponent {
            inline static constexpr std::uintptr_t ActivatedCursorIconContent = 0xB8; // Content
            inline static constexpr std::uintptr_t CursorIconContent = 0xE8; // Content
            inline static constexpr std::uintptr_t DragAxis = 0x190; // Vector2
            inline static constexpr std::uintptr_t DragRotation = 0x1A0; // Float32
            inline static constexpr std::uintptr_t DragUDim2 = 0x150; // UDim2
            inline static constexpr std::uintptr_t Enabled = 0x1C0; // Bool
            inline static constexpr std::uintptr_t MaxDragAngle = 0x1AC; // Float32
            inline static constexpr std::uintptr_t MaxDragTranslation = 0x160; // UDim2
            inline static constexpr std::uintptr_t MinDragAngle = 0x1B0; // Float32
            inline static constexpr std::uintptr_t MinDragTranslation = 0x170; // UDim2
            inline static constexpr std::uintptr_t Selectable = 0x1C1; // Bool
            inline static constexpr std::uintptr_t SelectionModeDragSpeed = 0x180; // UDim2
            inline static constexpr std::uintptr_t SelectionModeRotateSpeed = 0x1B8; // Float32
        };
        
        struct UIDragDetectorService : Instance {
        };
        
        struct UIFlexItem : UIComponent {
        };
        
        struct UIGradient : UIComponent {
        };
        
        struct UILayout : UIComponent {
        };
        
        struct UIGridStyleLayout : UILayout {
        };
        
        struct UIGridLayout : UIGridStyleLayout {
        };
        
        struct UIListLayout : UIGridStyleLayout {
        };
        
        struct UIPadding : UIComponent {
        };
        
        struct UIPageLayout : UIGridStyleLayout {
            inline static constexpr std::uintptr_t Animated = 0x164; // Bool
            inline static constexpr std::uintptr_t Circular = 0x165; // Bool
            inline static constexpr std::uintptr_t GamepadInputEnabled = 0x166; // Bool
            inline static constexpr std::uintptr_t Padding = 0x150; // UDim
            inline static constexpr std::uintptr_t ScrollWheelInputEnabled = 0x167; // Bool
            inline static constexpr std::uintptr_t TouchInputEnabled = 0x168; // Bool
            inline static constexpr std::uintptr_t TweenTime = 0x160; // Float32
        };
        
        struct UIScale : UIComponent {
        };
        
        struct UIShadow : UIComponent {
        };
        
        struct UISizeConstraint : UIConstraint {
        };
        
        struct UIStroke : UIComponent {
        };
        
        struct UITableLayout : UIGridStyleLayout {
            inline static constexpr std::uintptr_t FillEmptySpaceColumns = 0x15C; // Bool
            inline static constexpr std::uintptr_t FillEmptySpaceRows = 0x15D; // Bool
            inline static constexpr std::uintptr_t Padding = 0x148; // UDim2
        };
        
        struct UITextSizeConstraint : UIConstraint {
        };
        
        struct UnionOperation : PartOperation {
        };
        
        struct UniversalConstraint : Constraint {
            inline static constexpr std::uintptr_t LimitsEnabled = 0x164; // Bool
            inline static constexpr std::uintptr_t MaxAngle = 0x158; // Float32
            inline static constexpr std::uintptr_t Radius = 0x15C; // Float32
            inline static constexpr std::uintptr_t Restitution = 0x160; // Float32
        };
        
        struct UnreliableRemoteEvent : BaseRemoteEvent {
        };
        
        struct UnvalidatedAssetService : Instance {
        };
        
        struct UserGameSettings : Instance {
            inline static constexpr std::uintptr_t ChatTranslationToggleEnabled = 0xA8; // Bool
        };
        
        struct UserInputService : Instance {
            inline static constexpr std::uintptr_t BottomBarSize = 0xB0; // Vector2
            inline static constexpr std::uintptr_t LegacyInputEventsEnabled = 0xD8; // Bool
            inline static constexpr std::uintptr_t NavBarSize = 0xB8; // Vector2
            inline static constexpr std::uintptr_t PreferredInput = 0xD0; // PreferredInput
            inline static constexpr std::uintptr_t RightBarSize = 0xC0; // Vector2
            inline static constexpr std::uintptr_t StatusBarSize = 0xC8; // Vector2
            inline static constexpr std::uintptr_t TouchScreenEnabled = 0xDB; // Bool
        };
        
        struct UserService : Instance {
        };
        
        struct UserSettings : GenericSettings {
        };
        
        struct UserStorageService : LocalStorageService {
        };
        
        struct VRService : Instance {
            inline static constexpr std::uintptr_t AvatarGestures = 0x11C; // Bool
            inline static constexpr std::uintptr_t DidPointerHit = 0x11D; // Bool
            inline static constexpr std::uintptr_t FadeOutViewOnCollision = 0x11E; // Bool
            inline static constexpr std::uintptr_t PointerHitCFrame = 0xD0; // CoordinateFrame
            inline static constexpr std::uintptr_t PresentationMode = 0x110; // VRPresentationMode
            inline static constexpr std::uintptr_t QuestASWState = 0x11F; // Bool
            inline static constexpr std::uintptr_t QuestDisplayRefreshRate = 0x114; // Float32
            inline static constexpr std::uintptr_t VRDeviceAvailable = 0x120; // Bool
            inline static constexpr std::uintptr_t VRDeviceName = 0xB0; // String
            inline static constexpr std::uintptr_t VREnabled = 0x121; // Bool
            inline static constexpr std::uintptr_t VRSessionState = 0x118; // VRSessionState
        };
        
        struct ValueCurve : Instance {
        };
        
        struct Vector3Curve : Instance {
        };
        
        struct Vector3Value : ValueBase {
            inline static constexpr std::uintptr_t Value = 0xA0; // Vector3
        };
        
        struct VectorForce : Constraint {
            inline static constexpr std::uintptr_t ApplyAtCenterOfMass = 0x168; // Bool
            inline static constexpr std::uintptr_t Force = 0x158; // Vector3
        };
        
        struct VehicleController : Controller {
        };
        
        struct VehicleSeat : BasePart {
            inline static constexpr std::uintptr_t Disabled = 0x224; // Bool
            inline static constexpr std::uintptr_t HeadsUpDisplay = 0x225; // Bool
            inline static constexpr std::uintptr_t MaxSpeed = 0x210; // Float32
            inline static constexpr std::uintptr_t SteerFloat = 0x214; // Float32
            inline static constexpr std::uintptr_t ThrottleFloat = 0x218; // Float32
            inline static constexpr std::uintptr_t Torque = 0x21C; // Float32
            inline static constexpr std::uintptr_t TurnSpeed = 0x220; // Float32
        };
        
        struct VelocityMotor : JointInstance {
        };
        
        struct VersionControlService : Instance {
            inline static constexpr std::uintptr_t ScriptCollabEnabled = 0x100; // Bool
            inline static constexpr std::uintptr_t ScriptCollabVersionHistoryEnabled = 0x101; // Bool
        };
        
        struct VideoCapture : Capture {
        };
        
        struct VideoCaptureService : Instance {
            inline static constexpr std::uintptr_t CameraID = 0xB0; // String
        };
        
        struct VideoDeviceInput : Instance {
        };
        
        struct VideoDisplay : GuiObject {
            inline static constexpr std::uintptr_t TileSize = 0xA90; // UDim2
            inline static constexpr std::uintptr_t VideoColor3 = 0xAA0; // Color3
            inline static constexpr std::uintptr_t VideoRectOffset = 0xAAC; // Vector2
            inline static constexpr std::uintptr_t VideoRectSize = 0xAB4; // Vector2
            inline static constexpr std::uintptr_t VideoTransparency = 0xAC4; // Float32
        };
        
        struct VideoFrame : GuiObject {
            inline static constexpr std::uintptr_t Looped = 0xA48; // Bool
            inline static constexpr std::uintptr_t Playing = 0xA49; // Bool
            inline static constexpr std::uintptr_t PlayingReplicating = 0xA49; // Bool
            inline static constexpr std::uintptr_t RollOffMaxDistance = 0xA38; // Float32
            inline static constexpr std::uintptr_t RollOffMinDistance = 0xA3C; // Float32
            inline static constexpr std::uintptr_t TimePosition = 0xA28; // Float64
            inline static constexpr std::uintptr_t TimePositionReplicating = 0xA28; // Float64
            inline static constexpr std::uintptr_t VideoContent = 0x9D0; // Content
            inline static constexpr std::uintptr_t Volume = 0xA44; // Float32
        };
        
        struct VideoPlayer : Instance {
            inline static constexpr std::uintptr_t AutoLoadInStudio = 0x169; // Bool
            inline static constexpr std::uintptr_t AutoPlayInStudio = 0x16A; // Bool
            inline static constexpr std::uintptr_t IsPlaying = 0x16B; // Bool
            inline static constexpr std::uintptr_t Looping = 0x16C; // Bool
            inline static constexpr std::uintptr_t PlaybackSpeed = 0x160; // Float32
            inline static constexpr std::uintptr_t PlayingReplicating = 0x168; // Bool
            inline static constexpr std::uintptr_t TimePosition = 0x150; // Float64
            inline static constexpr std::uintptr_t VideoContent = 0x120; // Content
            inline static constexpr std::uintptr_t Volume = 0x164; // Float32
        };
        
        struct VideoScreenCaptureService : Instance {
        };
        
        struct VideoService : Instance {
        };
        
        struct ViewportCamera : Camera {
        };
        
        struct ViewportFrame : GuiObject {
            inline static constexpr std::uintptr_t CameraCFrame = 0x9E0; // CoordinateFrame
            inline static constexpr std::uintptr_t CameraFieldOfView = 0xA40; // Float32
            inline static constexpr std::uintptr_t IsMirrored = 0xA48; // Bool
        };
        
        struct VirtualInputManager : Instance {
            inline static constexpr std::uintptr_t AdditionalLuaState = 0x138; // String
        };
        
        struct VirtualUser : Instance {
        };
        
        struct VisibilityCheckDispatcher : Instance {
        };
        
        struct Visit : Instance {
        };
        
        struct VisualizationMode : Instance {
            inline static constexpr std::uintptr_t Enabled = 0xD8; // Bool
            inline static constexpr std::uintptr_t ToolTip = 0xB8; // String
        };
        
        struct VisualizationModeCategory : Instance {
            inline static constexpr std::uintptr_t Enabled = 0xB8; // Bool
        };
        
        struct VisualizationModeService : Instance {
        };
        
        struct VoiceChatInternal : Instance {
        };
        
        struct VoiceChatService : Instance {
            inline static constexpr std::uintptr_t EnableDefaultVoice = 0x1EC; // Bool
            inline static constexpr std::uintptr_t UseNewAudioApi = 0x1ED; // Bool
            inline static constexpr std::uintptr_t UseNewControlPaths = 0x1EE; // Bool
            inline static constexpr std::uintptr_t UseNewJoinFlow = 0x1EF; // Bool
            inline static constexpr std::uintptr_t UseStreamSwitching = 0x1F0; // Bool
            inline static constexpr std::uintptr_t VoiceChatEnabledForPlaceOnRcc = 0x1F1; // Bool
            inline static constexpr std::uintptr_t VoiceChatEnabledForUniverseOnRcc = 0x1F2; // Bool
        };
        
        struct WebSocketClient : Instance {
        };
        
        struct WebSocketService : Instance {
        };
        
        struct WebViewService : Instance {
        };
        
        struct WedgePart : FormFactorPart {
        };
        
        struct Weld : JointInstance {
            inline static constexpr std::uintptr_t EnableSkinning = 0x170; // Bool
        };
        
        struct WeldConstraint : Instance {
            inline static constexpr std::uintptr_t Enabled = 0xC0; // Bool
        };
        
        struct WindowProtocolService : Instance {
        };
        
        struct Wire : Instance {
            inline static constexpr std::uintptr_t SourceName = 0xA0; // String
            inline static constexpr std::uintptr_t TargetName = 0xC0; // String
        };
        
        struct WireframeHandleAdornment : HandleAdornment {
            inline static constexpr std::uintptr_t Scale = 0x190; // Vector3
            inline static constexpr std::uintptr_t Thickness = 0x19C; // Float32
        };
        
        struct WorldRoot : Model {
            inline static constexpr std::uintptr_t AutoSimulate = 0x394; // Bool
            inline static constexpr std::uintptr_t GravityDirection = 0x370; // Vector3
            inline static constexpr std::uintptr_t SimulationRate = 0x38C; // Float32
            inline static constexpr std::uintptr_t Wind = 0x390; // Float32
            inline static constexpr std::uintptr_t WindDirection = 0x37C; // Vector3
        };
        
        struct Workspace : WorldRoot {
            inline static constexpr std::uintptr_t AirDensity = 0x4D4; // Float32
            inline static constexpr std::uintptr_t AirTurbulenceIntensity = 0x4D8; // Float32
            inline static constexpr std::uintptr_t AllowThirdPartySales = 0x580; // Bool
            inline static constexpr std::uintptr_t DistributedGameTime = 0x4C0; // Float64
            inline static constexpr std::uintptr_t ExplicitAutoJoints = 0x581; // Bool
            inline static constexpr std::uintptr_t FallHeightEnabled = 0x582; // Bool
            inline static constexpr std::uintptr_t GlobalWind = 0x4C8; // Vector3
            inline static constexpr std::uintptr_t InsertPoint = 0x3B8; // Vector3
            inline static constexpr std::uintptr_t StreamingAdaptiveRadius = 0x583; // Bool
            inline static constexpr std::uintptr_t StreamingEnabledStorage = 0x584; // Bool
            inline static constexpr std::uintptr_t StreamingMinRadius = 0x560; // Int32
            inline static constexpr std::uintptr_t StreamingTargetRadius = 0x564; // Int32
            inline static constexpr std::uintptr_t TerrainWeldsFixed = 0x585; // Bool
            inline static constexpr std::uintptr_t ThrottleLevel = 0x568; // Int32
            inline static constexpr std::uintptr_t WatermarkHash = 0x470; // String
            inline static constexpr std::uintptr_t World = 0x3F8; // Pointer
            inline static constexpr std::uintptr_t AirProperties = 0x4C8; // Pointer
        };
        
        struct WorldModel : WorldRoot {
            inline static constexpr std::uintptr_t UseWorkspaceCollisionGroups = 0x468; // Bool
        };
        
        struct WrapContentProvider : CacheableContentProvider {
        };
        
        struct WrapDeformMeshProvider : Instance {
        };
        
        struct WrapDeformer : BaseWrap {
        };
        
        struct WrapLayer : BaseWrap {
            inline static constexpr std::uintptr_t BindOffset = 0x358; // CoordinateFrame
            inline static constexpr std::uintptr_t Color = 0x3B8; // Color3
            inline static constexpr std::uintptr_t Enabled = 0x3F4; // Bool
            inline static constexpr std::uintptr_t MaxSize = 0x3C4; // Vector3
            inline static constexpr std::uintptr_t Offset = 0x3D0; // Vector3
            inline static constexpr std::uintptr_t Order = 0x3E4; // Int32
            inline static constexpr std::uintptr_t Puffiness = 0x3E8; // Float32
            inline static constexpr std::uintptr_t ReferenceMeshContent = 0x298; // Content
            inline static constexpr std::uintptr_t RotateScaleDeformationMap = 0x2C8; // Content
            inline static constexpr std::uintptr_t ScaleOnlyDeformationMap = 0x2F8; // Content
            inline static constexpr std::uintptr_t ShrinkFactor = 0x3EC; // Float32
            inline static constexpr std::uintptr_t TargetShaping = 0x3F0; // Float32
            inline static constexpr std::uintptr_t TemporaryReferenceMeshContent = 0x328; // Content
        };
        
        struct WrapTarget : BaseWrap {
            inline static constexpr std::uintptr_t Color = 0x298; // Color3
            inline static constexpr std::uintptr_t Stiffness = 0x2A8; // Float32
        };
        
        struct WrapTextureTransfer : Instance {
            inline static constexpr std::uintptr_t ReferenceCageMeshContent = 0x98; // Content
            inline static constexpr std::uintptr_t UVMaxBound = 0xC8; // Vector2
            inline static constexpr std::uintptr_t UVMinBound = 0xD0; // Vector2
        };
}
