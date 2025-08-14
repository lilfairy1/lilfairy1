# Ash Roads (UE5) — Pre-production Skeleton

This repo contains the initial Unreal Engine 5 code skeleton and docs for Ash Roads, an open-world action survival game.

## Requirements
- Unreal Engine 5.3 or newer (Nanite + Lumen enabled by default)
- Visual Studio 2022 (Windows) or Xcode 14+ (macOS) or Clang (Linux)
- .NET SDK for project file generation (platform-dependent)

## Getting Started
1. Open `unreal/AshRoads.uproject` in Unreal Engine.
2. If prompted, generate project files and build the C++ project.
3. Set `Sandbox` (placeholder) as default map once available.

## Module Structure
- `Source/AshRoads/` — primary game module (C++)
  - `Public/` — public headers
  - `Private/` — private implementation files
- `Config/` — engine/game configs
- `Content/` — assets (placeholder)
- `design/` — game design docs (GDD, technical specs)
- `production/` — roadmap, backlog, scope docs

## Notes
- Initial class stubs: GameMode, PlayerController, Character, Bike, Inventory, SkillTree, WorldState subsystem, AI.
- Chaos Vehicles, Enhanced Input, AI, Niagara modules configured in Build.cs.
- This is a pre-production skeleton intended for a vertical slice.