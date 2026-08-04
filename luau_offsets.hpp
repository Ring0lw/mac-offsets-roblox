#pragma once

#include <cstddef>
#include <cstdint>

namespace rbx {

inline constexpr char build[] = "7310942";
inline constexpr char platform[] = "darwin-ARM";
inline constexpr char sha256[] = "981b65d66fc0c23c6119f1723b910de54a798ca18b1f270a0f53ed0dd122b3ed";
inline constexpr char generated_from[] = "RobloxPlayer";
inline constexpr std::uintptr_t linked_image_base = 0x100000000;

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
inline constexpr std::uint64_t defined_capabilities = 0x003FFFFFFFFF8B00;

namespace lua_state {
    inline constexpr std::size_t marked = 0x1;
    inline constexpr std::size_t status = 0x3;
    inline constexpr std::size_t singlestep = 0x5;
    inline constexpr std::size_t isactive = 0x6;
    inline constexpr std::size_t gclist = 0x8;
    inline constexpr std::size_t gt = 0x10;
    inline constexpr std::size_t stacksize_encoded = 0x20;
    inline constexpr std::size_t userdata = 0x28;
    inline constexpr std::size_t end_ci = 0x30;
    inline constexpr std::size_t base_ci = 0x38;
    inline constexpr std::size_t stack_last = 0x40;
    inline constexpr std::size_t ci = 0x48;
    inline constexpr std::size_t top = 0x50;
    inline constexpr std::size_t stack = 0x58;
    inline constexpr std::size_t global = 0x60;
    inline constexpr std::size_t base = 0x68;
    inline constexpr std::size_t ncalls = 0x78;
}

namespace call_info {
    inline constexpr std::size_t top = 0x0;
    inline constexpr std::size_t func = 0x8;
    inline constexpr std::size_t cached = 0x10;
    inline constexpr std::size_t base = 0x18;
    inline constexpr std::size_t savedpc = 0x20;
    inline constexpr std::size_t nresults = 0x28;
    inline constexpr std::size_t flags = 0x2c;
    inline constexpr std::size_t size = 0x30;
}

namespace tvalue {
    inline constexpr std::size_t tt = 0xc;
}

namespace closure {
    inline constexpr std::size_t nupvalues = 0x5;
    inline constexpr std::size_t proto = 0x18;
    inline constexpr std::size_t fn = 0x18;
    inline constexpr std::size_t cont = 0x20;
    inline constexpr std::size_t debugname = 0x28;
    inline constexpr std::size_t upvals = 0x30;
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
    inline constexpr std::size_t readonly = 0x6;
    inline constexpr std::size_t sizearray = 0x8;
    inline constexpr std::size_t aboundary = 0xc;
    inline constexpr std::size_t array = 0x18;
    inline constexpr std::size_t metatable = 0x20;
    inline constexpr std::size_t node = 0x28;
    inline constexpr std::size_t size = 0x30;
}

namespace proto {
    inline constexpr std::size_t maxstacksize = 0x4;
    inline constexpr std::size_t numparams = 0x6;
    inline constexpr std::size_t is_vararg = 0x7;
    inline constexpr std::size_t k = 0x20;
    inline constexpr std::size_t code = 0x28;
    inline constexpr std::size_t capabilities = 0x48;
    inline constexpr std::size_t execdata = 0x68;
    inline constexpr std::size_t nativeentry = 0x70;
    inline constexpr std::size_t size = 0xd8;
}

namespace global_state {
    inline constexpr std::size_t strt_size = 0x8;
    inline constexpr std::size_t gc_threshold = 0x10;
    inline constexpr std::size_t total_bytes = 0x18;
    inline constexpr std::size_t mainthread = 0x1a0;
    inline constexpr std::size_t mt = 0x328;
    inline constexpr std::size_t scratch = 0x4b0;
    inline constexpr std::size_t registry = 0x4c0;
    inline constexpr std::size_t ref_freelist = 0x4d0;
}

namespace extra_space {
    inline constexpr std::size_t capabilities = 0x40;
}

namespace rva {

namespace api {
    inline constexpr std::uintptr_t luaB_print = 0x1816cc8;
    inline constexpr std::uintptr_t luaL_argerror = 0x18149b8;
    inline constexpr std::uintptr_t luaL_checkany = 0x18150b8;
    inline constexpr std::uintptr_t luaL_checkinteger = 0x181524c;
    inline constexpr std::uintptr_t luaL_checktype = 0x1815070;
    inline constexpr std::uintptr_t luaL_errorL = 0x1814ab8;
    inline constexpr std::uintptr_t luaL_getmetafield = 0x18154ac;
    inline constexpr std::uintptr_t luaL_optinteger = 0x18152dc;
    inline constexpr std::uintptr_t luaL_register = 0x18155ac;
    inline constexpr std::uintptr_t luaL_tolstring = 0x18160f4;
    inline constexpr std::uintptr_t luaL_typeerrorL = 0x1814b04;
    inline constexpr std::uintptr_t lua_call = 0x181fc08;
    inline constexpr std::uintptr_t lua_createtable = 0x1812198;
    inline constexpr std::uintptr_t lua_error = 0x180f8bc;
    inline constexpr std::uintptr_t lua_getfenv = 0x1812518;
    inline constexpr std::uintptr_t lua_getmetatable = 0x18123b8;
    inline constexpr std::uintptr_t lua_getreadonly = 0x18122e4;
    inline constexpr std::uintptr_t lua_gettop = 0x180fcac;
    inline constexpr std::uintptr_t lua_insert = 0x180fea8;
    inline constexpr std::uintptr_t lua_iscfunction = 0x1810220;
    inline constexpr std::uintptr_t lua_isnumber = 0x1810318;
    inline constexpr std::uintptr_t lua_newthread = 0x180fb90;
    inline constexpr std::uintptr_t lua_newuserdatatagged = 0x1813660;
    inline constexpr std::uintptr_t lua_next = 0x1813294;
    inline constexpr std::uintptr_t lua_objlen = 0x1810dd0;
    inline constexpr std::uintptr_t lua_pcall = 0x1812dbc;
    inline constexpr std::uintptr_t lua_pushboolean = 0x1811a04;
    inline constexpr std::uintptr_t lua_pushcclosurek = 0x18118b4;
    inline constexpr std::uintptr_t lua_pushinteger = 0x1811474;
    inline constexpr std::uintptr_t lua_pushlstring = 0x18116b4;
    inline constexpr std::uintptr_t lua_pushnil = 0x181136c;
    inline constexpr std::uintptr_t lua_pushstring = 0x181178c;
    inline constexpr std::uintptr_t lua_pushthread = 0x1811b28;
    inline constexpr std::uintptr_t lua_pushvalue = 0x181009c;
    inline constexpr std::uintptr_t lua_rawget = 0x1811ed4;
    inline constexpr std::uintptr_t lua_rawset = 0x1812884;
    inline constexpr std::uintptr_t lua_ref = 0x1813cd4;
    inline constexpr std::uintptr_t lua_setfenv = 0x1812c48;
    inline constexpr std::uintptr_t lua_setmetatable = 0x1812b3c;
    inline constexpr std::uintptr_t lua_setreadonly = 0x1812270;
    inline constexpr std::uintptr_t lua_setsafeenv = 0x1812344;
    inline constexpr std::uintptr_t lua_settop = 0x180fcc0;
    inline constexpr std::uintptr_t lua_setuserdatametamethods = 0x18142e0;
    inline constexpr std::uintptr_t lua_tolstring = 0x18109f0;
    inline constexpr std::uintptr_t lua_touserdatatagged = 0x1811074;
    inline constexpr std::uintptr_t lua_type = 0x1810188;
    inline constexpr std::uintptr_t lua_typename = 0x18101fc;
    inline constexpr std::uintptr_t lua_unref = 0x1813f50;
    inline constexpr std::uintptr_t lua_xpush = 0x180fa98;
}

namespace vm {
    inline constexpr std::uintptr_t luau_execute = 0x18358e0;
    inline constexpr std::uintptr_t luaD_call = 0x181fa08;
    inline constexpr std::uintptr_t luaD_pcall = 0x18203f4;
    inline constexpr std::uintptr_t luaD_rawrunprotected = 0x181f4a8;
    inline constexpr std::uintptr_t luaD_growstack = 0x180f7fc;
    inline constexpr std::uintptr_t luau_load = 0x1831fbc;
    inline constexpr std::uintptr_t resume_prepare = 0x181fdac;
    inline constexpr std::uintptr_t lua_resume = 0x181fd44;
    inline constexpr std::uintptr_t lua_resumeerror = 0x18200c0;
    inline constexpr std::uintptr_t luaH_new = 0x182dd90;
    inline constexpr std::uintptr_t luaH_getn = 0x182e978;
    inline constexpr std::uintptr_t luaH_next = 0x182d87c;
    inline constexpr std::uintptr_t luaS_newlstr = 0x182a094;
    inline constexpr std::uintptr_t luaS_hash = 0x1829d98;
    inline constexpr std::uintptr_t luaM_new = 0x18275dc;
    inline constexpr std::uintptr_t luaG_readonlyerror = 0x181e6d8;
    inline constexpr std::uintptr_t luaF_newproto = 0x1820954;
    inline constexpr std::uintptr_t index2addr_pseudo = 0x18148bc;
    inline constexpr std::uintptr_t luau_precall = 0x183e468;
    inline constexpr std::uintptr_t luaC_barrierback = 0x1822240;
    inline constexpr std::uintptr_t luau_execute_fast = 0x1839e38;
    inline constexpr std::uintptr_t luau_execute_singlestep = 0x18358f4;
}

namespace engine {
    inline constexpr std::uintptr_t capability_name_func = 0x45b468;
    inline constexpr std::uintptr_t thread_capabilities = 0x215588;
    inline constexpr std::uintptr_t script_resume = 0x22c098;
    inline constexpr std::uintptr_t lua_getthreaddata = 0x1813048;
}

namespace instance {
    inline constexpr std::uintptr_t check = 0x16dcb4;
    inline constexpr std::uintptr_t push = 0x172bd4;
    inline constexpr std::uintptr_t register_ = 0x16e0b0;
    inline constexpr std::uintptr_t tag_global = 0x7228ac8;
    inline constexpr std::uintptr_t index = 0x171634;
    inline constexpr std::uintptr_t namecall = 0x172484;
    inline constexpr std::uintptr_t newindex = 0x17219c;
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
