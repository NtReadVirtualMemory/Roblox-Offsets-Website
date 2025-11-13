uintptr_t VisualEngine = read<uintptr_t>(mem::BaseAddress + offsets::VisualEnginePointer);
uintptr_t DataModelPointer = read<uintptr_t>(VisualEngine + offsets::VisualEngineToDataModel1);
uintptr_t DataModel = read<uintptr_t>(DataModelPointer + offsets::VisualEngineToDataModel2);
// Wow this is so UD!
