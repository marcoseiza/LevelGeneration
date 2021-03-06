// THIS IS A TEMPORARY FILE THAT SHOULD BE REPLACED USING JSON LOADING.

#ifndef MODELS_LEVEL_GEN_DEFAULT_ROOMS_H_
#define MODELS_LEVEL_GEN_DEFAULT_ROOMS_H_

#include "Room.h"

namespace default_rooms {

/** A basic structure that represents a room. */
struct RoomConfig {
  /** The size of the room. */
  cugl::Size size;
  /** The coordinates of the doors in the room. Ordered in counter-clockwise
   * order with right-most door first.*/
  std::vector<cugl::Vec2> doors;
  /** The source to the room scene2 node to copy. */
  std::string scene2_source;
  /** The key to the room scene2 node to later access. */
  std::string scene2_key;
};

// TODO: define size and door config using the source file.

/** Represents the default terminal room size and doors. */
const RoomConfig kTerminal = {
    cugl::Size(15.0f, 15.0f),
    std::vector<cugl::Vec2>{cugl::Vec2(14.0f, 7.0f), cugl::Vec2(7.0f, 14.0f),
                            cugl::Vec2(0.0f, 7.0f), cugl::Vec2(7.0f, 0.0f)},
    "rooms/terminal.json", "terminal"};

/** Represents the default spawn room size and doors. */
const RoomConfig kSpawn = {
    cugl::Size(15.0f, 15.0f),
    std::vector<cugl::Vec2>{cugl::Vec2(14.0f, 7.0f), cugl::Vec2(7.0f, 14.0f),
                            cugl::Vec2(0.0f, 7.0f), cugl::Vec2(7.0f, 0.0f)},
    "rooms/spawn.json", "spawn"};

/** Represents a standard room. */
const RoomConfig kStandard1 = {
    cugl::Size(15.0f, 15.0f),
    std::vector<cugl::Vec2>{cugl::Vec2(14.0f, 11.0f), cugl::Vec2(3.0f, 14.0f),
                            cugl::Vec2(0.0f, 3.0f), cugl::Vec2(11.0f, 0.0f)},
    "rooms/room-1-scene.json", "room-1"};

/** Represents a standard room. */
const RoomConfig kStandard2 = {
    cugl::Size(15.0f, 15.0f),
    std::vector<cugl::Vec2>{cugl::Vec2(14.0f, 7.0f), cugl::Vec2(7.0f, 14.0f),
                            cugl::Vec2(0.0f, 7.0f), cugl::Vec2(7.0f, 0.0f)},
    "rooms/room-2-scene.json", "room-2"};

/** Represents a standard room. */
const RoomConfig kStandard3 = {
    cugl::Size(15.0f, 15.0f),
    std::vector<cugl::Vec2>{cugl::Vec2(14.0f, 4.0f), cugl::Vec2(3.0f, 14.0f),
                            cugl::Vec2(0.0f, 10.0f), cugl::Vec2(11.0f, 0.0f)},
    "rooms/room-3-scene.json", "room-3"};

/** Represents a standard room. */
const RoomConfig kStandard4 = {
    cugl::Size(15.0f, 15.0f),
    std::vector<cugl::Vec2>{cugl::Vec2(14.0f, 11.0f), cugl::Vec2(3.0f, 14.0f),
                            cugl::Vec2(0.0f, 3.0f), cugl::Vec2(11.0f, 0.0f)},
    "rooms/room-4-scene.json", "room-4"};

/** Represents a standard room. */
const RoomConfig kStandard5 = {
    cugl::Size(15.0f, 15.0f),
    std::vector<cugl::Vec2>{cugl::Vec2(14.0f, 11.0f), cugl::Vec2(11.0f, 14.0f),
                            cugl::Vec2(0.0f, 11.0f), cugl::Vec2(11.0f, 0.0f)},
    "rooms/room-5-scene.json", "room-5"};

/** Represents a standard room. */
const RoomConfig kStandard6 = {
    cugl::Size(15.0f, 15.0f),
    std::vector<cugl::Vec2>{cugl::Vec2(14.0f, 3.0f), cugl::Vec2(3.0f, 14.0f),
                            cugl::Vec2(0.0f, 3.0f), cugl::Vec2(3.0f, 0.0f)},
    "rooms/room-6-scene.json", "room-6"};

/** Represents a standard room. */
const RoomConfig kStandard7 = {
    cugl::Size(15.0f, 15.0f),
    std::vector<cugl::Vec2>{cugl::Vec2(14.0f, 11.0f), cugl::Vec2(3.0f, 14.0f),
                            cugl::Vec2(0.0f, 3.0f), cugl::Vec2(11.0f, 0.0f)},
    "rooms/room-7-scene.json", "room-7"};

/** Represents a standard room. */
const RoomConfig kStandard8 = {
    cugl::Size(15.0f, 15.0f),
    std::vector<cugl::Vec2>{cugl::Vec2(14.0f, 5.0f), cugl::Vec2(7.0f, 14.0f),
                            cugl::Vec2(0.0f, 4.0f), cugl::Vec2(11.0f, 0.0f)},
    "rooms/room-8-scene.json", "room-8"};

/** Represents a standard room. */
const RoomConfig kStandard9 = {
    cugl::Size(15.0f, 15.0f),
    std::vector<cugl::Vec2>{cugl::Vec2(14.0f, 11.0f), cugl::Vec2(3.0f, 14.0f),
                            cugl::Vec2(0.0f, 3.0f), cugl::Vec2(11.0f, 0.0f)},
    "rooms/room-9-scene.json", "room-9"};

/** A list of all the regular rooms. */
const std::vector<RoomConfig> kRegularRooms{kStandard1, kStandard2, kStandard3,
                                            kStandard4, kStandard5, kStandard6,
                                            kStandard7, kStandard8, kStandard9};

/** A list of all the rooms. */
const std::vector<RoomConfig> kAllRooms{
    kSpawn,     kTerminal,  kStandard1, kStandard2, kStandard3, kStandard4,
    kStandard5, kStandard6, kStandard7, kStandard8, kStandard9};

};  // namespace default_rooms

#endif  // MODELS_LEVEL_GEN_DEFAULT_ROOMS_H_
