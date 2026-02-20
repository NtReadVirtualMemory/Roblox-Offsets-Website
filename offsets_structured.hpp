#pragma once

// Roblox Version: version-df7528517c6849f7
// Byfron Version: ???
namespace offsets {
    namespace Animation {
        inline constexpr uintptr_t AnimationId = 0xD0;
    }

    namespace Atribute {
        inline constexpr uintptr_t ToNextEntry = 0x58;
        inline constexpr uintptr_t ToValue = 0x18;
    }

    namespace BasePart {
        inline constexpr uintptr_t Anchored = 0x1AE;
        inline constexpr uintptr_t AnchoredMask = 0x2;
        inline constexpr uintptr_t CFrame = 0xC0;
        inline constexpr uintptr_t CanCollide = 0x1AE;
        inline constexpr uintptr_t CanCollideMask = 0x8;
        inline constexpr uintptr_t CanTouch = 0x1AE;
        inline constexpr uintptr_t CanTouchMask = 0x10;
        inline constexpr uintptr_t MaterialType = 0x246;
        inline constexpr uintptr_t PartSize = 0x1B0;
        inline constexpr uintptr_t Position = 0xE4;
        inline constexpr uintptr_t Primitive = 0x148;
        inline constexpr uintptr_t Rotation = 0xC8;
        inline constexpr uintptr_t Transparency = 0xF0;
        inline constexpr uintptr_t Velocity = 0xF0;
    }

    namespace Beam {
        inline constexpr uintptr_t Brightness = 0x190;
        inline constexpr uintptr_t Color = 0x120;
        inline constexpr uintptr_t LightEmission = 0x19C;
        inline constexpr uintptr_t LightInfuence = 0x1A0;
    }

    namespace Camera {
        inline constexpr uintptr_t CameraPos = 0x11C;
        inline constexpr uintptr_t CameraRotation = 0xF8;
        inline constexpr uintptr_t CameraSubject = 0xE8;
        inline constexpr uintptr_t CameraType = 0x158;
        inline constexpr uintptr_t FOV = 0x160;
        inline constexpr uintptr_t ViewportSize = 0x2E8;
    }

    namespace ClickDetector {
        inline constexpr uintptr_t MaxActivationDistance = 0x100;
    }

    namespace DataModel {
        inline constexpr uintptr_t CreatorId = 0x188;
        inline constexpr uintptr_t DataModelToRenderView1 = 0x1D0;
        inline constexpr uintptr_t DataModelToRenderView2 = 0x8;
        inline constexpr uintptr_t DataModelToRenderView3 = 0x28;
        inline constexpr uintptr_t GameId = 0x190;
        inline constexpr uintptr_t GameLoaded = 0x600;
        inline constexpr uintptr_t JobId = 0x138;
        inline constexpr uintptr_t PlaceId = 0x198;
        inline constexpr uintptr_t PrimitiveCount = 0x438;
        inline constexpr uintptr_t ScriptContext = 0x3F0;
        inline constexpr uintptr_t Workspace = 0x178;
    }

    namespace Decal {
        inline constexpr uintptr_t DecalTexture = 0x198;
    }

    namespace FFlag {
        inline constexpr uintptr_t ValueGetSet = 0x30;
        inline constexpr uintptr_t ValueGetSetToValue = 0xC0;
    }

    namespace FakeDataModel {
        inline constexpr uintptr_t DataModel = 0x1C0;
    }

    namespace Frame {
        inline constexpr uintptr_t PositionOffsetX = 0x51C;
        inline constexpr uintptr_t PositionOffsetY = 0x524;
        inline constexpr uintptr_t PositionX = 0x518;
        inline constexpr uintptr_t PositionY = 0x520;
        inline constexpr uintptr_t Rotation = 0x188;
        inline constexpr uintptr_t SizeOffsetX = 0x540;
        inline constexpr uintptr_t SizeOffsetY = 0x544;
        inline constexpr uintptr_t SizeX = 0x538;
        inline constexpr uintptr_t SizeY = 0x53C;
        inline constexpr uintptr_t Visible = 0x5B1;
    }

    namespace GuiService {
        inline constexpr uintptr_t InsetMaxX = 0x100;
        inline constexpr uintptr_t InsetMaxY = 0x104;
        inline constexpr uintptr_t InsetMinX = 0xF8;
        inline constexpr uintptr_t InsetMinY = 0xFC;
    }

    namespace Highlight {
        inline constexpr uintptr_t Adornee = 0xD0;
    }

    namespace Humanoid {
        inline constexpr uintptr_t AutoJumpEnabled = 0x1DB;
        inline constexpr uintptr_t EvaluateStateMachine = 0x1DD;
        inline constexpr uintptr_t Health = 0x194;
        inline constexpr uintptr_t HipHeight = 0x1A0;
        inline constexpr uintptr_t HumanoidDisplayName = 0xD0;
        inline constexpr uintptr_t HumanoidState = 0x8D8;
        inline constexpr uintptr_t HumanoidStateId = 0x20;
        inline constexpr uintptr_t JumpPower = 0x1B0;
        inline constexpr uintptr_t MaxHealth = 0x1B4;
        inline constexpr uintptr_t MaxSlopeAngle = 0x1B8;
        inline constexpr uintptr_t MoveDirection = 0x158;
        inline constexpr uintptr_t RigType = 0x1C8;
        inline constexpr uintptr_t RootPartR15 = 0x620;
        inline constexpr uintptr_t RootPartR6 = 0x4C0;
        inline constexpr uintptr_t Sit = 0x1DC;
        inline constexpr uintptr_t WalkSpeed = 0x1D4;
        inline constexpr uintptr_t WalkSpeedCheck = 0x3C0;
    }

    namespace InputObject {
        inline constexpr uintptr_t InputObject = 0x100;
        inline constexpr uintptr_t MousePosition = 0xEC;
        inline constexpr uintptr_t PlayerMouse = 0xF78;
    }

    namespace Instance {
        inline constexpr uintptr_t Children = 0x70;
        inline constexpr uintptr_t ChildrenEnd = 0x8;
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        inline constexpr uintptr_t ClassDescriptorToClassName = 0x8;
        inline constexpr uintptr_t Deleter = 0x10;
        inline constexpr uintptr_t DeleterBack = 0x18;
        inline constexpr uintptr_t InstanceAttributePointer1 = 0x48;
        inline constexpr uintptr_t InstanceAttributePointer2 = 0x18;
        inline constexpr uintptr_t InstanceCapabilities = 0x280;
        inline constexpr uintptr_t Name = 0xB0;
        inline constexpr uintptr_t NameSize = 0x10;
        inline constexpr uintptr_t OnDemandInstance = 0x40;
        inline constexpr uintptr_t Parent = 0x68;
        inline constexpr uintptr_t Sandboxed = 0xC5;
        inline constexpr uintptr_t StringLength = 0x10;
    }

    namespace Jobs {
        inline constexpr uintptr_t JobName = 0x18;
    }

    namespace Lighting {
        inline constexpr uintptr_t ClockTime = 0x1B8;
        inline constexpr uintptr_t FogColor = 0xFC;
        inline constexpr uintptr_t FogEnd = 0x134;
        inline constexpr uintptr_t FogStart = 0x138;
        inline constexpr uintptr_t OutdoorAmbient = 0x108;
    }

    namespace LocalScript {
        inline constexpr uintptr_t LocalScriptByteCode = 0x1A8;
        inline constexpr uintptr_t LocalScriptBytecodePointer = 0x10;
        inline constexpr uintptr_t LocalScriptHash = 0x1B8;
        inline constexpr uintptr_t RunContext = 0x148;
    }

    namespace MeshPart {
        inline constexpr uintptr_t Color3 = 0x194;
        inline constexpr uintptr_t Texture = 0x318;
    }

    namespace ModuleScript {
        inline constexpr uintptr_t ModuleScriptByteCode = 0x150;
        inline constexpr uintptr_t ModuleScriptBytecodePointer = 0x10;
        inline constexpr uintptr_t ModuleScriptHash = 0x160;
    }

    namespace OnDemandInstance {
        inline constexpr uintptr_t TagList = 0x0;
    }

    namespace PerformanceStats_Ping {
        inline constexpr uintptr_t Ping = 0xCC;
    }

    namespace Player {
        inline constexpr uintptr_t CameraMaxZoomDistance = 0x310;
        inline constexpr uintptr_t CameraMinZoomDistance = 0x314;
        inline constexpr uintptr_t CameraMode = 0x318;
        inline constexpr uintptr_t CharacterAppearanceId = 0x2B8;
        inline constexpr uintptr_t DisplayName = 0x130;
        inline constexpr uintptr_t HealthDisplayDistance = 0x338;
        inline constexpr uintptr_t ModelInstance = 0x380;
        inline constexpr uintptr_t NameDisplayDistance = 0x344;
        inline constexpr uintptr_t Team = 0x290;
        inline constexpr uintptr_t UserId = 0x2C8;
    }

    namespace PlayerConfigurer {
        inline constexpr uintptr_t ForceNewAFKDuration = 0x1B8;
    }

    namespace Players {
        inline constexpr uintptr_t BanningEnabled = 0x14C;
        inline constexpr uintptr_t LocalPlayer = 0x130;
    }

    namespace Pointer {
        inline constexpr uintptr_t DataModelDeleterPointer = 0x7E35860;
        inline constexpr uintptr_t FFlagList = 0x7AD1BC8;
        inline constexpr uintptr_t FakeDataModelPointer = 0x7E35858;
        inline constexpr uintptr_t JobsPointer = 0x7EF3E20;
        inline constexpr uintptr_t MouseSensitivity = 0x7EBD660;
        inline constexpr uintptr_t PlayerConfigurer = 0x7E12FD8;
        inline constexpr uintptr_t TaskScheduler = 0x7EF3C48;
        inline constexpr uintptr_t VisualEnginePointer = 0x79E9468;
    }

    namespace Primitive {
        inline constexpr uintptr_t PrimitiveValidateValue = 0x6;
    }

    namespace ProximityPrompt {
        inline constexpr uintptr_t ActionText = 0xD0;
        inline constexpr uintptr_t Enabled = 0x156;
        inline constexpr uintptr_t GamepadKeyCode = 0x13C;
        inline constexpr uintptr_t HoldDuraction = 0x140;
        inline constexpr uintptr_t MaxActivationDistance = 0x148;
        inline constexpr uintptr_t MaxObjectText = 0xF0;
    }

    namespace RenderJob {
        inline constexpr uintptr_t DataModel = 0x1B0;
        inline constexpr uintptr_t FakeDataModel = 0x38;
        inline constexpr uintptr_t RenderView = 0x218;
    }

    namespace RenderView {
        inline constexpr uintptr_t VisualEngine = 0x10;
    }

    namespace RunService {
        inline constexpr uintptr_t HeartbeatJob = 0xF8;
        inline constexpr uintptr_t PhysicsJob = 0xE8;
    }

    namespace ScreenGui {
        inline constexpr uintptr_t Enabled = 0x644;
    }

    namespace Sky {
        inline constexpr uintptr_t MoonTextureId = 0xE0;
        inline constexpr uintptr_t SkyboxBk = 0x110;
        inline constexpr uintptr_t SkyboxDn = 0x140;
        inline constexpr uintptr_t SkyboxFt = 0x170;
        inline constexpr uintptr_t SkyboxLf = 0x1A0;
        inline constexpr uintptr_t SkyboxRt = 0x1D0;
        inline constexpr uintptr_t SkyboxUp = 0x200;
        inline constexpr uintptr_t StarCount = 0x260;
        inline constexpr uintptr_t SunTextureId = 0x230;
    }

    namespace Sound {
        inline constexpr uintptr_t SoundId = 0xE0;
    }

    namespace TaskScheduler {
        inline constexpr uintptr_t JobEnd = 0x1D8;
        inline constexpr uintptr_t JobStart = 0x1D0;
        inline constexpr uintptr_t TaskSchedulerMaxFPS = 0x1B0;
    }

    namespace Team {
        inline constexpr uintptr_t TeamColor = 0xD0;
    }

    namespace TextLabel {
        inline constexpr uintptr_t Text = 0xAA8;
        inline constexpr uintptr_t Visible = 0x5B1;
    }

    namespace Tool {
        inline constexpr uintptr_t GripPosition = 0x494;
    }

    namespace Value {
        inline constexpr uintptr_t Value = 0xD0;
    }

    namespace VisualEngine {
        inline constexpr uintptr_t Dimensions = 0x720;
        inline constexpr uintptr_t VisualEngineToDataModel1 = 0x700;
        inline constexpr uintptr_t VisualEngineToDataModel2 = 0x1C0;
        inline constexpr uintptr_t viewmatrix = 0x120;
    }

    namespace Workspace {
        inline constexpr uintptr_t Camera = 0x4A0;
        inline constexpr uintptr_t ReadOnlyGravity = 0xA28;
        inline constexpr uintptr_t World = 0x3D8;
    }

    namespace World {
        inline constexpr uintptr_t Gravity = 0x1D0; //  48 8B C4 48 89 48 ? 55 53 56 57 41 54 41 55 41 56 41 57 48 8D A8 ? ? ? ? 48 81 EC ? ? ? ? 0F 29 70 ? 0F 29 78 ? 44 0F 29 40 ? 4C 8B F1 0F B6 05 -> .text:0000000002383F4A ucomiss xmm0, dword ptr [rax+1D0h]  ✨
        inline constexpr uintptr_t PrimitiveList = 0x240; // 48 8B 0F 48 8B 01 45 33 C9 4C 8D 45 -> .text:0000000002574675 mov rax, [rsi+240h] ✨
    }

}
