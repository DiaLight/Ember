//
// Created by DiaLight on 17.08.2022.
//
#include <api.h>
#include <dk2.h>
#include <Windows.h>
#include <api/parse.h>
#include <api/Buf.h>
#include <cstdint>
#include <map>
#include <memory>
#include <vector>
#include <algorithm>
#include <api/stacktrace.h>
#include <api/game_loop.h>
#include <api/patch.h>
#include <api/window.h>
#include <ios>
#include <io.h>
#include <fcntl.h>
#include <stdex.h>
#include <api/direct_input.h>




namespace api {

  bool initialize() {
    if(!initStacktrace()) return false;
    if(!initWindow()) return false;
    if(!initGameLoop()) return false;
    if(!initDirectInput()) return false;
    return true;
  }

}
