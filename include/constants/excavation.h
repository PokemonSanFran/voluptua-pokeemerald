#define SELECTED   0
#define DESELECTED 255
#define ITEM_TILE_NONE    0
#define ITEM_TILE_DUG_UP  5

#define WIN_MSG 0

#define MAX_NUM_BURIED_ITEMS 4

/*          --Stones--                  */
#define ID_STONE_1x4                    250
#define STONE_1x4_TILE_AMOUNT_RIGHT     0
#define STONE_1x4_TILE_AMOUNT_BOTTOM    4
#define STONE_1x4_THRESHOLD             10922

#define ID_STONE_4x1                    251
#define STONE_4x1_TILE_AMOUNT_RIGHT     4
#define STONE_4x1_TILE_AMOUNT_BOTTOM    0
#define STONE_4x1_THRESHOLD             21844

#define ID_STONE_2x4                    252
#define STONE_2x4_TILE_AMOUNT_RIGHT     1
#define STONE_2x4_TILE_AMOUNT_BOTTOM    4
#define STONE_2x4_THRESHOLD             32766

#define ID_STONE_4x2                    253
#define STONE_4x2_TILE_AMOUNT_RIGHT     4
#define STONE_4x2_TILE_AMOUNT_BOTTOM    1
#define STONE_4x2_THRESHOLD             43688

#define ID_STONE_2x2                    254
#define STONE_2x2_TILE_AMOUNT_RIGHT     1
#define STONE_2x2_TILE_AMOUNT_BOTTOM    1
#define STONE_2x2_THRESHOLD             54610

#define ID_STONE_3x3                    255
#define STONE_3x3_TILE_AMOUNT_RIGHT     2
#define STONE_3x3_TILE_AMOUNT_BOTTOM    2
#define STONE_3x3_THRESHOLD             65535

#define COUNT_ID_STONE                  6
#define COUNT_MAX_NUMBER_STONES         2


/*          --Items--                   */

#define ITEMID_NONE 0

#define ITEMID_HARD_STONE               1
#define HARD_STONE_TOTAL_TILES          4
#define HARD_STONE_TILE_AMOUNT_RIGHT    1
#define HARD_STONE_TILE_AMOUNT_BOTTOM   1

#define ITEMID_REVIVE                   2
#define REVIVE_TOTAL_TILES              5
#define REVIVE_TILE_AMOUNT_RIGHT        2
#define REVIVE_TILE_AMOUNT_BOTTOM       2

#define ITEMID_STAR_PIECE               3
#define STAR_PIECE_TOTAL_TILES          5
#define STAR_PIECE_TILE_AMOUNT_RIGHT    2
#define STAR_PIECE_TILE_AMOUNT_BOTTOM   2

#define ITEMID_DAMP_ROCK                4
#define DAMP_ROCK_TOTAL_TILES           8
#define DAMP_ROCK_TILE_AMOUNT_RIGHT     2
#define DAMP_ROCK_TILE_AMOUNT_BOTTOM    2

#define ITEMID_RED_SHARD                5
#define RED_SHARD_TOTAL_TILES           8
#define RED_SHARD_TILE_AMOUNT_RIGHT     2
#define RED_SHARD_TILE_AMOUNT_BOTTOM    2

#define ITEMID_BLUE_SHARD               6
#define BLUE_SHARD_TOTAL_TILES          8
#define BLUE_SHARD_TILE_AMOUNT_RIGHT    2
#define BLUE_SHARD_TILE_AMOUNT_BOTTOM   2

#define ITEMID_IRON_BALL                7
#define IRON_BALL_TOTAL_TILES           9
#define IRON_BALL_TILE_AMOUNT_RIGHT     2
#define IRON_BALL_TILE_AMOUNT_BOTTOM    2

#define ITEMID_REVIVE_MAX               8
#define REVIVE_MAX_TOTAL_TILES          9
#define REVIVE_MAX_TILE_AMOUNT_RIGHT    2
#define REVIVE_MAX_TILE_AMOUNT_BOTTOM   2

#define ITEMID_EVER_STONE               9
#define EVER_STONE_TOTAL_TILES          8
#define EVER_STONE_TILE_AMOUNT_RIGHT    3
#define EVER_STONE_TILE_AMOUNT_BOTTOM   1

#define ITEMID_HEART_SCALE              10
#define HEART_SCALE_TOTAL_TILES         3
#define HEART_SCALE_TILE_AMOUNT_RIGHT   1
#define HEART_SCALE_TILE_AMOUNT_BOTTOM  1

#define GRID_WIDTH 12
#define GRID_HEIGHT 8

#define ITEM_ZONE_1_X_LEFT_BOUNDARY     0
#define ITEM_ZONE_1_X_RIGHT_BOUNDARY    5
#define ITEM_ZONE_1_Y_UP_BOUNDARY       0
#define ITEM_ZONE_1_Y_DOWN_BOUNDARY     3

#define ITEM_ZONE_2_X_LEFT_BOUNDARY     0
#define ITEM_ZONE_2_X_RIGHT_BOUNDARY    5
#define ITEM_ZONE_2_Y_UP_BOUNDARY       4
#define ITEM_ZONE_2_Y_DOWN_BOUNDARY     GRID_HEIGHT - 1;

#define ITEM_ZONE_3_X_LEFT_BOUNDARY     6
#define ITEM_ZONE_3_X_RIGHT_BOUNDARY    GRID_WIDTH - 1
#define ITEM_ZONE_3_Y_UP_BOUNDARY       0
#define ITEM_ZONE_3_Y_DOWN_BOUNDARY     3

#define ITEM_ZONE_4_X_LEFT_BOUNDARY     6
#define ITEM_ZONE_4_X_RIGHT_BOUNDARY    GRID_WIDTH - 1
#define ITEM_ZONE_4_Y_UP_BOUNDARY       4
#define ITEM_ZONE_4_Y_DOWN_BOUNDARY     GRID_HEIGHT - 1

// TODO: change this value to the max itemId
#define EXCAVATION_ITEM_COUNT ITEMID_REVIVE_MAX

