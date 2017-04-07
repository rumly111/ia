#ifndef ART_HPP
#define ART_HPP

const int font_sheet_x_cells = 16;
const int font_sheet_y_cells = 7;
const int tile_sheet_x_cells = 21;
const int tile_sheet_y_cells = 13;

enum class TileId
{
    empty,
    player_firearm,
    player_melee,
    zombie_unarmed,
    zombie_armed,
    zombie_bloated,
    cultist_firearm,
    cultist_dagger,
    witch_or_warlock,
    ghoul,
    mummy,
    deep_one,
    shadow,
    leng_elder,
    fiend,
    ape,
    croc_head_mummy,
    the_high_priest,
    floating_skull,
    crawling_hand,
    crawling_intestines,
    raven,
    armor,
    potion,
    ammo,
    scroll,
    elder_sign,
    chest_closed,
    chest_open,
    amulet,
    ring,
    lantern,
    medical_bag,
    gas_mask,
    void_traveler,
    snake,
    rat,
    spider,
    wolf,
    phantasm,
    rat_thing,
    hound,
    bat,
    byakhee,
    mass_of_worms,
    ooze,
    gas_spore,
    polyp,
    fungi,
    vortex,
    ghost,
    wraith,
    mantis,
    locust,
    bog_tcher,
    mi_go_armor,
    horn,
    clockwork,
    crystal,
    pistol,
    tommy_gun,
    shotgun,
    dynamite,
    dynamite_lit,
    molotov,
    incinerator,
    mi_go_gun,
    flare,
    flare_gun,
    flare_lit,
    orb,
    zombie_dust,
    dagger,
    crowbar,
    rod,
    axe,
    club,
    hammer,
    machete,
    pitchfork,
    sledge_hammer,
    rock,
    iron_spike,
    pharaoh_staff,
    lockpick,
    hunting_horror,
    giant_spider,
    chthonian,
    mind_eater,
    mi_go,
    floor,
    aim_marker_head,
    aim_marker_line,
    wall_top,
    wall_front_alt1,
    wall_front_alt2,
    wall_front,
    square_checkered_sparse,
    rubble_high,
    rubble_low,
    stairs_down,
    lever_left,
    lever_right,
    device1,
    device2,
    chains,
    cabinet_closed,
    cabinet_open,
    pillar_broken,
    pillar,
    pillar_carved,
    barrel,
    sarcophagus,
    cave_wall_front,
    cave_wall_top,
    square_checkered,
    egypt_wall_front,
    egypt_wall_top,
    monolith,
    bookshelf_full,
    bookshelf_empty,
    brazier,
    altar,
    web,
    door_closed,
    door_open,
    door_broken,
    gate_closed,
    gate_open,
    fountain,
    tree,
    bush,
    church_bench,
    grave_stone,
    tomb_open,
    tomb_closed,
    pylon,
    water1,
    water2,
    trap_general,
    cocoon_open,
    cocoon_closed,
    blast1,
    blast2,
    corpse,
    corpse2,
    projectile_std_front_slash,
    projectile_std_back_slash,
    projectile_std_dash,
    projectile_std_vertical_bar,
    vines,
    grating,
    gore1,
    gore2,
    gore3,
    gore4,
    gore5,
    gore6,
    gore7,
    gore8,
    smoke,
    trapez,
    pit,
    popup_top_l,
    popup_top_r,
    popup_btm_l,
    popup_btm_r,
    popup_hor,
    popup_ver,
    hangbridge_ver,
    hangbridge_hor,
    scorched_ground,
    popup_hor_down,
    popup_hor_up,
    popup_ver_r,
    popup_ver_l,
    stalagmite,
    heart,
    brain,
    weight,
    spirit,
    stopwatch,
};


class P;

namespace art
{

P glyph_pos(const char glyph);
P tile_pos(const TileId tile);

} //Art

#endif
