#pragma once

#include <array>
#include <cstddef>
#include <cstdint>
#include <string_view>

namespace Types {
    struct Item {
        std::int32_t Id;
        std::string_view Name;
    };

    namespace Enums {
        struct AccessModifierType {
            inline static constexpr std::string_view Name = "AccessModifierType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Allow"},
                Item{1, "Deny"},
            }};
        };

        struct AccessoryType {
            inline static constexpr std::string_view Name = "AccessoryType";
            inline static constexpr std::array<Item, 21> Items{{
                Item{0, "Unknown"},
                Item{1, "Hat"},
                Item{2, "Hair"},
                Item{3, "Face"},
                Item{4, "Neck"},
                Item{5, "Shoulder"},
                Item{6, "Front"},
                Item{7, "Back"},
                Item{8, "Waist"},
                Item{9, "TShirt"},
                Item{10, "Shirt"},
                Item{11, "Pants"},
                Item{12, "Jacket"},
                Item{13, "Sweater"},
                Item{14, "Shorts"},
                Item{15, "LeftShoe"},
                Item{16, "RightShoe"},
                Item{17, "DressSkirt"},
                Item{18, "Eyebrow"},
                Item{19, "Eyelash"},
                Item{9, "TShirt"},
            }};
        };

        struct ActionType {
            inline static constexpr std::string_view Name = "ActionType";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Nothing"},
                Item{1, "Pause"},
                Item{2, "Lose"},
                Item{3, "Draw"},
                Item{4, "Win"},
            }};
        };

        struct ActivePayerStatus {
            inline static constexpr std::string_view Name = "ActivePayerStatus";
            inline static constexpr std::array<Item, 6> Items{{
                Item{0, "Unknown"},
                Item{1, "Never"},
                Item{2, "Lapsed"},
                Item{3, "Casual50Percent"},
                Item{4, "Intermediate35Percent"},
                Item{5, "Top15Percent"},
            }};
        };

        struct ActuatorRelativeTo {
            inline static constexpr std::string_view Name = "ActuatorRelativeTo";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Attachment0"},
                Item{1, "Attachment1"},
                Item{2, "World"},
            }};
        };

        struct ActuatorType {
            inline static constexpr std::string_view Name = "ActuatorType";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "None"},
                Item{1, "Motor"},
                Item{2, "Servo"},
            }};
        };

        struct AdAvailabilityResult {
            inline static constexpr std::string_view Name = "AdAvailabilityResult";
            inline static constexpr std::array<Item, 7> Items{{
                Item{1, "IsAvailable"},
                Item{2, "DeviceIneligible"},
                Item{3, "ExperienceIneligible"},
                Item{4, "InternalError"},
                Item{5, "NoFill"},
                Item{6, "PlayerIneligible"},
                Item{7, "PublisherIneligible"},
            }};
        };

        struct AdEventType {
            inline static constexpr std::string_view Name = "AdEventType";
            inline static constexpr std::array<Item, 6> Items{{
                Item{0, "VideoLoaded"},
                Item{1, "VideoRemoved"},
                Item{2, "UserCompletedVideo"},
                Item{3, "RewardedAdLoaded"},
                Item{4, "RewardedAdGrant"},
                Item{5, "RewardedAdUnloaded"},
            }};
        };

        struct AdFormat {
            inline static constexpr std::string_view Name = "AdFormat";
            inline static constexpr std::array<Item, 1> Items{{
                Item{0, "RewardedVideo"},
            }};
        };

        struct AdShape {
            inline static constexpr std::string_view Name = "AdShape";
            inline static constexpr std::array<Item, 1> Items{{
                Item{1, "HorizontalRectangle"},
            }};
        };

        struct AdTeleportMethod {
            inline static constexpr std::string_view Name = "AdTeleportMethod";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Undefined"},
                Item{1, "PortalForward"},
                Item{2, "InGameMenuBackButton"},
                Item{3, "UIBackButton"},
            }};
        };

        struct AdUIEventType {
            inline static constexpr std::string_view Name = "AdUIEventType";
            inline static constexpr std::array<Item, 9> Items{{
                Item{0, "AdLabelClicked"},
                Item{1, "VolumeButtonClicked"},
                Item{2, "FullscreenButtonClicked"},
                Item{3, "PlayButtonClicked"},
                Item{4, "PauseButtonClicked"},
                Item{5, "CloseButtonClicked"},
                Item{6, "WhyThisAdClicked"},
                Item{7, "PlayEventTriggered"},
                Item{8, "PauseEventTriggered"},
            }};
        };

        struct AdUIType {
            inline static constexpr std::string_view Name = "AdUIType";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "None"},
                Item{1, "Image"},
                Item{2, "Video"},
            }};
        };

        struct AdUnitStatus {
            inline static constexpr std::string_view Name = "AdUnitStatus";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Inactive"},
                Item{1, "Active"},
            }};
        };

        struct AdornCullingMode {
            inline static constexpr std::string_view Name = "AdornCullingMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Automatic"},
                Item{1, "Never"},
            }};
        };

        struct AdornShading {
            inline static constexpr std::string_view Name = "AdornShading";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Default"},
                Item{1, "Shaded"},
                Item{2, "XRay"},
                Item{3, "XRayShaded"},
                Item{4, "AlwaysOnTop"},
            }};
        };

        struct AgeCheckStatus {
            inline static constexpr std::string_view Name = "AgeCheckStatus";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Unchecked"},
                Item{1, "Checked"},
            }};
        };

        struct AlignType {
            inline static constexpr std::string_view Name = "AlignType";
            inline static constexpr std::array<Item, 6> Items{{
                Item{0, "Parallel"},
                Item{1, "Perpendicular"},
                Item{2, "PrimaryAxisParallel"},
                Item{3, "PrimaryAxisPerpendicular"},
                Item{4, "PrimaryAxisLookAt"},
                Item{5, "AllAxes"},
            }};
        };

        struct AlphaMode {
            inline static constexpr std::string_view Name = "AlphaMode";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Overlay"},
                Item{1, "Transparency"},
                Item{2, "TintMask"},
                Item{3, "Opaque"},
            }};
        };

        struct AnalyticsCustomFieldKeys {
            inline static constexpr std::string_view Name = "AnalyticsCustomFieldKeys";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "CustomField01"},
                Item{1, "CustomField02"},
                Item{2, "CustomField03"},
            }};
        };

        struct AnalyticsEconomyAction {
            inline static constexpr std::string_view Name = "AnalyticsEconomyAction";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "Acquire"},
                Item{2, "Spend"},
            }};
        };

        struct AnalyticsEconomyFlowType {
            inline static constexpr std::string_view Name = "AnalyticsEconomyFlowType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Sink"},
                Item{1, "Source"},
            }};
        };

        struct AnalyticsEconomyTransactionType {
            inline static constexpr std::string_view Name = "AnalyticsEconomyTransactionType";
            inline static constexpr std::array<Item, 6> Items{{
                Item{0, "IAP"},
                Item{1, "Shop"},
                Item{2, "Gameplay"},
                Item{3, "ContextualPurchase"},
                Item{4, "TimedReward"},
                Item{5, "Onboarding"},
            }};
        };

        struct AnalyticsLogLevel {
            inline static constexpr std::string_view Name = "AnalyticsLogLevel";
            inline static constexpr std::array<Item, 6> Items{{
                Item{0, "Trace"},
                Item{1, "Debug"},
                Item{2, "Information"},
                Item{3, "Warning"},
                Item{4, "Error"},
                Item{5, "Fatal"},
            }};
        };

        struct AnalyticsProgressionStatus {
            inline static constexpr std::string_view Name = "AnalyticsProgressionStatus";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Default"},
                Item{1, "Begin"},
                Item{2, "Complete"},
                Item{3, "Abandon"},
                Item{4, "Fail"},
            }};
        };

        struct AnalyticsProgressionType {
            inline static constexpr std::string_view Name = "AnalyticsProgressionType";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Custom"},
                Item{1, "Start"},
                Item{2, "Fail"},
                Item{3, "Complete"},
            }};
        };

        struct AnimatedImageScaleType {
            inline static constexpr std::string_view Name = "AnimatedImageScaleType";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Stretch"},
                Item{1, "Tile"},
                Item{2, "Fit"},
                Item{3, "Crop"},
            }};
        };

        struct AnimationClipFromVideoStatus {
            inline static constexpr std::string_view Name = "AnimationClipFromVideoStatus";
            inline static constexpr std::array<Item, 12> Items{{
                Item{0, "Initializing"},
                Item{1, "Pending"},
                Item{2, "Processing"},
                Item{4, "ErrorGeneric"},
                Item{6, "Success"},
                Item{7, "ErrorVideoTooLong"},
                Item{8, "ErrorNoPersonDetected"},
                Item{9, "ErrorVideoUnstable"},
                Item{10, "Timeout"},
                Item{11, "Cancelled"},
                Item{12, "ErrorMultiplePeople"},
                Item{2001, "ErrorUploadingVideo"},
            }};
        };

        struct AnimationNodeBlend2DInputMode {
            inline static constexpr std::string_view Name = "AnimationNodeBlend2DInputMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Cartesian"},
                Item{1, "Polar"},
            }};
        };

        struct AnimationNodeBlendMode {
            inline static constexpr std::string_view Name = "AnimationNodeBlendMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Over"},
                Item{1, "Add"},
                Item{2, "Subtract"},
            }};
        };

        struct AnimationNodeInterruptible {
            inline static constexpr std::string_view Name = "AnimationNodeInterruptible";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Always"},
                Item{1, "Finished"},
                Item{2, "Trigger"},
            }};
        };

        struct AnimationNodePhaseSync {
            inline static constexpr std::string_view Name = "AnimationNodePhaseSync";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Synced"},
                Item{1, "Unsynced"},
            }};
        };

        struct AnimationNodePlayMode {
            inline static constexpr std::string_view Name = "AnimationNodePlayMode";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Loop"},
                Item{1, "PingPong"},
                Item{2, "OnceAndHold"},
                Item{3, "OnceAndReset"},
            }};
        };

        struct AnimationNodeTransitionType {
            inline static constexpr std::string_view Name = "AnimationNodeTransitionType";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "CrossFade"},
                Item{1, "InertialBlend"},
                Item{2, "DeadBlend"},
            }};
        };

        struct AnimationNodeTransitionWhen {
            inline static constexpr std::string_view Name = "AnimationNodeTransitionWhen";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Finished"},
                Item{1, "BeforeFinished"},
            }};
        };

        struct AnimationNodeType {
            inline static constexpr std::string_view Name = "AnimationNodeType";
            inline static constexpr std::array<Item, 16> Items{{
                Item{0, "InvalidNode"},
                Item{1, "AddNode"},
                Item{2, "OverNode"},
                Item{3, "Blend1DNode"},
                Item{4, "Blend2DNode"},
                Item{5, "ClipNode"},
                Item{6, "GraphOutput"},
                Item{7, "MaskNode"},
                Item{8, "PrioritySelectNode"},
                Item{9, "RandomSequenceNode"},
                Item{10, "SelectNode"},
                Item{11, "SequenceNode"},
                Item{12, "SpeedNode"},
                Item{13, "SubtractNode"},
                Item{14, "OneShotNode"},
                Item{16, "StateMachineNode"},
            }};
        };

        struct AnimationNodeWaitFor {
            inline static constexpr std::string_view Name = "AnimationNodeWaitFor";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Finished"},
                Item{1, "Trigger"},
            }};
        };

        struct AnimationPriority {
            inline static constexpr std::string_view Name = "AnimationPriority";
            inline static constexpr std::array<Item, 7> Items{{
                Item{0, "Idle"},
                Item{1, "Movement"},
                Item{2, "Action"},
                Item{3, "Action2"},
                Item{4, "Action3"},
                Item{5, "Action4"},
                Item{1000, "Core"},
            }};
        };

        struct AnimationValueNodeType {
            inline static constexpr std::string_view Name = "AnimationValueNodeType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Invalid"},
                Item{1, "Expression"},
            }};
        };

        struct AnimatorRetargetingMode {
            inline static constexpr std::string_view Name = "AnimatorRetargetingMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "Disabled"},
                Item{2, "Enabled"},
            }};
        };

        struct AntiAliasing {
            inline static constexpr std::string_view Name = "AntiAliasing";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Disabled"},
                Item{1, "Enabled"},
            }};
        };

        struct AppLifecycleManagerState {
            inline static constexpr std::string_view Name = "AppLifecycleManagerState";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Detached"},
                Item{1, "Active"},
                Item{2, "Inactive"},
                Item{3, "Hidden"},
            }};
        };

        struct AppShellActionType {
            inline static constexpr std::string_view Name = "AppShellActionType";
            inline static constexpr std::array<Item, 12> Items{{
                Item{0, "None"},
                Item{1, "OpenApp"},
                Item{2, "TapChatTab"},
                Item{3, "TapConversationEntry"},
                Item{4, "TapAvatarTab"},
                Item{5, "ReadConversation"},
                Item{6, "TapGamePageTab"},
                Item{7, "TapHomePageTab"},
                Item{8, "GamePageLoaded"},
                Item{9, "HomePageLoaded"},
                Item{10, "AvatarEditorPageLoaded"},
                Item{11, "HomePageInteractive"},
            }};
        };

        struct AppShellFeature {
            inline static constexpr std::string_view Name = "AppShellFeature";
            inline static constexpr std::array<Item, 8> Items{{
                Item{0, "None"},
                Item{1, "Chat"},
                Item{2, "AvatarEditor"},
                Item{3, "GamePage"},
                Item{4, "HomePage"},
                Item{5, "More"},
                Item{6, "Landing"},
                Item{7, "WatchPage"},
            }};
        };

        struct AppUpdateStatus {
            inline static constexpr std::string_view Name = "AppUpdateStatus";
            inline static constexpr std::array<Item, 7> Items{{
                Item{0, "Unknown"},
                Item{1, "NotSupported"},
                Item{2, "Failed"},
                Item{3, "NotAvailable"},
                Item{4, "Available"},
                Item{5, "AvailableBoundChannel"},
                Item{6, "AvailableBetaProgram"},
            }};
        };

        struct ApplyShadowMode {
            inline static constexpr std::string_view Name = "ApplyShadowMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Shape"},
                Item{1, "Text"},
            }};
        };

        struct ApplyStrokeMode {
            inline static constexpr std::string_view Name = "ApplyStrokeMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Contextual"},
                Item{1, "Border"},
            }};
        };

        struct AspectType {
            inline static constexpr std::string_view Name = "AspectType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "FitWithinMaxSize"},
                Item{1, "ScaleWithParentSize"},
            }};
        };

        struct AssetCreatorType {
            inline static constexpr std::string_view Name = "AssetCreatorType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "User"},
                Item{1, "Group"},
            }};
        };

        struct AssetFetchStatus {
            inline static constexpr std::string_view Name = "AssetFetchStatus";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Success"},
                Item{1, "Failure"},
                Item{2, "None"},
                Item{3, "Loading"},
                Item{4, "TimedOut"},
            }};
        };

        struct AssetRepresentation {
            inline static constexpr std::string_view Name = "AssetRepresentation";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "FullLength"},
                Item{1, "ShortPreview"},
            }};
        };

        struct AssetType {
            inline static constexpr std::string_view Name = "AssetType";
            inline static constexpr std::array<Item, 67> Items{{
                Item{1, "Image"},
                Item{2, "TShirt"},
                Item{3, "Audio"},
                Item{4, "Mesh"},
                Item{5, "Lua"},
                Item{8, "Hat"},
                Item{9, "Place"},
                Item{10, "Model"},
                Item{11, "Shirt"},
                Item{12, "Pants"},
                Item{13, "Decal"},
                Item{17, "Head"},
                Item{18, "Face"},
                Item{19, "Gear"},
                Item{21, "Badge"},
                Item{24, "Animation"},
                Item{27, "Torso"},
                Item{28, "RightArm"},
                Item{29, "LeftArm"},
                Item{30, "LeftLeg"},
                Item{31, "RightLeg"},
                Item{32, "Package"},
                Item{34, "GamePass"},
                Item{38, "Plugin"},
                Item{40, "MeshPart"},
                Item{41, "HairAccessory"},
                Item{42, "FaceAccessory"},
                Item{43, "NeckAccessory"},
                Item{44, "ShoulderAccessory"},
                Item{45, "FrontAccessory"},
                Item{46, "BackAccessory"},
                Item{47, "WaistAccessory"},
                Item{48, "ClimbAnimation"},
                Item{49, "DeathAnimation"},
                Item{50, "FallAnimation"},
                Item{51, "IdleAnimation"},
                Item{52, "JumpAnimation"},
                Item{53, "RunAnimation"},
                Item{54, "SwimAnimation"},
                Item{55, "WalkAnimation"},
                Item{56, "PoseAnimation"},
                Item{57, "EarAccessory"},
                Item{58, "EyeAccessory"},
                Item{61, "EmoteAnimation"},
                Item{62, "Video"},
                Item{64, "TShirtAccessory"},
                Item{65, "ShirtAccessory"},
                Item{66, "PantsAccessory"},
                Item{67, "JacketAccessory"},
                Item{68, "SweaterAccessory"},
                Item{69, "ShortsAccessory"},
                Item{70, "LeftShoeAccessory"},
                Item{71, "RightShoeAccessory"},
                Item{72, "DressSkirtAccessory"},
                Item{73, "FontFamily"},
                Item{76, "EyebrowAccessory"},
                Item{77, "EyelashAccessory"},
                Item{78, "MoodAnimation"},
                Item{79, "DynamicHead"},
                Item{88, "FaceMakeup"},
                Item{89, "LipMakeup"},
                Item{90, "EyeMakeup"},
                Item{92, "AvatarBackground"},
                Item{93, "TextDocument"},
                Item{95, "AnimatedImage"},
                Item{2, "TShirt"},
                Item{64, "TShirtAccessory"},
            }};
        };

        struct AssetTypeVerification {
            inline static constexpr std::string_view Name = "AssetTypeVerification";
            inline static constexpr std::array<Item, 3> Items{{
                Item{1, "Default"},
                Item{2, "ClientOnly"},
                Item{3, "Always"},
            }};
        };

        struct AudioApiRollout {
            inline static constexpr std::string_view Name = "AudioApiRollout";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Disabled"},
                Item{1, "Automatic"},
                Item{2, "Enabled"},
            }};
        };

        struct AudioChannelLayout {
            inline static constexpr std::string_view Name = "AudioChannelLayout";
            inline static constexpr std::array<Item, 7> Items{{
                Item{0, "Mono"},
                Item{1, "Stereo"},
                Item{2, "Quad"},
                Item{3, "Surround_5"},
                Item{4, "Surround_5_1"},
                Item{5, "Surround_7_1"},
                Item{6, "Surround_7_1_4"},
            }};
        };

        struct AudioFilterType {
            inline static constexpr std::string_view Name = "AudioFilterType";
            inline static constexpr std::array<Item, 12> Items{{
                Item{0, "Peak"},
                Item{1, "LowShelf"},
                Item{2, "HighShelf"},
                Item{3, "Lowpass12dB"},
                Item{4, "Lowpass24dB"},
                Item{5, "Lowpass48dB"},
                Item{6, "Highpass12dB"},
                Item{7, "Highpass24dB"},
                Item{8, "Highpass48dB"},
                Item{9, "Bandpass"},
                Item{10, "Notch"},
                Item{11, "Lowpass6dB"},
            }};
        };

        struct AudioPositionType {
            inline static constexpr std::string_view Name = "AudioPositionType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Parent"},
                Item{1, "Instance"},
            }};
        };

        struct AudioSampleFormat {
            inline static constexpr std::string_view Name = "AudioSampleFormat";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Int16"},
                Item{1, "Float32"},
            }};
        };

        struct AudioSimulationFidelity {
            inline static constexpr std::string_view Name = "AudioSimulationFidelity";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "None"},
                Item{1, "Automatic"},
            }};
        };

        struct AudioSortType {
            inline static constexpr std::string_view Name = "AudioSortType";
            inline static constexpr std::array<Item, 6> Items{{
                Item{1, "Relevance"},
                Item{2, "MostUsed"},
                Item{3, "Trending"},
                Item{4, "RecentlyCreated"},
                Item{5, "ShortestToLongest"},
                Item{6, "LongestToShortest"},
            }};
        };

        struct AudioSubType {
            inline static constexpr std::string_view Name = "AudioSubType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{1, "Music"},
                Item{2, "SoundEffect"},
            }};
        };

        struct AudioWindowSize {
            inline static constexpr std::string_view Name = "AudioWindowSize";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Small"},
                Item{1, "Medium"},
                Item{2, "Large"},
            }};
        };

        struct AuthorityMode {
            inline static constexpr std::string_view Name = "AuthorityMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Server"},
                Item{1, "Automatic"},
            }};
        };

        struct AutomaticSize {
            inline static constexpr std::string_view Name = "AutomaticSize";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "None"},
                Item{1, "X"},
                Item{2, "Y"},
                Item{3, "XY"},
            }};
        };

        struct AvatarAssetType {
            inline static constexpr std::string_view Name = "AvatarAssetType";
            inline static constexpr std::array<Item, 45> Items{{
                Item{2, "TShirt"},
                Item{8, "Hat"},
                Item{11, "Shirt"},
                Item{12, "Pants"},
                Item{17, "Head"},
                Item{18, "Face"},
                Item{19, "Gear"},
                Item{27, "Torso"},
                Item{28, "RightArm"},
                Item{29, "LeftArm"},
                Item{30, "LeftLeg"},
                Item{31, "RightLeg"},
                Item{41, "HairAccessory"},
                Item{42, "FaceAccessory"},
                Item{43, "NeckAccessory"},
                Item{44, "ShoulderAccessory"},
                Item{45, "FrontAccessory"},
                Item{46, "BackAccessory"},
                Item{47, "WaistAccessory"},
                Item{48, "ClimbAnimation"},
                Item{50, "FallAnimation"},
                Item{51, "IdleAnimation"},
                Item{52, "JumpAnimation"},
                Item{53, "RunAnimation"},
                Item{54, "SwimAnimation"},
                Item{55, "WalkAnimation"},
                Item{61, "EmoteAnimation"},
                Item{64, "TShirtAccessory"},
                Item{65, "ShirtAccessory"},
                Item{66, "PantsAccessory"},
                Item{67, "JacketAccessory"},
                Item{68, "SweaterAccessory"},
                Item{69, "ShortsAccessory"},
                Item{70, "LeftShoeAccessory"},
                Item{71, "RightShoeAccessory"},
                Item{72, "DressSkirtAccessory"},
                Item{76, "EyebrowAccessory"},
                Item{77, "EyelashAccessory"},
                Item{78, "MoodAnimation"},
                Item{79, "DynamicHead"},
                Item{88, "FaceMakeup"},
                Item{89, "LipMakeup"},
                Item{90, "EyeMakeup"},
                Item{92, "AvatarBackground"},
                Item{64, "TShirtAccessory"},
            }};
        };

        struct AvatarChatServiceFeature {
            inline static constexpr std::string_view Name = "AvatarChatServiceFeature";
            inline static constexpr std::array<Item, 11> Items{{
                Item{0, "None"},
                Item{1, "UniverseAudio"},
                Item{2, "UniverseVideo"},
                Item{4, "PlaceAudio"},
                Item{8, "PlaceVideo"},
                Item{16, "UserAudioEligible"},
                Item{32, "UserAudio"},
                Item{64, "UserVideoEligible"},
                Item{128, "UserVideo"},
                Item{256, "UserBanned"},
                Item{512, "UserVerifiedForVoice"},
            }};
        };

        struct AvatarContextMenuOption {
            inline static constexpr std::string_view Name = "AvatarContextMenuOption";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Friend"},
                Item{1, "Chat"},
                Item{2, "Emote"},
                Item{3, "InspectMenu"},
            }};
        };

        struct AvatarGenerationError {
            inline static constexpr std::string_view Name = "AvatarGenerationError";
            inline static constexpr std::array<Item, 7> Items{{
                Item{0, "None"},
                Item{1, "Unknown"},
                Item{2, "DownloadFailed"},
                Item{3, "Canceled"},
                Item{4, "Offensive"},
                Item{5, "Timeout"},
                Item{6, "JobNotFound"},
            }};
        };

        struct AvatarItemType {
            inline static constexpr std::string_view Name = "AvatarItemType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{1, "Asset"},
                Item{2, "Bundle"},
            }};
        };

        struct AvatarPromptResult {
            inline static constexpr std::string_view Name = "AvatarPromptResult";
            inline static constexpr std::array<Item, 3> Items{{
                Item{1, "Success"},
                Item{2, "PermissionDenied"},
                Item{3, "Failed"},
            }};
        };

        struct AvatarSettingsAccessoryLimitMethod {
            inline static constexpr std::string_view Name = "AvatarSettingsAccessoryLimitMethod";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Scale"},
                Item{1, "Remove"},
                Item{2, "PreviewScale"},
                Item{3, "PreviewRemove"},
            }};
        };

        struct AvatarSettingsAccessoryMode {
            inline static constexpr std::string_view Name = "AvatarSettingsAccessoryMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "PlayerChoice"},
                Item{1, "CustomLimit"},
            }};
        };

        struct AvatarSettingsAnimationClipsMode {
            inline static constexpr std::string_view Name = "AvatarSettingsAnimationClipsMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "PlayerChoice"},
                Item{1, "CustomClips"},
            }};
        };

        struct AvatarSettingsAnimationPacksMode {
            inline static constexpr std::string_view Name = "AvatarSettingsAnimationPacksMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "PlayerChoice"},
                Item{1, "StandardR15"},
                Item{2, "StandardR6"},
            }};
        };

        struct AvatarSettingsAppearanceMode {
            inline static constexpr std::string_view Name = "AvatarSettingsAppearanceMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "PlayerChoice"},
                Item{1, "CustomParts"},
                Item{2, "CustomBody"},
            }};
        };

        struct AvatarSettingsBuildMode {
            inline static constexpr std::string_view Name = "AvatarSettingsBuildMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "PlayerChoice"},
                Item{1, "CustomBuild"},
            }};
        };

        struct AvatarSettingsCharacterControllerMode {
            inline static constexpr std::string_view Name = "AvatarSettingsCharacterControllerMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "LegacyHumanoid"},
                Item{1, "LuaCharacterController"},
            }};
        };

        struct AvatarSettingsClothingMode {
            inline static constexpr std::string_view Name = "AvatarSettingsClothingMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "PlayerChoice"},
                Item{1, "CustomLimit"},
            }};
        };

        struct AvatarSettingsCollisionMode {
            inline static constexpr std::string_view Name = "AvatarSettingsCollisionMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "SingleCollider"},
                Item{2, "Legacy"},
            }};
        };

        struct AvatarSettingsCustomAccessoryMode {
            inline static constexpr std::string_view Name = "AvatarSettingsCustomAccessoryMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "PlayerChoice"},
                Item{1, "CustomAccessories"},
            }};
        };

        struct AvatarSettingsCustomBodyType {
            inline static constexpr std::string_view Name = "AvatarSettingsCustomBodyType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "AvatarReference"},
                Item{1, "BundleId"},
            }};
        };

        struct AvatarSettingsCustomClothingMode {
            inline static constexpr std::string_view Name = "AvatarSettingsCustomClothingMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "PlayerChoice"},
                Item{1, "CustomClothing"},
            }};
        };

        struct AvatarSettingsHitAndTouchDetectionMode {
            inline static constexpr std::string_view Name = "AvatarSettingsHitAndTouchDetectionMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "UseParts"},
                Item{1, "UseCollider"},
            }};
        };

        struct AvatarSettingsJumpMode {
            inline static constexpr std::string_view Name = "AvatarSettingsJumpMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "JumpHeight"},
                Item{1, "JumpPower"},
            }};
        };

        struct AvatarSettingsLegacyCollisionMode {
            inline static constexpr std::string_view Name = "AvatarSettingsLegacyCollisionMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "R6Colliders"},
                Item{1, "InnerBoxColliders"},
            }};
        };

        struct AvatarSettingsScaleMode {
            inline static constexpr std::string_view Name = "AvatarSettingsScaleMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "PlayerChoice"},
                Item{1, "CustomScale"},
            }};
        };

        struct AvatarThumbnailCustomizationType {
            inline static constexpr std::string_view Name = "AvatarThumbnailCustomizationType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{1, "Closeup"},
                Item{2, "FullBody"},
            }};
        };

        struct AvatarUnificationMode {
            inline static constexpr std::string_view Name = "AvatarUnificationMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "Disabled"},
                Item{2, "Enabled"},
            }};
        };

        struct Axis {
            inline static constexpr std::string_view Name = "Axis";
            inline static constexpr std::array<Item, 9> Items{{
                Item{0, "X"},
                Item{1, "Y"},
                Item{2, "Z"},
                Item{0, "X"},
                Item{0, "X"},
                Item{1, "Y"},
                Item{1, "Y"},
                Item{2, "Z"},
                Item{2, "Z"},
            }};
        };

        struct BasicMeshPartShape {
            inline static constexpr std::string_view Name = "BasicMeshPartShape";
            inline static constexpr std::array<Item, 3> Items{{
                Item{5, "Capsule"},
                Item{6, "Cone"},
                Item{7, "RoundedBox"},
            }};
        };

        struct BenefitType {
            inline static constexpr std::string_view Name = "BenefitType";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "DeveloperProduct"},
                Item{1, "AvatarAsset"},
                Item{2, "AvatarBundle"},
            }};
        };

        struct BinType {
            inline static constexpr std::string_view Name = "BinType";
            inline static constexpr std::array<Item, 8> Items{{
                Item{0, "Script"},
                Item{1, "GameTool"},
                Item{2, "Grab"},
                Item{3, "Clone"},
                Item{4, "Hammer"},
                Item{5, "Script"},
                Item{6, "Script"},
                Item{7, "Script"},
            }};
        };

        struct BodyPart {
            inline static constexpr std::string_view Name = "BodyPart";
            inline static constexpr std::array<Item, 6> Items{{
                Item{0, "Head"},
                Item{1, "Torso"},
                Item{2, "LeftArm"},
                Item{3, "RightArm"},
                Item{4, "LeftLeg"},
                Item{5, "RightLeg"},
            }};
        };

        struct BodyPartR15 {
            inline static constexpr std::string_view Name = "BodyPartR15";
            inline static constexpr std::array<Item, 17> Items{{
                Item{0, "Head"},
                Item{1, "UpperTorso"},
                Item{2, "LowerTorso"},
                Item{3, "LeftFoot"},
                Item{4, "LeftLowerLeg"},
                Item{5, "LeftUpperLeg"},
                Item{6, "RightFoot"},
                Item{7, "RightLowerLeg"},
                Item{8, "RightUpperLeg"},
                Item{9, "LeftHand"},
                Item{10, "LeftLowerArm"},
                Item{11, "LeftUpperArm"},
                Item{12, "RightHand"},
                Item{13, "RightLowerArm"},
                Item{14, "RightUpperArm"},
                Item{15, "RootPart"},
                Item{17, "Unknown"},
            }};
        };

        struct BorderMode {
            inline static constexpr std::string_view Name = "BorderMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Outline"},
                Item{1, "Middle"},
                Item{2, "Inset"},
            }};
        };

        struct BorderStrokePosition {
            inline static constexpr std::string_view Name = "BorderStrokePosition";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Outer"},
                Item{1, "Center"},
                Item{2, "Inner"},
            }};
        };

        struct BreakReason {
            inline static constexpr std::string_view Name = "BreakReason";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Other"},
                Item{1, "Error"},
                Item{2, "SpecialBreakpoint"},
                Item{3, "UserBreakpoint"},
            }};
        };

        struct BulkMoveMode {
            inline static constexpr std::string_view Name = "BulkMoveMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "FireAllEvents"},
                Item{1, "FireCFrameChanged"},
            }};
        };

        struct BundleType {
            inline static constexpr std::string_view Name = "BundleType";
            inline static constexpr std::array<Item, 5> Items{{
                Item{1, "BodyParts"},
                Item{2, "Animations"},
                Item{3, "Shoes"},
                Item{4, "DynamicHead"},
                Item{5, "DynamicHeadAvatar"},
            }};
        };

        struct Button {
            inline static constexpr std::string_view Name = "Button";
            inline static constexpr std::array<Item, 2> Items{{
                Item{8, "Dismount"},
                Item{32, "Jump"},
            }};
        };

        struct ButtonStyle {
            inline static constexpr std::string_view Name = "ButtonStyle";
            inline static constexpr std::array<Item, 6> Items{{
                Item{0, "Custom"},
                Item{1, "RobloxButtonDefault"},
                Item{2, "RobloxButton"},
                Item{3, "RobloxRoundButton"},
                Item{4, "RobloxRoundDefaultButton"},
                Item{5, "RobloxRoundDropdownButton"},
            }};
        };

        struct CageType {
            inline static constexpr std::string_view Name = "CageType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Inner"},
                Item{1, "Outer"},
            }};
        };

        struct CameraMode {
            inline static constexpr std::string_view Name = "CameraMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Classic"},
                Item{1, "LockFirstPerson"},
            }};
        };

        struct CameraPanMode {
            inline static constexpr std::string_view Name = "CameraPanMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Classic"},
                Item{1, "EdgeBump"},
            }};
        };

        struct CameraType {
            inline static constexpr std::string_view Name = "CameraType";
            inline static constexpr std::array<Item, 8> Items{{
                Item{0, "Fixed"},
                Item{1, "Attach"},
                Item{2, "Watch"},
                Item{3, "Track"},
                Item{4, "Follow"},
                Item{5, "Custom"},
                Item{6, "Scriptable"},
                Item{7, "Orbital"},
            }};
        };

        struct CaptureGalleryPermission {
            inline static constexpr std::string_view Name = "CaptureGalleryPermission";
            inline static constexpr std::array<Item, 1> Items{{
                Item{0, "ReadAndUpload"},
            }};
        };

        struct CaptureType {
            inline static constexpr std::string_view Name = "CaptureType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{1, "Screenshot"},
                Item{2, "Video"},
            }};
        };

        struct CatalogCategoryFilter {
            inline static constexpr std::string_view Name = "CatalogCategoryFilter";
            inline static constexpr std::array<Item, 6> Items{{
                Item{1, "None"},
                Item{2, "Featured"},
                Item{3, "Collectibles"},
                Item{4, "CommunityCreations"},
                Item{5, "Premium"},
                Item{6, "Recommended"},
            }};
        };

        struct CatalogSortAggregation {
            inline static constexpr std::string_view Name = "CatalogSortAggregation";
            inline static constexpr std::array<Item, 6> Items{{
                Item{1, "Past12Hours"},
                Item{2, "PastDay"},
                Item{3, "Past3Days"},
                Item{4, "PastWeek"},
                Item{5, "PastMonth"},
                Item{6, "AllTime"},
            }};
        };

        struct CatalogSortType {
            inline static constexpr std::string_view Name = "CatalogSortType";
            inline static constexpr std::array<Item, 7> Items{{
                Item{1, "Relevance"},
                Item{2, "PriceHighToLow"},
                Item{3, "PriceLowToHigh"},
                Item{5, "MostFavorited"},
                Item{6, "RecentlyCreated"},
                Item{7, "Bestselling"},
                Item{6, "RecentlyCreated"},
            }};
        };

        struct CellBlock {
            inline static constexpr std::string_view Name = "CellBlock";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Solid"},
                Item{1, "VerticalWedge"},
                Item{2, "CornerWedge"},
                Item{3, "InverseCornerWedge"},
                Item{4, "HorizontalWedge"},
            }};
        };

        struct CellMaterial {
            inline static constexpr std::string_view Name = "CellMaterial";
            inline static constexpr std::array<Item, 18> Items{{
                Item{0, "Empty"},
                Item{1, "Grass"},
                Item{2, "Sand"},
                Item{3, "Brick"},
                Item{4, "Granite"},
                Item{5, "Asphalt"},
                Item{6, "Iron"},
                Item{7, "Aluminum"},
                Item{8, "Gold"},
                Item{9, "WoodPlank"},
                Item{10, "WoodLog"},
                Item{11, "Gravel"},
                Item{12, "CinderBlock"},
                Item{13, "MossyStone"},
                Item{14, "Cement"},
                Item{15, "RedPlastic"},
                Item{16, "BluePlastic"},
                Item{17, "Water"},
            }};
        };

        struct CellOrientation {
            inline static constexpr std::string_view Name = "CellOrientation";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "NegZ"},
                Item{1, "X"},
                Item{2, "Z"},
                Item{3, "NegX"},
            }};
        };

        struct CenterDialogType {
            inline static constexpr std::string_view Name = "CenterDialogType";
            inline static constexpr std::array<Item, 4> Items{{
                Item{1, "UnsolicitedDialog"},
                Item{2, "PlayerInitiatedDialog"},
                Item{3, "ModalDialog"},
                Item{4, "QuitDialog"},
            }};
        };

        struct CharacterControlMode {
            inline static constexpr std::string_view Name = "CharacterControlMode";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Default"},
                Item{1, "Legacy"},
                Item{2, "NoCharacterController"},
                Item{3, "LuaCharacterController"},
            }};
        };

        struct ChatCallbackType {
            inline static constexpr std::string_view Name = "ChatCallbackType";
            inline static constexpr std::array<Item, 4> Items{{
                Item{1, "OnCreatingChatWindow"},
                Item{2, "OnClientSendingMessage"},
                Item{3, "OnClientFormattingMessage"},
                Item{17, "OnServerReceivingMessage"},
            }};
        };

        struct ChatColor {
            inline static constexpr std::string_view Name = "ChatColor";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Blue"},
                Item{1, "Green"},
                Item{2, "Red"},
                Item{3, "White"},
            }};
        };

        struct ChatMode {
            inline static constexpr std::string_view Name = "ChatMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Menu"},
                Item{1, "TextAndMenu"},
            }};
        };

        struct ChatPrivacyMode {
            inline static constexpr std::string_view Name = "ChatPrivacyMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "AllUsers"},
                Item{1, "NoOne"},
                Item{2, "Friends"},
            }};
        };

        struct ChatRestrictionStatus {
            inline static constexpr std::string_view Name = "ChatRestrictionStatus";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Unknown"},
                Item{1, "NotRestricted"},
                Item{2, "Restricted"},
            }};
        };

        struct ChatStyle {
            inline static constexpr std::string_view Name = "ChatStyle";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Classic"},
                Item{1, "Bubble"},
                Item{2, "ClassicAndBubble"},
            }};
        };

        struct ChatVersion {
            inline static constexpr std::string_view Name = "ChatVersion";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "LegacyChatService"},
                Item{1, "TextChatService"},
            }};
        };

        struct ClientAnimatorThrottlingMode {
            inline static constexpr std::string_view Name = "ClientAnimatorThrottlingMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "Disabled"},
                Item{2, "Enabled"},
            }};
        };

        struct CloseReason {
            inline static constexpr std::string_view Name = "CloseReason";
            inline static constexpr std::array<Item, 7> Items{{
                Item{0, "Unknown"},
                Item{1, "RobloxMaintenance"},
                Item{2, "DeveloperShutdown"},
                Item{3, "DeveloperUpdate"},
                Item{4, "ServerEmpty"},
                Item{5, "OutOfMemory"},
                Item{6, "Moderation"},
            }};
        };

        struct CollisionFidelity {
            inline static constexpr std::string_view Name = "CollisionFidelity";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Default"},
                Item{1, "Hull"},
                Item{2, "Box"},
                Item{3, "PreciseConvexDecomposition"},
                Item{4, "Tunable"},
            }};
        };

        struct CommandPermission {
            inline static constexpr std::string_view Name = "CommandPermission";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Plugin"},
                Item{1, "LocalUser"},
            }};
        };

        struct CompositeValueCurveType {
            inline static constexpr std::string_view Name = "CompositeValueCurveType";
            inline static constexpr std::array<Item, 8> Items{{
                Item{0, "ColorRGB"},
                Item{1, "ColorHSV"},
                Item{2, "NumberRange"},
                Item{3, "Rect"},
                Item{4, "UDim"},
                Item{5, "UDim2"},
                Item{6, "Vector2"},
                Item{7, "Vector3"},
            }};
        };

        struct CompressionAlgorithm {
            inline static constexpr std::string_view Name = "CompressionAlgorithm";
            inline static constexpr std::array<Item, 1> Items{{
                Item{0, "Zstd"},
            }};
        };

        struct ComputerCameraMovementMode {
            inline static constexpr std::string_view Name = "ComputerCameraMovementMode";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Default"},
                Item{1, "Classic"},
                Item{2, "Follow"},
                Item{3, "Orbital"},
                Item{4, "CameraToggle"},
            }};
        };

        struct ComputerMovementMode {
            inline static constexpr std::string_view Name = "ComputerMovementMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "KeyboardMouse"},
                Item{2, "ClickToMove"},
            }};
        };

        struct ConfigSnapshotErrorState {
            inline static constexpr std::string_view Name = "ConfigSnapshotErrorState";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "None"},
                Item{1, "LoadFailed"},
            }};
        };

        struct ConnectionError {
            inline static constexpr std::string_view Name = "ConnectionError";
            inline static constexpr std::array<Item, 114> Items{{
                Item{0, "OK"},
                Item{1, "Unknown"},
                Item{2, "ConnectErrors"},
                Item{3, "AlreadyConnected"},
                Item{4, "NoFreeIncomingConnections"},
                Item{5, "ConnectionBanned"},
                Item{6, "InvalidPassword"},
                Item{7, "IncompatibleProtocolVersion"},
                Item{8, "IPRecentlyConnected"},
                Item{9, "OurSystemRequiresSecurity"},
                Item{10, "SecurityKeyMismatch"},
                Item{256, "DisconnectErrors"},
                Item{257, "DisconnectBadhash"},
                Item{258, "DisconnectSecurityKeyMismatch"},
                Item{259, "DisconnectProtocolMismatch"},
                Item{260, "DisconnectReceivePacketError"},
                Item{261, "DisconnectReceivePacketStreamError"},
                Item{262, "DisconnectSendPacketError"},
                Item{263, "DisconnectIllegalTeleport"},
                Item{264, "DisconnectDuplicatePlayer"},
                Item{265, "DisconnectDuplicateTicket"},
                Item{266, "DisconnectTimeout"},
                Item{267, "DisconnectLuaKick"},
                Item{268, "DisconnectOnRemoteSysStats"},
                Item{269, "DisconnectHashTimeout"},
                Item{270, "DisconnectCloudEditKick"},
                Item{271, "DisconnectPlayerless"},
                Item{272, "DisconnectNewSecurityKeyMismatch"},
                Item{273, "DisconnectEvicted"},
                Item{274, "DisconnectDevMaintenance"},
                Item{275, "DisconnectRobloxMaintenance"},
                Item{276, "DisconnectRejoin"},
                Item{277, "DisconnectConnectionLost"},
                Item{278, "DisconnectIdle"},
                Item{279, "DisconnectRaknetErrors"},
                Item{280, "DisconnectWrongVersion"},
                Item{281, "DisconnectBySecurityPolicy"},
                Item{282, "DisconnectBlockedIP"},
                Item{284, "DisconnectClientFailure"},
                Item{285, "DisconnectClientRequest"},
                Item{286, "DisconnectPrivateServerKickout"},
                Item{287, "DisconnectModeratedGame"},
                Item{288, "ServerShutdown"},
                Item{290, "ReplicatorTimeout"},
                Item{291, "PlayerRemoved"},
                Item{292, "DisconnectOutOfMemoryKeepPlayingLeave"},
                Item{293, "DisconnectRomarkEndOfTest"},
                Item{294, "DisconnectCollaboratorPermissionRevoked"},
                Item{295, "DisconnectCollaboratorUnderage"},
                Item{296, "NetworkInternal"},
                Item{297, "NetworkSend"},
                Item{298, "NetworkTimeout"},
                Item{299, "NetworkMisbehavior"},
                Item{300, "NetworkSecurity"},
                Item{301, "ReplacementReady"},
                Item{302, "ServerEmpty"},
                Item{303, "PhantomFreeze"},
                Item{304, "AndroidAnticheatKick"},
                Item{305, "AndroidEmulatorKick"},
                Item{306, "AndroidRootedKick"},
                Item{307, "ScreentimeLockoutKick"},
                Item{308, "DisconnectionNotification"},
                Item{309, "DisconnectVerboselyModeratedGame"},
                Item{310, "DisconnectCollaboratorNotAgeVerified"},
                Item{311, "DisconnectCollaboratorTrustedConnectionsRequired"},
                Item{312, "DisconnectCollaboratorOwnerActionRequired"},
                Item{313, "DisconnectCollaboratorTooManyCollaborators"},
                Item{314, "DisconnectCollaboratorUnknownError"},
                Item{315, "DisconnectCollaboratorRequestedEviction"},
                Item{316, "DisconnectCollaboratorTrustedConnectionsRequiredPC"},
                Item{317, "DisconnectRemoteAttestationUnsupported"},
                Item{318, "DisconnectRemoteAttestationGeneralFailure"},
                Item{319, "DisconnectRemoteAttestationTimeout"},
                Item{320, "DisconnectRemoteAttestationOSOutOfDate"},
                Item{321, "DisconnectRemoteAttestationBootValidationFailure"},
                Item{512, "PlacelaunchErrors"},
                Item{515, "PlacelaunchDisabled"},
                Item{516, "PlacelaunchError"},
                Item{517, "PlacelaunchGameEnded"},
                Item{518, "PlacelaunchGameFull"},
                Item{522, "PlacelaunchUserLeft"},
                Item{523, "PlacelaunchRestricted"},
                Item{524, "PlacelaunchUnauthorized"},
                Item{525, "PlacelaunchFlooded"},
                Item{526, "PlacelaunchHashExpired"},
                Item{527, "PlacelaunchHashException"},
                Item{528, "PlacelaunchPartyCannotFit"},
                Item{529, "PlacelaunchHttpError"},
                Item{533, "PlacelaunchUserPrivacyUnauthorized"},
                Item{541, "PlacelaunchVipOwnerNotPresent"},
                Item{542, "PlacelaunchAgeVerificationRequired"},
                Item{543, "PlacelaunchParentalApprovalRequired"},
                Item{544, "PlacelaunchCoreGated"},
                Item{545, "PlacelaunchCollaborationCoreGated"},
                Item{600, "PlacelaunchCreatorBan"},
                Item{601, "PlacelaunchDeviceBlock"},
                Item{610, "PlacelaunchCustomMessage"},
                Item{611, "PlacelaunchOtherError"},
                Item{768, "TeleportErrors"},
                Item{769, "TeleportFailure"},
                Item{770, "TeleportGameNotFound"},
                Item{771, "TeleportGameEnded"},
                Item{772, "TeleportGameFull"},
                Item{773, "TeleportUnauthorized"},
                Item{774, "TeleportFlooded"},
                Item{775, "TeleportIsTeleporting"},
                Item{1024, "TransportErrors"},
                Item{1025, "DisconnectTransportIoError"},
                Item{1026, "DisconnectTransportIoInternetError"},
                Item{1027, "DisconnectTransportProtocolError"},
                Item{1028, "DisconnectTransportNgtcp2Error"},
                Item{1029, "DisconnectTransportQuicError"},
                Item{1030, "DisconnectTransportRnaError"},
                Item{279, "DisconnectRaknetErrors"},
            }};
        };

        struct ConnectionState {
            inline static constexpr std::string_view Name = "ConnectionState";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Connected"},
                Item{1, "Disconnected"},
            }};
        };

        struct ContentSourceType {
            inline static constexpr std::string_view Name = "ContentSourceType";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "None"},
                Item{1, "Uri"},
                Item{2, "Object"},
                Item{3, "Opaque"},
            }};
        };

        struct ContextActionPriority {
            inline static constexpr std::string_view Name = "ContextActionPriority";
            inline static constexpr std::array<Item, 4> Items{{
                Item{1000, "Low"},
                Item{2000, "Medium"},
                Item{3000, "High"},
                Item{2000, "Medium"},
            }};
        };

        struct ContextActionResult {
            inline static constexpr std::string_view Name = "ContextActionResult";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Sink"},
                Item{1, "Pass"},
            }};
        };

        struct ControlMode {
            inline static constexpr std::string_view Name = "ControlMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Classic"},
                Item{1, "MouseLockSwitch"},
                Item{1, "MouseLockSwitch"},
            }};
        };

        struct CoreGuiType {
            inline static constexpr std::string_view Name = "CoreGuiType";
            inline static constexpr std::array<Item, 10> Items{{
                Item{0, "PlayerList"},
                Item{1, "Health"},
                Item{2, "Backpack"},
                Item{3, "Chat"},
                Item{4, "All"},
                Item{5, "EmotesMenu"},
                Item{6, "SelfView"},
                Item{7, "Captures"},
                Item{8, "AvatarSwitcher"},
                Item{9, "ExperienceShop"},
            }};
        };

        struct CreateAssetResult {
            inline static constexpr std::string_view Name = "CreateAssetResult";
            inline static constexpr std::array<Item, 4> Items{{
                Item{1, "Success"},
                Item{2, "PermissionDenied"},
                Item{3, "UploadFailed"},
                Item{4, "Unknown"},
            }};
        };

        struct CreateContentResult {
            inline static constexpr std::string_view Name = "CreateContentResult";
            inline static constexpr std::array<Item, 5> Items{{
                Item{1, "Success"},
                Item{2, "PermissionDenied"},
                Item{3, "UploadFailed"},
                Item{4, "StorageLimitExceeded"},
                Item{5, "Unknown"},
            }};
        };

        struct CreateOutfitFailure {
            inline static constexpr std::string_view Name = "CreateOutfitFailure";
            inline static constexpr std::array<Item, 3> Items{{
                Item{1, "InvalidName"},
                Item{2, "OutfitLimitReached"},
                Item{3, "Other"},
            }};
        };

        struct CreatorType {
            inline static constexpr std::string_view Name = "CreatorType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "User"},
                Item{1, "Group"},
            }};
        };

        struct CreatorTypeFilter {
            inline static constexpr std::string_view Name = "CreatorTypeFilter";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "User"},
                Item{1, "Group"},
                Item{2, "All"},
            }};
        };

        struct CurrencyType {
            inline static constexpr std::string_view Name = "CurrencyType";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "Robux"},
                Item{2, "Tix"},
            }};
        };

        struct CustomCameraMode {
            inline static constexpr std::string_view Name = "CustomCameraMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "Classic"},
                Item{2, "Follow"},
            }};
        };

        struct DataModelChangeType {
            inline static constexpr std::string_view Name = "DataModelChangeType";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Add"},
                Item{1, "Remove"},
                Item{2, "Modify"},
                Item{3, "AddPackage"},
            }};
        };

        struct DataModelExtractorFileType {
            inline static constexpr std::string_view Name = "DataModelExtractorFileType";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "PlaceFile"},
                Item{1, "FirstSlice"},
                Item{2, "NonFirstSlice"},
            }};
        };

        struct DataStoreRequestType {
            inline static constexpr std::string_view Name = "DataStoreRequestType";
            inline static constexpr std::array<Item, 17> Items{{
                Item{0, "GetAsync"},
                Item{1, "SetIncrementAsync"},
                Item{2, "UpdateAsync"},
                Item{3, "GetSortedAsync"},
                Item{4, "SetIncrementSortedAsync"},
                Item{5, "OnUpdate"},
                Item{6, "ListAsync"},
                Item{7, "GetVersionAsync"},
                Item{8, "RemoveVersionAsync"},
                Item{9, "StandardRead"},
                Item{10, "StandardWrite"},
                Item{11, "StandardList"},
                Item{12, "StandardRemove"},
                Item{13, "OrderedRead"},
                Item{14, "OrderedWrite"},
                Item{15, "OrderedList"},
                Item{16, "OrderedRemove"},
            }};
        };

        struct DebugBreakModeType {
            inline static constexpr std::string_view Name = "DebugBreakModeType";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Never"},
                Item{1, "Always"},
                Item{2, "Unhandled"},
            }};
        };

        struct DebuggerResumeType {
            inline static constexpr std::string_view Name = "DebuggerResumeType";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "StepInto"},
                Item{1, "StepOut"},
                Item{2, "StepOver"},
                Item{3, "Resume"},
            }};
        };

        struct DevCameraOcclusionMode {
            inline static constexpr std::string_view Name = "DevCameraOcclusionMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Zoom"},
                Item{1, "Invisicam"},
            }};
        };

        struct DevComputerCameraMovementMode {
            inline static constexpr std::string_view Name = "DevComputerCameraMovementMode";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "UserChoice"},
                Item{1, "Classic"},
                Item{2, "Follow"},
                Item{3, "Orbital"},
                Item{4, "CameraToggle"},
            }};
        };

        struct DevComputerMovementMode {
            inline static constexpr std::string_view Name = "DevComputerMovementMode";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "UserChoice"},
                Item{1, "KeyboardMouse"},
                Item{2, "ClickToMove"},
                Item{3, "Scriptable"},
            }};
        };

        struct DevTouchCameraMovementMode {
            inline static constexpr std::string_view Name = "DevTouchCameraMovementMode";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "UserChoice"},
                Item{1, "Classic"},
                Item{2, "Follow"},
                Item{3, "Orbital"},
            }};
        };

        struct DevTouchMovementMode {
            inline static constexpr std::string_view Name = "DevTouchMovementMode";
            inline static constexpr std::array<Item, 7> Items{{
                Item{0, "UserChoice"},
                Item{1, "Thumbstick"},
                Item{2, "DPad"},
                Item{3, "Thumbpad"},
                Item{4, "ClickToMove"},
                Item{5, "Scriptable"},
                Item{6, "DynamicThumbstick"},
            }};
        };

        struct DeveloperMemoryTag {
            inline static constexpr std::string_view Name = "DeveloperMemoryTag";
            inline static constexpr std::array<Item, 25> Items{{
                Item{0, "Internal"},
                Item{1, "HttpCache"},
                Item{2, "Instances"},
                Item{3, "Signals"},
                Item{4, "LuaHeap"},
                Item{5, "Script"},
                Item{6, "PhysicsCollision"},
                Item{7, "BaseParts"},
                Item{8, "GraphicsSolidModels"},
                Item{10, "GraphicsMeshParts"},
                Item{11, "GraphicsParticles"},
                Item{12, "GraphicsParts"},
                Item{13, "GraphicsSpatialHash"},
                Item{14, "GraphicsTerrain"},
                Item{15, "GraphicsTexture"},
                Item{16, "GraphicsTextureCharacter"},
                Item{17, "Sounds"},
                Item{18, "StreamingSounds"},
                Item{19, "TerrainVoxels"},
                Item{21, "Gui"},
                Item{22, "Animation"},
                Item{23, "Navigation"},
                Item{24, "GeometryCSG"},
                Item{25, "GraphicsSlimModels"},
                Item{7, "BaseParts"},
            }};
        };

        struct DeviceFeatureType {
            inline static constexpr std::string_view Name = "DeviceFeatureType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "DeviceCapture"},
                Item{1, "InExperienceFAE"},
            }};
        };

        struct DeviceForm {
            inline static constexpr std::string_view Name = "DeviceForm";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Console"},
                Item{1, "Phone"},
                Item{2, "Tablet"},
                Item{3, "Desktop"},
                Item{4, "VR"},
            }};
        };

        struct DeviceLevel {
            inline static constexpr std::string_view Name = "DeviceLevel";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Low"},
                Item{1, "Medium"},
                Item{2, "High"},
            }};
        };

        struct DeviceSimulatorScalingMode {
            inline static constexpr std::string_view Name = "DeviceSimulatorScalingMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "ScaleToPhysicalSize"},
                Item{1, "ActualResolution"},
                Item{2, "FitToWindow"},
            }};
        };

        struct DeviceType {
            inline static constexpr std::string_view Name = "DeviceType";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Unknown"},
                Item{1, "Desktop"},
                Item{2, "Tablet"},
                Item{3, "Phone"},
                Item{4, "TV"},
            }};
        };

        struct DialogBehaviorType {
            inline static constexpr std::string_view Name = "DialogBehaviorType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "SinglePlayer"},
                Item{1, "MultiplePlayers"},
            }};
        };

        struct DialogPurpose {
            inline static constexpr std::string_view Name = "DialogPurpose";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Quest"},
                Item{1, "Help"},
                Item{2, "Shop"},
            }};
        };

        struct DialogTone {
            inline static constexpr std::string_view Name = "DialogTone";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Neutral"},
                Item{1, "Friendly"},
                Item{2, "Enemy"},
            }};
        };

        struct DigitsRigDescriptionSide {
            inline static constexpr std::string_view Name = "DigitsRigDescriptionSide";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "None"},
                Item{1, "Left"},
                Item{2, "Right"},
            }};
        };

        struct DiscountType {
            inline static constexpr std::string_view Name = "DiscountType";
            inline static constexpr std::array<Item, 1> Items{{
                Item{0, "Uncategorized"},
            }};
        };

        struct DisplayScalingMode {
            inline static constexpr std::string_view Name = "DisplayScalingMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "Legacy"},
                Item{2, "Responsive"},
            }};
        };

        struct DisplaySize {
            inline static constexpr std::string_view Name = "DisplaySize";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Small"},
                Item{1, "Medium"},
                Item{2, "Large"},
            }};
        };

        struct DistanceAttenuationMode {
            inline static constexpr std::string_view Name = "DistanceAttenuationMode";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Custom"},
                Item{1, "InverseTapered"},
                Item{2, "Linear"},
                Item{3, "LinearSquared"},
                Item{4, "Inverse"},
            }};
        };

        struct DomainType {
            inline static constexpr std::string_view Name = "DomainType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{1, "EXPERIENCE"},
                Item{3, "OAUTH"},
            }};
        };

        struct DominantAxis {
            inline static constexpr std::string_view Name = "DominantAxis";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Width"},
                Item{1, "Height"},
            }};
        };

        struct DragDetectorDragStyle {
            inline static constexpr std::string_view Name = "DragDetectorDragStyle";
            inline static constexpr std::array<Item, 9> Items{{
                Item{0, "TranslateLine"},
                Item{1, "TranslatePlane"},
                Item{2, "TranslatePlaneOrLine"},
                Item{3, "TranslateLineOrPlane"},
                Item{4, "TranslateViewPlane"},
                Item{5, "RotateAxis"},
                Item{6, "RotateTrackball"},
                Item{7, "Scriptable"},
                Item{8, "BestForDevice"},
            }};
        };

        struct DragDetectorPermissionPolicy {
            inline static constexpr std::string_view Name = "DragDetectorPermissionPolicy";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Nobody"},
                Item{1, "Everybody"},
                Item{2, "Scriptable"},
            }};
        };

        struct DragDetectorResponseStyle {
            inline static constexpr std::string_view Name = "DragDetectorResponseStyle";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Geometric"},
                Item{1, "Physical"},
                Item{2, "Custom"},
            }};
        };

        struct DraggingScrollBar {
            inline static constexpr std::string_view Name = "DraggingScrollBar";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "None"},
                Item{1, "Horizontal"},
                Item{2, "Vertical"},
            }};
        };

        struct EasingDirection {
            inline static constexpr std::string_view Name = "EasingDirection";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "In"},
                Item{1, "Out"},
                Item{2, "InOut"},
            }};
        };

        struct EasingStyle {
            inline static constexpr std::string_view Name = "EasingStyle";
            inline static constexpr std::array<Item, 13> Items{{
                Item{0, "Linear"},
                Item{1, "Sine"},
                Item{2, "Back"},
                Item{3, "Quad"},
                Item{4, "Quart"},
                Item{5, "Quint"},
                Item{6, "Bounce"},
                Item{7, "Elastic"},
                Item{8, "Exponential"},
                Item{9, "Circular"},
                Item{10, "Cubic"},
                Item{11, "Bezier"},
                Item{12, "Spring"},
            }};
        };

        struct EditableStatus {
            inline static constexpr std::string_view Name = "EditableStatus";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Unknown"},
                Item{1, "Allowed"},
                Item{2, "Disallowed"},
            }};
        };

        struct ElasticBehavior {
            inline static constexpr std::string_view Name = "ElasticBehavior";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "WhenScrollable"},
                Item{1, "Always"},
                Item{2, "Never"},
            }};
        };

        struct EmitterPositionType {
            inline static constexpr std::string_view Name = "EmitterPositionType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Parent"},
                Item{1, "Instance"},
            }};
        };

        struct EngagementLevel {
            inline static constexpr std::string_view Name = "EngagementLevel";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Unknown"},
                Item{1, "Inactive"},
                Item{2, "Low"},
                Item{3, "Medium"},
                Item{4, "High"},
            }};
        };

        struct EngineFolder {
            inline static constexpr std::string_view Name = "EngineFolder";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Screenshots"},
                Item{1, "Videos"},
                Item{2, "Logs"},
            }};
        };

        struct EnviromentalPhysicsThrottle {
            inline static constexpr std::string_view Name = "EnviromentalPhysicsThrottle";
            inline static constexpr std::array<Item, 7> Items{{
                Item{0, "DefaultAuto"},
                Item{1, "Disabled"},
                Item{2, "Always"},
                Item{3, "Skip2"},
                Item{4, "Skip4"},
                Item{5, "Skip8"},
                Item{6, "Skip16"},
            }};
        };

        struct ExperienceActivationStatus {
            inline static constexpr std::string_view Name = "ExperienceActivationStatus";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Unknown"},
                Item{1, "New"},
                Item{2, "Active"},
                Item{3, "Lapsed"},
                Item{4, "Reactivated"},
            }};
        };

        struct ExperienceAuthScope {
            inline static constexpr std::string_view Name = "ExperienceAuthScope";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "DefaultScope"},
                Item{1, "CreatorAssetsCreate"},
            }};
        };

        struct ExperienceEventStatus {
            inline static constexpr std::string_view Name = "ExperienceEventStatus";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Active"},
                Item{1, "Cancelled"},
                Item{2, "Moderated"},
                Item{3, "Unpublished"},
                Item{4, "Unknown"},
            }};
        };

        struct ExperienceStateCaptureSelectionMode {
            inline static constexpr std::string_view Name = "ExperienceStateCaptureSelectionMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Default"},
                Item{1, "SafetyHighlightMode"},
            }};
        };

        struct ExperienceStateRecordingLoadMode {
            inline static constexpr std::string_view Name = "ExperienceStateRecordingLoadMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "NewReplay"},
                Item{1, "ContiguousSlice"},
                Item{2, "NoncontiguousSlice"},
            }};
        };

        struct ExperienceStateRecordingLoadSourceType {
            inline static constexpr std::string_view Name = "ExperienceStateRecordingLoadSourceType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "S3Url"},
                Item{1, "File"},
            }};
        };

        struct ExperienceStateRecordingPlaybackMode {
            inline static constexpr std::string_view Name = "ExperienceStateRecordingPlaybackMode";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Undefined"},
                Item{1, "Stopped"},
                Item{2, "Playing"},
                Item{3, "Rewinding"},
            }};
        };

        struct ExplosionType {
            inline static constexpr std::string_view Name = "ExplosionType";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "NoCraters"},
                Item{1, "Craters"},
                Item{2, "Craters"},
            }};
        };

        struct FACSDataLod {
            inline static constexpr std::string_view Name = "FACSDataLod";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "LOD0"},
                Item{1, "LOD1"},
                Item{2, "LODCount"},
            }};
        };

        struct FacialAgeEstimationResultType {
            inline static constexpr std::string_view Name = "FacialAgeEstimationResultType";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Complete"},
                Item{1, "Cancel"},
                Item{2, "Error"},
            }};
        };

        struct FacialAnimationStreamingState {
            inline static constexpr std::string_view Name = "FacialAnimationStreamingState";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "None"},
                Item{1, "Audio"},
                Item{2, "Video"},
                Item{4, "Place"},
                Item{8, "Server"},
            }};
        };

        struct FacsActionUnit {
            inline static constexpr std::string_view Name = "FacsActionUnit";
            inline static constexpr std::array<Item, 50> Items{{
                Item{0, "ChinRaiserUpperLip"},
                Item{1, "ChinRaiser"},
                Item{2, "FlatPucker"},
                Item{3, "Funneler"},
                Item{4, "LowerLipSuck"},
                Item{5, "LipPresser"},
                Item{6, "LipsTogether"},
                Item{7, "MouthLeft"},
                Item{8, "MouthRight"},
                Item{9, "Pucker"},
                Item{10, "UpperLipSuck"},
                Item{11, "LeftCheekPuff"},
                Item{12, "LeftDimpler"},
                Item{13, "LeftLipCornerDown"},
                Item{14, "LeftLowerLipDepressor"},
                Item{15, "LeftLipCornerPuller"},
                Item{16, "LeftLipStretcher"},
                Item{17, "LeftUpperLipRaiser"},
                Item{18, "RightCheekPuff"},
                Item{19, "RightDimpler"},
                Item{20, "RightLipCornerDown"},
                Item{21, "RightLowerLipDepressor"},
                Item{22, "RightLipCornerPuller"},
                Item{23, "RightLipStretcher"},
                Item{24, "RightUpperLipRaiser"},
                Item{25, "JawDrop"},
                Item{26, "JawLeft"},
                Item{27, "JawRight"},
                Item{28, "Corrugator"},
                Item{29, "LeftBrowLowerer"},
                Item{30, "LeftOuterBrowRaiser"},
                Item{31, "LeftNoseWrinkler"},
                Item{32, "LeftInnerBrowRaiser"},
                Item{33, "RightBrowLowerer"},
                Item{34, "RightOuterBrowRaiser"},
                Item{35, "RightInnerBrowRaiser"},
                Item{36, "RightNoseWrinkler"},
                Item{37, "EyesLookDown"},
                Item{38, "EyesLookLeft"},
                Item{39, "EyesLookUp"},
                Item{40, "EyesLookRight"},
                Item{41, "LeftCheekRaiser"},
                Item{42, "LeftEyeUpperLidRaiser"},
                Item{43, "LeftEyeClosed"},
                Item{44, "RightCheekRaiser"},
                Item{45, "RightEyeUpperLidRaiser"},
                Item{46, "RightEyeClosed"},
                Item{47, "TongueDown"},
                Item{48, "TongueOut"},
                Item{49, "TongueUp"},
            }};
        };

        struct FeatureChannelEncoding {
            inline static constexpr std::string_view Name = "FeatureChannelEncoding";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Float32"},
                Item{1, "Float16"},
            }};
        };

        struct FeatureNormalization {
            inline static constexpr std::string_view Name = "FeatureNormalization";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "None"},
                Item{1, "StandardScore"},
                Item{2, "UnitL2"},
            }};
        };

        struct FeatureRestrictionAbuseVector {
            inline static constexpr std::string_view Name = "FeatureRestrictionAbuseVector";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "ExperienceChat"},
                Item{1, "Communication"},
            }};
        };

        struct FeedbackType {
            inline static constexpr std::string_view Name = "FeedbackType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Feedback"},
                Item{1, "PlayerSupport"},
            }};
        };

        struct FieldOfViewMode {
            inline static constexpr std::string_view Name = "FieldOfViewMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Vertical"},
                Item{1, "Diagonal"},
                Item{2, "MaxAxis"},
            }};
        };

        struct FillDirection {
            inline static constexpr std::string_view Name = "FillDirection";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Horizontal"},
                Item{1, "Vertical"},
            }};
        };

        struct FilterResult {
            inline static constexpr std::string_view Name = "FilterResult";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Accepted"},
                Item{1, "Rejected"},
            }};
        };

        struct FilterType {
            inline static constexpr std::string_view Name = "FilterType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Exclude"},
                Item{1, "Include"},
            }};
        };

        struct FinishRecordingOperation {
            inline static constexpr std::string_view Name = "FinishRecordingOperation";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Cancel"},
                Item{1, "Commit"},
                Item{2, "Append"},
            }};
        };

        struct FluidFidelity {
            inline static constexpr std::string_view Name = "FluidFidelity";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Automatic"},
                Item{1, "UseCollisionGeometry"},
                Item{2, "UsePreciseGeometry"},
            }};
        };

        struct FluidForces {
            inline static constexpr std::string_view Name = "FluidForces";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Default"},
                Item{1, "Experimental"},
            }};
        };

        struct Font {
            inline static constexpr std::string_view Name = "Font";
            inline static constexpr std::array<Item, 58> Items{{
                Item{0, "Legacy"},
                Item{1, "Arial"},
                Item{2, "ArialBold"},
                Item{3, "SourceSans"},
                Item{4, "SourceSansBold"},
                Item{5, "SourceSansLight"},
                Item{6, "SourceSansItalic"},
                Item{7, "Bodoni"},
                Item{8, "Garamond"},
                Item{9, "Cartoon"},
                Item{10, "Code"},
                Item{11, "Highway"},
                Item{12, "SciFi"},
                Item{13, "Arcade"},
                Item{14, "Fantasy"},
                Item{15, "Antique"},
                Item{16, "SourceSansSemibold"},
                Item{17, "Gotham"},
                Item{18, "GothamMedium"},
                Item{19, "GothamBold"},
                Item{20, "GothamBlack"},
                Item{21, "AmaticSC"},
                Item{22, "Bangers"},
                Item{23, "Creepster"},
                Item{24, "DenkOne"},
                Item{25, "Fondamento"},
                Item{26, "FredokaOne"},
                Item{27, "GrenzeGotisch"},
                Item{28, "IndieFlower"},
                Item{29, "JosefinSans"},
                Item{30, "Jura"},
                Item{31, "Kalam"},
                Item{32, "LuckiestGuy"},
                Item{33, "Merriweather"},
                Item{34, "Michroma"},
                Item{35, "Nunito"},
                Item{36, "Oswald"},
                Item{37, "PatrickHand"},
                Item{38, "PermanentMarker"},
                Item{39, "Roboto"},
                Item{40, "RobotoCondensed"},
                Item{41, "RobotoMono"},
                Item{42, "Sarpanch"},
                Item{43, "SpecialElite"},
                Item{44, "TitilliumWeb"},
                Item{45, "Ubuntu"},
                Item{46, "BuilderSans"},
                Item{47, "BuilderSansMedium"},
                Item{48, "BuilderSansBold"},
                Item{49, "BuilderSansExtraBold"},
                Item{50, "Arimo"},
                Item{51, "ArimoBold"},
                Item{100, "Unknown"},
                Item{17, "Gotham"},
                Item{18, "GothamMedium"},
                Item{18, "GothamMedium"},
                Item{19, "GothamBold"},
                Item{20, "GothamBlack"},
            }};
        };

        struct FontSize {
            inline static constexpr std::string_view Name = "FontSize";
            inline static constexpr std::array<Item, 15> Items{{
                Item{0, "Size8"},
                Item{1, "Size9"},
                Item{2, "Size10"},
                Item{3, "Size11"},
                Item{4, "Size12"},
                Item{5, "Size14"},
                Item{6, "Size18"},
                Item{7, "Size24"},
                Item{8, "Size36"},
                Item{9, "Size48"},
                Item{10, "Size28"},
                Item{11, "Size32"},
                Item{12, "Size42"},
                Item{13, "Size60"},
                Item{14, "Size96"},
            }};
        };

        struct FontStyle {
            inline static constexpr std::string_view Name = "FontStyle";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Normal"},
                Item{1, "Italic"},
            }};
        };

        struct FontWeight {
            inline static constexpr std::string_view Name = "FontWeight";
            inline static constexpr std::array<Item, 9> Items{{
                Item{100, "Thin"},
                Item{200, "ExtraLight"},
                Item{300, "Light"},
                Item{400, "Regular"},
                Item{500, "Medium"},
                Item{600, "SemiBold"},
                Item{700, "Bold"},
                Item{800, "ExtraBold"},
                Item{900, "Heavy"},
            }};
        };

        struct ForceLimitMode {
            inline static constexpr std::string_view Name = "ForceLimitMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Magnitude"},
                Item{1, "PerAxis"},
            }};
        };

        struct FormFactor {
            inline static constexpr std::string_view Name = "FormFactor";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Symmetric"},
                Item{1, "Brick"},
                Item{2, "Plate"},
                Item{3, "Custom"},
                Item{1, "Brick"},
            }};
        };

        struct FrameStyle {
            inline static constexpr std::string_view Name = "FrameStyle";
            inline static constexpr std::array<Item, 7> Items{{
                Item{0, "Custom"},
                Item{1, "ChatBlue"},
                Item{2, "RobloxSquare"},
                Item{3, "RobloxRound"},
                Item{4, "ChatGreen"},
                Item{5, "ChatRed"},
                Item{6, "DropShadow"},
            }};
        };

        struct FramerateManagerMode {
            inline static constexpr std::string_view Name = "FramerateManagerMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Automatic"},
                Item{1, "On"},
                Item{2, "Off"},
            }};
        };

        struct FriendRequestEvent {
            inline static constexpr std::string_view Name = "FriendRequestEvent";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Issue"},
                Item{1, "Revoke"},
                Item{2, "Accept"},
                Item{3, "Deny"},
            }};
        };

        struct FriendStatus {
            inline static constexpr std::string_view Name = "FriendStatus";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Unknown"},
                Item{1, "NotFriend"},
                Item{2, "Friend"},
                Item{3, "FriendRequestSent"},
                Item{4, "FriendRequestReceived"},
            }};
        };

        struct FriendsCallingEndReason {
            inline static constexpr std::string_view Name = "FriendsCallingEndReason";
            inline static constexpr std::array<Item, 8> Items{{
                Item{0, "None"},
                Item{1, "LocalHangup"},
                Item{2, "RemoteHangup"},
                Item{3, "Missed"},
                Item{4, "Declined"},
                Item{5, "Failed"},
                Item{6, "Canceled"},
                Item{7, "NoReason"},
            }};
        };

        struct FriendsCallingParticipantErrors {
            inline static constexpr std::string_view Name = "FriendsCallingParticipantErrors";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "None"},
                Item{1, "Unknown"},
                Item{2, "ConnectionFailed"},
                Item{3, "PublishFailed"},
                Item{4, "PermissionDenied"},
            }};
        };

        struct FriendsCallingParticipantLeaveReason {
            inline static constexpr std::string_view Name = "FriendsCallingParticipantLeaveReason";
            inline static constexpr std::array<Item, 7> Items{{
                Item{0, "None"},
                Item{1, "Hangup"},
                Item{2, "Declined"},
                Item{3, "Missed"},
                Item{4, "Removed"},
                Item{5, "Failed"},
                Item{6, "TimedOut"},
            }};
        };

        struct FriendsCallingParticipantStatus {
            inline static constexpr std::string_view Name = "FriendsCallingParticipantStatus";
            inline static constexpr std::array<Item, 9> Items{{
                Item{0, "Invited"},
                Item{1, "Ringing"},
                Item{2, "Joined"},
                Item{3, "Declined"},
                Item{4, "Left"},
                Item{5, "Removed"},
                Item{6, "Ineligible"},
                Item{7, "TimedOut"},
                Item{8, "Muted"},
            }};
        };

        struct FriendsCallingPhase {
            inline static constexpr std::string_view Name = "FriendsCallingPhase";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Idle"},
                Item{1, "Ringing"},
                Item{2, "Active"},
                Item{3, "Ended"},
            }};
        };

        struct FrustumStreamingMode {
            inline static constexpr std::string_view Name = "FrustumStreamingMode";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Default"},
                Item{1, "Enabled"},
                Item{2, "Disabled"},
                Item{3, "Automatic"},
            }};
        };

        struct FunctionalTestResult {
            inline static constexpr std::string_view Name = "FunctionalTestResult";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Passed"},
                Item{1, "Warning"},
                Item{2, "Error"},
            }};
        };

        struct GameAvatarType {
            inline static constexpr std::string_view Name = "GameAvatarType";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "R6"},
                Item{1, "R15"},
                Item{2, "PlayerChoice"},
            }};
        };

        struct GamepadType {
            inline static constexpr std::string_view Name = "GamepadType";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Unknown"},
                Item{1, "PS4"},
                Item{2, "PS5"},
                Item{3, "XboxOne"},
            }};
        };

        struct GearGenreSetting {
            inline static constexpr std::string_view Name = "GearGenreSetting";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "AllGenres"},
                Item{1, "MatchingGenreOnly"},
            }};
        };

        struct GearType {
            inline static constexpr std::string_view Name = "GearType";
            inline static constexpr std::array<Item, 9> Items{{
                Item{0, "MeleeWeapons"},
                Item{1, "RangedWeapons"},
                Item{2, "Explosives"},
                Item{3, "PowerUps"},
                Item{4, "NavigationEnhancers"},
                Item{5, "MusicalInstruments"},
                Item{6, "SocialItems"},
                Item{7, "BuildingTools"},
                Item{8, "Transport"},
            }};
        };

        struct GenerateMomentTextResult {
            inline static constexpr std::string_view Name = "GenerateMomentTextResult";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Success"},
                Item{1, "Pending"},
                Item{2, "Failed"},
                Item{3, "Filtered"},
            }};
        };

        struct Genre {
            inline static constexpr std::string_view Name = "Genre";
            inline static constexpr std::array<Item, 14> Items{{
                Item{0, "All"},
                Item{1, "TownAndCity"},
                Item{2, "Fantasy"},
                Item{3, "SciFi"},
                Item{4, "Ninja"},
                Item{5, "Scary"},
                Item{6, "Pirate"},
                Item{7, "Adventure"},
                Item{8, "Sports"},
                Item{9, "Funny"},
                Item{10, "WildWest"},
                Item{11, "War"},
                Item{12, "SkatePark"},
                Item{13, "Tutorial"},
            }};
        };

        struct GradientTileMode {
            inline static constexpr std::string_view Name = "GradientTileMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Clamp"},
                Item{1, "Repeat"},
                Item{2, "Mirror"},
            }};
        };

        struct GradientType {
            inline static constexpr std::string_view Name = "GradientType";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Linear"},
                Item{1, "Radial"},
                Item{2, "Conical"},
                Item{3, "Elliptical"},
            }};
        };

        struct GraphicsMode {
            inline static constexpr std::string_view Name = "GraphicsMode";
            inline static constexpr std::array<Item, 6> Items{{
                Item{1, "Automatic"},
                Item{2, "Direct3D11"},
                Item{4, "OpenGL"},
                Item{5, "Metal"},
                Item{6, "Vulkan"},
                Item{9, "NoGraphics"},
            }};
        };

        struct GraphicsOptimizationMode {
            inline static constexpr std::string_view Name = "GraphicsOptimizationMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Performance"},
                Item{1, "Balanced"},
                Item{2, "Quality"},
            }};
        };

        struct GroupMembershipStatus {
            inline static constexpr std::string_view Name = "GroupMembershipStatus";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "None"},
                Item{1, "Joined"},
                Item{2, "JoinRequestPending"},
                Item{3, "AlreadyMember"},
            }};
        };

        struct GuiState {
            inline static constexpr std::string_view Name = "GuiState";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Idle"},
                Item{1, "Hover"},
                Item{2, "Press"},
                Item{3, "NonInteractable"},
            }};
        };

        struct GuiType {
            inline static constexpr std::string_view Name = "GuiType";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Core"},
                Item{1, "Custom"},
                Item{2, "PlayerNameplates"},
                Item{3, "CustomBillboards"},
                Item{4, "CoreBillboards"},
            }};
        };

        struct HandlesStyle {
            inline static constexpr std::string_view Name = "HandlesStyle";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Resize"},
                Item{1, "Movement"},
            }};
        };

        struct HapticEffectType {
            inline static constexpr std::string_view Name = "HapticEffectType";
            inline static constexpr std::array<Item, 6> Items{{
                Item{0, "Custom"},
                Item{1, "UIHover"},
                Item{2, "UIClick"},
                Item{3, "UINotification"},
                Item{4, "GameplayExplosion"},
                Item{5, "GameplayCollision"},
            }};
        };

        struct HashAlgorithm {
            inline static constexpr std::string_view Name = "HashAlgorithm";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Blake2b"},
                Item{1, "Blake3"},
                Item{2, "Md5"},
                Item{3, "Sha1"},
                Item{4, "Sha256"},
            }};
        };

        struct HighlightDepthMode {
            inline static constexpr std::string_view Name = "HighlightDepthMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "AlwaysOnTop"},
                Item{1, "Occluded"},
            }};
        };

        struct HorizontalAlignment {
            inline static constexpr std::string_view Name = "HorizontalAlignment";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Center"},
                Item{1, "Left"},
                Item{2, "Right"},
            }};
        };

        struct HttpCachePolicy {
            inline static constexpr std::string_view Name = "HttpCachePolicy";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "None"},
                Item{1, "Full"},
                Item{2, "DataOnly"},
                Item{3, "Default"},
                Item{4, "InternalRedirectRefresh"},
            }};
        };

        struct HttpCompression {
            inline static constexpr std::string_view Name = "HttpCompression";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "None"},
                Item{1, "Gzip"},
            }};
        };

        struct HttpContentType {
            inline static constexpr std::string_view Name = "HttpContentType";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "ApplicationJson"},
                Item{1, "ApplicationXml"},
                Item{2, "ApplicationUrlEncoded"},
                Item{3, "TextPlain"},
                Item{4, "TextXml"},
            }};
        };

        struct HttpError {
            inline static constexpr std::string_view Name = "HttpError";
            inline static constexpr std::array<Item, 19> Items{{
                Item{0, "OK"},
                Item{1, "InvalidUrl"},
                Item{2, "DnsResolve"},
                Item{3, "ConnectFail"},
                Item{4, "OutOfMemory"},
                Item{5, "TimedOut"},
                Item{6, "TooManyRedirects"},
                Item{7, "InvalidRedirect"},
                Item{8, "NetFail"},
                Item{9, "Aborted"},
                Item{10, "SslConnectFail"},
                Item{11, "SslVerificationFail"},
                Item{12, "Unknown"},
                Item{13, "ConnectionClosed"},
                Item{14, "ServerProtocolError"},
                Item{15, "CreatorEnvironmentsNotSupportedByService"},
                Item{16, "InactivityTimeout"},
                Item{17, "TooManyOutstandingRequests"},
                Item{18, "InvalidRangeResponse"},
            }};
        };

        struct HttpRequestType {
            inline static constexpr std::string_view Name = "HttpRequestType";
            inline static constexpr std::array<Item, 7> Items{{
                Item{0, "Default"},
                Item{2, "MarketplaceService"},
                Item{7, "Players"},
                Item{15, "Chat"},
                Item{16, "Avatar"},
                Item{23, "Analytics"},
                Item{25, "Localization"},
            }};
        };

        struct HumanoidCollisionType {
            inline static constexpr std::string_view Name = "HumanoidCollisionType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "OuterBox"},
                Item{1, "InnerBox"},
            }};
        };

        struct HumanoidDisplayDistanceType {
            inline static constexpr std::string_view Name = "HumanoidDisplayDistanceType";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Viewer"},
                Item{1, "Subject"},
                Item{2, "None"},
            }};
        };

        struct HumanoidHealthDisplayType {
            inline static constexpr std::string_view Name = "HumanoidHealthDisplayType";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "DisplayWhenDamaged"},
                Item{1, "AlwaysOn"},
                Item{2, "AlwaysOff"},
            }};
        };

        struct HumanoidRigType {
            inline static constexpr std::string_view Name = "HumanoidRigType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "R6"},
                Item{1, "R15"},
            }};
        };

        struct HumanoidStateType {
            inline static constexpr std::string_view Name = "HumanoidStateType";
            inline static constexpr std::array<Item, 17> Items{{
                Item{0, "FallingDown"},
                Item{1, "Ragdoll"},
                Item{2, "GettingUp"},
                Item{3, "Jumping"},
                Item{4, "Swimming"},
                Item{5, "Freefall"},
                Item{6, "Flying"},
                Item{7, "Landed"},
                Item{8, "Running"},
                Item{10, "RunningNoPhysics"},
                Item{11, "StrafingNoPhysics"},
                Item{12, "Climbing"},
                Item{13, "Seated"},
                Item{14, "PlatformStanding"},
                Item{15, "Dead"},
                Item{16, "Physics"},
                Item{18, "None"},
            }};
        };

        struct IKCollisionsMode {
            inline static constexpr std::string_view Name = "IKCollisionsMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "NoCollisions"},
                Item{1, "OtherMechanismsAnchored"},
                Item{2, "IncludeContactedMechanisms"},
            }};
        };

        struct IKControlConstraintSupport {
            inline static constexpr std::string_view Name = "IKControlConstraintSupport";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "Disabled"},
                Item{2, "Enabled"},
            }};
        };

        struct IKControlType {
            inline static constexpr std::string_view Name = "IKControlType";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Transform"},
                Item{1, "Position"},
                Item{2, "Rotation"},
                Item{3, "LookAt"},
            }};
        };

        struct IXPLoadingStatus {
            inline static constexpr std::string_view Name = "IXPLoadingStatus";
            inline static constexpr std::array<Item, 7> Items{{
                Item{0, "None"},
                Item{1, "Pending"},
                Item{2, "Initialized"},
                Item{3, "ErrorInvalidUser"},
                Item{4, "ErrorConnection"},
                Item{5, "ErrorJsonParse"},
                Item{6, "ErrorTimedOut"},
            }};
        };

        struct ImageAlphaType {
            inline static constexpr std::string_view Name = "ImageAlphaType";
            inline static constexpr std::array<Item, 3> Items{{
                Item{1, "Default"},
                Item{2, "LockCanvasAlpha"},
                Item{3, "LockCanvasColor"},
            }};
        };

        struct ImageCombineType {
            inline static constexpr std::string_view Name = "ImageCombineType";
            inline static constexpr std::array<Item, 7> Items{{
                Item{1, "BlendSourceOver"},
                Item{2, "Overwrite"},
                Item{3, "Add"},
                Item{4, "Multiply"},
                Item{5, "AlphaBlend"},
                Item{6, "NormalMapBlend"},
                Item{7, "Subtract"},
            }};
        };

        struct InOut {
            inline static constexpr std::string_view Name = "InOut";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Edge"},
                Item{1, "Inset"},
                Item{2, "Center"},
            }};
        };

        struct InfoType {
            inline static constexpr std::string_view Name = "InfoType";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Asset"},
                Item{1, "Product"},
                Item{2, "GamePass"},
                Item{3, "Subscription"},
                Item{4, "Bundle"},
            }};
        };

        struct InitialDockState {
            inline static constexpr std::string_view Name = "InitialDockState";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Top"},
                Item{1, "Bottom"},
                Item{2, "Left"},
                Item{3, "Right"},
                Item{4, "Float"},
            }};
        };

        struct InputActionType {
            inline static constexpr std::string_view Name = "InputActionType";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Bool"},
                Item{1, "Direction1D"},
                Item{2, "Direction2D"},
                Item{3, "Direction3D"},
                Item{4, "ViewportPosition"},
            }};
        };

        struct InputBindingType {
            inline static constexpr std::string_view Name = "InputBindingType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Automatic"},
                Item{1, "Scriptable"},
            }};
        };

        struct InputSink {
            inline static constexpr std::string_view Name = "InputSink";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "None"},
                Item{1, "Activate"},
                Item{100, "All"},
            }};
        };

        struct InputType {
            inline static constexpr std::string_view Name = "InputType";
            inline static constexpr std::array<Item, 14> Items{{
                Item{0, "NoInput"},
                Item{12, "Constant"},
                Item{13, "Sin"},
                Item{0, "NoInput"},
                Item{1, "NoInput"},
                Item{2, "NoInput"},
                Item{3, "NoInput"},
                Item{4, "NoInput"},
                Item{6, "NoInput"},
                Item{7, "NoInput"},
                Item{8, "NoInput"},
                Item{9, "NoInput"},
                Item{10, "NoInput"},
                Item{11, "NoInput"},
            }};
        };

        struct InstanceFileSyncStatus {
            inline static constexpr std::string_view Name = "InstanceFileSyncStatus";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "NotSynced"},
                Item{1, "Errored"},
                Item{2, "SyncedAsRoot"},
                Item{3, "SyncedAsDescendant"},
                Item{4, "AncestorErrored"},
            }};
        };

        struct IntermediateMeshGenerationResult {
            inline static constexpr std::string_view Name = "IntermediateMeshGenerationResult";
            inline static constexpr std::array<Item, 1> Items{{
                Item{0, "HighQualityMesh"},
            }};
        };

        struct InternalVideoUsage {
            inline static constexpr std::string_view Name = "InternalVideoUsage";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Default"},
                Item{1, "WatchPage"},
                Item{2, "HomeCarousel"},
                Item{3, "FeatureTileAd"},
            }};
        };

        struct InterpolationThrottlingMode {
            inline static constexpr std::string_view Name = "InterpolationThrottlingMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "Disabled"},
                Item{2, "Enabled"},
            }};
        };

        struct InviteState {
            inline static constexpr std::string_view Name = "InviteState";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Placed"},
                Item{1, "Accepted"},
                Item{2, "Declined"},
                Item{3, "Missed"},
            }};
        };

        struct ItemLineAlignment {
            inline static constexpr std::string_view Name = "ItemLineAlignment";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Automatic"},
                Item{1, "Start"},
                Item{2, "Center"},
                Item{3, "End"},
                Item{4, "Stretch"},
            }};
        };

        struct JoinSource {
            inline static constexpr std::string_view Name = "JoinSource";
            inline static constexpr std::array<Item, 1> Items{{
                Item{1, "CreatedItemAttribution"},
            }};
        };

        struct JointCreationMode {
            inline static constexpr std::string_view Name = "JointCreationMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "All"},
                Item{1, "Surface"},
                Item{2, "None"},
            }};
        };

        struct KeyCode {
            inline static constexpr std::string_view Name = "KeyCode";
            inline static constexpr std::array<Item, 285> Items{{
                Item{0, "None"},
                Item{8, "Backspace"},
                Item{9, "Tab"},
                Item{12, "Clear"},
                Item{13, "Return"},
                Item{19, "Pause"},
                Item{27, "Escape"},
                Item{32, "Space"},
                Item{34, "QuotedDouble"},
                Item{35, "Hash"},
                Item{36, "Dollar"},
                Item{37, "Percent"},
                Item{38, "Ampersand"},
                Item{39, "Quote"},
                Item{40, "LeftParenthesis"},
                Item{41, "RightParenthesis"},
                Item{42, "Asterisk"},
                Item{43, "Plus"},
                Item{44, "Comma"},
                Item{45, "Minus"},
                Item{46, "Period"},
                Item{47, "Slash"},
                Item{48, "Zero"},
                Item{49, "One"},
                Item{50, "Two"},
                Item{51, "Three"},
                Item{52, "Four"},
                Item{53, "Five"},
                Item{54, "Six"},
                Item{55, "Seven"},
                Item{56, "Eight"},
                Item{57, "Nine"},
                Item{58, "Colon"},
                Item{59, "Semicolon"},
                Item{60, "LessThan"},
                Item{61, "Equals"},
                Item{62, "GreaterThan"},
                Item{63, "Question"},
                Item{64, "At"},
                Item{91, "LeftBracket"},
                Item{92, "BackSlash"},
                Item{93, "RightBracket"},
                Item{94, "Caret"},
                Item{95, "Underscore"},
                Item{96, "Backquote"},
                Item{97, "A"},
                Item{98, "B"},
                Item{99, "C"},
                Item{100, "D"},
                Item{101, "E"},
                Item{102, "F"},
                Item{103, "G"},
                Item{104, "H"},
                Item{105, "I"},
                Item{106, "J"},
                Item{107, "K"},
                Item{108, "L"},
                Item{109, "M"},
                Item{110, "N"},
                Item{111, "O"},
                Item{112, "P"},
                Item{113, "Q"},
                Item{114, "R"},
                Item{115, "S"},
                Item{116, "T"},
                Item{117, "U"},
                Item{118, "V"},
                Item{119, "W"},
                Item{120, "X"},
                Item{121, "Y"},
                Item{122, "Z"},
                Item{123, "LeftCurly"},
                Item{124, "Pipe"},
                Item{125, "RightCurly"},
                Item{126, "Tilde"},
                Item{127, "Delete"},
                Item{160, "World0"},
                Item{161, "World1"},
                Item{162, "World2"},
                Item{163, "World3"},
                Item{164, "World4"},
                Item{165, "World5"},
                Item{166, "World6"},
                Item{167, "World7"},
                Item{168, "World8"},
                Item{169, "World9"},
                Item{170, "World10"},
                Item{171, "World11"},
                Item{172, "World12"},
                Item{173, "World13"},
                Item{174, "World14"},
                Item{175, "World15"},
                Item{176, "World16"},
                Item{177, "World17"},
                Item{178, "World18"},
                Item{179, "World19"},
                Item{180, "World20"},
                Item{181, "World21"},
                Item{182, "World22"},
                Item{183, "World23"},
                Item{184, "World24"},
                Item{185, "World25"},
                Item{186, "World26"},
                Item{187, "World27"},
                Item{188, "World28"},
                Item{189, "World29"},
                Item{190, "World30"},
                Item{191, "World31"},
                Item{192, "World32"},
                Item{193, "World33"},
                Item{194, "World34"},
                Item{195, "World35"},
                Item{196, "World36"},
                Item{197, "World37"},
                Item{198, "World38"},
                Item{199, "World39"},
                Item{200, "World40"},
                Item{201, "World41"},
                Item{202, "World42"},
                Item{203, "World43"},
                Item{204, "World44"},
                Item{205, "World45"},
                Item{206, "World46"},
                Item{207, "World47"},
                Item{208, "World48"},
                Item{209, "World49"},
                Item{210, "World50"},
                Item{211, "World51"},
                Item{212, "World52"},
                Item{213, "World53"},
                Item{214, "World54"},
                Item{215, "World55"},
                Item{216, "World56"},
                Item{217, "World57"},
                Item{218, "World58"},
                Item{219, "World59"},
                Item{220, "World60"},
                Item{221, "World61"},
                Item{222, "World62"},
                Item{223, "World63"},
                Item{224, "World64"},
                Item{225, "World65"},
                Item{226, "World66"},
                Item{227, "World67"},
                Item{228, "World68"},
                Item{229, "World69"},
                Item{230, "World70"},
                Item{231, "World71"},
                Item{232, "World72"},
                Item{233, "World73"},
                Item{234, "World74"},
                Item{235, "World75"},
                Item{236, "World76"},
                Item{237, "World77"},
                Item{238, "World78"},
                Item{239, "World79"},
                Item{240, "World80"},
                Item{241, "World81"},
                Item{242, "World82"},
                Item{243, "World83"},
                Item{244, "World84"},
                Item{245, "World85"},
                Item{246, "World86"},
                Item{247, "World87"},
                Item{248, "World88"},
                Item{249, "World89"},
                Item{250, "World90"},
                Item{251, "World91"},
                Item{252, "World92"},
                Item{253, "World93"},
                Item{254, "World94"},
                Item{255, "World95"},
                Item{256, "KeypadZero"},
                Item{257, "KeypadOne"},
                Item{258, "KeypadTwo"},
                Item{259, "KeypadThree"},
                Item{260, "KeypadFour"},
                Item{261, "KeypadFive"},
                Item{262, "KeypadSix"},
                Item{263, "KeypadSeven"},
                Item{264, "KeypadEight"},
                Item{265, "KeypadNine"},
                Item{266, "KeypadPeriod"},
                Item{267, "KeypadDivide"},
                Item{268, "KeypadMultiply"},
                Item{269, "KeypadMinus"},
                Item{270, "KeypadPlus"},
                Item{271, "KeypadEnter"},
                Item{272, "KeypadEquals"},
                Item{273, "Up"},
                Item{274, "Down"},
                Item{275, "Right"},
                Item{276, "Left"},
                Item{277, "Insert"},
                Item{278, "Home"},
                Item{279, "End"},
                Item{280, "PageUp"},
                Item{281, "PageDown"},
                Item{282, "F1"},
                Item{283, "F2"},
                Item{284, "F3"},
                Item{285, "F4"},
                Item{286, "F5"},
                Item{287, "F6"},
                Item{288, "F7"},
                Item{289, "F8"},
                Item{290, "F9"},
                Item{291, "F10"},
                Item{292, "F11"},
                Item{293, "F12"},
                Item{294, "F13"},
                Item{295, "F14"},
                Item{296, "F15"},
                Item{300, "NumLock"},
                Item{301, "CapsLock"},
                Item{302, "ScrollLock"},
                Item{303, "RightShift"},
                Item{304, "LeftShift"},
                Item{305, "RightControl"},
                Item{306, "LeftControl"},
                Item{307, "RightAlt"},
                Item{308, "LeftAlt"},
                Item{309, "RightMeta"},
                Item{310, "LeftMeta"},
                Item{311, "LeftSuper"},
                Item{312, "RightSuper"},
                Item{313, "Mode"},
                Item{314, "Compose"},
                Item{315, "Help"},
                Item{316, "Print"},
                Item{317, "SysReq"},
                Item{318, "Break"},
                Item{319, "Menu"},
                Item{320, "Power"},
                Item{321, "Euro"},
                Item{322, "Undo"},
                Item{1000, "ButtonX"},
                Item{1001, "ButtonY"},
                Item{1002, "ButtonA"},
                Item{1003, "ButtonB"},
                Item{1004, "ButtonR1"},
                Item{1005, "ButtonL1"},
                Item{1006, "ButtonR2"},
                Item{1007, "ButtonL2"},
                Item{1008, "ButtonR3"},
                Item{1009, "ButtonL3"},
                Item{1010, "ButtonStart"},
                Item{1011, "ButtonSelect"},
                Item{1012, "DPadLeft"},
                Item{1013, "DPadRight"},
                Item{1014, "DPadUp"},
                Item{1015, "DPadDown"},
                Item{1016, "Thumbstick1"},
                Item{1017, "Thumbstick2"},
                Item{1018, "Thumbstick1Up"},
                Item{1019, "Thumbstick1Down"},
                Item{1020, "Thumbstick1Left"},
                Item{1021, "Thumbstick1Right"},
                Item{1022, "Thumbstick2Up"},
                Item{1023, "Thumbstick2Down"},
                Item{1024, "Thumbstick2Left"},
                Item{1025, "Thumbstick2Right"},
                Item{1026, "MouseLeftButton"},
                Item{1027, "MouseRightButton"},
                Item{1028, "MouseMiddleButton"},
                Item{1029, "MouseBackButton"},
                Item{1030, "MouseNoButton"},
                Item{1031, "MouseX"},
                Item{1032, "MouseY"},
                Item{1033, "MousePosition"},
                Item{1034, "TouchPosition"},
                Item{1035, "MouseWheel"},
                Item{1040, "TrackpadPan"},
                Item{1045, "TrackpadPinch"},
                Item{1048, "MouseDelta"},
                Item{1049, "TouchDelta"},
                Item{1050, "TouchPinch"},
                Item{1051, "ButtonCenter"},
                Item{1052, "ButtonBack"},
                Item{1053, "ButtonUp"},
                Item{1054, "ButtonDown"},
                Item{1055, "ButtonLeft"},
                Item{1056, "ButtonRight"},
                Item{0, "None"},
                Item{1034, "TouchPosition"},
            }};
        };

        struct KeyCodeStringFormat {
            inline static constexpr std::string_view Name = "KeyCodeStringFormat";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Default"},
                Item{1, "Abbreviated"},
            }};
        };

        struct KeyInterpolationMode {
            inline static constexpr std::string_view Name = "KeyInterpolationMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Constant"},
                Item{1, "Linear"},
                Item{2, "Cubic"},
            }};
        };

        struct KeywordFilterType {
            inline static constexpr std::string_view Name = "KeywordFilterType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Include"},
                Item{1, "Exclude"},
            }};
        };

        struct KnownWindow {
            inline static constexpr std::string_view Name = "KnownWindow";
            inline static constexpr std::array<Item, 1> Items{{
                Item{0, "Main"},
            }};
        };

        struct LeftRight {
            inline static constexpr std::string_view Name = "LeftRight";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Left"},
                Item{1, "Center"},
                Item{2, "Right"},
            }};
        };

        struct LightingStyle {
            inline static constexpr std::string_view Name = "LightingStyle";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Realistic"},
                Item{1, "Soft"},
            }};
        };

        struct Limb {
            inline static constexpr std::string_view Name = "Limb";
            inline static constexpr std::array<Item, 7> Items{{
                Item{0, "Head"},
                Item{1, "Torso"},
                Item{2, "LeftArm"},
                Item{3, "RightArm"},
                Item{4, "LeftLeg"},
                Item{5, "RightLeg"},
                Item{6, "Unknown"},
            }};
        };

        struct LineJoinMode {
            inline static constexpr std::string_view Name = "LineJoinMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Round"},
                Item{1, "Bevel"},
                Item{2, "Miter"},
            }};
        };

        struct ListenerLocation {
            inline static constexpr std::string_view Name = "ListenerLocation";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Default"},
                Item{1, "None"},
                Item{2, "Character"},
                Item{3, "Camera"},
            }};
        };

        struct ListenerPositionType {
            inline static constexpr std::string_view Name = "ListenerPositionType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Parent"},
                Item{1, "Instance"},
            }};
        };

        struct ListenerType {
            inline static constexpr std::string_view Name = "ListenerType";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Camera"},
                Item{1, "CFrame"},
                Item{2, "ObjectPosition"},
                Item{3, "ObjectCFrame"},
            }};
        };

        struct LoadCharacterLayeredClothing {
            inline static constexpr std::string_view Name = "LoadCharacterLayeredClothing";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "Disabled"},
                Item{2, "Enabled"},
            }};
        };

        struct LoadDynamicHeads {
            inline static constexpr std::string_view Name = "LoadDynamicHeads";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "Disabled"},
                Item{2, "Enabled"},
            }};
        };

        struct LocationType {
            inline static constexpr std::string_view Name = "LocationType";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Character"},
                Item{1, "Camera"},
                Item{2, "ObjectPosition"},
            }};
        };

        struct LuauTypeCheckMode {
            inline static constexpr std::string_view Name = "LuauTypeCheckMode";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Default"},
                Item{1, "NoCheck"},
                Item{2, "Nonstrict"},
                Item{3, "Strict"},
            }};
        };

        struct MakeupType {
            inline static constexpr std::string_view Name = "MakeupType";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Face"},
                Item{1, "Lip"},
                Item{2, "Eye"},
            }};
        };

        struct MarketplaceBulkPurchasePromptStatus {
            inline static constexpr std::string_view Name = "MarketplaceBulkPurchasePromptStatus";
            inline static constexpr std::array<Item, 3> Items{{
                Item{1, "Completed"},
                Item{2, "Aborted"},
                Item{3, "Error"},
            }};
        };

        struct MarketplaceItemPurchaseStatus {
            inline static constexpr std::string_view Name = "MarketplaceItemPurchaseStatus";
            inline static constexpr std::array<Item, 13> Items{{
                Item{1, "Success"},
                Item{2, "SystemError"},
                Item{3, "AlreadyOwned"},
                Item{4, "InsufficientRobux"},
                Item{5, "QuantityLimitExceeded"},
                Item{6, "QuotaExceeded"},
                Item{7, "NotForSale"},
                Item{8, "NotAvailableForPurchaser"},
                Item{9, "PriceMismatch"},
                Item{10, "SoldOut"},
                Item{11, "PurchaserIsSeller"},
                Item{12, "InsufficientMembership"},
                Item{13, "PlaceInvalid"},
            }};
        };

        struct MarketplaceProductType {
            inline static constexpr std::string_view Name = "MarketplaceProductType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{1, "AvatarAsset"},
                Item{2, "AvatarBundle"},
            }};
        };

        struct MatchmakingType {
            inline static constexpr std::string_view Name = "MatchmakingType";
            inline static constexpr std::array<Item, 3> Items{{
                Item{1, "Default"},
                Item{2, "XboxOnly"},
                Item{3, "PlayStationOnly"},
            }};
        };

        struct Material {
            inline static constexpr std::string_view Name = "Material";
            inline static constexpr std::array<Item, 47> Items{{
                Item{256, "Plastic"},
                Item{272, "SmoothPlastic"},
                Item{288, "Neon"},
                Item{512, "Wood"},
                Item{528, "WoodPlanks"},
                Item{784, "Marble"},
                Item{788, "Basalt"},
                Item{800, "Slate"},
                Item{804, "CrackedLava"},
                Item{816, "Concrete"},
                Item{820, "Limestone"},
                Item{832, "Granite"},
                Item{836, "Pavement"},
                Item{848, "Brick"},
                Item{864, "Pebble"},
                Item{880, "Cobblestone"},
                Item{896, "Rock"},
                Item{912, "Sandstone"},
                Item{1040, "CorrodedMetal"},
                Item{1056, "DiamondPlate"},
                Item{1072, "Foil"},
                Item{1088, "Metal"},
                Item{1280, "Grass"},
                Item{1284, "LeafyGrass"},
                Item{1296, "Sand"},
                Item{1312, "Fabric"},
                Item{1328, "Snow"},
                Item{1344, "Mud"},
                Item{1360, "Ground"},
                Item{1376, "Asphalt"},
                Item{1392, "Salt"},
                Item{1536, "Ice"},
                Item{1552, "Glacier"},
                Item{1568, "Glass"},
                Item{1584, "ForceField"},
                Item{1792, "Air"},
                Item{2048, "Water"},
                Item{2304, "Cardboard"},
                Item{2305, "Carpet"},
                Item{2306, "CeramicTiles"},
                Item{2307, "ClayRoofTiles"},
                Item{2308, "RoofShingles"},
                Item{2309, "Leather"},
                Item{2310, "Plaster"},
                Item{2311, "Rubber"},
                Item{1040, "CorrodedMetal"},
                Item{1072, "Foil"},
            }};
        };

        struct MaterialPattern {
            inline static constexpr std::string_view Name = "MaterialPattern";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Regular"},
                Item{1, "Organic"},
            }};
        };

        struct MembershipType {
            inline static constexpr std::string_view Name = "MembershipType";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "None"},
                Item{1, "BuildersClub"},
                Item{2, "TurboBuildersClub"},
                Item{3, "OutrageousBuildersClub"},
                Item{4, "Premium"},
            }};
        };

        struct MeshAttribute {
            inline static constexpr std::string_view Name = "MeshAttribute";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Vertex"},
                Item{1, "Normal"},
                Item{2, "Color"},
                Item{3, "UV"},
                Item{4, "Face"},
            }};
        };

        struct MeshPartDetailLevel {
            inline static constexpr std::string_view Name = "MeshPartDetailLevel";
            inline static constexpr std::array<Item, 11> Items{{
                Item{0, "DistanceBased"},
                Item{1, "Level00"},
                Item{2, "Level01"},
                Item{3, "Level02"},
                Item{4, "Level03"},
                Item{5, "Level04"},
                Item{6, "Level05"},
                Item{7, "Level06"},
                Item{8, "Level07"},
                Item{9, "Level08"},
                Item{10, "Level09"},
            }};
        };

        struct MeshPartHeadsAndAccessories {
            inline static constexpr std::string_view Name = "MeshPartHeadsAndAccessories";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "Disabled"},
                Item{2, "Enabled"},
            }};
        };

        struct MeshType {
            inline static constexpr std::string_view Name = "MeshType";
            inline static constexpr std::array<Item, 12> Items{{
                Item{0, "Head"},
                Item{1, "Torso"},
                Item{2, "Wedge"},
                Item{3, "Sphere"},
                Item{4, "Cylinder"},
                Item{5, "FileMesh"},
                Item{6, "Brick"},
                Item{7, "Prism"},
                Item{8, "Pyramid"},
                Item{9, "ParallelRamp"},
                Item{10, "RightAngleRamp"},
                Item{11, "CornerWedge"},
            }};
        };

        struct MessageType {
            inline static constexpr std::string_view Name = "MessageType";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "MessageOutput"},
                Item{1, "MessageInfo"},
                Item{2, "MessageWarning"},
                Item{3, "MessageError"},
            }};
        };

        struct MetadataFieldType {
            inline static constexpr std::string_view Name = "MetadataFieldType";
            inline static constexpr std::array<Item, 14> Items{{
                Item{0, "UInt8"},
                Item{1, "UInt16"},
                Item{2, "UInt32"},
                Item{3, "Float32"},
                Item{4, "Int32"},
                Item{5, "Int64"},
                Item{6, "UInt64"},
                Item{7, "Float64"},
                Item{8, "Buffer"},
                Item{9, "Vector3"},
                Item{10, "CFrame"},
                Item{11, "ContentId"},
                Item{12, "TagMask32"},
                Item{13, "Vector2"},
            }};
        };

        struct ModelLevelOfDetail {
            inline static constexpr std::string_view Name = "ModelLevelOfDetail";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Automatic"},
                Item{1, "StreamingMesh"},
                Item{2, "Disabled"},
                Item{4, "SLIM"},
                Item{3, "Disabled"},
            }};
        };

        struct ModelStreamingBehavior {
            inline static constexpr std::string_view Name = "ModelStreamingBehavior";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "Legacy"},
                Item{2, "Improved"},
            }};
        };

        struct ModelStreamingMode {
            inline static constexpr std::string_view Name = "ModelStreamingMode";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Default"},
                Item{1, "Atomic"},
                Item{2, "Persistent"},
                Item{3, "PersistentPerPlayer"},
                Item{4, "Nonatomic"},
            }};
        };

        struct ModerationResultCategory {
            inline static constexpr std::string_view Name = "ModerationResultCategory";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "ViolationDetected"},
                Item{1, "Borderline"},
                Item{2, "NoViolationDetected"},
            }};
        };

        struct ModerationResultLabel {
            inline static constexpr std::string_view Name = "ModerationResultLabel";
            inline static constexpr std::array<Item, 11> Items{{
                Item{0, "ChildExploitation"},
                Item{1, "SuicideSelfInjuryAndHarmfulBehavior"},
                Item{2, "ThreatsBullyingAndHarassment"},
                Item{3, "TerrorismAndViolentExtremism"},
                Item{4, "DiscriminationSlursAndHateSpeech"},
                Item{5, "RealWorldSensitiveEvents"},
                Item{6, "ViolentContentAndGore"},
                Item{7, "RomanticAndSexualContent"},
                Item{8, "IllegalAndRegulatedGoodsAndActivities"},
                Item{9, "Profanity"},
                Item{100, "Other"},
            }};
        };

        struct ModerationStatus {
            inline static constexpr std::string_view Name = "ModerationStatus";
            inline static constexpr std::array<Item, 5> Items{{
                Item{1, "ReviewedApproved"},
                Item{2, "ReviewedRejected"},
                Item{3, "NotReviewed"},
                Item{4, "NotApplicable"},
                Item{5, "Invalid"},
            }};
        };

        struct ModifierKey {
            inline static constexpr std::string_view Name = "ModifierKey";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Shift"},
                Item{1, "Ctrl"},
                Item{2, "Alt"},
                Item{3, "Meta"},
            }};
        };

        struct MouseBehavior {
            inline static constexpr std::string_view Name = "MouseBehavior";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "LockCenter"},
                Item{2, "LockCurrentPosition"},
            }};
        };

        struct MoveState {
            inline static constexpr std::string_view Name = "MoveState";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Stopped"},
                Item{1, "Coasting"},
                Item{2, "Pushing"},
                Item{3, "Stopping"},
                Item{4, "AirFree"},
            }};
        };

        struct MuteState {
            inline static constexpr std::string_view Name = "MuteState";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Unmuted"},
                Item{1, "Muted"},
            }};
        };

        struct NameOcclusion {
            inline static constexpr std::string_view Name = "NameOcclusion";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "NoOcclusion"},
                Item{1, "EnemyOcclusion"},
                Item{2, "OccludeAll"},
            }};
        };

        struct NegateOperationHiddenHistory {
            inline static constexpr std::string_view Name = "NegateOperationHiddenHistory";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "None"},
                Item{1, "NegatedUnion"},
                Item{2, "NegatedIntersection"},
            }};
        };

        struct NetworkOwnership {
            inline static constexpr std::string_view Name = "NetworkOwnership";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Automatic"},
                Item{1, "Manual"},
                Item{2, "OnContact"},
            }};
        };

        struct NetworkStatus {
            inline static constexpr std::string_view Name = "NetworkStatus";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Unknown"},
                Item{1, "Connected"},
                Item{2, "Disconnected"},
            }};
        };

        struct NoiseType {
            inline static constexpr std::string_view Name = "NoiseType";
            inline static constexpr std::array<Item, 1> Items{{
                Item{0, "SimplexGabor"},
            }};
        };

        struct NormalId {
            inline static constexpr std::string_view Name = "NormalId";
            inline static constexpr std::array<Item, 6> Items{{
                Item{0, "Right"},
                Item{1, "Top"},
                Item{2, "Back"},
                Item{3, "Left"},
                Item{4, "Bottom"},
                Item{5, "Front"},
            }};
        };

        struct NotificationButtonType {
            inline static constexpr std::string_view Name = "NotificationButtonType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Primary"},
                Item{1, "Secondary"},
            }};
        };

        struct OperationType {
            inline static constexpr std::string_view Name = "OperationType";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Null"},
                Item{1, "Union"},
                Item{2, "Subtraction"},
                Item{3, "Intersection"},
                Item{4, "Primitive"},
            }};
        };

        struct OrientationAlignmentMode {
            inline static constexpr std::string_view Name = "OrientationAlignmentMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "OneAttachment"},
                Item{1, "TwoAttachment"},
            }};
        };

        struct OrthographicMode {
            inline static constexpr std::string_view Name = "OrthographicMode";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Vertical"},
                Item{1, "Horizontal"},
                Item{2, "Diagonal"},
                Item{3, "MaxAxis"},
            }};
        };

        struct OutfitSource {
            inline static constexpr std::string_view Name = "OutfitSource";
            inline static constexpr std::array<Item, 3> Items{{
                Item{1, "All"},
                Item{2, "Created"},
                Item{3, "Purchased"},
            }};
        };

        struct OutfitType {
            inline static constexpr std::string_view Name = "OutfitType";
            inline static constexpr std::array<Item, 5> Items{{
                Item{1, "All"},
                Item{2, "Avatar"},
                Item{3, "DynamicHead"},
                Item{4, "Shoes"},
                Item{5, "Makeup"},
            }};
        };

        struct OverrideMouseIconBehavior {
            inline static constexpr std::string_view Name = "OverrideMouseIconBehavior";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "None"},
                Item{1, "ForceShow"},
                Item{2, "ForceHide"},
            }};
        };

        struct PackagePermission {
            inline static constexpr std::string_view Name = "PackagePermission";
            inline static constexpr std::array<Item, 6> Items{{
                Item{0, "None"},
                Item{1, "NoAccess"},
                Item{2, "Revoked"},
                Item{3, "UseView"},
                Item{4, "Edit"},
                Item{5, "Own"},
            }};
        };

        struct PageMilestoneType {
            inline static constexpr std::string_view Name = "PageMilestoneType";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Interactive"},
                Item{1, "SurfaceMounted"},
                Item{2, "FunctionallyReady"},
                Item{3, "SurfaceReady"},
            }};
        };

        struct PageType {
            inline static constexpr std::string_view Name = "PageType";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "AvatarEditor"},
                Item{1, "Party"},
                Item{2, "ExperienceDetail"},
                Item{3, "AvatarMarketplace"},
            }};
        };

        struct PartType {
            inline static constexpr std::string_view Name = "PartType";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Ball"},
                Item{1, "Block"},
                Item{2, "Cylinder"},
                Item{3, "Wedge"},
                Item{4, "CornerWedge"},
            }};
        };

        struct ParticleEmitter2DEmissionMode {
            inline static constexpr std::string_view Name = "ParticleEmitter2DEmissionMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Point"},
                Item{1, "BoundingBox"},
            }};
        };

        struct ParticleEmitterShape {
            inline static constexpr std::string_view Name = "ParticleEmitterShape";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Box"},
                Item{1, "Sphere"},
                Item{2, "Cylinder"},
                Item{3, "Disc"},
            }};
        };

        struct ParticleEmitterShapeInOut {
            inline static constexpr std::string_view Name = "ParticleEmitterShapeInOut";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Outward"},
                Item{1, "Inward"},
                Item{2, "InAndOut"},
            }};
        };

        struct ParticleEmitterShapeStyle {
            inline static constexpr std::string_view Name = "ParticleEmitterShapeStyle";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Volume"},
                Item{1, "Surface"},
            }};
        };

        struct ParticleFlipbookLayout {
            inline static constexpr std::string_view Name = "ParticleFlipbookLayout";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "None"},
                Item{1, "Grid2x2"},
                Item{2, "Grid4x4"},
                Item{3, "Grid8x8"},
                Item{4, "Custom"},
            }};
        };

        struct ParticleFlipbookMode {
            inline static constexpr std::string_view Name = "ParticleFlipbookMode";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Loop"},
                Item{1, "OneShot"},
                Item{2, "PingPong"},
                Item{3, "Random"},
            }};
        };

        struct ParticleFlipbookTextureCompatible {
            inline static constexpr std::string_view Name = "ParticleFlipbookTextureCompatible";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "NotCompatible"},
                Item{1, "Compatible"},
                Item{2, "Unknown"},
            }};
        };

        struct ParticleOrientation {
            inline static constexpr std::string_view Name = "ParticleOrientation";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "FacingCamera"},
                Item{1, "FacingCameraWorldUp"},
                Item{2, "VelocityParallel"},
                Item{3, "VelocityPerpendicular"},
            }};
        };

        struct PathStatus {
            inline static constexpr std::string_view Name = "PathStatus";
            inline static constexpr std::array<Item, 6> Items{{
                Item{0, "Success"},
                Item{1, "ClosestNoPath"},
                Item{2, "ClosestOutOfRange"},
                Item{3, "FailStartNotEmpty"},
                Item{4, "FailFinishNotEmpty"},
                Item{5, "NoPath"},
            }};
        };

        struct PathWaypointAction {
            inline static constexpr std::string_view Name = "PathWaypointAction";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Walk"},
                Item{1, "Jump"},
                Item{2, "Custom"},
            }};
        };

        struct PathfindingUseImprovedSearch {
            inline static constexpr std::string_view Name = "PathfindingUseImprovedSearch";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "Disabled"},
                Item{2, "Enabled"},
            }};
        };

        struct PeoplePageLayout {
            inline static constexpr std::string_view Name = "PeoplePageLayout";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Card"},
                Item{1, "List"},
            }};
        };

        struct PerformanceOverlayMode {
            inline static constexpr std::string_view Name = "PerformanceOverlayMode";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Overdraw"},
                Item{1, "Transparent"},
                Item{2, "Decals"},
                Item{3, "Lights"},
            }};
        };

        struct PhysicsSimulationRate {
            inline static constexpr std::string_view Name = "PhysicsSimulationRate";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Fixed240Hz"},
                Item{1, "Fixed120Hz"},
                Item{2, "Fixed60Hz"},
            }};
        };

        struct PhysicsSteppingMethod {
            inline static constexpr std::string_view Name = "PhysicsSteppingMethod";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "Fixed"},
                Item{2, "Adaptive"},
            }};
        };

        struct PinExperienceStatus {
            inline static constexpr std::string_view Name = "PinExperienceStatus";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Success"},
                Item{1, "Failure"},
                Item{2, "AlreadyExists"},
            }};
        };

        struct PioneerSource {
            inline static constexpr std::string_view Name = "PioneerSource";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Roblox"},
                Item{1, "DaveyBazooka"},
                Item{2, "Oof"},
                Item{3, "RobloxPioneerTest"},
            }};
        };

        struct Platform {
            inline static constexpr std::string_view Name = "Platform";
            inline static constexpr std::array<Item, 23> Items{{
                Item{0, "Windows"},
                Item{1, "OSX"},
                Item{2, "IOS"},
                Item{3, "Android"},
                Item{4, "XBoxOne"},
                Item{5, "PS4"},
                Item{6, "PS3"},
                Item{7, "XBox360"},
                Item{8, "WiiU"},
                Item{9, "NX"},
                Item{10, "Ouya"},
                Item{11, "AndroidTV"},
                Item{12, "Chromecast"},
                Item{13, "Linux"},
                Item{14, "SteamOS"},
                Item{15, "WebOS"},
                Item{16, "DOS"},
                Item{17, "BeOS"},
                Item{18, "UWP"},
                Item{19, "PS5"},
                Item{20, "MetaOS"},
                Item{21, "Web"},
                Item{22, "None"},
            }};
        };

        struct PlaybackState {
            inline static constexpr std::string_view Name = "PlaybackState";
            inline static constexpr std::array<Item, 6> Items{{
                Item{0, "Begin"},
                Item{1, "Delayed"},
                Item{2, "Playing"},
                Item{3, "Paused"},
                Item{4, "Completed"},
                Item{5, "Cancelled"},
            }};
        };

        struct PlayerActions {
            inline static constexpr std::string_view Name = "PlayerActions";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "CharacterForward"},
                Item{1, "CharacterBackward"},
                Item{2, "CharacterLeft"},
                Item{3, "CharacterRight"},
                Item{4, "CharacterJump"},
            }};
        };

        struct PlayerCharacterDestroyBehavior {
            inline static constexpr std::string_view Name = "PlayerCharacterDestroyBehavior";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "Disabled"},
                Item{2, "Enabled"},
            }};
        };

        struct PlayerChatType {
            inline static constexpr std::string_view Name = "PlayerChatType";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "All"},
                Item{1, "Team"},
                Item{2, "Whisper"},
            }};
        };

        struct PlayerDataErrorState {
            inline static constexpr std::string_view Name = "PlayerDataErrorState";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "LoadFailed"},
                Item{1, "FlushFailed"},
                Item{2, "ReleaseFailed"},
                Item{3, "None"},
            }};
        };

        struct PlayerDataLoadFailureBehavior {
            inline static constexpr std::string_view Name = "PlayerDataLoadFailureBehavior";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Failure"},
                Item{1, "FallbackToDefault"},
                Item{2, "Kick"},
            }};
        };

        struct PlayerExitReason {
            inline static constexpr std::string_view Name = "PlayerExitReason";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Unknown"},
                Item{1, "PlatformKick"},
                Item{2, "CreatorKick"},
            }};
        };

        struct PlayerPlatformActivationStatus {
            inline static constexpr std::string_view Name = "PlayerPlatformActivationStatus";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Unknown"},
                Item{1, "New"},
                Item{2, "Active"},
                Item{3, "Lapsed"},
                Item{4, "Reactivated"},
            }};
        };

        struct PlayerPlatformSpenderStatus {
            inline static constexpr std::string_view Name = "PlayerPlatformSpenderStatus";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Unknown"},
                Item{1, "Active"},
                Item{2, "OtherPayer"},
            }};
        };

        struct PoseEasingDirection {
            inline static constexpr std::string_view Name = "PoseEasingDirection";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "In"},
                Item{1, "Out"},
                Item{2, "InOut"},
            }};
        };

        struct PoseEasingStyle {
            inline static constexpr std::string_view Name = "PoseEasingStyle";
            inline static constexpr std::array<Item, 6> Items{{
                Item{0, "Linear"},
                Item{1, "Constant"},
                Item{2, "Elastic"},
                Item{3, "Cubic"},
                Item{4, "Bounce"},
                Item{5, "CubicV2"},
            }};
        };

        struct PositionAlignmentMode {
            inline static constexpr std::string_view Name = "PositionAlignmentMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "OneAttachment"},
                Item{1, "TwoAttachment"},
            }};
        };

        struct PredictionMode {
            inline static constexpr std::string_view Name = "PredictionMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Automatic"},
                Item{1, "On"},
                Item{2, "Off"},
            }};
        };

        struct PredictionStatus {
            inline static constexpr std::string_view Name = "PredictionStatus";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Authoritative"},
                Item{1, "Predicted"},
                Item{2, "None"},
            }};
        };

        struct PredictiveStreamingMode {
            inline static constexpr std::string_view Name = "PredictiveStreamingMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "Enabled"},
                Item{2, "Disabled"},
            }};
        };

        struct PreferredInput {
            inline static constexpr std::string_view Name = "PreferredInput";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "KeyboardAndMouse"},
                Item{1, "Gamepad"},
                Item{2, "Touch"},
                Item{3, "MicroGamepad"},
            }};
        };

        struct PreferredTextSize {
            inline static constexpr std::string_view Name = "PreferredTextSize";
            inline static constexpr std::array<Item, 4> Items{{
                Item{1, "Medium"},
                Item{2, "Large"},
                Item{3, "Larger"},
                Item{4, "Largest"},
            }};
        };

        struct PrefetchDownloadStatus {
            inline static constexpr std::string_view Name = "PrefetchDownloadStatus";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "NotStarted"},
                Item{1, "InProgress"},
                Item{2, "Completed"},
                Item{3, "Failed"},
            }};
        };

        struct PrimalPhysicsSolver {
            inline static constexpr std::string_view Name = "PrimalPhysicsSolver";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "Experimental"},
                Item{2, "Disabled"},
            }};
        };

        struct PrimitiveType {
            inline static constexpr std::string_view Name = "PrimitiveType";
            inline static constexpr std::array<Item, 6> Items{{
                Item{0, "Null"},
                Item{1, "Ball"},
                Item{2, "Cylinder"},
                Item{3, "Block"},
                Item{4, "Wedge"},
                Item{5, "CornerWedge"},
            }};
        };

        struct PrivilegeType {
            inline static constexpr std::string_view Name = "PrivilegeType";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Banned"},
                Item{10, "Visitor"},
                Item{128, "Member"},
                Item{240, "Admin"},
                Item{255, "Owner"},
            }};
        };

        struct ProductLocationRestriction {
            inline static constexpr std::string_view Name = "ProductLocationRestriction";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "AvatarShop"},
                Item{1, "AllowedGames"},
                Item{2, "AllGames"},
            }};
        };

        struct ProductPurchaseChannel {
            inline static constexpr std::string_view Name = "ProductPurchaseChannel";
            inline static constexpr std::array<Item, 4> Items{{
                Item{1, "InExperience"},
                Item{2, "ExperienceDetailsPage"},
                Item{3, "AdReward"},
                Item{4, "CommerceProduct"},
            }};
        };

        struct ProductPurchaseDecision {
            inline static constexpr std::string_view Name = "ProductPurchaseDecision";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "NotProcessedYet"},
                Item{1, "PurchaseGranted"},
            }};
        };

        struct ProjectionType {
            inline static constexpr std::string_view Name = "ProjectionType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Perspective"},
                Item{1, "Orthographic"},
            }};
        };

        struct PromptCreateAssetResult {
            inline static constexpr std::string_view Name = "PromptCreateAssetResult";
            inline static constexpr std::array<Item, 10> Items{{
                Item{1, "Success"},
                Item{2, "PermissionDenied"},
                Item{3, "Timeout"},
                Item{4, "UploadFailed"},
                Item{5, "NoUserInput"},
                Item{6, "UnknownFailure"},
                Item{7, "UGCValidationFailed"},
                Item{8, "ModeratedName"},
                Item{9, "PurchaseFailure"},
                Item{10, "TokenInvalid"},
            }};
        };

        struct PromptCreateAvatarResult {
            inline static constexpr std::string_view Name = "PromptCreateAvatarResult";
            inline static constexpr std::array<Item, 12> Items{{
                Item{1, "Success"},
                Item{2, "PermissionDenied"},
                Item{3, "Timeout"},
                Item{4, "UploadFailed"},
                Item{5, "NoUserInput"},
                Item{6, "InvalidHumanoidDescription"},
                Item{7, "UGCValidationFailed"},
                Item{8, "ModeratedName"},
                Item{9, "MaxOutfits"},
                Item{10, "PurchaseFailure"},
                Item{11, "UnknownFailure"},
                Item{12, "TokenInvalid"},
            }};
        };

        struct PromptCreateOutfitResult {
            inline static constexpr std::string_view Name = "PromptCreateOutfitResult";
            inline static constexpr std::array<Item, 8> Items{{
                Item{1, "Success"},
                Item{2, "PartialSuccess"},
                Item{3, "CreationFailure"},
                Item{4, "PermissionDenied"},
                Item{5, "Timeout"},
                Item{6, "NoUserInput"},
                Item{7, "UnknownFailure"},
                Item{8, "UGCValidationFailed"},
            }};
        };

        struct PromptCreatePlatformContentResult {
            inline static constexpr std::string_view Name = "PromptCreatePlatformContentResult";
            inline static constexpr std::array<Item, 10> Items{{
                Item{1, "Success"},
                Item{2, "PermissionDenied"},
                Item{3, "Timeout"},
                Item{4, "UploadFailed"},
                Item{5, "NoUserInput"},
                Item{6, "UnknownFailure"},
                Item{7, "UGCValidationFailed"},
                Item{8, "ModeratedName"},
                Item{9, "PurchaseFailure"},
                Item{10, "TokenInvalid"},
            }};
        };

        struct PromptExperienceDetailsResult {
            inline static constexpr std::string_view Name = "PromptExperienceDetailsResult";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "PromptClosed"},
                Item{1, "TeleportAttempted"},
            }};
        };

        struct PromptLinkSharingResult {
            inline static constexpr std::string_view Name = "PromptLinkSharingResult";
            inline static constexpr std::array<Item, 3> Items{{
                Item{1, "Success"},
                Item{2, "PlayerLeft"},
                Item{3, "InvalidLaunchData"},
            }};
        };

        struct PromptPublishAssetResult {
            inline static constexpr std::string_view Name = "PromptPublishAssetResult";
            inline static constexpr std::array<Item, 6> Items{{
                Item{1, "Success"},
                Item{2, "PermissionDenied"},
                Item{3, "Timeout"},
                Item{4, "UploadFailed"},
                Item{5, "NoUserInput"},
                Item{6, "UnknownFailure"},
            }};
        };

        struct PropertyStatus {
            inline static constexpr std::string_view Name = "PropertyStatus";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Ok"},
                Item{1, "Warning"},
                Item{2, "Error"},
            }};
        };

        struct ProximityPromptExclusivity {
            inline static constexpr std::string_view Name = "ProximityPromptExclusivity";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "OnePerButton"},
                Item{1, "OneGlobally"},
                Item{2, "AlwaysShow"},
            }};
        };

        struct ProximityPromptInputType {
            inline static constexpr std::string_view Name = "ProximityPromptInputType";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Keyboard"},
                Item{1, "Gamepad"},
                Item{2, "Touch"},
            }};
        };

        struct ProximityPromptStyle {
            inline static constexpr std::string_view Name = "ProximityPromptStyle";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Default"},
                Item{1, "Custom"},
            }};
        };

        struct PurchaseOption {
            inline static constexpr std::string_view Name = "PurchaseOption";
            inline static constexpr std::array<Item, 2> Items{{
                Item{1, "TimedOption"},
                Item{2, "Permanent"},
            }};
        };

        struct QualityLevel {
            inline static constexpr std::string_view Name = "QualityLevel";
            inline static constexpr std::array<Item, 43> Items{{
                Item{0, "Automatic"},
                Item{1, "Level01"},
                Item{2, "Level02"},
                Item{3, "Level03"},
                Item{4, "Level04"},
                Item{5, "Level05"},
                Item{6, "Level06"},
                Item{7, "Level07"},
                Item{8, "Level08"},
                Item{9, "Level09"},
                Item{10, "Level10"},
                Item{11, "Level11"},
                Item{12, "Level12"},
                Item{13, "Level13"},
                Item{14, "Level14"},
                Item{15, "Level15"},
                Item{16, "Level16"},
                Item{17, "Level17"},
                Item{18, "Level18"},
                Item{19, "Level19"},
                Item{20, "Level20"},
                Item{21, "Level21"},
                Item{1, "Level01"},
                Item{2, "Level02"},
                Item{3, "Level03"},
                Item{4, "Level04"},
                Item{5, "Level05"},
                Item{6, "Level06"},
                Item{7, "Level07"},
                Item{8, "Level08"},
                Item{9, "Level09"},
                Item{10, "Level10"},
                Item{11, "Level11"},
                Item{12, "Level12"},
                Item{13, "Level13"},
                Item{14, "Level14"},
                Item{15, "Level15"},
                Item{16, "Level16"},
                Item{17, "Level17"},
                Item{18, "Level18"},
                Item{19, "Level19"},
                Item{20, "Level20"},
                Item{21, "Level21"},
            }};
        };

        struct QueueDecision {
            inline static constexpr std::string_view Name = "QueueDecision";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Commit"},
                Item{1, "Defer"},
            }};
        };

        struct R15CollisionType {
            inline static constexpr std::string_view Name = "R15CollisionType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "OuterBox"},
                Item{1, "InnerBox"},
            }};
        };

        struct RaycastFilterType {
            inline static constexpr std::string_view Name = "RaycastFilterType";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Exclude"},
                Item{1, "Include"},
                Item{0, "Exclude"},
                Item{1, "Include"},
            }};
        };

        struct ReadCapturesFromGalleryResult {
            inline static constexpr std::string_view Name = "ReadCapturesFromGalleryResult";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Success"},
                Item{1, "NeedPermission"},
            }};
        };

        struct ReceiptDecision {
            inline static constexpr std::string_view Name = "ReceiptDecision";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "NotProcessedYet"},
                Item{1, "Processed"},
            }};
        };

        struct ReceiptType {
            inline static constexpr std::string_view Name = "ReceiptType";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "DeveloperProduct"},
                Item{1, "RobuxTransferSender"},
                Item{2, "RobuxTransferReceiver"},
            }};
        };

        struct RecommendationActionType {
            inline static constexpr std::string_view Name = "RecommendationActionType";
            inline static constexpr std::array<Item, 7> Items{{
                Item{0, "AddReaction"},
                Item{1, "RemoveReaction"},
                Item{2, "Share"},
                Item{3, "Report"},
                Item{4, "Comment"},
                Item{5, "Play"},
                Item{6, "Purchase"},
            }};
        };

        struct RecommendationDepartureIntent {
            inline static constexpr std::string_view Name = "RecommendationDepartureIntent";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Neutral"},
                Item{1, "Positive"},
                Item{2, "Negative"},
            }};
        };

        struct RecommendationImpressionType {
            inline static constexpr std::string_view Name = "RecommendationImpressionType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "View"},
                Item{1, "NotViewable"},
            }};
        };

        struct RecommendationItemContentType {
            inline static constexpr std::string_view Name = "RecommendationItemContentType";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Static"},
                Item{1, "Dynamic"},
                Item{2, "Interactive"},
            }};
        };

        struct RecommendationItemVisibility {
            inline static constexpr std::string_view Name = "RecommendationItemVisibility";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Private"},
                Item{1, "Public"},
            }};
        };

        struct RecommendationPreferenceTargetType {
            inline static constexpr std::string_view Name = "RecommendationPreferenceTargetType";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "User"},
                Item{1, "Universe"},
                Item{2, "CustomTag"},
            }};
        };

        struct RecommendationPreferenceType {
            inline static constexpr std::string_view Name = "RecommendationPreferenceType";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "AddFollow"},
                Item{1, "RemoveFollow"},
                Item{2, "AddMute"},
                Item{3, "RemoveMute"},
            }};
        };

        struct RejectCharacterDeletions {
            inline static constexpr std::string_view Name = "RejectCharacterDeletions";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "Disabled"},
                Item{2, "Enabled"},
            }};
        };

        struct RenderFidelity {
            inline static constexpr std::string_view Name = "RenderFidelity";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Automatic"},
                Item{1, "Precise"},
                Item{2, "Performance"},
            }};
        };

        struct RenderPriority {
            inline static constexpr std::string_view Name = "RenderPriority";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "First"},
                Item{100, "Input"},
                Item{200, "Camera"},
                Item{300, "Character"},
                Item{2000, "Last"},
            }};
        };

        struct RenderingCacheOptimizationMode {
            inline static constexpr std::string_view Name = "RenderingCacheOptimizationMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "Disabled"},
                Item{2, "Enabled"},
            }};
        };

        struct RenderingTestComparisonMethod {
            inline static constexpr std::string_view Name = "RenderingTestComparisonMethod";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "psnr"},
                Item{1, "diff"},
            }};
        };

        struct ReplicateInstanceDestroySetting {
            inline static constexpr std::string_view Name = "ReplicateInstanceDestroySetting";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "Disabled"},
                Item{2, "Enabled"},
            }};
        };

        struct ReplicationMode {
            inline static constexpr std::string_view Name = "ReplicationMode";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Automatic"},
                Item{1, "Low"},
                Item{2, "Medium"},
                Item{3, "High"},
            }};
        };

        struct ResamplerMode {
            inline static constexpr std::string_view Name = "ResamplerMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Default"},
                Item{1, "Pixelated"},
            }};
        };

        struct ReservedHighlightId {
            inline static constexpr std::string_view Name = "ReservedHighlightId";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Standard"},
                Item{131072, "Active"},
                Item{262144, "Hover"},
                Item{524288, "Selection"},
                Item{1048576, "NegatedPart"},
            }};
        };

        struct ReturnKeyType {
            inline static constexpr std::string_view Name = "ReturnKeyType";
            inline static constexpr std::array<Item, 6> Items{{
                Item{0, "Default"},
                Item{1, "Done"},
                Item{2, "Go"},
                Item{3, "Next"},
                Item{4, "Search"},
                Item{5, "Send"},
            }};
        };

        struct ReverbType {
            inline static constexpr std::string_view Name = "ReverbType";
            inline static constexpr std::array<Item, 24> Items{{
                Item{0, "NoReverb"},
                Item{1, "GenericReverb"},
                Item{2, "PaddedCell"},
                Item{3, "Room"},
                Item{4, "Bathroom"},
                Item{5, "LivingRoom"},
                Item{6, "StoneRoom"},
                Item{7, "Auditorium"},
                Item{8, "ConcertHall"},
                Item{9, "Cave"},
                Item{10, "Arena"},
                Item{11, "Hangar"},
                Item{12, "CarpettedHallway"},
                Item{13, "Hallway"},
                Item{14, "StoneCorridor"},
                Item{15, "Alley"},
                Item{16, "Forest"},
                Item{17, "City"},
                Item{18, "Mountains"},
                Item{19, "Quarry"},
                Item{20, "Plain"},
                Item{21, "ParkingLot"},
                Item{22, "SewerPipe"},
                Item{23, "UnderWater"},
            }};
        };

        struct ReviewableContentState {
            inline static constexpr std::string_view Name = "ReviewableContentState";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Pending"},
                Item{1, "Completed"},
                Item{2, "Failed"},
            }};
        };

        struct RibbonTool {
            inline static constexpr std::string_view Name = "RibbonTool";
            inline static constexpr std::array<Item, 11> Items{{
                Item{0, "Select"},
                Item{1, "Scale"},
                Item{2, "Rotate"},
                Item{3, "Move"},
                Item{4, "Transform"},
                Item{5, "ColorPicker"},
                Item{6, "MaterialPicker"},
                Item{7, "Group"},
                Item{8, "Ungroup"},
                Item{9, "None"},
                Item{10, "PivotEditor"},
            }};
        };

        struct RigLabel {
            inline static constexpr std::string_view Name = "RigLabel";
            inline static constexpr std::array<Item, 38> Items{{
                Item{0, "Invalid"},
                Item{2, "Root"},
                Item{3, "LeftHip"},
                Item{4, "LeftKnee"},
                Item{5, "LeftAnkle"},
                Item{7, "RightHip"},
                Item{8, "RightKnee"},
                Item{9, "RightAnkle"},
                Item{11, "Waist"},
                Item{12, "LeftShoulder"},
                Item{13, "LeftElbow"},
                Item{14, "LeftWrist"},
                Item{16, "RightShoulder"},
                Item{17, "RightElbow"},
                Item{18, "RightWrist"},
                Item{20, "Neck"},
                Item{23, "Spine"},
                Item{24, "Chest"},
                Item{25, "HeadBase"},
                Item{26, "LeftClavicle"},
                Item{27, "RightClavicle"},
                Item{28, "LeftToeBase"},
                Item{29, "RightToeBase"},
                Item{30, "Thumb1"},
                Item{31, "Thumb2"},
                Item{32, "Thumb3"},
                Item{33, "Index1"},
                Item{34, "Index2"},
                Item{35, "Index3"},
                Item{36, "Middle1"},
                Item{37, "Middle2"},
                Item{38, "Middle3"},
                Item{39, "Ring1"},
                Item{40, "Ring2"},
                Item{41, "Ring3"},
                Item{42, "Pinky1"},
                Item{43, "Pinky2"},
                Item{44, "Pinky3"},
            }};
        };

        struct RobuxTransferEligibility {
            inline static constexpr std::string_view Name = "RobuxTransferEligibility";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Unknown"},
                Item{1, "Eligible"},
                Item{2, "SenderNotEligible"},
                Item{3, "ReceiverNotEligible"},
            }};
        };

        struct RollOffMode {
            inline static constexpr std::string_view Name = "RollOffMode";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Inverse"},
                Item{1, "Linear"},
                Item{2, "LinearSquare"},
                Item{3, "InverseTapered"},
            }};
        };

        struct RolloutState {
            inline static constexpr std::string_view Name = "RolloutState";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "Disabled"},
                Item{2, "Enabled"},
            }};
        };

        struct RotationOrder {
            inline static constexpr std::string_view Name = "RotationOrder";
            inline static constexpr std::array<Item, 6> Items{{
                Item{0, "XYZ"},
                Item{1, "XZY"},
                Item{2, "YZX"},
                Item{3, "YXZ"},
                Item{4, "ZXY"},
                Item{5, "ZYX"},
            }};
        };

        struct RotationType {
            inline static constexpr std::string_view Name = "RotationType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "MovementRelative"},
                Item{1, "CameraRelative"},
            }};
        };

        struct RsvpStatus {
            inline static constexpr std::string_view Name = "RsvpStatus";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "None"},
                Item{1, "Going"},
                Item{2, "NotGoing"},
            }};
        };

        struct RtlTextSupport {
            inline static constexpr std::string_view Name = "RtlTextSupport";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "Disabled"},
                Item{2, "Enabled"},
            }};
        };

        struct RunContext {
            inline static constexpr std::string_view Name = "RunContext";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Legacy"},
                Item{1, "Server"},
                Item{2, "Client"},
                Item{3, "Plugin"},
            }};
        };

        struct RunState {
            inline static constexpr std::string_view Name = "RunState";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Stopped"},
                Item{1, "Running"},
                Item{2, "Paused"},
            }};
        };

        struct RuntimeUndoBehavior {
            inline static constexpr std::string_view Name = "RuntimeUndoBehavior";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Aggregate"},
                Item{1, "Snapshot"},
                Item{2, "Hybrid"},
            }};
        };

        struct SafeAreaCompatibility {
            inline static constexpr std::string_view Name = "SafeAreaCompatibility";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "None"},
                Item{1, "FullscreenExtension"},
            }};
        };

        struct SalesTypeFilter {
            inline static constexpr std::string_view Name = "SalesTypeFilter";
            inline static constexpr std::array<Item, 4> Items{{
                Item{1, "All"},
                Item{2, "Collectibles"},
                Item{3, "Premium"},
                Item{4, "TimedOptions"},
            }};
        };

        struct SandboxedInstanceMode {
            inline static constexpr std::string_view Name = "SandboxedInstanceMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Default"},
                Item{1, "Experimental"},
            }};
        };

        struct SaveAvatarThumbnailCustomizationFailure {
            inline static constexpr std::string_view Name = "SaveAvatarThumbnailCustomizationFailure";
            inline static constexpr std::array<Item, 6> Items{{
                Item{1, "BadThumbnailType"},
                Item{2, "BadYRotDeg"},
                Item{3, "BadFieldOfViewDeg"},
                Item{4, "BadDistanceScale"},
                Item{5, "Other"},
                Item{6, "Throttled"},
            }};
        };

        struct SaveFilter {
            inline static constexpr std::string_view Name = "SaveFilter";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "SaveWorld"},
                Item{1, "SaveGame"},
                Item{2, "SaveAll"},
            }};
        };

        struct SavedQualitySetting {
            inline static constexpr std::string_view Name = "SavedQualitySetting";
            inline static constexpr std::array<Item, 11> Items{{
                Item{0, "Automatic"},
                Item{1, "QualityLevel1"},
                Item{2, "QualityLevel2"},
                Item{3, "QualityLevel3"},
                Item{4, "QualityLevel4"},
                Item{5, "QualityLevel5"},
                Item{6, "QualityLevel6"},
                Item{7, "QualityLevel7"},
                Item{8, "QualityLevel8"},
                Item{9, "QualityLevel9"},
                Item{10, "QualityLevel10"},
            }};
        };

        struct ScaleType {
            inline static constexpr std::string_view Name = "ScaleType";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Stretch"},
                Item{1, "Slice"},
                Item{2, "Tile"},
                Item{3, "Fit"},
                Item{4, "Crop"},
            }};
        };

        struct ScopeCheckResult {
            inline static constexpr std::string_view Name = "ScopeCheckResult";
            inline static constexpr std::array<Item, 8> Items{{
                Item{0, "ConsentAccepted"},
                Item{1, "InvalidScopes"},
                Item{2, "Timeout"},
                Item{3, "NoUserInput"},
                Item{4, "BackendError"},
                Item{5, "UnexpectedError"},
                Item{6, "InvalidArgument"},
                Item{7, "ConsentDenied"},
            }};
        };

        struct ScreenInsets {
            inline static constexpr std::string_view Name = "ScreenInsets";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "None"},
                Item{1, "DeviceSafeInsets"},
                Item{2, "CoreUISafeInsets"},
                Item{3, "TopbarSafeInsets"},
            }};
        };

        struct ScreenOrientation {
            inline static constexpr std::string_view Name = "ScreenOrientation";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "LandscapeLeft"},
                Item{1, "LandscapeRight"},
                Item{2, "LandscapeSensor"},
                Item{3, "Portrait"},
                Item{4, "Sensor"},
            }};
        };

        struct ScreenshotCaptureResult {
            inline static constexpr std::string_view Name = "ScreenshotCaptureResult";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Success"},
                Item{1, "OtherError"},
                Item{2, "NoDeviceSupport"},
                Item{3, "NoSpaceOnDevice"},
            }};
        };

        struct ScriptStoppedReason {
            inline static constexpr std::string_view Name = "ScriptStoppedReason";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Breakpoint"},
                Item{1, "Exception"},
                Item{2, "Pause"},
                Item{3, "Step"},
                Item{4, "Entry"},
            }};
        };

        struct ScriptVariableScope {
            inline static constexpr std::string_view Name = "ScriptVariableScope";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Local"},
                Item{1, "Upvalue"},
                Item{2, "Global"},
            }};
        };

        struct ScrollBarInset {
            inline static constexpr std::string_view Name = "ScrollBarInset";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "None"},
                Item{1, "ScrollBar"},
                Item{2, "Always"},
            }};
        };

        struct ScrollState {
            inline static constexpr std::string_view Name = "ScrollState";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Idle"},
                Item{1, "Scrolling"},
            }};
        };

        struct ScrollingDirection {
            inline static constexpr std::string_view Name = "ScrollingDirection";
            inline static constexpr std::array<Item, 3> Items{{
                Item{1, "X"},
                Item{2, "Y"},
                Item{4, "XY"},
            }};
        };

        struct SecurityCapability {
            inline static constexpr std::string_view Name = "SecurityCapability";
            inline static constexpr std::array<Item, 53> Items{{
                Item{0, "RunClientScript"},
                Item{1, "RunServerScript"},
                Item{2, "AccessOutsideWrite"},
                Item{3, "AssetRequire"},
                Item{4, "LoadString"},
                Item{5, "ScriptGlobals"},
                Item{6, "CreateInstances"},
                Item{7, "Basic"},
                Item{8, "Audio"},
                Item{9, "DataStore"},
                Item{10, "Network"},
                Item{11, "Physics"},
                Item{12, "UI"},
                Item{13, "CSG"},
                Item{14, "Chat"},
                Item{15, "Animation"},
                Item{16, "Avatar"},
                Item{17, "Input"},
                Item{18, "Environment"},
                Item{19, "RemoteEvent"},
                Item{20, "LegacySound"},
                Item{21, "Players"},
                Item{22, "CapabilityControl"},
                Item{23, "Plugin"},
                Item{24, "LocalUser"},
                Item{25, "WritePlayer"},
                Item{26, "RobloxScript"},
                Item{27, "RobloxEngine"},
                Item{28, "Unassigned"},
                Item{29, "InternalTest"},
                Item{30, "PluginOrOpenCloud"},
                Item{31, "Assistant"},
                Item{32, "RemoteCommand"},
                Item{33, "AssetRead"},
                Item{34, "AssetManagement"},
                Item{35, "DynamicGeneration"},
                Item{36, "PlatformAvatarEditing"},
                Item{37, "AssetCreateUpdate"},
                Item{38, "Capture"},
                Item{39, "SensitiveInput"},
                Item{40, "Monetization"},
                Item{41, "LoadOwnedAsset"},
                Item{42, "Social"},
                Item{43, "ServerCommunication"},
                Item{44, "Logging"},
                Item{45, "PromptExternalPurchase"},
                Item{46, "Groups"},
                Item{47, "Teleport"},
                Item{48, "Consequences"},
                Item{49, "Material"},
                Item{50, "AvatarBehavior"},
                Item{51, "AvatarAppearance"},
                Item{52, "LoadUnownedAsset"},
            }};
        };

        struct SelectionBehavior {
            inline static constexpr std::string_view Name = "SelectionBehavior";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Escape"},
                Item{1, "Stop"},
            }};
        };

        struct SelectionRenderMode {
            inline static constexpr std::string_view Name = "SelectionRenderMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Outlines"},
                Item{1, "BoundingBoxes"},
                Item{2, "Both"},
            }};
        };

        struct SelfViewPosition {
            inline static constexpr std::string_view Name = "SelfViewPosition";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "LastPosition"},
                Item{1, "TopLeft"},
                Item{2, "TopRight"},
                Item{3, "BottomLeft"},
                Item{4, "BottomRight"},
            }};
        };

        struct SensorMode {
            inline static constexpr std::string_view Name = "SensorMode";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Floor"},
                Item{1, "Ladder"},
                Item{2, "ClassicFloor"},
                Item{3, "ClassicLadder"},
            }};
        };

        struct SensorUpdateType {
            inline static constexpr std::string_view Name = "SensorUpdateType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "OnRead"},
                Item{1, "Manual"},
            }};
        };

        struct ShowAdResult {
            inline static constexpr std::string_view Name = "ShowAdResult";
            inline static constexpr std::array<Item, 6> Items{{
                Item{1, "ShowCompleted"},
                Item{2, "AdNotReady"},
                Item{3, "AdAlreadyShowing"},
                Item{4, "InternalError"},
                Item{5, "ShowInterrupted"},
                Item{6, "InsufficientMemory"},
            }};
        };

        struct SignalBehavior {
            inline static constexpr std::string_view Name = "SignalBehavior";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Default"},
                Item{1, "Immediate"},
                Item{2, "Deferred"},
                Item{3, "AncestryDeferred"},
            }};
        };

        struct SimulationMode {
            inline static constexpr std::string_view Name = "SimulationMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "Enabled"},
                Item{2, "Disabled"},
            }};
        };

        struct SizeConstraint {
            inline static constexpr std::string_view Name = "SizeConstraint";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "RelativeXY"},
                Item{1, "RelativeXX"},
                Item{2, "RelativeYY"},
            }};
        };

        struct SlimTintMode {
            inline static constexpr std::string_view Name = "SlimTintMode";
            inline static constexpr std::array<Item, 7> Items{{
                Item{0, "None"},
                Item{1, "LevelOfDetail"},
                Item{2, "Meshes"},
                Item{3, "MeshResourcePtr"},
                Item{4, "ContentId"},
                Item{5, "DataModelState"},
                Item{6, "TranscoderStatus"},
            }};
        };

        struct SlimTranscoderStatus {
            inline static constexpr std::string_view Name = "SlimTranscoderStatus";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Unknown"},
                Item{1, "Transcoding"},
                Item{2, "Succeeded"},
                Item{3, "Failed"},
            }};
        };

        struct SlimViewContext {
            inline static constexpr std::string_view Name = "SlimViewContext";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Player"},
                Item{1, "Editor"},
                Item{2, "ImGui"},
            }};
        };

        struct SolverConvergenceMetricType {
            inline static constexpr std::string_view Name = "SolverConvergenceMetricType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "IterationBased"},
                Item{1, "AlgorithmAgnostic"},
            }};
        };

        struct SolverConvergenceVisualizationMode {
            inline static constexpr std::string_view Name = "SolverConvergenceVisualizationMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Disabled"},
                Item{1, "PerIsland"},
                Item{2, "PerEdge"},
            }};
        };

        struct SortDirection {
            inline static constexpr std::string_view Name = "SortDirection";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Ascending"},
                Item{1, "Descending"},
            }};
        };

        struct SortOrder {
            inline static constexpr std::string_view Name = "SortOrder";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Name"},
                Item{1, "Custom"},
                Item{2, "LayoutOrder"},
            }};
        };

        struct SpecialKey {
            inline static constexpr std::string_view Name = "SpecialKey";
            inline static constexpr std::array<Item, 6> Items{{
                Item{0, "Insert"},
                Item{1, "Home"},
                Item{2, "End"},
                Item{3, "PageUp"},
                Item{4, "PageDown"},
                Item{5, "ChatHotkey"},
            }};
        };

        struct StartCorner {
            inline static constexpr std::string_view Name = "StartCorner";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "TopLeft"},
                Item{1, "TopRight"},
                Item{2, "BottomLeft"},
                Item{3, "BottomRight"},
            }};
        };

        struct StateObjectFieldType {
            inline static constexpr std::string_view Name = "StateObjectFieldType";
            inline static constexpr std::array<Item, 9> Items{{
                Item{0, "Boolean"},
                Item{1, "CFrame"},
                Item{2, "Color3"},
                Item{3, "Float"},
                Item{4, "Instance"},
                Item{5, "Random"},
                Item{6, "Vector2"},
                Item{7, "Vector3"},
                Item{8, "INVALID"},
            }};
        };

        struct StateReferenceFrame {
            inline static constexpr std::string_view Name = "StateReferenceFrame";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "CurrentState"},
                Item{1, "PreviousState"},
                Item{2, "LastObservedState"},
            }};
        };

        struct Status {
            inline static constexpr std::string_view Name = "Status";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Poison"},
                Item{1, "Confusion"},
            }};
        };

        struct StepFrequency {
            inline static constexpr std::string_view Name = "StepFrequency";
            inline static constexpr std::array<Item, 6> Items{{
                Item{0, "Hz60"},
                Item{1, "Hz30"},
                Item{2, "Hz15"},
                Item{3, "Hz10"},
                Item{4, "Hz5"},
                Item{5, "Hz1"},
            }};
        };

        struct StreamOutBehavior {
            inline static constexpr std::string_view Name = "StreamOutBehavior";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "LowMemory"},
                Item{2, "Opportunistic"},
            }};
        };

        struct StreamingIntegrityMode {
            inline static constexpr std::string_view Name = "StreamingIntegrityMode";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Default"},
                Item{1, "Disabled"},
                Item{2, "MinimumRadiusPause"},
                Item{3, "PauseOutsideLoadedArea"},
            }};
        };

        struct StreamingPauseMode {
            inline static constexpr std::string_view Name = "StreamingPauseMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "Disabled"},
                Item{2, "ClientPhysicsPause"},
            }};
        };

        struct StrokeSizingMode {
            inline static constexpr std::string_view Name = "StrokeSizingMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "FixedSize"},
                Item{1, "ScaledSize"},
            }};
        };

        struct StudioAction {
            inline static constexpr std::string_view Name = "StudioAction";
            inline static constexpr std::array<Item, 10> Items{{
                Item{0, "Undo"},
                Item{1, "Redo"},
                Item{2, "SelectAll"},
                Item{3, "DeleteSelected"},
                Item{4, "DuplicateSelection"},
                Item{5, "ClearSelection"},
                Item{6, "ZoomExtents"},
                Item{61, "Copy"},
                Item{62, "Cut"},
                Item{63, "Paste"},
            }};
        };

        struct StudioCaptureScreenshotFormat {
            inline static constexpr std::string_view Name = "StudioCaptureScreenshotFormat";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "RGBA8"},
                Item{1, "PNG"},
            }};
        };

        struct StudioDataModelType {
            inline static constexpr std::string_view Name = "StudioDataModelType";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Edit"},
                Item{1, "PlayClient"},
                Item{2, "PlayServer"},
                Item{3, "Standalone"},
                Item{4, "None"},
            }};
        };

        struct StudioPlaceUpdateFailureReason {
            inline static constexpr std::string_view Name = "StudioPlaceUpdateFailureReason";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Other"},
                Item{1, "TeamCreateConflict"},
            }};
        };

        struct Style {
            inline static constexpr std::string_view Name = "Style";
            inline static constexpr std::array<Item, 6> Items{{
                Item{0, "AlternatingSupports"},
                Item{1, "BridgeStyleSupports"},
                Item{2, "NoSupports"},
                Item{0, "AlternatingSupports"},
                Item{1, "BridgeStyleSupports"},
                Item{2, "NoSupports"},
            }};
        };

        struct SubscriptionExpirationReason {
            inline static constexpr std::string_view Name = "SubscriptionExpirationReason";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "ProductInactive"},
                Item{1, "ProductDeleted"},
                Item{2, "SubscriberCancelled"},
                Item{3, "SubscriberRefunded"},
                Item{4, "Lapsed"},
            }};
        };

        struct SubscriptionPaymentStatus {
            inline static constexpr std::string_view Name = "SubscriptionPaymentStatus";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Paid"},
                Item{1, "Refunded"},
            }};
        };

        struct SubscriptionPeriod {
            inline static constexpr std::string_view Name = "SubscriptionPeriod";
            inline static constexpr std::array<Item, 1> Items{{
                Item{0, "Month"},
            }};
        };

        struct SubscriptionState {
            inline static constexpr std::string_view Name = "SubscriptionState";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "NeverSubscribed"},
                Item{1, "SubscribedWillRenew"},
                Item{2, "SubscribedWillNotRenew"},
                Item{3, "SubscribedRenewalPaymentPending"},
                Item{4, "Expired"},
            }};
        };

        struct SurfaceConstraint {
            inline static constexpr std::string_view Name = "SurfaceConstraint";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "None"},
                Item{1, "Hinge"},
                Item{2, "SteppingMotor"},
                Item{3, "Motor"},
            }};
        };

        struct SurfaceGuiShape {
            inline static constexpr std::string_view Name = "SurfaceGuiShape";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Flat"},
                Item{1, "CurvedHorizontally"},
            }};
        };

        struct SurfaceGuiSizingMode {
            inline static constexpr std::string_view Name = "SurfaceGuiSizingMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "FixedSize"},
                Item{1, "PixelsPerStud"},
            }};
        };

        struct SurfaceType {
            inline static constexpr std::string_view Name = "SurfaceType";
            inline static constexpr std::array<Item, 13> Items{{
                Item{0, "Smooth"},
                Item{1, "Glue"},
                Item{2, "Weld"},
                Item{3, "Studs"},
                Item{4, "Inlet"},
                Item{5, "Universal"},
                Item{6, "Hinge"},
                Item{7, "Motor"},
                Item{8, "SteppingMotor"},
                Item{10, "SmoothNoOutlines"},
                Item{0, "Smooth"},
                Item{1, "Glue"},
                Item{9, "Smooth"},
            }};
        };

        struct SwipeDirection {
            inline static constexpr std::string_view Name = "SwipeDirection";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Right"},
                Item{1, "Left"},
                Item{2, "Up"},
                Item{3, "Down"},
                Item{4, "None"},
            }};
        };

        struct SystemThemeValue {
            inline static constexpr std::string_view Name = "SystemThemeValue";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "error"},
                Item{1, "light"},
                Item{2, "dark"},
                Item{3, "systemLight"},
                Item{4, "systemDark"},
            }};
        };

        struct TableMajorAxis {
            inline static constexpr std::string_view Name = "TableMajorAxis";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "RowMajor"},
                Item{1, "ColumnMajor"},
            }};
        };

        struct Technology {
            inline static constexpr std::string_view Name = "Technology";
            inline static constexpr std::array<Item, 6> Items{{
                Item{0, "Legacy"},
                Item{1, "Voxel"},
                Item{2, "Compatibility"},
                Item{3, "ShadowMap"},
                Item{4, "Future"},
                Item{5, "Unified"},
            }};
        };

        struct TelemetryBackend {
            inline static constexpr std::string_view Name = "TelemetryBackend";
            inline static constexpr std::array<Item, 8> Items{{
                Item{0, "UNSPECIFIED"},
                Item{1, "EventIngest"},
                Item{2, "Points"},
                Item{3, "Teletune"},
                Item{4, "EphemeralCounter"},
                Item{5, "EphemeralStat"},
                Item{6, "Counter"},
                Item{7, "Stat"},
            }};
        };

        struct TelemetryStandardizedField {
            inline static constexpr std::string_view Name = "TelemetryStandardizedField";
            inline static constexpr std::array<Item, 11> Items{{
                Item{0, "AddDatacenterId"},
                Item{1, "AddPlaceId"},
                Item{2, "AddUniverseId"},
                Item{3, "AddPlaceInstanceId"},
                Item{4, "AddPlaySessionId"},
                Item{5, "AddCurrentContextName"},
                Item{6, "AddOsInfo"},
                Item{7, "AddArchitectureInfo"},
                Item{8, "AddCpuInfo"},
                Item{9, "AddMemoryInfo"},
                Item{10, "AddSessionInfo"},
            }};
        };

        struct TeleportMethod {
            inline static constexpr std::string_view Name = "TeleportMethod";
            inline static constexpr std::array<Item, 9> Items{{
                Item{0, "TeleportToSpawnByName"},
                Item{1, "TeleportToPlaceInstance"},
                Item{2, "TeleportToPrivateServer"},
                Item{3, "TeleportPartyAsync"},
                Item{4, "TeleportToVIPServer"},
                Item{5, "TeleportToInstanceBack"},
                Item{6, "TeleportUnknown"},
                Item{7, "Teleport"},
                Item{8, "TeleportSwitchServer"},
            }};
        };

        struct TeleportResult {
            inline static constexpr std::string_view Name = "TeleportResult";
            inline static constexpr std::array<Item, 8> Items{{
                Item{0, "Success"},
                Item{1, "Failure"},
                Item{2, "GameNotFound"},
                Item{3, "GameEnded"},
                Item{4, "GameFull"},
                Item{5, "Unauthorized"},
                Item{6, "Flooded"},
                Item{7, "IsTeleporting"},
            }};
        };

        struct TeleportState {
            inline static constexpr std::string_view Name = "TeleportState";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "RequestedFromServer"},
                Item{1, "Started"},
                Item{2, "WaitingForServer"},
                Item{3, "Failed"},
                Item{4, "InProgress"},
            }};
        };

        struct TeleportType {
            inline static constexpr std::string_view Name = "TeleportType";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "ToPlace"},
                Item{1, "ToInstance"},
                Item{2, "ToReservedServer"},
                Item{3, "ToVIPServer"},
                Item{4, "ToInstanceBack"},
            }};
        };

        struct TerrainAcquisitionMethod {
            inline static constexpr std::string_view Name = "TerrainAcquisitionMethod";
            inline static constexpr std::array<Item, 12> Items{{
                Item{0, "None"},
                Item{1, "Legacy"},
                Item{2, "Template"},
                Item{3, "Generate"},
                Item{4, "Import"},
                Item{5, "Convert"},
                Item{6, "EditAddTool"},
                Item{7, "EditSeaLevelTool"},
                Item{8, "EditReplaceTool"},
                Item{9, "RegionFillTool"},
                Item{10, "RegionPasteTool"},
                Item{11, "Other"},
            }};
        };

        struct TerrainFace {
            inline static constexpr std::string_view Name = "TerrainFace";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Top"},
                Item{1, "Side"},
                Item{2, "Bottom"},
            }};
        };

        struct TerrainLiquidMergeOperation {
            inline static constexpr std::string_view Name = "TerrainLiquidMergeOperation";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "None"},
                Item{1, "Source"},
                Item{2, "Union"},
                Item{3, "Difference"},
                Item{4, "Intersect"},
            }};
        };

        struct TerrainSolidMergeOperation {
            inline static constexpr std::string_view Name = "TerrainSolidMergeOperation";
            inline static constexpr std::array<Item, 9> Items{{
                Item{0, "None"},
                Item{1, "Paint"},
                Item{2, "Source"},
                Item{3, "Union"},
                Item{4, "Dig"},
                Item{5, "Difference"},
                Item{6, "Intersect"},
                Item{7, "Cut"},
                Item{8, "Place"},
            }};
        };

        struct TestCaseStatus {
            inline static constexpr std::string_view Name = "TestCaseStatus";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Pass"},
                Item{1, "Fail"},
                Item{2, "TimedOut"},
                Item{3, "Skipped"},
            }};
        };

        struct TestRunStatus {
            inline static constexpr std::string_view Name = "TestRunStatus";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Pass"},
                Item{1, "Fail"},
                Item{2, "NoTests"},
                Item{3, "Skipped"},
            }};
        };

        struct TextChannelDisplayMode {
            inline static constexpr std::string_view Name = "TextChannelDisplayMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "AllTextChannels"},
                Item{1, "DefaultTextChannels"},
            }};
        };

        struct TextChatMessageStatus {
            inline static constexpr std::string_view Name = "TextChatMessageStatus";
            inline static constexpr std::array<Item, 9> Items{{
                Item{1, "Unknown"},
                Item{2, "Success"},
                Item{3, "Sending"},
                Item{4, "TextFilterFailed"},
                Item{5, "Floodchecked"},
                Item{6, "InvalidPrivacySettings"},
                Item{7, "InvalidTextChannelPermissions"},
                Item{8, "MessageTooLong"},
                Item{9, "ModerationTimeout"},
            }};
        };

        struct TextDirection {
            inline static constexpr std::string_view Name = "TextDirection";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Auto"},
                Item{1, "LeftToRight"},
                Item{2, "RightToLeft"},
            }};
        };

        struct TextFilterContext {
            inline static constexpr std::string_view Name = "TextFilterContext";
            inline static constexpr std::array<Item, 2> Items{{
                Item{1, "PublicChat"},
                Item{2, "PrivateChat"},
            }};
        };

        struct TextInputType {
            inline static constexpr std::string_view Name = "TextInputType";
            inline static constexpr std::array<Item, 11> Items{{
                Item{0, "Default"},
                Item{1, "NoSuggestions"},
                Item{2, "Number"},
                Item{3, "Email"},
                Item{4, "Phone"},
                Item{5, "Password"},
                Item{6, "PasswordShown"},
                Item{7, "Username"},
                Item{8, "OneTimePassword"},
                Item{9, "NewPassword"},
                Item{10, "NewPasswordShown"},
            }};
        };

        struct TextTruncate {
            inline static constexpr std::string_view Name = "TextTruncate";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "None"},
                Item{1, "AtEnd"},
                Item{2, "SplitWord"},
            }};
        };

        struct TextXAlignment {
            inline static constexpr std::string_view Name = "TextXAlignment";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Left"},
                Item{1, "Right"},
                Item{2, "Center"},
            }};
        };

        struct TextYAlignment {
            inline static constexpr std::string_view Name = "TextYAlignment";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Top"},
                Item{1, "Center"},
                Item{2, "Bottom"},
            }};
        };

        struct TextureMode {
            inline static constexpr std::string_view Name = "TextureMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Stretch"},
                Item{1, "Wrap"},
                Item{2, "Static"},
            }};
        };

        struct TextureQueryType {
            inline static constexpr std::string_view Name = "TextureQueryType";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "NonHumanoid"},
                Item{1, "NonHumanoidOrphaned"},
                Item{2, "Humanoid"},
                Item{3, "HumanoidOrphaned"},
            }};
        };

        struct ThreadPoolConfig {
            inline static constexpr std::string_view Name = "ThreadPoolConfig";
            inline static constexpr std::array<Item, 12> Items{{
                Item{0, "Auto"},
                Item{1, "Threads1"},
                Item{2, "Threads2"},
                Item{3, "Threads3"},
                Item{4, "Threads4"},
                Item{8, "Threads8"},
                Item{16, "Threads16"},
                Item{101, "PerCore1"},
                Item{102, "PerCore2"},
                Item{103, "PerCore3"},
                Item{104, "PerCore4"},
                Item{201, "Auto"},
            }};
        };

        struct ThrottlingPriority {
            inline static constexpr std::string_view Name = "ThrottlingPriority";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "ElevatedOnServer"},
                Item{2, "Extreme"},
            }};
        };

        struct ThumbnailSize {
            inline static constexpr std::string_view Name = "ThumbnailSize";
            inline static constexpr std::array<Item, 7> Items{{
                Item{0, "Size48x48"},
                Item{1, "Size180x180"},
                Item{2, "Size420x420"},
                Item{3, "Size60x60"},
                Item{4, "Size100x100"},
                Item{5, "Size150x150"},
                Item{6, "Size352x352"},
            }};
        };

        struct ThumbnailType {
            inline static constexpr std::string_view Name = "ThumbnailType";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "HeadShot"},
                Item{1, "AvatarBust"},
                Item{2, "AvatarThumbnail"},
            }};
        };

        struct TickCountSampleMethod {
            inline static constexpr std::string_view Name = "TickCountSampleMethod";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Fast"},
                Item{1, "Benchmark"},
                Item{2, "Precise"},
            }};
        };

        struct TitleBarControlsPosition {
            inline static constexpr std::string_view Name = "TitleBarControlsPosition";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Unknown"},
                Item{1, "Left"},
                Item{2, "Right"},
            }};
        };

        struct TitleBarMode {
            inline static constexpr std::string_view Name = "TitleBarMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Native"},
                Item{1, "Custom"},
            }};
        };

        struct TonemapperPreset {
            inline static constexpr std::string_view Name = "TonemapperPreset";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Default"},
                Item{1, "Retro"},
            }};
        };

        struct TopBottom {
            inline static constexpr std::string_view Name = "TopBottom";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Top"},
                Item{1, "Center"},
                Item{2, "Bottom"},
            }};
        };

        struct TouchCameraMovementMode {
            inline static constexpr std::string_view Name = "TouchCameraMovementMode";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Default"},
                Item{1, "Classic"},
                Item{2, "Follow"},
                Item{3, "Orbital"},
            }};
        };

        struct TouchMovementMode {
            inline static constexpr std::string_view Name = "TouchMovementMode";
            inline static constexpr std::array<Item, 6> Items{{
                Item{0, "Default"},
                Item{1, "Thumbstick"},
                Item{2, "DPad"},
                Item{3, "Thumbpad"},
                Item{4, "ClickToMove"},
                Item{5, "DynamicThumbstick"},
            }};
        };

        struct TrackerError {
            inline static constexpr std::string_view Name = "TrackerError";
            inline static constexpr std::array<Item, 11> Items{{
                Item{0, "Ok"},
                Item{1, "NoService"},
                Item{2, "InitFailed"},
                Item{3, "NoVideo"},
                Item{4, "VideoError"},
                Item{5, "VideoNoPermission"},
                Item{6, "VideoUnsupported"},
                Item{7, "NoAudio"},
                Item{8, "AudioError"},
                Item{9, "AudioNoPermission"},
                Item{10, "UnsupportedDevice"},
            }};
        };

        struct TrackerExtrapolationFlagMode {
            inline static constexpr std::string_view Name = "TrackerExtrapolationFlagMode";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "ForceDisabled"},
                Item{1, "ExtrapolateFacsAndPose"},
                Item{2, "ExtrapolateFacsOnly"},
                Item{3, "Auto"},
            }};
        };

        struct TrackerFaceTrackingStatus {
            inline static constexpr std::string_view Name = "TrackerFaceTrackingStatus";
            inline static constexpr std::array<Item, 7> Items{{
                Item{0, "FaceTrackingSuccess"},
                Item{1, "FaceTrackingNoFaceFound"},
                Item{2, "FaceTrackingUnknown"},
                Item{3, "FaceTrackingLost"},
                Item{4, "FaceTrackingHasTrackingError"},
                Item{5, "FaceTrackingIsOccluded"},
                Item{6, "FaceTrackingUninitialized"},
            }};
        };

        struct TrackerLodFlagMode {
            inline static constexpr std::string_view Name = "TrackerLodFlagMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "ForceFalse"},
                Item{1, "ForceTrue"},
                Item{2, "Auto"},
            }};
        };

        struct TrackerLodValueMode {
            inline static constexpr std::string_view Name = "TrackerLodValueMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Force0"},
                Item{1, "Force1"},
                Item{2, "Auto"},
            }};
        };

        struct TrackerMode {
            inline static constexpr std::string_view Name = "TrackerMode";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "None"},
                Item{1, "Audio"},
                Item{2, "Video"},
                Item{3, "AudioVideo"},
            }};
        };

        struct TrackerPromptEvent {
            inline static constexpr std::string_view Name = "TrackerPromptEvent";
            inline static constexpr std::array<Item, 1> Items{{
                Item{0, "LODCameraRecommendDisable"},
            }};
        };

        struct TrackerType {
            inline static constexpr std::string_view Name = "TrackerType";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "None"},
                Item{1, "Face"},
                Item{2, "UpperBody"},
            }};
        };

        struct TriStateBoolean {
            inline static constexpr std::string_view Name = "TriStateBoolean";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Unknown"},
                Item{1, "True"},
                Item{2, "False"},
            }};
        };

        struct TweenStatus {
            inline static constexpr std::string_view Name = "TweenStatus";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Canceled"},
                Item{1, "Completed"},
            }};
        };

        struct UIBlurStrength {
            inline static constexpr std::string_view Name = "UIBlurStrength";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Light"},
                Item{1, "Medium"},
                Item{2, "Heavy"},
            }};
        };

        struct UICaptureMode {
            inline static constexpr std::string_view Name = "UICaptureMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "All"},
                Item{1, "None"},
            }};
        };

        struct UIDragDetectorBoundingBehavior {
            inline static constexpr std::string_view Name = "UIDragDetectorBoundingBehavior";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Automatic"},
                Item{1, "EntireObject"},
                Item{2, "HitPoint"},
            }};
        };

        struct UIDragDetectorDragRelativity {
            inline static constexpr std::string_view Name = "UIDragDetectorDragRelativity";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Absolute"},
                Item{1, "Relative"},
            }};
        };

        struct UIDragDetectorDragSpace {
            inline static constexpr std::string_view Name = "UIDragDetectorDragSpace";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Parent"},
                Item{1, "LayerCollector"},
                Item{2, "Reference"},
            }};
        };

        struct UIDragDetectorDragStyle {
            inline static constexpr std::string_view Name = "UIDragDetectorDragStyle";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "TranslatePlane"},
                Item{1, "TranslateLine"},
                Item{2, "Rotate"},
                Item{3, "Scriptable"},
            }};
        };

        struct UIDragDetectorResponseStyle {
            inline static constexpr std::string_view Name = "UIDragDetectorResponseStyle";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Offset"},
                Item{1, "Scale"},
                Item{2, "CustomOffset"},
                Item{3, "CustomScale"},
            }};
        };

        struct UIDragSpeedAxisMapping {
            inline static constexpr std::string_view Name = "UIDragSpeedAxisMapping";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "XY"},
                Item{1, "XX"},
                Item{2, "YY"},
            }};
        };

        struct UIFlexAlignment {
            inline static constexpr std::string_view Name = "UIFlexAlignment";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "None"},
                Item{1, "Fill"},
                Item{2, "SpaceAround"},
                Item{3, "SpaceBetween"},
                Item{4, "SpaceEvenly"},
            }};
        };

        struct UIFlexMode {
            inline static constexpr std::string_view Name = "UIFlexMode";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "None"},
                Item{1, "Grow"},
                Item{2, "Shrink"},
                Item{3, "Fill"},
                Item{4, "Custom"},
            }};
        };

        struct UiMessageType {
            inline static constexpr std::string_view Name = "UiMessageType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "UiMessageError"},
                Item{1, "UiMessageInfo"},
            }};
        };

        struct UpdateState {
            inline static constexpr std::string_view Name = "UpdateState";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "UpdateNotAvailable"},
                Item{1, "UpdateAvailable"},
                Item{2, "UpdateInProgress"},
                Item{3, "UpdateReady"},
                Item{4, "UpdateFailed"},
            }};
        };

        struct UploadCaptureResult {
            inline static constexpr std::string_view Name = "UploadCaptureResult";
            inline static constexpr std::array<Item, 8> Items{{
                Item{0, "Success"},
                Item{1, "NeedPermission"},
                Item{2, "CaptureModerated"},
                Item{3, "CaptureNotInGallery"},
                Item{4, "IneligibleCapture"},
                Item{5, "UploadQuotaReached"},
                Item{6, "UploadPending"},
                Item{7, "UploadFailed"},
            }};
        };

        struct UsageContext {
            inline static constexpr std::string_view Name = "UsageContext";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Default"},
                Item{1, "Preview"},
            }};
        };

        struct UserAcquisitionSource {
            inline static constexpr std::string_view Name = "UserAcquisitionSource";
            inline static constexpr std::array<Item, 11> Items{{
                Item{0, "Unknown"},
                Item{1, "PendingAttribution"},
                Item{2, "HomeRecommendation"},
                Item{3, "ContinueToPlay"},
                Item{4, "Curation"},
                Item{5, "Friends"},
                Item{6, "Search"},
                Item{7, "Teleport"},
                Item{8, "Ads"},
                Item{9, "HomeOther"},
                Item{10, "Other"},
            }};
        };

        struct UserCFrame {
            inline static constexpr std::string_view Name = "UserCFrame";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Head"},
                Item{1, "LeftHand"},
                Item{2, "RightHand"},
                Item{3, "Floor"},
            }};
        };

        struct UserIdMode {
            inline static constexpr std::string_view Name = "UserIdMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Invalid"},
                Item{1, "Global"},
                Item{2, "Domain"},
            }};
        };

        struct UserInputState {
            inline static constexpr std::string_view Name = "UserInputState";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Begin"},
                Item{1, "Change"},
                Item{2, "End"},
                Item{3, "Cancel"},
                Item{4, "None"},
            }};
        };

        struct UserInputType {
            inline static constexpr std::string_view Name = "UserInputType";
            inline static constexpr std::array<Item, 21> Items{{
                Item{0, "MouseButton1"},
                Item{1, "MouseButton2"},
                Item{2, "MouseButton3"},
                Item{3, "MouseWheel"},
                Item{4, "MouseMovement"},
                Item{7, "Touch"},
                Item{8, "Keyboard"},
                Item{9, "Focus"},
                Item{10, "Accelerometer"},
                Item{11, "Gyro"},
                Item{12, "Gamepad1"},
                Item{13, "Gamepad2"},
                Item{14, "Gamepad3"},
                Item{15, "Gamepad4"},
                Item{16, "Gamepad5"},
                Item{17, "Gamepad6"},
                Item{18, "Gamepad7"},
                Item{19, "Gamepad8"},
                Item{20, "TextInput"},
                Item{21, "InputMethod"},
                Item{22, "None"},
            }};
        };

        struct UserNewReturningStatus {
            inline static constexpr std::string_view Name = "UserNewReturningStatus";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Unknown"},
                Item{1, "New"},
                Item{2, "Returning"},
            }};
        };

        struct UserReturnStatus {
            inline static constexpr std::string_view Name = "UserReturnStatus";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Unknown"},
                Item{1, "New"},
                Item{2, "Returning"},
            }};
        };

        struct VRComfortSetting {
            inline static constexpr std::string_view Name = "VRComfortSetting";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Comfort"},
                Item{1, "Normal"},
                Item{2, "Expert"},
                Item{3, "Custom"},
            }};
        };

        struct VRControllerModelMode {
            inline static constexpr std::string_view Name = "VRControllerModelMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Disabled"},
                Item{1, "Transparent"},
            }};
        };

        struct VRDeviceType {
            inline static constexpr std::string_view Name = "VRDeviceType";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Unknown"},
                Item{1, "OculusRift"},
                Item{2, "HTCVive"},
                Item{3, "ValveIndex"},
                Item{4, "OculusQuest"},
            }};
        };

        struct VRLaserPointerMode {
            inline static constexpr std::string_view Name = "VRLaserPointerMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Disabled"},
                Item{1, "Pointer"},
                Item{2, "DualPointer"},
            }};
        };

        struct VRPresentationMode {
            inline static constexpr std::string_view Name = "VRPresentationMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Stereo"},
                Item{1, "Flat"},
            }};
        };

        struct VRSafetyBubbleMode {
            inline static constexpr std::string_view Name = "VRSafetyBubbleMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "NoOne"},
                Item{1, "OnlyFriends"},
                Item{2, "Anyone"},
            }};
        };

        struct VRScaling {
            inline static constexpr std::string_view Name = "VRScaling";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "World"},
                Item{1, "Off"},
            }};
        };

        struct VRSessionState {
            inline static constexpr std::string_view Name = "VRSessionState";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Undefined"},
                Item{1, "Idle"},
                Item{2, "Visible"},
                Item{3, "Focused"},
                Item{4, "Stopping"},
            }};
        };

        struct VRTouchpad {
            inline static constexpr std::string_view Name = "VRTouchpad";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Left"},
                Item{1, "Right"},
            }};
        };

        struct VRTouchpadMode {
            inline static constexpr std::string_view Name = "VRTouchpadMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Touch"},
                Item{1, "VirtualThumbstick"},
                Item{2, "ABXY"},
            }};
        };

        struct VelocityConstraintMode {
            inline static constexpr std::string_view Name = "VelocityConstraintMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Line"},
                Item{1, "Plane"},
                Item{2, "Vector"},
            }};
        };

        struct VerifiedLevel {
            inline static constexpr std::string_view Name = "VerifiedLevel";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Low"},
                Item{1, "High"},
            }};
        };

        struct VerticalAlignment {
            inline static constexpr std::string_view Name = "VerticalAlignment";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Center"},
                Item{1, "Top"},
                Item{2, "Bottom"},
            }};
        };

        struct VerticalScrollBarPosition {
            inline static constexpr std::string_view Name = "VerticalScrollBarPosition";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Right"},
                Item{1, "Left"},
            }};
        };

        struct VibrationMotor {
            inline static constexpr std::string_view Name = "VibrationMotor";
            inline static constexpr std::array<Item, 6> Items{{
                Item{0, "Large"},
                Item{1, "Small"},
                Item{2, "LeftTrigger"},
                Item{3, "RightTrigger"},
                Item{4, "LeftHand"},
                Item{5, "RightHand"},
            }};
        };

        struct VideoCaptureResult {
            inline static constexpr std::string_view Name = "VideoCaptureResult";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Success"},
                Item{1, "OtherError"},
                Item{2, "ScreenSizeChanged"},
                Item{3, "TimeLimitReached"},
            }};
        };

        struct VideoCaptureStartedResult {
            inline static constexpr std::string_view Name = "VideoCaptureStartedResult";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Success"},
                Item{1, "OtherError"},
                Item{2, "CapturingAlready"},
                Item{3, "NoDeviceSupport"},
                Item{4, "NoSpaceOnDevice"},
            }};
        };

        struct VideoDeviceCaptureQuality {
            inline static constexpr std::string_view Name = "VideoDeviceCaptureQuality";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Default"},
                Item{1, "Low"},
                Item{2, "Medium"},
                Item{3, "High"},
            }};
        };

        struct VideoError {
            inline static constexpr std::string_view Name = "VideoError";
            inline static constexpr std::array<Item, 19> Items{{
                Item{0, "Ok"},
                Item{1, "Eof"},
                Item{2, "EAgain"},
                Item{3, "BadParameter"},
                Item{4, "AllocFailed"},
                Item{5, "CodecInitFailed"},
                Item{6, "CodecCloseFailed"},
                Item{7, "DecodeFailed"},
                Item{8, "ParsingFailed"},
                Item{9, "Unsupported"},
                Item{10, "Generic"},
                Item{11, "DownloadFailed"},
                Item{12, "StreamNotFound"},
                Item{13, "EncodeFailed"},
                Item{14, "CreateFailed"},
                Item{15, "NoPermission"},
                Item{16, "NoService"},
                Item{17, "ReleaseFailed"},
                Item{18, "Unknown"},
            }};
        };

        struct VideoSampleSize {
            inline static constexpr std::string_view Name = "VideoSampleSize";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Small"},
                Item{1, "Medium"},
                Item{2, "Large"},
                Item{3, "Full"},
            }};
        };

        struct ViewMode {
            inline static constexpr std::string_view Name = "ViewMode";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "None"},
                Item{1, "GeometryComplexity"},
                Item{2, "Transparent"},
                Item{3, "Decal"},
            }};
        };

        struct VirtualCursorMode {
            inline static constexpr std::string_view Name = "VirtualCursorMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Default"},
                Item{1, "Disabled"},
                Item{2, "Enabled"},
            }};
        };

        struct VirtualInputMode {
            inline static constexpr std::string_view Name = "VirtualInputMode";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "None"},
                Item{1, "Recording"},
                Item{2, "Playing"},
            }};
        };

        struct VoiceChatDistanceAttenuationType {
            inline static constexpr std::string_view Name = "VoiceChatDistanceAttenuationType";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Inverse"},
                Item{1, "Legacy"},
            }};
        };

        struct VoiceChatState {
            inline static constexpr std::string_view Name = "VoiceChatState";
            inline static constexpr std::array<Item, 7> Items{{
                Item{0, "Idle"},
                Item{1, "Joining"},
                Item{2, "JoiningRetry"},
                Item{3, "Joined"},
                Item{4, "Leaving"},
                Item{5, "Ended"},
                Item{6, "Failed"},
            }};
        };

        struct VoiceClientLeaveReasons {
            inline static constexpr std::string_view Name = "VoiceClientLeaveReasons";
            inline static constexpr std::array<Item, 9> Items{{
                Item{0, "Unknown"},
                Item{1, "ClientNetworkDisconnected"},
                Item{2, "PlayerLeft"},
                Item{3, "ClientShutdown"},
                Item{4, "PublishFailed"},
                Item{5, "RejoinReceived"},
                Item{6, "VoiceReboot"},
                Item{7, "ImguiDebugLeave"},
                Item{8, "LuaInitiated"},
            }};
        };

        struct VoiceControlPath {
            inline static constexpr std::string_view Name = "VoiceControlPath";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Publish"},
                Item{1, "Subscribe"},
                Item{2, "Join"},
            }};
        };

        struct VoiceRccReconnectReason {
            inline static constexpr std::string_view Name = "VoiceRccReconnectReason";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "Unknown"},
                Item{1, "Migration"},
                Item{2, "CloseRoom"},
                Item{3, "FAEUpdate"},
                Item{4, "BlockListChanged"},
            }};
        };

        struct VolumetricAudio {
            inline static constexpr std::string_view Name = "VolumetricAudio";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Disabled"},
                Item{1, "Automatic"},
                Item{2, "Enabled"},
            }};
        };

        struct WaterDirection {
            inline static constexpr std::string_view Name = "WaterDirection";
            inline static constexpr std::array<Item, 6> Items{{
                Item{0, "NegX"},
                Item{1, "X"},
                Item{2, "NegY"},
                Item{3, "Y"},
                Item{4, "NegZ"},
                Item{5, "Z"},
            }};
        };

        struct WaterForce {
            inline static constexpr std::string_view Name = "WaterForce";
            inline static constexpr std::array<Item, 5> Items{{
                Item{0, "None"},
                Item{1, "Small"},
                Item{2, "Medium"},
                Item{3, "Strong"},
                Item{4, "Max"},
            }};
        };

        struct WebSocketState {
            inline static constexpr std::string_view Name = "WebSocketState";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Connecting"},
                Item{1, "Open"},
                Item{2, "Closing"},
                Item{3, "Closed"},
            }};
        };

        struct WebStreamClientState {
            inline static constexpr std::string_view Name = "WebStreamClientState";
            inline static constexpr std::array<Item, 4> Items{{
                Item{0, "Connecting"},
                Item{1, "Open"},
                Item{2, "Error"},
                Item{3, "Closed"},
            }};
        };

        struct WebStreamClientType {
            inline static constexpr std::string_view Name = "WebStreamClientType";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "SSE"},
                Item{1, "RawStream"},
                Item{2, "WebSocket"},
            }};
        };

        struct WeldConstraintPreserve {
            inline static constexpr std::string_view Name = "WeldConstraintPreserve";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "All"},
                Item{1, "None"},
                Item{2, "Touching"},
            }};
        };

        struct WhenUserFirstPlayed {
            inline static constexpr std::string_view Name = "WhenUserFirstPlayed";
            inline static constexpr std::array<Item, 6> Items{{
                Item{0, "Unknown"},
                Item{1, "Days0To30"},
                Item{2, "Days31To90"},
                Item{3, "Days91To180"},
                Item{4, "Days181To365"},
                Item{5, "Days366Plus"},
            }};
        };

        struct WhisperChatPrivacyMode {
            inline static constexpr std::string_view Name = "WhisperChatPrivacyMode";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "AllUsers"},
                Item{1, "NoOne"},
            }};
        };

        struct WindSoundProfile {
            inline static constexpr std::string_view Name = "WindSoundProfile";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Turbulence"},
                Item{1, "Whistle"},
                Item{2, "Foliage"},
            }};
        };

        struct WindowState {
            inline static constexpr std::string_view Name = "WindowState";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Normal"},
                Item{1, "Minimized"},
                Item{2, "Maximized"},
            }};
        };

        struct WrapLayerAutoSkin {
            inline static constexpr std::string_view Name = "WrapLayerAutoSkin";
            inline static constexpr std::array<Item, 3> Items{{
                Item{0, "Disabled"},
                Item{1, "EnabledPreserve"},
                Item{2, "EnabledOverride"},
            }};
        };

        struct WrapLayerDebugMode {
            inline static constexpr std::string_view Name = "WrapLayerDebugMode";
            inline static constexpr std::array<Item, 16> Items{{
                Item{0, "None"},
                Item{1, "BoundCage"},
                Item{2, "LayerCage"},
                Item{3, "BoundCageAndLinks"},
                Item{4, "Reference"},
                Item{5, "Rbf"},
                Item{6, "OuterCage"},
                Item{7, "ReferenceMeshAfterMorph"},
                Item{8, "HSROuterDetail"},
                Item{9, "HSROuter"},
                Item{10, "HSRInner"},
                Item{11, "HSRInnerReverse"},
                Item{12, "LayerCageFittedToBase"},
                Item{13, "LayerCageFittedToPrev"},
                Item{14, "PreWrapDeformerOuterCage"},
                Item{15, "SkinningTransfer"},
            }};
        };

        struct WrapTargetDebugMode {
            inline static constexpr std::string_view Name = "WrapTargetDebugMode";
            inline static constexpr std::array<Item, 10> Items{{
                Item{0, "None"},
                Item{1, "TargetCageOriginal"},
                Item{2, "TargetCageCompressed"},
                Item{3, "TargetCageInterface"},
                Item{4, "TargetLayerCageOriginal"},
                Item{5, "TargetLayerCageCompressed"},
                Item{6, "TargetLayerInterface"},
                Item{7, "Rbf"},
                Item{8, "OuterCageDetail"},
                Item{9, "PreWrapDeformerCage"},
            }};
        };

        struct ZIndexBehavior {
            inline static constexpr std::string_view Name = "ZIndexBehavior";
            inline static constexpr std::array<Item, 2> Items{{
                Item{0, "Global"},
                Item{1, "Sibling"},
            }};
        };

    }

    struct BrickColor {
        inline static constexpr std::array<Item, 208> Items{{
            Item{1, "White"},
            Item{2, "Grey"},
            Item{3, "Light yellow"},
            Item{5, "Brick yellow"},
            Item{6, "Light green (Mint)"},
            Item{9, "Light reddish violet"},
            Item{11, "Pastel Blue"},
            Item{12, "Light orange brown"},
            Item{18, "Nougat"},
            Item{21, "Bright red"},
            Item{22, "Med. reddish violet"},
            Item{23, "Bright blue"},
            Item{24, "Bright yellow"},
            Item{25, "Earth orange"},
            Item{26, "Black"},
            Item{27, "Dark grey"},
            Item{28, "Dark green"},
            Item{29, "Medium green"},
            Item{36, "Lig. Yellowich orange"},
            Item{37, "Bright green"},
            Item{38, "Dark orange"},
            Item{39, "Light bluish violet"},
            Item{40, "Transparent"},
            Item{41, "Tr. Red"},
            Item{42, "Tr. Lg blue"},
            Item{43, "Tr. Blue"},
            Item{44, "Tr. Yellow"},
            Item{45, "Light blue"},
            Item{47, "Tr. Flu. Reddish orange"},
            Item{48, "Tr. Green"},
            Item{49, "Tr. Flu. Green"},
            Item{50, "Phosph. White"},
            Item{100, "Light red"},
            Item{101, "Medium red"},
            Item{102, "Medium blue"},
            Item{103, "Light grey"},
            Item{104, "Bright violet"},
            Item{105, "Br. yellowish orange"},
            Item{106, "Bright orange"},
            Item{107, "Bright bluish green"},
            Item{108, "Earth yellow"},
            Item{110, "Bright bluish violet"},
            Item{111, "Tr. Brown"},
            Item{112, "Medium bluish violet"},
            Item{113, "Tr. Medi. reddish violet"},
            Item{115, "Med. yellowish green"},
            Item{116, "Med. bluish green"},
            Item{118, "Light bluish green"},
            Item{119, "Br. yellowish green"},
            Item{120, "Lig. yellowish green"},
            Item{121, "Med. yellowish orange"},
            Item{123, "Br. reddish orange"},
            Item{124, "Bright reddish violet"},
            Item{125, "Light orange"},
            Item{126, "Tr. Bright bluish violet"},
            Item{127, "Gold"},
            Item{128, "Dark nougat"},
            Item{131, "Silver"},
            Item{133, "Neon orange"},
            Item{134, "Neon green"},
            Item{135, "Sand blue"},
            Item{136, "Sand violet"},
            Item{137, "Medium orange"},
            Item{138, "Sand yellow"},
            Item{140, "Earth blue"},
            Item{141, "Earth green"},
            Item{143, "Tr. Flu. Blue"},
            Item{145, "Sand blue metallic"},
            Item{146, "Sand violet metallic"},
            Item{147, "Sand yellow metallic"},
            Item{148, "Dark grey metallic"},
            Item{149, "Black metallic"},
            Item{150, "Light grey metallic"},
            Item{151, "Sand green"},
            Item{153, "Sand red"},
            Item{154, "Dark red"},
            Item{157, "Tr. Flu. Yellow"},
            Item{158, "Tr. Flu. Red"},
            Item{168, "Gun metallic"},
            Item{176, "Red flip/flop"},
            Item{178, "Yellow flip/flop"},
            Item{179, "Silver flip/flop"},
            Item{180, "Curry"},
            Item{190, "Fire Yellow"},
            Item{191, "Flame yellowish orange"},
            Item{192, "Reddish brown"},
            Item{193, "Flame reddish orange"},
            Item{194, "Medium stone grey"},
            Item{195, "Royal blue"},
            Item{196, "Dark Royal blue"},
            Item{198, "Bright reddish lilac"},
            Item{199, "Dark stone grey"},
            Item{200, "Lemon metalic"},
            Item{208, "Light stone grey"},
            Item{209, "Dark Curry"},
            Item{210, "Faded green"},
            Item{211, "Turquoise"},
            Item{212, "Light Royal blue"},
            Item{213, "Medium Royal blue"},
            Item{216, "Rust"},
            Item{217, "Brown"},
            Item{218, "Reddish lilac"},
            Item{219, "Lilac"},
            Item{220, "Light lilac"},
            Item{221, "Bright purple"},
            Item{222, "Light purple"},
            Item{223, "Light pink"},
            Item{224, "Light brick yellow"},
            Item{225, "Warm yellowish orange"},
            Item{226, "Cool yellow"},
            Item{232, "Dove blue"},
            Item{268, "Medium lilac"},
            Item{301, "Slime green"},
            Item{302, "Smoky grey"},
            Item{303, "Dark blue"},
            Item{304, "Parsley green"},
            Item{305, "Steel blue"},
            Item{306, "Storm blue"},
            Item{307, "Lapis"},
            Item{308, "Dark indigo"},
            Item{309, "Sea green"},
            Item{310, "Shamrock"},
            Item{311, "Fossil"},
            Item{312, "Mulberry"},
            Item{313, "Forest green"},
            Item{314, "Cadet blue"},
            Item{315, "Electric blue"},
            Item{316, "Eggplant"},
            Item{317, "Moss"},
            Item{318, "Artichoke"},
            Item{319, "Sage green"},
            Item{320, "Ghost grey"},
            Item{321, "Lilac"},
            Item{322, "Plum"},
            Item{323, "Olivine"},
            Item{324, "Laurel green"},
            Item{325, "Quill grey"},
            Item{327, "Crimson"},
            Item{328, "Mint"},
            Item{329, "Baby blue"},
            Item{330, "Carnation pink"},
            Item{331, "Persimmon"},
            Item{332, "Maroon"},
            Item{333, "Gold"},
            Item{334, "Daisy orange"},
            Item{335, "Pearl"},
            Item{336, "Fog"},
            Item{337, "Salmon"},
            Item{338, "Terra Cotta"},
            Item{339, "Cocoa"},
            Item{340, "Wheat"},
            Item{341, "Buttermilk"},
            Item{342, "Mauve"},
            Item{343, "Sunrise"},
            Item{344, "Tawny"},
            Item{345, "Rust"},
            Item{346, "Cashmere"},
            Item{347, "Khaki"},
            Item{348, "Lily white"},
            Item{349, "Seashell"},
            Item{350, "Burgundy"},
            Item{351, "Cork"},
            Item{352, "Burlap"},
            Item{353, "Beige"},
            Item{354, "Oyster"},
            Item{355, "Pine Cone"},
            Item{356, "Fawn brown"},
            Item{357, "Hurricane grey"},
            Item{358, "Cloudy grey"},
            Item{359, "Linen"},
            Item{360, "Copper"},
            Item{361, "Medium brown"},
            Item{362, "Bronze"},
            Item{363, "Flint"},
            Item{364, "Dark taupe"},
            Item{365, "Burnt Sienna"},
            Item{1001, "Institutional white"},
            Item{1002, "Mid gray"},
            Item{1003, "Really black"},
            Item{1004, "Really red"},
            Item{1005, "Deep orange"},
            Item{1006, "Alder"},
            Item{1007, "Dusty Rose"},
            Item{1008, "Olive"},
            Item{1009, "New Yeller"},
            Item{1010, "Really blue"},
            Item{1011, "Navy blue"},
            Item{1012, "Deep blue"},
            Item{1013, "Cyan"},
            Item{1014, "CGA brown"},
            Item{1015, "Magenta"},
            Item{1016, "Pink"},
            Item{1017, "Deep orange"},
            Item{1018, "Teal"},
            Item{1019, "Toothpaste"},
            Item{1020, "Lime green"},
            Item{1021, "Camo"},
            Item{1022, "Grime"},
            Item{1023, "Lavender"},
            Item{1024, "Pastel light blue"},
            Item{1025, "Pastel orange"},
            Item{1026, "Pastel violet"},
            Item{1027, "Pastel blue-green"},
            Item{1028, "Pastel green"},
            Item{1029, "Pastel yellow"},
            Item{1030, "Pastel brown"},
            Item{1031, "Royal purple"},
            Item{1032, "Hot pink"},
        }};
    };
}
