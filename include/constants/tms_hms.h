#ifndef GUARD_CONSTANTS_TMS_HMS_H
#define GUARD_CONSTANTS_TMS_HMS_H

#define FOREACH_TM(F) \
    F(FALSE_SWIPE) \
    F(MEAN_LOOK) \
    F(BATON_PASS) \
    F(U_TURN) \
    F(FLIP_TURN) \
    F(VOLT_SWITCH) \
    F(HAIL) \
    F(SANDSTORM) \
    F(SNOWSCAPE) \
    F(RAIN_DANCE) \
    F(SUNNY_DAY) \
    F(ELECTRIC_TERRAIN) \
    F(MISTY_TERRAIN) \
    F(PSYCHIC_TERRAIN) \
    F(GRASSY_TERRAIN) \
    F(TAILWIND) \
    F(PROTECT) \
    F(LIGHT_SCREEN) \
    F(REFLECT) \
    F(SAFEGUARD) \
    F(CALM_MIND) \
    F(BULK_UP) \
    F(DOUBLE_TEAM) \
    F(DISABLE) \
    F(ENCORE) \
    F(TAUNT) \
    F(REST) \
    F(ROOST) \
    F(SUBSTITUTE) \
    F(ENERGY_BALL) \
    F(SOLAR_BEAM) \
    F(SOLAR_BLADE) \
    F(GIGA_DRAIN) \
    F(FIRE_BLAST) \
    F(FLAMETHROWER) \
    F(FLARE_BLITZ) \
    F(OVERHEAT) \
    F(SCALD) \
    F(ROCK_TOMB) \
    F(AERIAL_ACE) \
    F(TORMENT) \
    F(FACADE) \
    F(SECRET_POWER) \
    F(REST) \
    F(ATTRACT) \
    F(THIEF) \
    F(STEEL_WING) \
    F(SKILL_SWAP) \
    F(SNATCH) \
    F(OVERHEAT)

#define FOREACH_HM(F) \
    F(CUT) \
    F(FLY) \
    F(SURF) \
    F(STRENGTH) \
    F(FLASH) \
    F(ROCK_SMASH) \
    F(WATERFALL) \
    F(DIVE)

#define FOREACH_TMHM(F) \
    FOREACH_TM(F) \
    FOREACH_HM(F)

#endif
