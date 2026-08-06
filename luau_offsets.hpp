#pragma once

#include <cstddef>
#include <cstdint>

namespace rbx {

inline constexpr char build[] = "7330989";
inline constexpr char version[] = "0.733.0.7330989";
inline constexpr char platform[] = "darwin-ARM";
inline constexpr char sha256[] = "023659acbe36dec3b41503da5db5c37e70b995fbee1e2bf13f80893a0d3207cd";
inline constexpr char generated_from[] = "RobloxPlayer";
inline constexpr std::uintptr_t linked_image_base = 0x100000000;

namespace enc {
    inline constexpr int raw = 0, sub = 1, xor_ = 2, rsub = 3, add = 4;
}

namespace extra {
    inline constexpr std::size_t identity = 0x80;
    inline constexpr std::size_t asset_id = 0x88;
    inline constexpr std::size_t capabilities = 0x90;
}

enum class lua_type : std::int32_t {
    none = -1,
    nil = 0,
    boolean = 1,
    lightuserdata = 2,
    number = 3,
    integer = 4,
    vector = 5,
    string = 6,
    table = 7,
    function = 8,
    userdata = 9,
    thread = 10,
    buffer = 11,
    proto = 15,
    upval = 16,
};

enum class capability : std::uint64_t {
    plugin = 0x1,
    local_user = 0x2,
    write_player = 0x4,
    roblox_script = 0x8,
    roblox_engine = 0x10,
    not_accessible = 0x20,
    run_client_script = 0x100,
    run_server_script = 0x200,
    access_outside_write = 0x800,
    unassigned = 0x8000,
    load_unowned_asset = 0x10000,
    load_string = 0x20000,
    script_globals = 0x40000,
    create_instances = 0x80000,
    basic = 0x100000,
    audio = 0x200000,
    data_store = 0x400000,
    network = 0x800000,
    physics = 0x1000000,
    ui = 0x2000000,
    csg = 0x4000000,
    chat = 0x8000000,
    animation = 0x10000000,
    avatar_appearance = 0x20000000,
    input = 0x40000000,
    environment = 0x80000000,
    remote_event = 0x100000000,
    legacy_sound = 0x200000000,
    players = 0x400000000,
    capability_control = 0x800000000,
    asset_read = 0x1000000000,
    asset_management = 0x2000000000,
    dynamic_generation = 0x4000000000,
    platform_avatar_editing = 0x8000000000,
    asset_create_update = 0x10000000000,
    capture = 0x20000000000,
    sensitive_input = 0x40000000000,
    monetization = 0x80000000000,
    load_owned_asset = 0x100000000000,
    social = 0x200000000000,
    server_communication = 0x400000000000,
    logging = 0x800000000000,
    prompt_external_purchase = 0x1000000000000,
    groups = 0x2000000000000,
    teleport = 0x4000000000000,
    consequences = 0x8000000000000,
    material = 0x10000000000000,
    avatar_behavior = 0x20000000000000,
    internal_test = 0x1000000000000000,
    plugin_or_open_cloud = 0x2000000000000000,
    assistant = 0x4000000000000000,
    restricted = 0x8000000000000000,
};

inline constexpr std::uint64_t unsandboxed_capabilities = 0x003FFFFFFFFFFF00;
inline constexpr std::uint64_t full_capabilities = ~0ull;
inline constexpr std::uint64_t defined_capabilities = 0x003FFFFFFFFF8B00;

namespace lua_state {
    inline constexpr std::size_t tt = 0x0;
    inline constexpr std::size_t marked = 0x1;
    inline constexpr std::size_t memcat = 0x2;
    inline constexpr std::size_t status = 0x3;
    inline constexpr std::size_t singlestep = 0x4;
    inline constexpr std::size_t isactive = 0x5;
    inline constexpr std::size_t active_memcat = 0x6;
    inline constexpr std::size_t gt = 0x8;
    inline constexpr std::size_t end_ci = 0x10;
    inline constexpr std::size_t base_ci = 0x18;
    inline constexpr std::size_t userdata = 0x20;
    inline constexpr std::size_t ncalls = 0x30;
    inline constexpr std::size_t base_ncalls = 0x32;
    inline constexpr std::size_t gclist = 0x38;
    inline constexpr std::size_t openupval = 0x28;
    inline constexpr std::size_t size_ci = 0x44;
    inline constexpr std::size_t top = 0x48;
    inline constexpr std::size_t stack = 0x50;
    inline constexpr std::size_t ci = 0x58;
    inline constexpr std::size_t base = 0x60;
    inline constexpr std::size_t stack_last = 0x68;
    inline constexpr std::size_t global = 0x70;
    inline constexpr std::size_t size = 0x80;
}

namespace call_info {
    inline constexpr std::size_t top = 0x0;
    inline constexpr std::size_t base = 0x10;
    inline constexpr std::size_t func = 0x18;
    inline constexpr std::size_t savedpc = 0x20;
    inline constexpr std::size_t nresults = 0x28;
    inline constexpr std::size_t flags = 0x2c;
    inline constexpr std::size_t size = 0x30;
}

namespace tvalue {
    inline constexpr std::size_t tt = 0xc;
}

namespace security_context {
    inline constexpr std::size_t identity     = 0;
    inline constexpr std::size_t asset_id     = 1;
    inline constexpr std::size_t capabilities = 5;
    inline constexpr std::size_t resolver     = 6;
}

namespace closure {
    inline constexpr std::size_t is_c = 0x3;
    inline constexpr std::size_t stacksize = 0x4;
    inline constexpr std::size_t nupvalues = 0x5;
    inline constexpr std::size_t proto = 0x18;
    inline constexpr std::size_t fn = 0x18;
    inline constexpr std::size_t cont = 0x30;
    inline constexpr std::size_t debugname = 0x28;
    inline constexpr int debugname_scheme = enc::xor_;
    inline constexpr std::size_t upvals = 0x38;
    inline constexpr std::size_t env = 0x10;
    inline constexpr std::size_t lupvals = 0x20;
    inline constexpr int fn_scheme = enc::raw;
    inline constexpr int cont_scheme = enc::add;
}

namespace upval {
    inline constexpr std::size_t v = 0x8;
    inline constexpr std::size_t value = 0x10;
    inline constexpr std::size_t size = 0x28;
}

namespace udata {
    inline constexpr std::size_t tag = 0x3;
    inline constexpr std::size_t len = 0x4;
    inline constexpr std::size_t metatable = 0x8;
    inline constexpr std::size_t data = 0x10;
}

namespace tstring {
    inline constexpr std::size_t atom = 0x4;
    inline constexpr std::size_t hash = 0x10;
    inline constexpr std::size_t len = 0x14;
    inline constexpr std::size_t data = 0x18;
}

namespace luatable {
    inline constexpr std::size_t tt = 0x0;
    inline constexpr std::size_t marked = 0x1;
    inline constexpr std::size_t memcat = 0x2;
    inline constexpr std::size_t lsizenode = 0x4;
    inline constexpr std::size_t readonly = 0x5;
    inline constexpr std::size_t tmcache = 0x7;
    inline constexpr std::size_t sizearray = 0x8;
    inline constexpr std::size_t node = 0x10;
    inline constexpr std::size_t array = 0x18;
    inline constexpr std::size_t gclist = 0x20;
    inline constexpr std::size_t metatable = 0x28;
    inline constexpr std::size_t size = 0x30;
}

namespace proto {
    inline constexpr std::size_t tt = 0x0;
    inline constexpr std::size_t marked = 0x1;
    inline constexpr std::size_t memcat = 0x2;
    inline constexpr std::size_t is_vararg = 0x3;
    inline constexpr std::size_t numparams = 0x4;
    inline constexpr std::size_t nups = 0x5;
    inline constexpr std::size_t flags = 0x6;
    inline constexpr std::size_t maxstacksize = 0x7;
    inline constexpr std::size_t userdata = 0x8;
    inline constexpr std::size_t p = 0x18;
    inline constexpr int p_scheme = enc::raw;
    inline constexpr std::size_t upvalues = 0x20;
    inline constexpr int upvalues_scheme = enc::sub;
    inline constexpr std::size_t source = 0x28;
    inline constexpr int source_scheme = enc::add;
    inline constexpr std::size_t capabilities = 0x30;
    inline constexpr int capabilities_scheme = enc::sub;
    inline constexpr std::size_t codeentry = 0x38;
    inline constexpr std::size_t debuginsn = 0x40;
    inline constexpr int debuginsn_scheme = enc::add;
    inline constexpr std::size_t gclist = 0x48;
    inline constexpr std::size_t k = 0x50;
    inline constexpr std::size_t code = 0x58;
    inline constexpr std::size_t abslineinfo = 0x60;
    inline constexpr int abslineinfo_scheme = enc::xor_;
    inline constexpr std::size_t locvars = 0x68;
    inline constexpr int locvars_scheme = enc::add;
    inline constexpr std::size_t debugname = 0x70;
    inline constexpr int debugname_scheme = enc::sub;
    inline constexpr std::size_t typeinfo = 0x78;
    inline constexpr int typeinfo_scheme = enc::add;
    inline constexpr std::size_t lineinfo = 0x80;
    inline constexpr int lineinfo_scheme = enc::sub;
    inline constexpr std::size_t sizek = 0x8c;
    inline constexpr std::size_t sizelocvars = 0x94;
    inline constexpr std::size_t sizep = 0x98;
    inline constexpr std::size_t sizecode = 0x9c;
    inline constexpr std::size_t linegaplog2 = 0xa0;
    inline constexpr std::size_t sizelineinfo = 0xa4;
    inline constexpr std::size_t sizeupvalues = 0xa8;
    inline constexpr std::size_t sizetypeinfo = 0xac;
    inline constexpr std::size_t bytecode_capabilities = 0xd0;
    inline constexpr std::size_t size = 0xd8;
}

namespace global_state {
    inline constexpr std::size_t strt_hash = 0x0;
    inline constexpr std::size_t strt_size = 0x8;
    inline constexpr std::size_t strt_nuse = 0xc;
    inline constexpr std::size_t currentwhite = 0x10;
    inline constexpr std::uint8_t white_bits = 0x3;
    inline constexpr std::size_t gc_threshold = 0x50;
    inline constexpr std::size_t total_bytes = 0x58;
    inline constexpr std::size_t freepages = 0x1a8;
    inline constexpr std::size_t allpages = 0x320;
    inline constexpr std::size_t mt = 0x440;
}

namespace task_scheduler {
    inline constexpr std::size_t use_frame_time = 0x8;
    inline constexpr std::size_t frame_time = 0xb8;
    inline constexpr int max_target_fps = 240;
}

namespace page {
    inline constexpr std::size_t prev = 0x0;
    inline constexpr std::size_t next = 0x8;
    inline constexpr std::size_t page_size = 0x20;
    inline constexpr std::size_t block_size = 0x24;
    inline constexpr std::size_t free_list = 0x28;
    inline constexpr std::size_t free_next = 0x30;
    inline constexpr std::size_t busy_blocks = 0x34;
    inline constexpr std::size_t data = 0x40;
}

namespace instance_obj {
    inline constexpr std::size_t class_descriptor = 0x18;
    inline constexpr std::size_t parent = 0x68;
}

namespace class_descriptor {
    inline constexpr std::size_t member_map = 0x1d8;
}

namespace member_entry {
    inline constexpr std::size_t descriptor = 0x0;
    inline constexpr std::size_t kind = 0x8;
}

namespace member_kind {
    inline constexpr int property = 0;
    inline constexpr int event = 1;
    inline constexpr int function = 2;
    inline constexpr int yield_function = 3;
    inline constexpr int callback = 4;
}

namespace property_descriptor {
    inline constexpr std::size_t name = 0x8;
    inline constexpr std::size_t flags = 0x8b;
    inline constexpr std::uint16_t flag_scriptable = 0x10;
}

namespace layout {

template <std::size_t N>
inline constexpr bool distinct(const std::size_t (&v)[N]) noexcept {
    for (std::size_t i = 0; i < N; ++i)
        for (std::size_t j = i + 1; j < N; ++j)
            if (v[i] == v[j]) return false;
    return true;
}

inline constexpr std::size_t lua_state_fields[]{
    lua_state::marked, lua_state::tt, lua_state::memcat, lua_state::status,
    lua_state::singlestep, lua_state::active_memcat, lua_state::isactive,
    lua_state::ncalls, lua_state::base_ncalls, lua_state::gclist,
    lua_state::global, lua_state::top, lua_state::stack, lua_state::base,
    lua_state::ci, lua_state::stack_last, lua_state::end_ci, lua_state::base_ci,
    lua_state::openupval, lua_state::size_ci, lua_state::userdata, lua_state::gt,
};

inline constexpr std::size_t call_info_fields[]{
    call_info::base, call_info::func, call_info::top, call_info::savedpc,
    call_info::nresults, call_info::flags,
};

inline constexpr std::size_t proto_fields[]{
    proto::tt, proto::nups, proto::is_vararg, proto::numparams, proto::flags,
    proto::maxstacksize, proto::debugname, proto::lineinfo, proto::codeentry,
    proto::upvalues, proto::locvars, proto::k, proto::code, proto::source,
    proto::p, proto::abslineinfo, proto::debuginsn, proto::sizelineinfo,
    proto::sizep, proto::sizecode, proto::linegaplog2, proto::sizek,
    proto::sizelocvars, proto::sizeupvalues, proto::typeinfo,
    proto::sizetypeinfo, proto::capabilities, proto::bytecode_capabilities,
};

inline constexpr std::size_t luatable_fields[]{
    luatable::marked, luatable::tt, luatable::readonly, luatable::tmcache,
    luatable::metatable, luatable::node,
};

inline constexpr std::size_t udata_fields[]{
    udata::tag, udata::len, udata::metatable, udata::data,
};

inline constexpr std::size_t tstring_fields[]{
    tstring::atom, tstring::hash, tstring::len, tstring::data,
};

static_assert(distinct(lua_state_fields));
static_assert(distinct(call_info_fields));
static_assert(distinct(proto_fields));
static_assert(distinct(luatable_fields));
static_assert(distinct(udata_fields));
static_assert(distinct(tstring_fields));

static_assert(proto::capabilities + sizeof(std::uint64_t) <= proto::size);
static_assert(lua_state::gt + sizeof(void*) <= lua_state::size);
static_assert(lua_state::global + sizeof(void*) <= lua_state::size);

}

namespace rva {

namespace api {
    inline constexpr std::uintptr_t unresolved = 0;

    inline constexpr std::uintptr_t luaB_print = 0x18ab960;
    inline constexpr std::uintptr_t luaL_argerror = 0x18a9a28;
    inline constexpr std::uintptr_t luaL_checkany = 0x18aa15c;
    inline constexpr std::uintptr_t luaL_checkinteger = 0x18aa2f0;
    inline constexpr std::uintptr_t luaL_checktype = 0x18aa114;
    inline constexpr std::uintptr_t luaL_errorL = 0x18a9b5c;
    inline constexpr std::uintptr_t luaL_getmetafield = 0x18aa550;
    inline constexpr std::uintptr_t luaL_optinteger = 0x18aa380;
    inline constexpr std::uintptr_t luaL_register = 0x18aa650;
    inline constexpr std::uintptr_t luaL_tolstring = 0x18ab004;
    inline constexpr std::uintptr_t luaL_typeerrorL = 0x18a9ba8;
    inline constexpr std::uintptr_t lua_call = 0x18b4d4c;
    inline constexpr std::uintptr_t lua_createtable = 0x18a70bc;
    inline constexpr std::uintptr_t lua_error = 0x18a4894;
    inline constexpr std::uintptr_t lua_getfenv = 0x18a7424;
    inline constexpr std::uintptr_t lua_getfield = 0x18a6bd0;
    inline constexpr std::uintptr_t lua_getmetatable = 0x18a72d0;
    inline constexpr std::uintptr_t lua_getreadonly = 0x18a71fc;
    inline constexpr std::uintptr_t lua_gettop = 0x18a4c50;
    inline constexpr std::uintptr_t lua_insert = 0x18a4e38;
    inline constexpr std::uintptr_t lua_iscfunction = 0x18a51a8;
    inline constexpr std::uintptr_t lua_isnumber = 0x18a52a0;
    inline constexpr std::uintptr_t lua_newthread = 0x18a4b40;
    inline constexpr std::uintptr_t lua_newuserdatatagged = 0x18a86dc;
    inline constexpr std::uintptr_t lua_next = 0x18a8334;
    inline constexpr std::uintptr_t lua_objlen = 0x18a5d58;
    inline constexpr std::uintptr_t lua_pcall = 0x18a7cd4;
    inline constexpr std::uintptr_t lua_pushboolean = 0x18a697c;
    inline constexpr std::uintptr_t lua_pushcclosurek = 0x18a67e8;
    inline constexpr std::uintptr_t lua_pushinteger = 0x18a63e4;
    inline constexpr std::uintptr_t lua_pushlstring = 0x18a65f4;
    inline constexpr std::uintptr_t lua_pushnil = 0x18a62f4;
    inline constexpr std::uintptr_t lua_pushnumber = 0x18a6360;
    inline constexpr std::uintptr_t lua_pushstring = 0x18a66c0;
    inline constexpr std::uintptr_t lua_pushthread = 0x18a6a88;
    inline constexpr std::uintptr_t lua_pushvalue = 0x18a5030;
    inline constexpr std::uintptr_t lua_rawequal = 0x18a53ac;
    inline constexpr std::uintptr_t lua_rawget = 0x18a6e10;
    inline constexpr std::uintptr_t lua_rawset = 0x18a7794;
    inline constexpr std::uintptr_t lua_ref = unresolved;
    inline constexpr std::uintptr_t lua_replace = 0x18a4ef0;
    inline constexpr std::uintptr_t lua_setfenv = 0x18a7b58;
    inline constexpr std::uintptr_t lua_setfield = 0x18a75c4;
    inline constexpr std::uintptr_t lua_setmetatable = 0x18a7a4c;
    inline constexpr std::uintptr_t lua_setreadonly = 0x18a7188;
    inline constexpr std::uintptr_t luaF_newLclosure = 0x18b5a8c;
    inline constexpr std::uintptr_t lua_setsafeenv = 0x18a725c;
    inline constexpr std::uintptr_t lua_settop = 0x18a4c64;
    inline constexpr std::uintptr_t lua_setuserdatametamethods = unresolved;
    inline constexpr std::uintptr_t lua_toboolean = 0x18a5868;
    inline constexpr std::uintptr_t lua_tolstring = 0x18a5978;
    inline constexpr std::uintptr_t lua_touserdatatagged = unresolved;
    inline constexpr std::uintptr_t lua_type = 0x18a5110;
    inline constexpr std::uintptr_t lua_typename = 0x18a5184;
    inline constexpr std::uintptr_t lua_unref = unresolved;
    inline constexpr std::uintptr_t lua_xpush = 0x18a4a54;
}

namespace vm {
    inline constexpr std::uintptr_t luau_execute = 0x18cac7c;
    inline constexpr std::uintptr_t luaD_call = 0x188fe2c;
    inline constexpr std::uintptr_t luaD_pcall = 0x189076c;
    inline constexpr std::uintptr_t luaD_rawrunprotected = 0x188f8cc;
    inline constexpr std::uintptr_t lua_checkstack = 0x18a47d4;
    inline constexpr std::uintptr_t luau_load = 0x18c7258;
    inline constexpr std::uintptr_t luau_load_body = 0x18c7374;
    inline constexpr std::uintptr_t resume_prepare = 0x18901d4;
    inline constexpr std::uintptr_t lua_resume = 0x18b4e90;
    inline constexpr std::uintptr_t lua_yield = 0x18b53d8;
    inline constexpr std::uintptr_t lua_resumeerror = 0x18b51f4;
    inline constexpr std::uintptr_t luaH_new = 0x18c2e74;
    inline constexpr std::uintptr_t luaH_getn = 0x189ed58;
    inline constexpr std::uintptr_t luaH_next = 0x189dc68;
    inline constexpr std::uintptr_t luaS_newlstr = 0x18bf228;
    inline constexpr std::uintptr_t luaS_hash = 0x189a1a8;
    inline constexpr std::uintptr_t luaM_new = 0x18979f0;
    inline constexpr std::uintptr_t luaG_readonlyerror = 0x18b383c;
    inline constexpr std::uintptr_t luaF_newproto = 0x18b59d0;
    inline constexpr std::uintptr_t index2addr_pseudo = 0x18a9940;
    inline constexpr std::uintptr_t luau_precall = 0x18ae99c;
    inline constexpr std::uintptr_t luaC_barrierback = 0x18b72d0;
    inline constexpr std::uintptr_t luau_execute_fast = 0x18cf1f8;
    inline constexpr std::uintptr_t luau_execute_singlestep = 0x18cac90;
    inline constexpr std::uintptr_t opcode_decode_table = 0x5db5250;
    inline constexpr std::uintptr_t opcode_aux_table = 0x5db5350;
}

namespace engine {
    inline constexpr std::uintptr_t thread_capabilities = 0x2115a4;
    inline constexpr std::uintptr_t script_resume = 0x238490;
    inline constexpr std::uintptr_t lua_getthreaddata = 0x18a80e8;
    inline constexpr std::uintptr_t script_context_tls = 0x46a7b0;
    inline constexpr std::uintptr_t bytecode_validate = 0x19f064;
    inline constexpr std::uintptr_t version_string = 0x66d4970;
    inline constexpr std::uintptr_t task_scheduler_target_fps = 0x72f44c0;
    inline constexpr std::uintptr_t task_scheduler = 0x76172e0;
}

namespace instance {
    inline constexpr std::uintptr_t check = 0x16dcb4;
    inline constexpr std::uintptr_t push = 0x172bd4;
    inline constexpr std::uintptr_t register_ = 0x16e0b0;
    inline constexpr std::uintptr_t tag_global = 0x7228ac8;
    inline constexpr std::uintptr_t index = 0x16b514;
    inline constexpr std::uintptr_t namecall = 0x172484;
    inline constexpr std::uintptr_t newindex = 0x17219c;
    inline constexpr std::uintptr_t intern_name = 0x151046c;
    inline constexpr std::uintptr_t member_lookup = 0x181fac;
    inline constexpr std::uintptr_t member_dispatch = 0x16c8b0;
    inline constexpr std::uintptr_t callback_set = 0x52a6ae8;
}

namespace base {
    inline constexpr std::uintptr_t assert_ = 0x1816a38;
    inline constexpr std::uintptr_t error = 0x1816abc;
    inline constexpr std::uintptr_t gcinfo = 0x1816b2c;
    inline constexpr std::uintptr_t getfenv = 0x1816b64;
    inline constexpr std::uintptr_t getmetatable = 0x1816bc8;
    inline constexpr std::uintptr_t newproxy = 0x1816c20;
    inline constexpr std::uintptr_t next = 0x1816388;
    inline constexpr std::uintptr_t print = 0x1816cc8;
    inline constexpr std::uintptr_t rawequal = 0x1816d98;
    inline constexpr std::uintptr_t rawget = 0x1816de8;
    inline constexpr std::uintptr_t rawlen = 0x1816e94;
    inline constexpr std::uintptr_t rawset = 0x1816e38;
    inline constexpr std::uintptr_t select = 0x1816f14;
    inline constexpr std::uintptr_t setfenv = 0x1816fdc;
    inline constexpr std::uintptr_t setmetatable = 0x18170d0;
    inline constexpr std::uintptr_t tonumber = 0x18171a4;
    inline constexpr std::uintptr_t tostring = 0x18172d4;
    inline constexpr std::uintptr_t type = 0x181730c;
    inline constexpr std::uintptr_t typeof = 0x1817358;
}

namespace bit32 {
    inline constexpr std::uintptr_t arshift = 0x181756c;
    inline constexpr std::uintptr_t band = 0x18175f4;
    inline constexpr std::uintptr_t bnot = 0x1817624;
    inline constexpr std::uintptr_t bor = 0x1817658;
    inline constexpr std::uintptr_t btest = 0x1817738;
    inline constexpr std::uintptr_t bxor = 0x18176c8;
    inline constexpr std::uintptr_t byteswap = 0x1817a5c;
    inline constexpr std::uintptr_t countlz = 0x18179cc;
    inline constexpr std::uintptr_t countrz = 0x1817a14;
    inline constexpr std::uintptr_t extract = 0x181776c;
    inline constexpr std::uintptr_t lrotate = 0x18177d0;
    inline constexpr std::uintptr_t lshift = 0x1817820;
    inline constexpr std::uintptr_t replace = 0x1817884;
    inline constexpr std::uintptr_t rrotate = 0x1817910;
    inline constexpr std::uintptr_t rshift = 0x1817968;
}

namespace buffer {
    inline constexpr std::uintptr_t copy = 0x18189a4;
    inline constexpr std::uintptr_t create = 0x1817cd8;
    inline constexpr std::uintptr_t fill = 0x1818ae4;
    inline constexpr std::uintptr_t fromstring = 0x1817d44;
    inline constexpr std::uintptr_t len = 0x181895c;
    inline constexpr std::uintptr_t readbits = 0x1818bcc;
    inline constexpr std::uintptr_t readf32 = 0x1818148;
    inline constexpr std::uintptr_t readf64 = 0x18181dc;
    inline constexpr std::uintptr_t readi16 = 0x1817ef8;
    inline constexpr std::uintptr_t readi32 = 0x1818020;
    inline constexpr std::uintptr_t readi8 = 0x1817de0;
    inline constexpr std::uintptr_t readstring = 0x1818760;
    inline constexpr std::uintptr_t readu16 = 0x1817f8c;
    inline constexpr std::uintptr_t readu32 = 0x18180b4;
    inline constexpr std::uintptr_t readu8 = 0x1817e6c;
    inline constexpr std::uintptr_t tostring = 0x1817d98;
    inline constexpr std::uintptr_t writebits = 0x1818cfc;
    inline constexpr std::uintptr_t writef32 = 0x181861c;
    inline constexpr std::uintptr_t writef64 = 0x18186c0;
    inline constexpr std::uintptr_t writei16 = 0x181839c;
    inline constexpr std::uintptr_t writei32 = 0x18184dc;
    inline constexpr std::uintptr_t writei8 = 0x181826c;
    inline constexpr std::uintptr_t writestring = 0x1818838;
    inline constexpr std::uintptr_t writeu16 = 0x181843c;
    inline constexpr std::uintptr_t writeu32 = 0x181857c;
    inline constexpr std::uintptr_t writeu8 = 0x1818304;
}

namespace coroutine {
    inline constexpr std::uintptr_t close = 0x181d240;
    inline constexpr std::uintptr_t create = 0x181d0c4;
    inline constexpr std::uintptr_t isyieldable = 0x181d210;
    inline constexpr std::uintptr_t running = 0x181d108;
    inline constexpr std::uintptr_t status = 0x181d138;
    inline constexpr std::uintptr_t wrap = 0x181d1b8;
    inline constexpr std::uintptr_t yield = 0x181d1fc;
}

namespace integer {
    inline constexpr std::uintptr_t add = 0x18251f0;
    inline constexpr std::uintptr_t arshift = 0x1825c7c;
    inline constexpr std::uintptr_t band = 0x18257f8;
    inline constexpr std::uintptr_t bnot = 0x18258d8;
    inline constexpr std::uintptr_t bor = 0x1825868;
    inline constexpr std::uintptr_t bswap = 0x18260bc;
    inline constexpr std::uintptr_t btest = 0x1825fdc;
    inline constexpr std::uintptr_t bxor = 0x182590c;
    inline constexpr std::uintptr_t clamp = 0x1825754;
    inline constexpr std::uintptr_t countlz = 0x1826088;
    inline constexpr std::uintptr_t countrz = 0x1826050;
    inline constexpr std::uintptr_t create = 0x1825120;
    inline constexpr std::uintptr_t div = 0x18252bc;
    inline constexpr std::uintptr_t extract = 0x1825d98;
    inline constexpr std::uintptr_t fromstring = 0x18260f0;
    inline constexpr std::uintptr_t ge = 0x1825ae4;
    inline constexpr std::uintptr_t gt = 0x1825a9c;
    inline constexpr std::uintptr_t idiv = 0x18254f4;
    inline constexpr std::uintptr_t le = 0x18259c4;
    inline constexpr std::uintptr_t lrotate = 0x1825ce8;
    inline constexpr std::uintptr_t lshift = 0x1825bbc;
    inline constexpr std::uintptr_t lt = 0x182597c;
    inline constexpr std::uintptr_t max = 0x18253e4;
    inline constexpr std::uintptr_t min = 0x182536c;
    inline constexpr std::uintptr_t mod = 0x18256ac;
    inline constexpr std::uintptr_t mul = 0x1825278;
    inline constexpr std::uintptr_t neg = 0x18251bc;
    inline constexpr std::uintptr_t rem = 0x182545c;
    inline constexpr std::uintptr_t replace = 0x1825eac;
    inline constexpr std::uintptr_t rrotate = 0x1825d40;
    inline constexpr std::uintptr_t rshift = 0x1825c1c;
    inline constexpr std::uintptr_t sub = 0x1825234;
    inline constexpr std::uintptr_t tonumber = 0x1825188;
    inline constexpr std::uintptr_t udiv = 0x18255b8;
    inline constexpr std::uintptr_t uge = 0x1825b74;
    inline constexpr std::uintptr_t ugt = 0x1825b2c;
    inline constexpr std::uintptr_t ule = 0x1825a54;
    inline constexpr std::uintptr_t ult = 0x1825a0c;
    inline constexpr std::uintptr_t urem = 0x1825630;
}

namespace math {
    inline constexpr std::uintptr_t abs = 0x1826348;
    inline constexpr std::uintptr_t acos = 0x182637c;
    inline constexpr std::uintptr_t asin = 0x18263b0;
    inline constexpr std::uintptr_t atan = 0x1826438;
    inline constexpr std::uintptr_t atan2 = 0x18263e4;
    inline constexpr std::uintptr_t ceil = 0x182646c;
    inline constexpr std::uintptr_t clamp = 0x1827110;
    inline constexpr std::uintptr_t cos = 0x18264d4;
    inline constexpr std::uintptr_t cosh = 0x18264a0;
    inline constexpr std::uintptr_t deg = 0x1826508;
    inline constexpr std::uintptr_t exp = 0x1826544;
    inline constexpr std::uintptr_t floor = 0x1826578;
    inline constexpr std::uintptr_t fmod = 0x18265ac;
    inline constexpr std::uintptr_t frexp = 0x1826600;
    inline constexpr std::uintptr_t isfinite = 0x18273b4;
    inline constexpr std::uintptr_t isinf = 0x1827370;
    inline constexpr std::uintptr_t isnan = 0x1827338;
    inline constexpr std::uintptr_t ldexp = 0x182664c;
    inline constexpr std::uintptr_t lerp = 0x18272c8;
    inline constexpr std::uintptr_t log = 0x18266d0;
    inline constexpr std::uintptr_t log10 = 0x182669c;
    inline constexpr std::uintptr_t map = 0x1827230;
    inline constexpr std::uintptr_t max = 0x1826784;
    inline constexpr std::uintptr_t min = 0x1826808;
    inline constexpr std::uintptr_t modf = 0x182688c;
    inline constexpr std::uintptr_t noise = 0x1826cfc;
    inline constexpr std::uintptr_t pow = 0x18268e8;
    inline constexpr std::uintptr_t rad = 0x182693c;
    inline constexpr std::uintptr_t random = 0x1826978;
    inline constexpr std::uintptr_t randomseed = 0x1826ba0;
    inline constexpr std::uintptr_t round = 0x18271fc;
    inline constexpr std::uintptr_t sign = 0x18271b4;
    inline constexpr std::uintptr_t sin = 0x1826c2c;
    inline constexpr std::uintptr_t sinh = 0x1826bf8;
    inline constexpr std::uintptr_t sqrt = 0x1826c60;
    inline constexpr std::uintptr_t tan = 0x1826cc8;
    inline constexpr std::uintptr_t tanh = 0x1826c94;
}

namespace os {
    inline constexpr std::uintptr_t clock = 0x1828c88;
    inline constexpr std::uintptr_t date = 0x1828cb4;
    inline constexpr std::uintptr_t difftime = 0x1829014;
    inline constexpr std::uintptr_t time = 0x1829064;
}

namespace string {
    inline constexpr std::uintptr_t byte = 0x182a3b8;
    inline constexpr std::uintptr_t char_ = 0x182a4d4;
    inline constexpr std::uintptr_t find = 0x182a5c4;
    inline constexpr std::uintptr_t format = 0x182a5cc;
    inline constexpr std::uintptr_t gmatch = 0x182acc4;
    inline constexpr std::uintptr_t gsub = 0x182ad34;
    inline constexpr std::uintptr_t len = 0x182b180;
    inline constexpr std::uintptr_t lower = 0x182b1c0;
    inline constexpr std::uintptr_t match = 0x182b278;
    inline constexpr std::uintptr_t pack = 0x182b738;
    inline constexpr std::uintptr_t packsize = 0x182bbe0;
    inline constexpr std::uintptr_t rep = 0x182b280;
    inline constexpr std::uintptr_t reverse = 0x182b3dc;
    inline constexpr std::uintptr_t split = 0x182b600;
    inline constexpr std::uintptr_t sub = 0x182b484;
    inline constexpr std::uintptr_t unpack = 0x182bcf0;
    inline constexpr std::uintptr_t upper = 0x182b548;
}

namespace table {
    inline constexpr std::uintptr_t clear = 0x182fc08;
    inline constexpr std::uintptr_t clone = 0x182fd64;
    inline constexpr std::uintptr_t concat = 0x182f1f8;
    inline constexpr std::uintptr_t create = 0x182fa40;
    inline constexpr std::uintptr_t find = 0x182fb04;
    inline constexpr std::uintptr_t foreach = 0x182f340;
    inline constexpr std::uintptr_t foreachi = 0x182f3f0;
    inline constexpr std::uintptr_t freeze = 0x182fc50;
    inline constexpr std::uintptr_t getn = 0x182f4b8;
    inline constexpr std::uintptr_t insert = 0x182f5cc;
    inline constexpr std::uintptr_t isfrozen = 0x182fd20;
    inline constexpr std::uintptr_t maxn = 0x182f4fc;
    inline constexpr std::uintptr_t move = 0x182f8bc;
    inline constexpr std::uintptr_t pack = 0x182f814;
    inline constexpr std::uintptr_t remove = 0x182f6a8;
    inline constexpr std::uintptr_t sort = 0x182f758;
    inline constexpr std::uintptr_t unpack = 0x182f090;
}

namespace utf8 {
    inline constexpr std::uintptr_t char_ = 0x1830e94;
    inline constexpr std::uintptr_t codepoint = 0x1830d00;
    inline constexpr std::uintptr_t codes = 0x18310e4;
    inline constexpr std::uintptr_t len = 0x1830f78;
    inline constexpr std::uintptr_t offset = 0x1830b18;
}

namespace vector {
    inline constexpr std::uintptr_t abs = 0x1831898;
    inline constexpr std::uintptr_t angle = 0x1831708;
    inline constexpr std::uintptr_t ceil = 0x1831854;
    inline constexpr std::uintptr_t clamp = 0x1831944;
    inline constexpr std::uintptr_t create = 0x18314f8;
    inline constexpr std::uintptr_t cross = 0x183162c;
    inline constexpr std::uintptr_t dot = 0x18316a0;
    inline constexpr std::uintptr_t floor = 0x1831810;
    inline constexpr std::uintptr_t lerp = 0x1831bd8;
    inline constexpr std::uintptr_t magnitude = 0x1831574;
    inline constexpr std::uintptr_t max = 0x1831a80;
    inline constexpr std::uintptr_t min = 0x1831b2c;
    inline constexpr std::uintptr_t normalize = 0x18315c8;
    inline constexpr std::uintptr_t sign = 0x18318dc;
}

}

inline std::uintptr_t resolve(std::uintptr_t slide, std::uintptr_t offset) noexcept {
    return slide + linked_image_base + offset;
}

inline std::uintptr_t decode_cont(const std::uintptr_t* field) noexcept {
    return *field ^ reinterpret_cast<std::uintptr_t>(field);
}

inline std::uintptr_t encode_cont(const std::uintptr_t* field, std::uintptr_t fn) noexcept {
    return fn ^ reinterpret_cast<std::uintptr_t>(field);
}

inline const char* decode_debugname(const std::intptr_t* field) noexcept {
    return reinterpret_cast<const char*>(*field + reinterpret_cast<std::intptr_t>(field));
}

inline std::intptr_t decode_value_minus_field_address(const std::intptr_t* field) noexcept {
    return *field + reinterpret_cast<std::intptr_t>(field);
}

inline std::intptr_t decode_field_address_minus_value(const std::intptr_t* field) noexcept {
    return reinterpret_cast<std::intptr_t>(field) - *field;
}

inline std::intptr_t decode_value_plus_field_address(const std::intptr_t* field) noexcept {
    return *field - reinterpret_cast<std::intptr_t>(field);
}

inline bool encoded_field_is_null(const std::intptr_t* field) noexcept {
    return *field == reinterpret_cast<std::intptr_t>(field);
}

}
