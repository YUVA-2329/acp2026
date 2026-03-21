#!/usr/bin/env bats

@test "act4 program runs" {
  run ./act4.exe <<< "1"
  [ "$status" -eq 0 ]
}
