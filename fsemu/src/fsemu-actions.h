#ifndef FSEMU_ACTIONS_H_
#define FSEMU_ACTIONS_H_

#include <stdint.h>

#include "fsemu-action.h"

#ifdef __cplusplus
extern "C" {
#endif

#define FSEMU_ACTION_NONE 0x0000
// #define FSEMU_ACTION_OSKEYBOARD 0x0001
// #define FSEMU_ACTION_OSMENU 0x0002

// ----------------------------------------------------------------------------

enum {
    FSEMU_ACTION_BEFORE_FIRST_SOMETHING = 0x0A00 | FSEMU_ACTION_NONEMU_FLAG,

    FSEMU_ACTION_OSKEYBOARD,
    FSEMU_ACTION_OSMENU,

    FSEMU_ACTION_QUIT,
};

enum {
    FSEMU_ACTION_BEFORE_FIRST_COMMAND =
        0x0C00 | FSEMU_ACTION_NONEMU_FLAG | FSEMU_ACTION_COMMAND_FLAG,
    // FSEMU_ACTION_TOGGLE_PAUSE, // TOGGLEPAUSE
    // FSEMU_ACTION_NOPAUSE,

    FSEMU_ACTION_PAUSE,
    FSEMU_ACTION_PAUSE_ENABLE,
    FSEMU_ACTION_PAUSE_DISABLE,
    FSEMU_ACTION_PAUSE_TOGGLE,

    FSEMU_ACTION_WARP,
    FSEMU_ACTION_WARP_ENABLE,
    FSEMU_ACTION_WARP_DISABLE,
    FSEMU_ACTION_WARP_TOGGLE,

    FSEMU_ACTION_LOADSTATE0,
    FSEMU_ACTION_LOADSTATE1,
    FSEMU_ACTION_LOADSTATE2,
    FSEMU_ACTION_LOADSTATE3,
    FSEMU_ACTION_LOADSTATE4,
    FSEMU_ACTION_LOADSTATE5,
    FSEMU_ACTION_LOADSTATE6,
    FSEMU_ACTION_LOADSTATE7,
    FSEMU_ACTION_LOADSTATE8,
    FSEMU_ACTION_LOADSTATE9,

    FSEMU_ACTION_SAVESTATE0,
    FSEMU_ACTION_SAVESTATE1,
    FSEMU_ACTION_SAVESTATE2,
    FSEMU_ACTION_SAVESTATE3,
    FSEMU_ACTION_SAVESTATE4,
    FSEMU_ACTION_SAVESTATE5,
    FSEMU_ACTION_SAVESTATE6,
    FSEMU_ACTION_SAVESTATE7,
    FSEMU_ACTION_SAVESTATE8,
    FSEMU_ACTION_SAVESTATE9,
};

enum {
    FSEMU_ACTION_BEFORE_FIRST_EMU = 0x0800,  // EMU ACTIONS

    FSEMU_ACTION_SOFTRESET,
    FSEMU_ACTION_HARDRESET,

    FSEMU_ACTION_DRIVE0EJECT,
    FSEMU_ACTION_DRIVE1EJECT,
    FSEMU_ACTION_DRIVE2EJECT,
    FSEMU_ACTION_DRIVE3EJECT,
    FSEMU_ACTION_DRIVE4EJECT,
    FSEMU_ACTION_DRIVE5EJECT,
    FSEMU_ACTION_DRIVE6EJECT,
    FSEMU_ACTION_DRIVE7EJECT,
    FSEMU_ACTION_DRIVE8EJECT,
    FSEMU_ACTION_DRIVE9EJECT,

    FSEMU_ACTION_DRIVE0INSERT0,
    FSEMU_ACTION_DRIVE0INSERT1,
    FSEMU_ACTION_DRIVE0INSERT2,
    FSEMU_ACTION_DRIVE0INSERT3,
    FSEMU_ACTION_DRIVE0INSERT4,
    FSEMU_ACTION_DRIVE0INSERT5,
    FSEMU_ACTION_DRIVE0INSERT6,
    FSEMU_ACTION_DRIVE0INSERT7,
    FSEMU_ACTION_DRIVE0INSERT8,
    FSEMU_ACTION_DRIVE0INSERT9,
    FSEMU_ACTION_DRIVE0INSERT10,
    FSEMU_ACTION_DRIVE0INSERT11,
    FSEMU_ACTION_DRIVE0INSERT12,
    FSEMU_ACTION_DRIVE0INSERT13,
    FSEMU_ACTION_DRIVE0INSERT14,
    FSEMU_ACTION_DRIVE0INSERT15,
    FSEMU_ACTION_DRIVE0INSERT16,
    FSEMU_ACTION_DRIVE0INSERT17,
    FSEMU_ACTION_DRIVE0INSERT18,
    FSEMU_ACTION_DRIVE0INSERT19,

    FSEMU_ACTION_DRIVE1INSERT0,
    FSEMU_ACTION_DRIVE1INSERT1,
    FSEMU_ACTION_DRIVE1INSERT2,
    FSEMU_ACTION_DRIVE1INSERT3,
    FSEMU_ACTION_DRIVE1INSERT4,
    FSEMU_ACTION_DRIVE1INSERT5,
    FSEMU_ACTION_DRIVE1INSERT6,
    FSEMU_ACTION_DRIVE1INSERT7,
    FSEMU_ACTION_DRIVE1INSERT8,
    FSEMU_ACTION_DRIVE1INSERT9,
    FSEMU_ACTION_DRIVE1INSERT10,
    FSEMU_ACTION_DRIVE1INSERT11,
    FSEMU_ACTION_DRIVE1INSERT12,
    FSEMU_ACTION_DRIVE1INSERT13,
    FSEMU_ACTION_DRIVE1INSERT14,
    FSEMU_ACTION_DRIVE1INSERT15,
    FSEMU_ACTION_DRIVE1INSERT16,
    FSEMU_ACTION_DRIVE1INSERT17,
    FSEMU_ACTION_DRIVE1INSERT18,
    FSEMU_ACTION_DRIVE1INSERT19,

    FSEMU_ACTION_DRIVE2INSERT0,
    FSEMU_ACTION_DRIVE2INSERT1,
    FSEMU_ACTION_DRIVE2INSERT2,
    FSEMU_ACTION_DRIVE2INSERT3,
    FSEMU_ACTION_DRIVE2INSERT4,
    FSEMU_ACTION_DRIVE2INSERT5,
    FSEMU_ACTION_DRIVE2INSERT6,
    FSEMU_ACTION_DRIVE2INSERT7,
    FSEMU_ACTION_DRIVE2INSERT8,
    FSEMU_ACTION_DRIVE2INSERT9,
    FSEMU_ACTION_DRIVE2INSERT10,
    FSEMU_ACTION_DRIVE2INSERT11,
    FSEMU_ACTION_DRIVE2INSERT12,
    FSEMU_ACTION_DRIVE2INSERT13,
    FSEMU_ACTION_DRIVE2INSERT14,
    FSEMU_ACTION_DRIVE2INSERT15,
    FSEMU_ACTION_DRIVE2INSERT16,
    FSEMU_ACTION_DRIVE2INSERT17,
    FSEMU_ACTION_DRIVE2INSERT18,
    FSEMU_ACTION_DRIVE2INSERT19,

    FSEMU_ACTION_DRIVE3INSERT0,
    FSEMU_ACTION_DRIVE3INSERT1,
    FSEMU_ACTION_DRIVE3INSERT2,
    FSEMU_ACTION_DRIVE3INSERT3,
    FSEMU_ACTION_DRIVE3INSERT4,
    FSEMU_ACTION_DRIVE3INSERT5,
    FSEMU_ACTION_DRIVE3INSERT6,
    FSEMU_ACTION_DRIVE3INSERT7,
    FSEMU_ACTION_DRIVE3INSERT8,
    FSEMU_ACTION_DRIVE3INSERT9,
    FSEMU_ACTION_DRIVE3INSERT10,
    FSEMU_ACTION_DRIVE3INSERT11,
    FSEMU_ACTION_DRIVE3INSERT12,
    FSEMU_ACTION_DRIVE3INSERT13,
    FSEMU_ACTION_DRIVE3INSERT14,
    FSEMU_ACTION_DRIVE3INSERT15,
    FSEMU_ACTION_DRIVE3INSERT16,
    FSEMU_ACTION_DRIVE3INSERT17,
    FSEMU_ACTION_DRIVE3INSERT18,
    FSEMU_ACTION_DRIVE3INSERT19,

    FSEMU_ACTION_DRIVE4INSERT0,
    FSEMU_ACTION_DRIVE4INSERT1,
    FSEMU_ACTION_DRIVE4INSERT2,
    FSEMU_ACTION_DRIVE4INSERT3,
    FSEMU_ACTION_DRIVE4INSERT4,
    FSEMU_ACTION_DRIVE4INSERT5,
    FSEMU_ACTION_DRIVE4INSERT6,
    FSEMU_ACTION_DRIVE4INSERT7,
    FSEMU_ACTION_DRIVE4INSERT8,
    FSEMU_ACTION_DRIVE4INSERT9,
    FSEMU_ACTION_DRIVE4INSERT10,
    FSEMU_ACTION_DRIVE4INSERT11,
    FSEMU_ACTION_DRIVE4INSERT12,
    FSEMU_ACTION_DRIVE4INSERT13,
    FSEMU_ACTION_DRIVE4INSERT14,
    FSEMU_ACTION_DRIVE4INSERT15,
    FSEMU_ACTION_DRIVE4INSERT16,
    FSEMU_ACTION_DRIVE4INSERT17,
    FSEMU_ACTION_DRIVE4INSERT18,
    FSEMU_ACTION_DRIVE4INSERT19,

    FSEMU_ACTION_DRIVE5INSERT0,
    FSEMU_ACTION_DRIVE5INSERT1,
    FSEMU_ACTION_DRIVE5INSERT2,
    FSEMU_ACTION_DRIVE5INSERT3,
    FSEMU_ACTION_DRIVE5INSERT4,
    FSEMU_ACTION_DRIVE5INSERT5,
    FSEMU_ACTION_DRIVE5INSERT6,
    FSEMU_ACTION_DRIVE5INSERT7,
    FSEMU_ACTION_DRIVE5INSERT8,
    FSEMU_ACTION_DRIVE5INSERT9,
    FSEMU_ACTION_DRIVE5INSERT10,
    FSEMU_ACTION_DRIVE5INSERT11,
    FSEMU_ACTION_DRIVE5INSERT12,
    FSEMU_ACTION_DRIVE5INSERT13,
    FSEMU_ACTION_DRIVE5INSERT14,
    FSEMU_ACTION_DRIVE5INSERT15,
    FSEMU_ACTION_DRIVE5INSERT16,
    FSEMU_ACTION_DRIVE5INSERT17,
    FSEMU_ACTION_DRIVE5INSERT18,
    FSEMU_ACTION_DRIVE5INSERT19,

    FSEMU_ACTION_DRIVE6INSERT0,
    FSEMU_ACTION_DRIVE6INSERT1,
    FSEMU_ACTION_DRIVE6INSERT2,
    FSEMU_ACTION_DRIVE6INSERT3,
    FSEMU_ACTION_DRIVE6INSERT4,
    FSEMU_ACTION_DRIVE6INSERT5,
    FSEMU_ACTION_DRIVE6INSERT6,
    FSEMU_ACTION_DRIVE6INSERT7,
    FSEMU_ACTION_DRIVE6INSERT8,
    FSEMU_ACTION_DRIVE6INSERT9,
    FSEMU_ACTION_DRIVE6INSERT10,
    FSEMU_ACTION_DRIVE6INSERT11,
    FSEMU_ACTION_DRIVE6INSERT12,
    FSEMU_ACTION_DRIVE6INSERT13,
    FSEMU_ACTION_DRIVE6INSERT14,
    FSEMU_ACTION_DRIVE6INSERT15,
    FSEMU_ACTION_DRIVE6INSERT16,
    FSEMU_ACTION_DRIVE6INSERT17,
    FSEMU_ACTION_DRIVE6INSERT18,
    FSEMU_ACTION_DRIVE6INSERT19,

    FSEMU_ACTION_DRIVE7INSERT0,
    FSEMU_ACTION_DRIVE7INSERT1,
    FSEMU_ACTION_DRIVE7INSERT2,
    FSEMU_ACTION_DRIVE7INSERT3,
    FSEMU_ACTION_DRIVE7INSERT4,
    FSEMU_ACTION_DRIVE7INSERT5,
    FSEMU_ACTION_DRIVE7INSERT6,
    FSEMU_ACTION_DRIVE7INSERT7,
    FSEMU_ACTION_DRIVE7INSERT8,
    FSEMU_ACTION_DRIVE7INSERT9,
    FSEMU_ACTION_DRIVE7INSERT10,
    FSEMU_ACTION_DRIVE7INSERT11,
    FSEMU_ACTION_DRIVE7INSERT12,
    FSEMU_ACTION_DRIVE7INSERT13,
    FSEMU_ACTION_DRIVE7INSERT14,
    FSEMU_ACTION_DRIVE7INSERT15,
    FSEMU_ACTION_DRIVE7INSERT16,
    FSEMU_ACTION_DRIVE7INSERT17,
    FSEMU_ACTION_DRIVE7INSERT18,
    FSEMU_ACTION_DRIVE7INSERT19,

    FSEMU_ACTION_DRIVE8INSERT0,
    FSEMU_ACTION_DRIVE8INSERT1,
    FSEMU_ACTION_DRIVE8INSERT2,
    FSEMU_ACTION_DRIVE8INSERT3,
    FSEMU_ACTION_DRIVE8INSERT4,
    FSEMU_ACTION_DRIVE8INSERT5,
    FSEMU_ACTION_DRIVE8INSERT6,
    FSEMU_ACTION_DRIVE8INSERT7,
    FSEMU_ACTION_DRIVE8INSERT8,
    FSEMU_ACTION_DRIVE8INSERT9,
    FSEMU_ACTION_DRIVE8INSERT10,
    FSEMU_ACTION_DRIVE8INSERT11,
    FSEMU_ACTION_DRIVE8INSERT12,
    FSEMU_ACTION_DRIVE8INSERT13,
    FSEMU_ACTION_DRIVE8INSERT14,
    FSEMU_ACTION_DRIVE8INSERT15,
    FSEMU_ACTION_DRIVE8INSERT16,
    FSEMU_ACTION_DRIVE8INSERT17,
    FSEMU_ACTION_DRIVE8INSERT18,
    FSEMU_ACTION_DRIVE8INSERT19,

    FSEMU_ACTION_DRIVE9INSERT0,
    FSEMU_ACTION_DRIVE9INSERT1,
    FSEMU_ACTION_DRIVE9INSERT2,
    FSEMU_ACTION_DRIVE9INSERT3,
    FSEMU_ACTION_DRIVE9INSERT4,
    FSEMU_ACTION_DRIVE9INSERT5,
    FSEMU_ACTION_DRIVE9INSERT6,
    FSEMU_ACTION_DRIVE9INSERT7,
    FSEMU_ACTION_DRIVE9INSERT8,
    FSEMU_ACTION_DRIVE9INSERT9,
    FSEMU_ACTION_DRIVE9INSERT10,
    FSEMU_ACTION_DRIVE9INSERT11,
    FSEMU_ACTION_DRIVE9INSERT12,
    FSEMU_ACTION_DRIVE9INSERT13,
    FSEMU_ACTION_DRIVE9INSERT14,
    FSEMU_ACTION_DRIVE9INSERT15,
    FSEMU_ACTION_DRIVE9INSERT16,
    FSEMU_ACTION_DRIVE9INSERT17,
    FSEMU_ACTION_DRIVE9INSERT18,
    FSEMU_ACTION_DRIVE9INSERT19,

    FSEMU_ACTION_PORT0TYPE0,
    FSEMU_ACTION_PORT0TYPE1,
    FSEMU_ACTION_PORT0TYPE2,
    FSEMU_ACTION_PORT0TYPE3,
    FSEMU_ACTION_PORT0TYPE4,
    FSEMU_ACTION_PORT0TYPE5,
    FSEMU_ACTION_PORT0TYPE6,
    FSEMU_ACTION_PORT0TYPE7,
    FSEMU_ACTION_PORT0TYPE8,
    FSEMU_ACTION_PORT0TYPE9,

    FSEMU_ACTION_PORT1TYPE0,
    FSEMU_ACTION_PORT1TYPE1,
    FSEMU_ACTION_PORT1TYPE2,
    FSEMU_ACTION_PORT1TYPE3,
    FSEMU_ACTION_PORT1TYPE4,
    FSEMU_ACTION_PORT1TYPE5,
    FSEMU_ACTION_PORT1TYPE6,
    FSEMU_ACTION_PORT1TYPE7,
    FSEMU_ACTION_PORT1TYPE8,
    FSEMU_ACTION_PORT1TYPE9,

    FSEMU_ACTION_PORT2TYPE0,
    FSEMU_ACTION_PORT2TYPE1,
    FSEMU_ACTION_PORT2TYPE2,
    FSEMU_ACTION_PORT2TYPE3,
    FSEMU_ACTION_PORT2TYPE4,
    FSEMU_ACTION_PORT2TYPE5,
    FSEMU_ACTION_PORT2TYPE6,
    FSEMU_ACTION_PORT2TYPE7,
    FSEMU_ACTION_PORT2TYPE8,
    FSEMU_ACTION_PORT2TYPE9,

    FSEMU_ACTION_PORT3TYPE0,
    FSEMU_ACTION_PORT3TYPE1,
    FSEMU_ACTION_PORT3TYPE2,
    FSEMU_ACTION_PORT3TYPE3,
    FSEMU_ACTION_PORT3TYPE4,
    FSEMU_ACTION_PORT3TYPE5,
    FSEMU_ACTION_PORT3TYPE6,
    FSEMU_ACTION_PORT3TYPE7,
    FSEMU_ACTION_PORT3TYPE8,
    FSEMU_ACTION_PORT3TYPE9,

    // FSEMU_ACTION_PORT0DISCONNECT,
    // FSEMU_ACTION_PORT1DISCONNECT,
    // FSEMU_ACTION_PORT2DISCONNECT,
    // FSEMU_ACTION_PORT3DISCONNECT,

    // FIXME: PORTxDEVICEy are not really emu actions?
    FSEMU_ACTION_PORT0DEVICE0,
    FSEMU_ACTION_PORT0DEVICE1,
    FSEMU_ACTION_PORT0DEVICE2,
    FSEMU_ACTION_PORT0DEVICE3,
    FSEMU_ACTION_PORT0DEVICE4,
    FSEMU_ACTION_PORT0DEVICE5,
    FSEMU_ACTION_PORT0DEVICE6,
    FSEMU_ACTION_PORT0DEVICE7,
    FSEMU_ACTION_PORT0DEVICE8,
    FSEMU_ACTION_PORT0DEVICE9,
    FSEMU_ACTION_PORT0DEVICE10,
    FSEMU_ACTION_PORT0DEVICE11,
    FSEMU_ACTION_PORT0DEVICE12,
    FSEMU_ACTION_PORT0DEVICE13,
    FSEMU_ACTION_PORT0DEVICE14,
    FSEMU_ACTION_PORT0DEVICE15,
    FSEMU_ACTION_PORT0DEVICE16,
    FSEMU_ACTION_PORT0DEVICE17,
    FSEMU_ACTION_PORT0DEVICE18,
    FSEMU_ACTION_PORT0DEVICE19,

    FSEMU_ACTION_PORT1DEVICE0,
    FSEMU_ACTION_PORT1DEVICE1,
    FSEMU_ACTION_PORT1DEVICE2,
    FSEMU_ACTION_PORT1DEVICE3,
    FSEMU_ACTION_PORT1DEVICE4,
    FSEMU_ACTION_PORT1DEVICE5,
    FSEMU_ACTION_PORT1DEVICE6,
    FSEMU_ACTION_PORT1DEVICE7,
    FSEMU_ACTION_PORT1DEVICE8,
    FSEMU_ACTION_PORT1DEVICE9,
    FSEMU_ACTION_PORT1DEVICE10,
    FSEMU_ACTION_PORT1DEVICE11,
    FSEMU_ACTION_PORT1DEVICE12,
    FSEMU_ACTION_PORT1DEVICE13,
    FSEMU_ACTION_PORT1DEVICE14,
    FSEMU_ACTION_PORT1DEVICE15,
    FSEMU_ACTION_PORT1DEVICE16,
    FSEMU_ACTION_PORT1DEVICE17,
    FSEMU_ACTION_PORT1DEVICE18,
    FSEMU_ACTION_PORT1DEVICE19,

    FSEMU_ACTION_PORT2DEVICE0,
    FSEMU_ACTION_PORT2DEVICE1,
    FSEMU_ACTION_PORT2DEVICE2,
    FSEMU_ACTION_PORT2DEVICE3,
    FSEMU_ACTION_PORT2DEVICE4,
    FSEMU_ACTION_PORT2DEVICE5,
    FSEMU_ACTION_PORT2DEVICE6,
    FSEMU_ACTION_PORT2DEVICE7,
    FSEMU_ACTION_PORT2DEVICE8,
    FSEMU_ACTION_PORT2DEVICE9,
    FSEMU_ACTION_PORT2DEVICE10,
    FSEMU_ACTION_PORT2DEVICE11,
    FSEMU_ACTION_PORT2DEVICE12,
    FSEMU_ACTION_PORT2DEVICE13,
    FSEMU_ACTION_PORT2DEVICE14,
    FSEMU_ACTION_PORT2DEVICE15,
    FSEMU_ACTION_PORT2DEVICE16,
    FSEMU_ACTION_PORT2DEVICE17,
    FSEMU_ACTION_PORT2DEVICE18,
    FSEMU_ACTION_PORT2DEVICE19,

    FSEMU_ACTION_PORT3DEVICE0,
    FSEMU_ACTION_PORT3DEVICE1,
    FSEMU_ACTION_PORT3DEVICE2,
    FSEMU_ACTION_PORT3DEVICE3,
    FSEMU_ACTION_PORT3DEVICE4,
    FSEMU_ACTION_PORT3DEVICE5,
    FSEMU_ACTION_PORT3DEVICE6,
    FSEMU_ACTION_PORT3DEVICE7,
    FSEMU_ACTION_PORT3DEVICE8,
    FSEMU_ACTION_PORT3DEVICE9,
    FSEMU_ACTION_PORT3DEVICE10,
    FSEMU_ACTION_PORT3DEVICE11,
    FSEMU_ACTION_PORT3DEVICE12,
    FSEMU_ACTION_PORT3DEVICE13,
    FSEMU_ACTION_PORT3DEVICE14,
    FSEMU_ACTION_PORT3DEVICE15,
    FSEMU_ACTION_PORT3DEVICE16,
    FSEMU_ACTION_PORT3DEVICE17,
    FSEMU_ACTION_PORT3DEVICE18,
    FSEMU_ACTION_PORT3DEVICE19,
};

#ifdef __cplusplus
}
#endif

#endif  // FSEMU_ACTIONS_H_