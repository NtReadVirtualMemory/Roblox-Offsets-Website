⚠️ may not be up to date — functionality not guaranteed
ts_hash_enc = vmvalue1
closure_debugname_enc = vmvalue1
p_abslineinfo_enc = vmvalue1
p_upvalues_enc = vmvalue2
p_locvars_enc = vmvalue2
p_debugname_enc = vmvalue1
p_lineinfo_enc = vmvalue1

l_stacksize_enc = vmvalue2

p_debuginsn_enc = vmvalue4
p_source_enc = vmvalue4
p_userdata_enc = vmvalue4

p_typeinfo_enc = vmvalue3
closure_cont_enc = vmvalue3 
udata_metatable_enc = vmvalue3

structs
#define CommonHeader \
    uint8_t tt; uint8_t memcat; uint8_t marked
    
typedef struct Proto
{
    CommonHeader;

    uint8_t nups;
    uint8_t numparams;
    uint8_t maxstacksize;
    uint8_t flags;
    uint8_t is_vararg;
    TString* source;
    struct Proto** p;
    uint8_t* lineinfo;
    void* userdata;
    TString* debugname;
    uint8_t* typeinfo;
    GCObject* gclist;
    TValue* k;
    Instruction* code;
    TString** upvalues;
    const Instruction* codeentry;
    uint8_t* debuginsn;
    int* abslineinfo;

    void* execdata;
    uintptr_t exectarget;

    struct LocVar* locvars;
    int bytecodeid;
    int linegaplog2;
    int sizetypeinfo;
    int sizeupvalues;
    int sizelineinfo;
    int linedefined;
    int sizek;
    int sizep;
    int sizelocvars;
    int sizecode;
}

struct lua_Callbacks
{
    void* userdata;

    void (*debuginterrupt)(lua_State* L, lua_Debug* ar);
    void (*debugprotectederror)(lua_State* L);

    void (*debugbreak)(lua_State* L, lua_Debug* ar); // useless
    void (*panic)(lua_State* L, int errcode); // useless
    void (*debugstep)(lua_State* L, lua_Debug* ar); // useless

    void (*onallocate)(lua_State* L, size_t osize, size_t nsize);
    void (*interrupt)(lua_State* L, int gc);
    void (*userthread)(lua_State* LP, lua_State* L);
    int16_t(*useratom)(const char* s, size_t l);
};

typedef struct global_State
{
    stringtable strt;
    int gcstepsize;
    int gcstepmul;
    int gcgoal;
    GCObject* gray;
    GCObject* grayagain;
    GCObject* weak;
    lua_Alloc frealloc;
    void* ud;
    size_t GCthreshold;
    size_t totalbytes;
    uint8_t currentwhite;
    uint8_t gcstate;
    UpVal uvhead;
    struct lua_Page* freegcopages[LUA_SIZECLASSES];
    size_t memcatbytes[LUA_MEMORY_CATEGORIES];
    struct lua_Page* allgcopages;
    struct lua_Page* sweepgcopage;
    struct lua_Page* freepages[LUA_SIZECLASSES];
    struct lua_State* mainthread;
    uint8_t __padding_2[8];
    struct LuaTable* mt[LUA_T_COUNT];
    TString* ttname[LUA_T_COUNT];
    TString* tmname[TM_N];
    TValue pseudotemp;
    TValue registry;
    int registryfree;
    struct lua_jmpbuf* errorjmp;
    lua_Callbacks cb;
    uint64_t rngstate;
    uint64_t ptrenckey[4];
    lua_ExecutionCallbacks ecb;
    void (*udatagc[LUA_UTAG_LIMIT])(lua_State*, void*);
    LuaTable* udatamt[LUA_UTAG_LIMIT];
    TString* lightuserdataname[LUA_LUTAG_LIMIT];
    GCStats gcstats;
} global_State;

typedef struct Closure
{
    CommonHeader;

    uint8_t isC;
    uint8_t preload;
    uint8_t nupvalues;
    uint8_t stacksize;

    GCObject* gclist;
    struct LuaTable* env;

    union
    {
        struct
        {
            lua_CFunction f;
            const char* debugname;
            lua_Continuation cont;
            TValue upvals[1];
        } c;

        struct
        {
            struct Proto* p;
            TValue uprefs[1];
        } l;
    };
} Closure;

typedef struct LuaTable
{
    CommonHeader;
    uint8_t nodemask8;
    uint8_t safeenv;
    uint8_t readonly;
    uint8_t lsizenode;
    uint8_t tmcache;
    int sizearray;
    union
    {
        int aboundary;
        int lastfree;
    };
    LuaNode* node;
    GCObject* gclist;
    struct LuaTable* metatable;
    TValue* array;
} LuaTable;

typedef struct CallInfo
{
    StkId top;
    StkId func;
    const Instruction* savedpc;
    StkId base;
    int nresults;
    unsigned int flags;
} CallInfo;

typedef struct stringtable
{
    TString** hash;
    int size;
    uint32_t nuse;
} stringtable;

struct lua_State {
    CommonHeader;

    uint8_t status;
    uint8_t activememcat;
    bool isactive;
    bool singlestep;
    int stacksize;
    int size_ci;
    CallInfo* end_ci;
    CallInfo* base_ci;
    unsigned short nCcalls;
    unsigned short baseCcalls;
    int cachedslot;
    StkId top;
    CallInfo* ci;
    StkId stack_last;
    global_State* global;
    StkId stack;
    StkId base;
    TString* namecall;
    GCObject* gclist;
    void* userdata;
    LuaTable* gt;
    UpVal* openupval;
};
