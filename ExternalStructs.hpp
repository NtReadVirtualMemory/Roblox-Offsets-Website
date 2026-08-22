#pragma once

#include <cstdint>

namespace ExternalStructs {

    struct Vector2 { float X, Y; };
    struct Vector3 { float X, Y, Z; };
    struct Color3 { float R, G, B; };
    struct Color3uint8 { std::uint8_t R, G, B; };
    struct CFrame { float Values[12]; };
    struct UDim { float Scale; int Offset; };
    struct UDim2 { UDim X, Y; };
    struct Rect { Vector2 Min, Max; };
    struct Ray { Vector3 Origin, Direction; };
    struct BrickColor { int Number; };
    struct NumberRange { float Min, Max; };
    struct PhysicalProperties { char Data[0x14]; };

    struct DataModel {
        char pad_0[0x2E8];
        char JobId[0x20];
        char pad_1[0x40];
        std::int64_t CreatorId;
        std::int64_t GameId;
        std::int64_t PlaceId;
        char pad_2[0x8];
        int CreatorType;
        int Genre;
        int MatchmakingType;
        int PlaceVersion;
        bool ForceR15;
        char pad_3[0x55B];
        int GearGenreSetting;
    }; // sizeof = 0x8D8

    struct Workspace {
        char pad_0[0x3F8];
        bool TerrainWeldsFixed;
        char pad_1[0x6F];
        char WatermarkHash[0x20];
        char pad_2[0x30];
        double DistributedGameTime;
        float AirTurbulenceIntensity;
        char pad_3[0x74];
        int StreamingMinRadius;
        int StreamingTargetRadius;
        int ThrottleLevel;
        char pad_4[0x10];
        bool AllowThirdPartySales;
        bool FallHeightEnabled;
    }; // sizeof = 0x556

    struct Model {
        char pad_0[0xE8];
        char ModelMeshData[0x8];
        char SlimHash[0x8];
        char WorldPivotData[0x8];
        CFrame ModelMeshCFrame;
        Vector3 ModelMeshSize;
        char pad_1[0x8];
        float Scale;
    }; // sizeof = 0x148

    struct Humanoid {
        char pad_0[0xB8];
        char DisplayName[0x20];
        char InternalDisplayName[0x20];
        char pad_1[0x10];
        std::int64_t SeatPart;
        char pad_2[0x18];
        Vector3 CameraOffset;
        char pad_3[0x18];
        Vector3 TargetPoint;
        char pad_4[0xC];
        Vector3 WalkToPoint;
        char pad_5[0x18];
        float HealthDisplayDistance;
        char pad_6[0x4];
        float Health_XML;
        float HipHeight;
        float InternalHeadScale;
        float InternalOriginalHipHeight;
        float JumpHeight;
        float JumpPower;
        float MaxHealth;
        float MaxSlopeAngle;
        float NameDisplayDistance;
        char pad_7[0x8];
        float NoFloorTimerState;
        char pad_8[0x8];
        float TimerState;
        float WalkAngleError;
        float WalkSpeed;
        bool AutoJumpEnabled;
        bool AutoRotate;
        bool AutomaticScalingEnabled;
        bool BreakJointsOnDeath;
        bool EvaluateStateMachine;
        bool FinishedState;
        bool Jump;
        bool OverrideDefaultCollisions;
        bool PlatformStand;
        bool RequiresNeck;
        bool Sit;
        bool Strafe;
        bool UseJumpPower;
    }; // sizeof = 0x1E1

    struct Player {
        char pad_0[0xD8];
        char CharacterAppearance[0x20];
        char ChatAvailabilityStatus[0x20];
        char CountryRegionCodeReplicate[0x20];
        char DisplayName[0x20];
        char OsPlatform[0x20];
        char PartyId[0x20];
        char PlatformName[0x20];
        char RawJoinData[0x20];
        char VRDevice[0x20];
        char pad_1[0x108];
        std::int64_t CharacterAppearanceId;
        std::int64_t FollowUserId;
        char pad_2[0x8];
        CFrame CloudEditCameraCoordinateFrame;
        char pad_3[0x14];
        int AccountAge;
        char pad_4[0x4];
        float CameraFieldOfView;
        float CameraMaxZoomDistance;
        float CameraMinZoomDistance;
        char pad_5[0x8];
        int DataComplexityLimit;
        char pad_6[0x18];
        float HealthDisplayDistance;
        int InputLatency;
        float MaximumSimulationRadius;
        int MembershipType;
        float NameDisplayDistance;
        float SimulationRadius;
        int StepIdOffset;
        BrickColor TeamColor;
        int ThirdPartyTextChatRestrictionStatus;
        char pad_7[0x4];
        float VoiceChatVolume;
        bool AppearanceDidLoad;
        bool AutoJumpEnabled;
        bool CameraFrustumRequested;
        bool CanLoadCharacterAppearance;
        bool CloudEditPlayerActive;
        bool DataReady;
        bool DevEnableMouseLock;
        bool GameplayPaused;
        bool HasRobloxSubscription;
        bool HasVerifiedBadge;
        bool InternalCharacterAppearanceLoaded;
        bool NeedRegionalFallback;
        bool Neutral;
        bool Teleported;
        bool TeleportedIn;
        bool UnfilteredChat;
        bool VREnabled;
        char pad_8[0x36F];
        char LocaleId[0x20];
    }; // sizeof = 0x760

    struct Players {
        char pad_0[0xE0];
        char ServerLogPrefix[0x20];
        char pad_1[0x40];
        int MaxPlayers;
        int PreferredPlayers;
        float RespawnTime;
        bool BanningEnabled;
        bool CharacterAutoLoads;
        bool UseStrafingAnimations;
    }; // sizeof = 0x14F

    struct BasePart {
        char pad_0[0xC8];
        float BackParamA;
        float BackParamB;
        char pad_1[0x8];
        float BottomParamA;
        float BottomParamB;
        char pad_2[0x8];
        float FrontParamA;
        float FrontParamB;
        char pad_3[0x8];
        float LeftParamA;
        float LeftParamB;
        char pad_4[0x8];
        float LocalTransparencyModifier;
        float Reflectance;
        float RightParamA;
        float RightParamB;
        char pad_5[0x8];
        float TopParamA;
        float TopParamB;
        char pad_6[0x8];
        float Transparency;
        bool AudioCanCollide;
        bool CastShadow;
        bool Locked;
        bool Massless;
        char pad_7[0x70];
        ::RobloxOffsets::Windows::ExternalStructs::BrickColor BrickColor;
    }; // sizeof = 0x1AC

    struct MeshPart {
        char pad_0[0x2F8];
        char MeshContent[0x30];
        char TextureContent[0x48];
        int VertexCount;
        bool HasJointOffset;
        bool DoubleSided;
        bool HasSkinnedMesh;
    }; // sizeof = 0x377

    struct PartOperation {
        char pad_0[0x2F8];
        char Content[0x30];
        char ChildData[0x38];
        char MeshData[0x28];
        char ChildData2[0x10];
        char MeshData2[0x8];
        int ComponentIndex;
        char pad_1[0x4];
        float SmoothingAngle;
        int TriangleCount;
        bool OffCentered;
        bool UsePartColor;
    }; // sizeof = 0x3B2

    struct Camera {
        char pad_0[0xD8];
        ::RobloxOffsets::Windows::ExternalStructs::CFrame CFrame;
        ::RobloxOffsets::Windows::ExternalStructs::CFrame Focus;
        char pad_1[0x4];
        float DiagonalFieldOfView;
        float FieldOfView;
        char pad_2[0x4];
        float HeadScale;
        float MaxAxisFieldOfView;
        float NearPlaneZ;
        bool HeadLocked;
        bool VRTiltAndRollEnabled;
        char pad_3[0x13A];
        Vector2 ViewportSize;
    }; // sizeof = 0x298

    struct Lighting {
        char pad_0[0x118];
        float Brightness;
        float EnvironmentDiffuseScale;
        float EnvironmentSpecularScale;
        float ExposureCompensation;
        char pad_1[0x4];
        float FogEnd;
        float FogStart;
        float GeographicLatitude;
        char pad_2[0x4];
        float ShadowSoftness;
        char pad_3[0x4];
        bool GlobalShadows;
        bool Outlines;
        bool PrioritizeLightingQuality;
    }; // sizeof = 0x147

    struct Tool {
        char pad_0[0x468];
        char ToolTip[0x20];
        CFrame Grip;
        bool CanBeDropped;
        bool Enabled;
        bool ManualActivationOnly;
        bool RequiresHandle;
    }; // sizeof = 0x4BC
}
