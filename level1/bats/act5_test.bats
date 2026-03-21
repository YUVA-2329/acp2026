#!/usr/bin/env bats

@test "act5 program runs" {
  run ./act5.exe <<< "1"
  [ "$status" -eq 0 ]
}
